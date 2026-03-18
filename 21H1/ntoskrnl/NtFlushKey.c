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

__int64 __fastcall NtFlushKey(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DMA_OPERATIONS *DmaOperations; // r15
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *v12; // rcx
  BOOLEAN v13; // r12
  signed int v14; // ebx
  struct _KTHREAD *v15; // rax
  PADAPTER_OBJECT v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DMA_OPERATIONS *v21; // rbx
  ULONG_PTR v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rbx
  struct _EX_RUNDOWN_REF *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  __int64 v28; // r8
  _DWORD *v29; // r9
  PADAPTER_OBJECT v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  __int64 v38; // r8
  _DWORD *v39; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v41[2]; // [rsp+48h] [rbp-51h] BYREF
  _OWORD v42[2]; // [rsp+58h] [rbp-41h] BYREF
  _OWORD v43[3]; // [rsp+78h] [rbp-21h] BYREF
  _OWORD v44[2]; // [rsp+A8h] [rbp+Fh] BYREF

  DmaOperations = 0LL;
  memset(v42, 0, sizeof(v42));
  memset(v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v44, 0x20000LL, a3, a4);
  DmaAdapter = 0LL;
  v41[1] = v41;
  v6 = 0;
  v41[0] = v41;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v12 = KeGetCurrentThread();
  v13 = v8;
  if ( !v8 )
  {
    KeLeaveCriticalRegionThread((__int64)v12, v9, v10, v11);
    v14 = -1073741431;
    goto LABEL_21;
  }
  v14 = CmObReferenceObjectByHandle(a1, 0, v10, v12->PreviousMode, &DmaAdapter, 0LL);
  if ( v14 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = DmaAdapter;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v42[0] = v16;
      v17 = CmpCallCallBacksEx(0x1Eu, (__int64)v42, 0LL, 1, 0x1Fu, (__int64)v16, (__int64)v41);
      v14 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073740541 )
          v14 = 0;
        goto LABEL_18;
      }
      v6 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    v21 = v16->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v21->FreeAdapterChannel, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)&v21->FreeMapRegisters);
    v14 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
    if ( v14 >= 0 )
    {
      v22 = (ULONG_PTR)v16->DmaOperations;
      v23 = *(struct _EX_RUNDOWN_REF **)(v22 + 32);
      if ( v23 == CmpMasterHive )
      {
        CmpUnlockKcb(v22);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v43, v35, v36, v37);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v43, 0LL, v38, v39);
        v14 = 0;
        goto LABEL_16;
      }
      v24 = v23 + 204;
      if ( ExAcquireRundownProtection_0(v23 + 204) )
      {
        CmpUnlockKcb((ULONG_PTR)v16->DmaOperations);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v43, v25, v26, v27);
        v14 = CmpFlushHive((ULONG_PTR)v23, 0);
        if ( v14 < 0 )
          v14 = -1073741491;
        KiUnstackDetachProcess((__int64)v43, 0LL, v28, v29);
        ExReleaseRundownProtection_0(v24);
        goto LABEL_16;
      }
      v14 = -1073740763;
    }
    CmpUnlockKcb((ULONG_PTR)v16->DmaOperations);
    CmpUnlockRegistry();
LABEL_16:
    if ( v6 )
      v14 = CmPostCallbackNotificationEx(31, (__int64)DmaAdapter, v14, (__int64)v42, 0LL, v41);
LABEL_18:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  }
  v30 = DmaAdapter;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_21:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v30) = 21;
    (*(void (__fastcall **)(PADAPTER_OBJECT, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v30,
      v44,
      (unsigned int)v14,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v13 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
  }
  return (unsigned int)v14;
}
