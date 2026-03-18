/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x14037CC00
 * Callers:
 *     IoUnregisterPlugPlayNotification @ 0x14075CDC0 (IoUnregisterPlugPlayNotification.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x14077A340 (IoUnregisterPlugPlayNotificationEx.c)
 *     PopCleanCoolingExtension @ 0x1408DE21C (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x1408ECED0 (PopPolicyDeviceTargetChange.c)
 *     SmKmFileInfoCleanup @ 0x1409269D0 (SmKmFileInfoCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PnpDereferenceNotify @ 0x140685008 (PnpDereferenceNotify.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(PVOID P, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID *v11; // rsi
  PVOID *v12; // r15
  PVOID *v13; // r14
  PVOID *v14; // rax
  PVOID **v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v2 = (struct _FAST_MUTEX *)*((_QWORD *)P + 8);
  v5 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE2(NlsMbCodePageTag) )
  {
    ExAcquireFastMutex(&PnpDeferredRegistrationLock);
    v11 = (PVOID *)PnpDeferredRegistrationList;
    while ( v11 != &PnpDeferredRegistrationList )
    {
      v12 = v11 + 2;
      v13 = v11;
      if ( v11[2] == P )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v14 = (PVOID *)*v11;
        v11 = v14;
        if ( v14[1] != v13 || (v15 = (PVOID **)v13[1], *v15 != v13) )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = v15;
        PnpDereferenceNotify(*v12);
        if ( v2 )
          KeReleaseGuardedMutex(v2);
        ExFreePoolWithTag(v13, 0x37706E50u);
      }
      else
      {
        v11 = (PVOID *)*v11;
      }
    }
    KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)P + 9), 1u);
  }
  else if ( v2 )
  {
    ExAcquireFastMutex(v2);
  }
  if ( !*((_BYTE *)P + 58) || v5 )
  {
    *((_BYTE *)P + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)P + 9));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
      if ( v2 )
        ExAcquireFastMutex(v2);
    }
    PnpDereferenceNotify(P);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)P + 9));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
    return 0LL;
  }
  if ( v2 )
    KeReleaseGuardedMutex(v2);
  return 0LL;
}
