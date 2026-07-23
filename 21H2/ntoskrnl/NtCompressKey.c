/*
 * XREFs of NtCompressKey @ 0x140868440
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     PoIsInitializedStopWatch @ 0x1402713C8 (PoIsInitializedStopWatch.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x140665AE0 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmCompressKey @ 0x14086C360 (CmCompressKey.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087279C (CmpWaitOnHiveWriteQueue.c)
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
  __int64 v16; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v19[3]; // [rsp+38h] [rbp-40h] BYREF

  DmaAdapter = 0LL;
  memset(v19, 0, sizeof(v19));
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
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
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
                CmpAttachToRegistryProcess((__int64)v19);
                v2 = CmCompressKey(v10->DmaOperations->AllocateAdapterChannel, v5);
                KiUnstackDetachProcess((__int64)v19, 0LL);
                break;
              }
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)AllocateAdapterChannel + 72, 0LL);
            CmpWaitOnHiveWriteQueue(AllocateAdapterChannel, v13);
          }
          CmpUnlockRegistry();
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
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
