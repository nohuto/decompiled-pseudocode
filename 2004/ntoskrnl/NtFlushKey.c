/*
 * XREFs of NtFlushKey @ 0x140702800
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140702430 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x14037BDDC (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 */

NTSTATUS __cdecl NtFlushKey(HANDLE KeyHandle)
{
  _DMA_OPERATIONS *DmaOperations; // r15
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  __int64 v6; // r8
  struct _KTHREAD *v7; // rcx
  BOOLEAN v8; // r12
  int v9; // ebx
  struct _KTHREAD *v10; // rax
  PADAPTER_OBJECT v11; // rdi
  int v12; // eax
  _DMA_OPERATIONS *v13; // rbx
  ULONG_PTR v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rsi
  PADAPTER_OBJECT v17; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-51h] BYREF
  _OWORD v21[2]; // [rsp+58h] [rbp-41h] BYREF
  _OWORD v22[3]; // [rsp+78h] [rbp-21h] BYREF
  _OWORD v23[2]; // [rsp+A8h] [rbp+Fh] BYREF

  DmaOperations = 0LL;
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v23, 0x20000u);
  DmaAdapter = 0LL;
  v20[1] = v20;
  v3 = 0;
  v20[0] = v20;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v7 = KeGetCurrentThread();
  v8 = v5;
  if ( !v5 )
  {
    KeLeaveCriticalRegionThread((__int64)v7);
    v9 = -1073741431;
    goto LABEL_21;
  }
  v9 = CmObReferenceObjectByHandle(KeyHandle, 0, v6, v7->PreviousMode, &DmaAdapter, 0LL);
  if ( v9 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = DmaAdapter;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v21[0] = v11;
      v12 = CmpCallCallBacksEx(0x1Eu, (__int64)v21, 0LL, 1, 0x1Fu, (__int64)v11, (__int64)v20);
      v9 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073740541 )
          v9 = 0;
        goto LABEL_18;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    v13 = v11->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v13->FreeAdapterChannel, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)&v13->FreeMapRegisters);
    v9 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
    if ( v9 >= 0 )
    {
      v14 = (ULONG_PTR)v11->DmaOperations;
      v15 = *(struct _EX_RUNDOWN_REF **)(v14 + 32);
      if ( v15 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v14);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v22);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v22, 0LL);
        v9 = 0;
        goto LABEL_16;
      }
      v16 = v15 + 204;
      if ( ExAcquireRundownProtection_0(v15 + 204) )
      {
        CmpUnlockKcb((ULONG_PTR)v11->DmaOperations);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v22);
        v9 = CmpFlushHive((ULONG_PTR)v15, 0);
        if ( v9 < 0 )
          v9 = -1073741491;
        KiUnstackDetachProcess((__int64)v22, 0LL);
        ExReleaseRundownProtection_0(v16);
        goto LABEL_16;
      }
      v9 = -1073740763;
    }
    CmpUnlockKcb((ULONG_PTR)v11->DmaOperations);
    CmpUnlockRegistry();
LABEL_16:
    if ( v3 )
      v9 = CmPostCallbackNotificationEx(0x1Fu, (__int64)DmaAdapter, v9, (__int64)v21, 0LL, v20);
LABEL_18:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v17 = DmaAdapter;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_21:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v17) = 21;
    (*(void (__fastcall **)(PADAPTER_OBJECT, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v17,
      v23,
      (unsigned int)v9,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v8 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
