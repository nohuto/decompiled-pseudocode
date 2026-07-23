/*
 * XREFs of ExfAcquirePushLockExclusiveEx @ 0x140241C10
 * Callers:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140241AB0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExfAcquirePushLockExclusive @ 0x140241BF0 (ExfAcquirePushLockExclusive.c)
 *     ExpDeleteTimer @ 0x140247950 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1403060F0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 *     FlushLookUpTableBucket @ 0x140375838 (FlushLookUpTableBucket.c)
 *     ExWakeTimersPause @ 0x14038CB40 (ExWakeTimersPause.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140390E00 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x1403910FC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14039156C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140393EE4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403940EC (ExpSaPageGroupFreeMemory.c)
 *     ExGetWakeTimerList @ 0x1405B4718 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B5850 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B64D0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B6900 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B7444 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B8A98 (ExpSaPageGroupDescriptorFree.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405D3D00 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405D3EC4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D3F88 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D404C (WbGetInitializedEncryptionSegment.c)
 *     ExpWnfDeleteScopeById @ 0x14064E12C (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140650EB0 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1406510F0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x1406519EC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140651D90 (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x14065282C (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140652D04 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140652FCC (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140653404 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x140653560 (ExpWnfWriteStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x140654854 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140655034 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x14065545C (ExpWnfUpdateSubscription.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x14065C010 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x14065C794 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14065D048 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14065D374 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14065D488 (WbAddHeapExecutedBlockToLRU.c)
 *     WbAllocateUserMemory @ 0x14065D5D8 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14065D8C0 (WbAllocateSlots.c)
 *     WbFreeMemoryBlockRegion @ 0x14065E220 (WbFreeMemoryBlockRegion.c)
 *     WbRemoveWarbirdProcess @ 0x14065ED00 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14065EEB0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14065F2F4 (WbGetWarbirdProcess.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14065FC24 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     ExpWnfCreateProcessContext @ 0x1406CB2B4 (ExpWnfCreateProcessContext.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406CDC04 (ExpWnfDispatchKernelSubscription.c)
 *     ExUuidCreate @ 0x140710ED0 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x140711B60 (NtAllocateUuids.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14072EFB8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     TlgRegisterAggregateProviderEx @ 0x14079A6CC (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x1407A8D60 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407A8F80 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1407C3040 (NtSetUuidSeed.c)
 *     PdcAcquireRwLockExclusive @ 0x14091E2EC (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140959180 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x14095D9C0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095DD80 (NtWaitForKeyedEvent.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095E14C (ExpKdPullRemoteFileForUser.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095F37C (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x14095FBA0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x14095FD20 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14095FFF4 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x140960D44 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x140960EC0 (WheapPredictiveFailureAnalysis.c)
 *     WheaConfigureErrorSource @ 0x1409A2C20 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B6870 (WheaUnconfigureErrorSource.c)
 *     WheaInitialize @ 0x140A61A3C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140242080 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x140242104 (ExpOptimizePushLockList.c)
 *     memset @ 0x140411300 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockExclusiveEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
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
      a2 = KeAbPreAcquire(a3, a2, 0);
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
