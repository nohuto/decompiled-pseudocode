/*
 * XREFs of NtFlushKey @ 0x140612E10
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpDoFlushAll @ 0x14037D9EC (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmPostCallbackNotificationEx @ 0x14070F860 (CmPostCallbackNotificationEx.c)
 */

NTSTATUS __cdecl NtFlushKey(HANDLE KeyHandle)
{
  _DMA_OPERATIONS *DmaOperations; // r15
  int v2; // ebx
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rcx
  BOOLEAN v10; // r12
  PADAPTER_OBJECT v11; // rcx
  NTSTATUS v12; // ebx
  char PreviousMode; // si
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rax
  PADAPTER_OBJECT v18; // rdi
  int v19; // r9d
  int v20; // eax
  _DMA_OPERATIONS *v21; // rbx
  ULONG_PTR v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _EX_RUNDOWN_REF *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-69h] BYREF
  __int64 v36; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v38[2]; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v39[3]; // [rsp+80h] [rbp-29h] BYREF
  _OWORD v40[2]; // [rsp+B0h] [rbp+7h] BYREF

  v36 = 0LL;
  DmaOperations = 0LL;
  v2 = (int)KeyHandle;
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  memset(v40, 0, sizeof(v40));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v40, 0x20000u);
  DmaAdapter = 0LL;
  v37[1] = v37;
  v3 = 0;
  v37[0] = v37;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v9 = KeGetCurrentThread();
  v10 = v5;
  if ( !v5 )
  {
    KeLeaveCriticalRegionThread((__int64)v9, v6, v7, v8);
    v12 = -1073741431;
    goto LABEL_30;
  }
  PreviousMode = v9->PreviousMode;
  LOBYTE(v8) = PreviousMode;
  v12 = CmObReferenceObjectByHandle(v2, 0, v7, v8, (__int64)&DmaAdapter, (__int64)&v36);
  if ( v12 >= 0 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = DmaAdapter;
    if ( (*((_DWORD *)DmaAdapter->DmaOperations->AllocateAdapterChannel + 40) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v36) & 0x20006) != 0 )
    {
      v12 = -1073741790;
LABEL_27:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
      goto LABEL_28;
    }
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      *(_QWORD *)&v38[0] = v18;
      LOBYTE(v19) = 1;
      v20 = CmpCallCallBacksEx(30, (unsigned int)v38, 0, v19, 31, (__int64)v18, (__int64)v37);
      v12 = v20;
      if ( v20 < 0 )
      {
        if ( v20 == -1073740541 )
          v12 = 0;
        goto LABEL_27;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0LL);
    v21 = v18->DmaOperations;
    ExAcquirePushLockSharedEx((ULONG_PTR)&v21->FreeAdapterChannel, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)&v21->FreeMapRegisters);
    v12 = CmpPerformKeyBodyDeletionCheck(DmaAdapter, 0LL);
    if ( v12 >= 0 )
    {
      v22 = (ULONG_PTR)v18->DmaOperations;
      v23 = *(struct _EX_RUNDOWN_REF **)(v22 + 32);
      if ( v23 == CmpMasterHive )
      {
        CmpUnlockKcb(v22);
        CmpUnlockRegistry(v25, v24);
        CmpAttachToRegistryProcess(v39);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v39, 0LL);
        v12 = 0;
        goto LABEL_25;
      }
      v26 = v23 + 204;
      if ( ExAcquireRundownProtection(v23 + 204) )
      {
        CmpUnlockKcb((ULONG_PTR)v18->DmaOperations);
        CmpUnlockRegistry(v34, v33);
        CmpAttachToRegistryProcess(v39);
        v12 = CmpFlushHive((ULONG_PTR)v23);
        if ( v12 < 0 )
          v12 = -1073741491;
        KiUnstackDetachProcess((__int64)v39, 0LL);
        ExReleaseRundownProtection(v26);
        goto LABEL_25;
      }
      v12 = -1073740763;
    }
    CmpUnlockKcb((ULONG_PTR)v18->DmaOperations);
    CmpUnlockRegistry(v28, v27);
LABEL_25:
    if ( v3 )
      v12 = CmPostCallbackNotificationEx(31, (_DWORD)DmaAdapter, v12, (unsigned int)v38, 0LL, (__int64)v37);
    goto LABEL_27;
  }
LABEL_28:
  v11 = DmaAdapter;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_30:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v11) = 21;
    (*(void (__fastcall **)(PADAPTER_OBJECT, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v11,
      v40,
      (unsigned int)v12,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v10 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
  }
  return v12;
}
