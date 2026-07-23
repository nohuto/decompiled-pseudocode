/*
 * XREFs of NtFlushKey @ 0x1406DFA70
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x14037B05C (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmPostCallbackNotificationEx @ 0x1405ECF70 (CmPostCallbackNotificationEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 */

NTSTATUS __cdecl NtFlushKey(HANDLE KeyHandle)
{
  _DMA_OPERATIONS *DmaOperations; // r15
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rcx
  BOOLEAN v10; // r12
  int v11; // ebx
  struct _KTHREAD *v12; // rax
  PADAPTER_OBJECT v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DMA_OPERATIONS *v18; // rbx
  ULONG_PTR v19; // rcx
  struct _EX_RUNDOWN_REF *v20; // rbx
  struct _EX_RUNDOWN_REF *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  __int64 v25; // r8
  _DWORD *v26; // r9
  PADAPTER_OBJECT v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  __int64 v35; // r8
  _DWORD *v36; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-51h] BYREF
  _OWORD v39[2]; // [rsp+58h] [rbp-41h] BYREF
  _OWORD v40[3]; // [rsp+78h] [rbp-21h] BYREF
  _OWORD v41[2]; // [rsp+A8h] [rbp+Fh] BYREF

  DmaOperations = 0LL;
  memset(v39, 0, sizeof(v39));
  memset(v40, 0, sizeof(v40));
  memset(v41, 0, sizeof(v41));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v41, 0x20000u);
  DmaAdapter = 0LL;
  v38[1] = v38;
  v3 = 0;
  v38[0] = v38;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v9 = KeGetCurrentThread();
  v10 = v5;
  if ( !v5 )
  {
    KeLeaveCriticalRegionThread((__int64)v9, v6, v7, v8);
    v11 = -1073741431;
    goto LABEL_21;
  }
  v11 = CmObReferenceObjectByHandle(KeyHandle, 0, v7, v9->PreviousMode, &DmaAdapter, 0LL);
  if ( v11 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = DmaAdapter;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v39[0] = v13;
      v14 = CmpCallCallBacksEx(0x1Eu, (__int64)v39, 0LL, 1, 0x1Fu, (__int64)v13, (__int64)v38);
      v11 = v14;
      if ( v14 < 0 )
      {
        if ( v14 == -1073740541 )
          v11 = 0;
        goto LABEL_18;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    v18 = v13->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v18->FreeAdapterChannel, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)&v18->FreeMapRegisters);
    v11 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
    if ( v11 >= 0 )
    {
      v19 = (ULONG_PTR)v13->DmaOperations;
      v20 = *(struct _EX_RUNDOWN_REF **)(v19 + 32);
      if ( v20 == CmpMasterHive )
      {
        CmpUnlockKcb(v19);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v40, v32, v33, v34);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v40, 0LL, v35, v36);
        v11 = 0;
        goto LABEL_16;
      }
      v21 = v20 + 204;
      if ( ExAcquireRundownProtection_0(v20 + 204) )
      {
        CmpUnlockKcb((ULONG_PTR)v13->DmaOperations);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v40, v22, v23, v24);
        v11 = CmpFlushHive((ULONG_PTR)v20, 0);
        if ( v11 < 0 )
          v11 = -1073741491;
        KiUnstackDetachProcess((__int64)v40, 0LL, v25, v26);
        ExReleaseRundownProtection_0(v21);
        goto LABEL_16;
      }
      v11 = -1073740763;
    }
    CmpUnlockKcb((ULONG_PTR)v13->DmaOperations);
    CmpUnlockRegistry();
LABEL_16:
    if ( v3 )
      v11 = CmPostCallbackNotificationEx(31, (__int64)DmaAdapter, v11, (__int64)v39, 0LL, v38);
LABEL_18:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  }
  v27 = DmaAdapter;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_21:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v27) = 21;
    (*(void (__fastcall **)(PADAPTER_OBJECT, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v27,
      v41,
      (unsigned int)v11,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v10 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
  }
  return v11;
}
