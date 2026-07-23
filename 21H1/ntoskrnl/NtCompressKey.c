/*
 * XREFs of NtCompressKey @ 0x140863980
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PoIsInitializedStopWatch @ 0x1402D5F84 (PoIsInitializedStopWatch.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmCheckNoTxContext @ 0x14068D8B0 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmCompressKey @ 0x140867860 (CmCompressKey.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086D7DC (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __cdecl NtCompressKey(HANDLE KeyHandle)
{
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v4; // r8
  unsigned int v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PADAPTER_OBJECT v10; // rdi
  _DMA_OPERATIONS *DmaOperations; // rdx
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rbx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v24[3]; // [rsp+38h] [rbp-40h] BYREF

  DmaAdapter = 0LL;
  memset(v24, 0, sizeof(v24));
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v5 = (unsigned __int8)KeyHandle & 3;
      v2 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v4, PreviousMode, &DmaAdapter, 0LL);
      if ( v2 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
        {
          v10 = DmaAdapter;
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck((__int64)v10, 0LL);
            if ( v2 < 0 )
              break;
            DmaOperations = v10->DmaOperations;
            AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
            if ( LODWORD(DmaOperations->FlushAdapterBuffers) != *(_DWORD *)(*((_QWORD *)AllocateAdapterChannel + 8)
                                                                          + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v13 = (_QWORD *)((char *)AllocateAdapterChannel + 4248);
            if ( !PoIsInitializedStopWatch((_QWORD *)AllocateAdapterChannel + 531) )
            {
              v13 = (_QWORD *)((char *)AllocateAdapterChannel + 4232);
              if ( !PoIsInitializedStopWatch((_QWORD *)AllocateAdapterChannel + 529) )
              {
                CmpAttachToRegistryProcess((__int64)v24, v14, v15, v16);
                v2 = CmCompressKey(v10->DmaOperations->AllocateAdapterChannel, v5);
                KiUnstackDetachProcess((__int64)v24, 0LL, v17, v18);
                break;
              }
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)AllocateAdapterChannel + 72, 0LL);
            CmpWaitOnHiveWriteQueue(AllocateAdapterChannel, v13);
          }
          CmpUnlockRegistry();
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
        }
        else
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
          v2 = -1073741431;
        }
      }
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
    }
    else
    {
      return -1073741727;
    }
  }
  return v2;
}
