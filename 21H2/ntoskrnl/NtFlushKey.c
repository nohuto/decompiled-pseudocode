/*
 * XREFs of NtFlushKey @ 0x1406B3C40
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406B3870 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     CmpDoFlushAll @ 0x14037DE9C (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x1406F8480 (CmPostCallbackNotificationEx.c)
 */

__int64 __fastcall NtFlushKey(void *a1)
{
  _DMA_OPERATIONS *DmaOperations; // r15
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  __int64 v6; // r8
  struct _KTHREAD *v7; // rcx
  BOOLEAN v8; // r12
  PADAPTER_OBJECT v9; // rcx
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  struct _KTHREAD *v12; // rax
  PADAPTER_OBJECT v13; // rdi
  int v14; // r9d
  int v15; // eax
  _DMA_OPERATIONS *v16; // rbx
  ULONG_PTR v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  struct _EX_RUNDOWN_REF *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-69h] BYREF
  __int64 v34; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v36[2]; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v37[3]; // [rsp+80h] [rbp-29h] BYREF
  _OWORD v38[2]; // [rsp+B0h] [rbp+7h] BYREF

  v34 = 0LL;
  DmaOperations = 0LL;
  memset(v36, 0, sizeof(v36));
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v38, 0x20000u);
  DmaAdapter = 0LL;
  v35[1] = v35;
  v3 = 0;
  v35[0] = v35;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v7 = KeGetCurrentThread();
  v8 = v5;
  if ( !v5 )
  {
    KeLeaveCriticalRegionThread((__int64)v7);
    v10 = -1073741431;
    goto LABEL_30;
  }
  PreviousMode = v7->PreviousMode;
  v10 = CmObReferenceObjectByHandle(a1, 0, v6, PreviousMode, &DmaAdapter, &v34);
  if ( v10 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = DmaAdapter;
    if ( (*((_DWORD *)DmaAdapter->DmaOperations->AllocateAdapterChannel + 40) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v34) & 0x20006) != 0 )
    {
      v10 = -1073741790;
LABEL_27:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v36[0] = v13;
      LOBYTE(v14) = 1;
      v15 = CmpCallCallBacksEx(30, (unsigned int)v36, 0, v14, 31, (__int64)v13, (__int64)v35);
      v10 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073740541 )
          v10 = 0;
        goto LABEL_27;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    v16 = v13->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v16->FreeAdapterChannel, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)&v16->FreeMapRegisters);
    v10 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
    if ( v10 >= 0 )
    {
      v17 = (ULONG_PTR)v13->DmaOperations;
      v18 = *(struct _EX_RUNDOWN_REF **)(v17 + 32);
      if ( v18 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v17);
        CmpUnlockRegistry(v20, v19);
        CmpAttachToRegistryProcess((__int64)v37, v21, v22, v23);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v37, 0);
        v10 = 0;
        goto LABEL_25;
      }
      v24 = v18 + 204;
      if ( ExAcquireRundownProtection_0(v18 + 204) )
      {
        CmpUnlockKcb((ULONG_PTR)v13->DmaOperations);
        CmpUnlockRegistry(v29, v28);
        CmpAttachToRegistryProcess((__int64)v37, v30, v31, v32);
        v10 = CmpFlushHive((ULONG_PTR)v18, 0);
        if ( v10 < 0 )
          v10 = -1073741491;
        KiUnstackDetachProcess((__int64)v37, 0);
        ExReleaseRundownProtection_0(v24);
        goto LABEL_25;
      }
      v10 = -1073740763;
    }
    CmpUnlockKcb((ULONG_PTR)v13->DmaOperations);
    CmpUnlockRegistry(v26, v25);
LABEL_25:
    if ( v3 )
      v10 = CmPostCallbackNotificationEx(31, (_DWORD)DmaAdapter, v10, (unsigned int)v36, 0LL, (__int64)v35);
    goto LABEL_27;
  }
LABEL_28:
  v9 = DmaAdapter;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_30:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v9) = 21;
    (*(void (__fastcall **)(PADAPTER_OBJECT, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v9,
      v38,
      (unsigned int)v10,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v10;
}
