/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140879434
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x140914A20 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C482F0, 0LL);
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v5 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v5 != a2) )
    __fastfail(3u);
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C482F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C482F0);
  KeAbPostRelease((ULONG_PTR)&stru_140C482F0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  ExWaitForRundownProtectionRelease(a2 + 6);
  ExRundownCompleted(a2 + 6);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140C48308
    || a2 >= (struct _EX_RUNDOWN_REF *)&CmFcFeatureConfigSecurityDescriptor )
  {
    ExFreePoolWithTag(a2, 0);
  }
}
