/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1402F2C90
 * Callers:
 *     NtCancelTimer @ 0x140248B00 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x1402601A0 (ExpDeleteTimer.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A2710 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1402C3044 (ExfAcquireReleasePushLockExclusive.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1402F2B30 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x1402F2C70 (ExfAcquirePushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     FlushLookUpTableBucket @ 0x140375A48 (FlushLookUpTableBucket.c)
 *     ExWakeTimersPause @ 0x14038D260 (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403912D0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x1403915CC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391A3C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140394354 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14039455C (ExpSaPageGroupFreeMemory.c)
 *     ExGetWakeTimerList @ 0x1405B6148 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B7F00 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8330 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B8E74 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA4DC (ExpSaPageGroupDescriptorFree.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 *     ExpWnfCreateNameInstance @ 0x14060DA34 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E014 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E2DC (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F4B4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14060FD38 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140610160 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x1406104B0 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140610A00 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDeleteNameInstance @ 0x140610DD0 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140611174 (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteProcessContext @ 0x140612EE8 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140613128 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x1406135B8 (ExpWnfDeleteScopeById.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14064D550 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x14064EAD0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14064F044 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1406875F4 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406878DC (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140688030 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140688144 (WbAddHeapExecutedBlockToLRU.c)
 *     WbRemoveWarbirdProcess @ 0x1406A2524 (WbRemoveWarbirdProcess.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406A2768 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406A287C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406A2980 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     ExpWnfCreateProcessContext @ 0x1406A7D84 (ExpWnfCreateProcessContext.c)
 *     WbFreeMemoryBlockRegion @ 0x1406A8B64 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406AB6C4 (ExpWnfDispatchKernelSubscription.c)
 *     NtAllocateUuids @ 0x1406B9660 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x1407208B0 (ExUuidCreate.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140733204 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExRegisterExtension @ 0x14079D800 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DA20 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A4BEC (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x14091BACC (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140956A00 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x14095B240 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B600 (NtWaitForKeyedEvent.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095B9CC (ExpKdPullRemoteFileForUser.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095CBFC (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x14095D420 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x14095D5A0 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14095D874 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x14095E5C4 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x14095E740 (WheapPredictiveFailureAnalysis.c)
 *     WheaConfigureErrorSource @ 0x1409A0440 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B3770 (WheaUnconfigureErrorSource.c)
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreWait @ 0x1402F30C0 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402F3100 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402F3184 (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     memset @ 0x140414200 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  signed __int64 result; // rax
  bool v12; // cl
  __int64 v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  int i; // ecx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v9 = *a1;
  v10 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v9 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v12 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v10;
    Object[5] = 0LL;
    if ( (v9 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v6 = (unsigned __int64)Object | v9 & 8 | 7;
      v12 = (v9 & 4) == 0;
    }
    else
    {
      v13 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v9 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v13 = v10;
      v6 = (unsigned __int64)Object | v13;
      if ( !(unsigned int)(v9 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6, v9);
    v14 = v9 == v15;
    v9 = v15;
    if ( !v14 )
      goto LABEL_13;
    if ( v12 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v7 = __rdtsc();
        v8 = v7 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          v6 = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v7;
          v19 = __rdtsc();
          v6 = (unsigned __int64)HIDWORD(v19) << 32;
          v7 = v19;
          if ( v19 <= v18 || v19 >= v8 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          v6 = HIDWORD(Object[6]);
          if ( (Object[6] & 0x200000000LL) == 0 || i == ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6] )
            break;
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = KeAbPreAcquire(a3);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v9 + 1, v9);
  if ( v9 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_13:
    RtlBackoff(&v21, v6, v7, v8);
    v9 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
