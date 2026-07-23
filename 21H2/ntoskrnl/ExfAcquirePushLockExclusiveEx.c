/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0
 * Callers:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14021FB50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     ExpDeleteTimer @ 0x140281910 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1402ED350 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1402FD880 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x1402FD9C0 (ExfAcquirePushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     FlushLookUpTableBucket @ 0x140375598 (FlushLookUpTableBucket.c)
 *     ExWakeTimersPause @ 0x14038D3B0 (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140391420 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391B8C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1403944A4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403946AC (ExpSaPageGroupFreeMemory.c)
 *     ExGetWakeTimerList @ 0x1405B6378 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B74B0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B8130 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8560 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B90A4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA70C (ExpSaPageGroupDescriptorFree.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 *     WbAllocateUserMemory @ 0x1405E6754 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1405E6A3C (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1405E7190 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1405E72A4 (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfCreateProcessContext @ 0x140605804 (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140605B70 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140605C84 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140605D88 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeMemoryBlockRegion @ 0x140606AE4 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140609DB4 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x14060C48C (ExpWnfDeleteScopeById.c)
 *     NtAllocateUuids @ 0x140618D20 (NtAllocateUuids.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140642370 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140643E64 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x14067BEB0 (WbRemoveWarbirdProcess.c)
 *     ExpWnfCreateNameInstance @ 0x14069D4E4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14069DAC4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14069DD8C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14069F7E8 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x14069FC10 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x14069FF60 (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1406A04B0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDeleteNameInstance @ 0x1406A0880 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406A0C24 (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteProcessContext @ 0x1406A2998 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1406A2BD8 (ExpWnfDeleteSubscription.c)
 *     ExUuidCreate @ 0x1406F73B0 (ExUuidCreate.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407333C4 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExRegisterExtension @ 0x14079DA00 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DC20 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A4DEC (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x1407C7620 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x14091BC2C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140956BD0 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x14095B410 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B7D0 (NtWaitForKeyedEvent.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095BB9C (ExpKdPullRemoteFileForUser.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095CDBC (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x14095D600 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x14095D780 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14095DA54 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x14095E7A4 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x14095E920 (WheapPredictiveFailureAnalysis.c)
 *     WheaConfigureErrorSource @ 0x1409A1370 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B46A0 (WheaUnconfigureErrorSource.c)
 *     WheaInitialize @ 0x140A6405C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FDE50 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FDED4 (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     memset @ 0x140414300 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  signed __int64 result; // rax
  bool v9; // cl
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  v7 = (unsigned int)(unsigned __int8)v21 + 3;
  while ( (v6 & 1) != 0 )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = v7;
    Object[5] = 0LL;
    if ( (v6 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (unsigned __int64)Object | v6 & 8 | 7;
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v10 = 11LL;
      Object[4] = Object;
      LODWORD(Object[6]) = v6 >> 4;
      if ( SLODWORD(Object[6]) <= 1 )
        v10 = v7;
      v11 = (unsigned __int64)Object | v10;
      if ( !(unsigned int)(v6 >> 4) )
        LODWORD(Object[6]) = -2;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
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
        v16 = __rdtsc();
        v17 = v16 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v16;
          v19 = __rdtsc();
          v16 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_14:
    if ( a2 )
      a2 = (_RTL_BALANCED_NODE *)KeAbPreAcquire(a3, a2);
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6 + 1, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_13:
    RtlBackoff(&v21);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_14;
  }
  return result;
}
