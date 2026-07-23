/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x140274190
 * Callers:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140274030 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x140274170 (ExfAcquirePushLockExclusive.c)
 *     ExpDeleteTimer @ 0x1402C9260 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140332ED0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x140373178 (FlushLookUpTableBucket.c)
 *     ExWakeTimersPause @ 0x14038A834 (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14038E910 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14038EC0C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038F07C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140391A24 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140391C2C (ExpSaPageGroupFreeMemory.c)
 *     ExGetWakeTimerList @ 0x1405B0BB8 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B1CF0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B2970 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B2DA0 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B38E4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4F38 (ExpSaPageGroupDescriptorFree.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405CD85C (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405CDA20 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CDAE4 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CDBA8 (WbGetInitializedEncryptionSegment.c)
 *     WbRemoveWarbirdProcess @ 0x1406191AC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14061935C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406197A0 (WbGetWarbirdProcess.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14061A0D0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     ExpWnfDeleteScopeById @ 0x14061D4EC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140620270 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1406204B0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x140620DAC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140621150 (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140621678 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140621B54 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140621E1C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140622254 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x1406223B0 (ExpWnfWriteStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1406236A4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140623F28 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140624350 (ExpWnfUpdateSubscription.c)
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
 *     WbAllocateUserMemory @ 0x1406D9648 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406D9930 (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406DA080 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406DA194 (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfCreateProcessContext @ 0x1406F83F4 (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406F8930 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406F8A44 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406F8B48 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeMemoryBlockRegion @ 0x1406F9248 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406FB1D4 (ExpWnfDispatchKernelSubscription.c)
 *     NtAllocateUuids @ 0x140707EA0 (NtAllocateUuids.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140720FC8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x140799A30 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140799C50 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x1409186BC (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x1409533C0 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140957C00 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140957FC0 (NtWaitForKeyedEvent.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095838C (ExpKdPullRemoteFileForUser.c)
 *     ExpWnfDeleteScopeInstances @ 0x1409595BC (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140959DE0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140959F60 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14095A234 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x14095AF84 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x14095B100 (WheapPredictiveFailureAnalysis.c)
 *     WheaConfigureErrorSource @ 0x14099CB20 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B0900 (WheaUnconfigureErrorSource.c)
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A66764 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140274600 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x140274684 (ExpOptimizePushLockList.c)
 *     memset @ 0x14040A280 (memset.c)
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
      a2 = KeAbPreAcquire(a3, a2, 0);
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
