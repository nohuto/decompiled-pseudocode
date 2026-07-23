/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x140359E30
 * Callers:
 *     ExpDeleteTimer @ 0x140236430 (ExpDeleteTimer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402F6030 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140359CD0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x140359E10 (ExfAcquirePushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x140372368 (FlushLookUpTableBucket.c)
 *     ExWakeTimersPause @ 0x1403897C4 (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14038DDA0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14038E09C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038E50C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140390EB4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403910BC (ExpSaPageGroupFreeMemory.c)
 *     ExGetWakeTimerList @ 0x1405B0498 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B15D0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B2250 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B2680 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B31C4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4818 (ExpSaPageGroupDescriptorFree.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405CC48C (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405CC650 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CC714 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CC7D8 (WbGetInitializedEncryptionSegment.c)
 *     ExUuidCreate @ 0x14065B780 (ExUuidCreate.c)
 *     WbAllocateUserMemory @ 0x14065BCCC (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14065BFB4 (WbAllocateSlots.c)
 *     WbFreeMemoryBlockRegion @ 0x14065C910 (WbFreeMemoryBlockRegion.c)
 *     WbRemoveWarbirdProcess @ 0x14065E8CC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14065EA7C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14065EEC0 (WbGetWarbirdProcess.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14065F7F0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     ExpWnfDeleteScopeById @ 0x140662C0C (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140665990 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140665BD0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x1406664CC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140666870 (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140666D98 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140667274 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14066753C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140667974 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x140667AD0 (ExpWnfWriteStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140669648 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140669A70 (ExpWnfUpdateSubscription.c)
 *     ExpWnfCreateProcessContext @ 0x1406D4F74 (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D54B0 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D55C4 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D56C8 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406D6A70 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406D6B84 (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D7884 (ExpWnfDispatchKernelSubscription.c)
 *     NtAllocateUuids @ 0x1406E4530 (NtAllocateUuids.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14071F104 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x1407A6A00 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407A6C20 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1407B16A0 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x14091744C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140952020 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140956530 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1409568F0 (NtWaitForKeyedEvent.c)
 *     ExpKdPullRemoteFileForUser @ 0x140956CBC (ExpKdPullRemoteFileForUser.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095821C (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140958A40 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140958BC0 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140958E94 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x140959BE4 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140959D60 (WheapPredictiveFailureAnalysis.c)
 *     WheaConfigureErrorSource @ 0x14099B380 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409AFAA0 (WheaUnconfigureErrorSource.c)
 *     WheaInitialize @ 0x140A5B63C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     RtlBackoff @ 0x14035A2A0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x14035A324 (ExpOptimizePushLockList.c)
 *     memset @ 0x140408F80 (memset.c)
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
