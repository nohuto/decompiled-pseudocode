/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x14029F120
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x14029EC30 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x14029F100 (ExfAcquirePushLockExclusive.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14029FB3C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorAllocate @ 0x14029FDC4 (ExpSaAllocatorAllocate.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 *     ExpDeleteTimer @ 0x140356E00 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     ExpSaAllocatorFree @ 0x140360FD4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140361290 (ExpSaPageGroupFreeMemory.c)
 *     FlushLookUpTableBucket @ 0x140386944 (FlushLookUpTableBucket.c)
 *     ExWakeTimersPause @ 0x1403983A0 (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14039F294 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403A0424 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     DifExfAcquirePushLockExclusiveWrapper @ 0x140609C80 (DifExfAcquirePushLockExclusiveWrapper.c)
 *     ExGetWakeTimerList @ 0x14063DABC (ExGetWakeTimerList.c)
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14063EC3C (ExUninitializeDeviceAts.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x140640500 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x140640800 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x140641354 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x140643104 (WheaSelLogSetNtSchedulerAvailability.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406608E8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     ExpWnfCreateProcessContext @ 0x1406C4AE4 (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5C1C (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5CF8 (WbHeapExecutionUnloadModule.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D7D74 (ExpWnfDispatchKernelSubscription.c)
 *     NtAllocateUuids @ 0x1406DC3C0 (NtAllocateUuids.c)
 *     ExpWnfDeleteScopeById @ 0x1407914BC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x1407919CC (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstance @ 0x140791CAC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x14079204C (ExpWnfDeleteStateData.c)
 *     ExpWnfDeleteSubscription @ 0x14079240C (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140792EFC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1407931C0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfWriteStateData @ 0x14079350C (ExpWnfWriteStateData.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140793A34 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14079A254 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x14079A690 (ExpWnfUpdateSubscription.c)
 *     WbRemoveWarbirdProcess @ 0x1407E15B4 (WbRemoveWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407E1968 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeMemoryBlockRegion @ 0x1407E1CA4 (WbFreeMemoryBlockRegion.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1407E1DC8 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1407E1EF8 (WbAddHeapExecutedBlockToLRU.c)
 *     WbGetWarbirdProcess @ 0x1407E2D60 (WbGetWarbirdProcess.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1407E3770 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetWarbirdThread @ 0x1407E3900 (WbGetWarbirdThread.c)
 *     WbAllocateUserMemory @ 0x1407E43F0 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1407E4720 (WbAllocateSlots.c)
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1408486C4 (ExRegisterHost.c)
 *     ExpKdPullRemoteFileForUser @ 0x1408536D4 (ExpKdPullRemoteFileForUser.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x1409C581C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140A02740 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x140A06FF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A073C0 (NtWaitForKeyedEvent.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A083CC (ExpWnfDeleteScopeInstances.c)
 *     WheaSelLogCheckPoint @ 0x140A087A4 (WheaSelLogCheckPoint.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140A08D90 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A08F00 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140A0921C (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x140A0A16C (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A0A2E8 (WheapPredictiveFailureAnalysis.c)
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 *     WheaConfigureErrorSource @ 0x140A55520 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140A6D3D0 (WheaUnconfigureErrorSource.c)
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B240EC (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     RtlBackoff @ 0x14029F5C0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x14029F640 (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     memset @ 0x140435E00 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, __int64 a3)
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
      a2 = KeAbPreAcquire(a3, a2, 0LL);
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
