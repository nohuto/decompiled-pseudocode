/*
 * XREFs of NtCompressKey @ 0x14086A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PoIsInitializedStopWatch @ 0x140244CA8 (PoIsInitializedStopWatch.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmCheckNoTxContext @ 0x1406FF270 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmCompressKey @ 0x14086E5D0 (CmCompressKey.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140874DEC (CmpWaitOnHiveWriteQueue.c)
 */

NTSTATUS __cdecl NtCompressKey(HANDLE KeyHandle)
{
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v4; // r8
  unsigned int v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  PADAPTER_OBJECT v7; // rdi
  _DMA_OPERATIONS *DmaOperations; // rdx
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rbx
  _QWORD *v10; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF

  DmaAdapter = 0LL;
  memset(v13, 0, sizeof(v13));
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
                CmpAttachToRegistryProcess((__int64)v13);
                v2 = CmCompressKey(v7->DmaOperations->AllocateAdapterChannel, v5);
                KiUnstackDetachProcess((__int64)v13, 0);
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
      return -1073741727;
    }
  }
  return v2;
}
