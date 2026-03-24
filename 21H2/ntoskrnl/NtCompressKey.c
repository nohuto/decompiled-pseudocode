/*
 * XREFs of NtCompressKey @ 0x1408682E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     PoIsInitializedStopWatch @ 0x140263FA8 (PoIsInitializedStopWatch.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x14066F600 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmCompressKey @ 0x14086C200 (CmCompressKey.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087263C (CmpWaitOnHiveWriteQueue.c)
 */

__int64 __fastcall NtCompressKey(void *a1)
{
  int v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v4; // r8
  unsigned int v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  PADAPTER_OBJECT v7; // rdi
  _DMA_OPERATIONS *DmaOperations; // rdx
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v16[3]; // [rsp+38h] [rbp-40h] BYREF

  DmaAdapter = 0LL;
  memset(v16, 0, sizeof(v16));
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v5 = (unsigned __int8)a1 & 3;
      v2 = CmObReferenceObjectByHandle(a1, 0x20006u, v4, PreviousMode, &DmaAdapter, 0LL);
      if ( v2 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
        {
          v7 = DmaAdapter;
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck((__int64)v7, 0LL);
            if ( v2 < 0 )
              break;
            DmaOperations = v7->DmaOperations;
            AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
            if ( LODWORD(DmaOperations->FlushAdapterBuffers) != *(_DWORD *)(*((_QWORD *)AllocateAdapterChannel + 8)
                                                                          + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v10 = (_QWORD *)((char *)AllocateAdapterChannel + 4248);
            if ( !PoIsInitializedStopWatch((_QWORD *)AllocateAdapterChannel + 531) )
            {
              v10 = (_QWORD *)((char *)AllocateAdapterChannel + 4232);
              if ( !PoIsInitializedStopWatch((_QWORD *)AllocateAdapterChannel + 529) )
              {
                CmpAttachToRegistryProcess((__int64)v16, v11, v12, v13);
                v2 = CmCompressKey(v7->DmaOperations->AllocateAdapterChannel, v5);
                KiUnstackDetachProcess((__int64)v16, 0);
                break;
              }
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)AllocateAdapterChannel + 72, 0LL);
            CmpWaitOnHiveWriteQueue(AllocateAdapterChannel, v10);
          }
          CmpUnlockRegistry();
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        else
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v2 = -1073741431;
        }
      }
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  return (unsigned int)v2;
}
