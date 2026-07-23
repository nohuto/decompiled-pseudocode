/*
 * XREFs of KeAbPreAcquire @ 0x140207360
 * Callers:
 *     FsRtlAcquireHeaderMutex @ 0x1402061E0 (FsRtlAcquireHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiLockControlAreaSectionExtend @ 0x140265EC4 (MiLockControlAreaSectionExtend.c)
 *     ExTryToAcquireFastMutex @ 0x140272BC0 (ExTryToAcquireFastMutex.c)
 *     KeAcquireGuardedMutex @ 0x140273EF0 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x140273FE0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     MiInitializeInPageSupport @ 0x1402B79F0 (MiInitializeInPageSupport.c)
 *     KiInitializeMutant @ 0x1402FF79C (KiInitializeMutant.c)
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x14030EEAC (KiWaitSatisfyAny.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14032EF80 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140332ED0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     CmpAcquireWriteQueue @ 0x140357C40 (CmpAcquireWriteQueue.c)
 *     MiRebuildLargePages @ 0x14038ACA0 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceExclusive @ 0x14038C2A0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038C680 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038C980 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14038E040 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14038E7B0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1403F2B80 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x14051D644 (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x14053A448 (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x14053B2B0 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x14053D210 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405AE940 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405AEA10 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405CD014 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405CD85C (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405CDA20 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CDAE4 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CDBA8 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CDD24 (WbGetWarbirdEncryptionSegment.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1405F0F80 (CmpPerformSingleKcbCacheLookup.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     WbRemoveWarbirdProcess @ 0x1406191AC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14061935C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406197A0 (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x140619C48 (WbGetHeapExecutedBlock.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14061A0D0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     ExpWnfDeleteScopeById @ 0x14061D4EC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140620270 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1406204B0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14062090C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteNameInstance @ 0x140620DAC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140621150 (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140621678 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140621B54 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140621E1C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406220E0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140622254 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x1406223B0 (ExpWnfWriteStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1406227CC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x1406235A4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406236A4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140623D34 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140623F28 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140624350 (ExpWnfUpdateSubscription.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     AlpcpReceiveMessagePort @ 0x140683B20 (AlpcpReceiveMessagePort.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     PfpPrefetchSharedStart @ 0x1406D1D58 (PfpPrefetchSharedStart.c)
 *     WbAllocateUserMemory @ 0x1406D9648 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406D9930 (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406DA080 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406DA194 (WbAddHeapExecutedBlockToLRU.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     ExpWnfCreateProcessContext @ 0x1406F83F4 (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406F8930 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406F8A44 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406F8B48 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     sub_1406F9140 @ 0x1406F9140 (sub_1406F9140.c)
 *     WbFreeMemoryBlockRegion @ 0x1406F9248 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfNotifySubscription @ 0x1406FB028 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406FB1D4 (ExpWnfDispatchKernelSubscription.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14070709C (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x140707EA0 (NtAllocateUuids.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140709148 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140709E8C (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockKcbExclusive @ 0x14070D8E4 (CmpTryToLockKcbExclusive.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14070E388 (ExpWnfEnumerateScopeInstances.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140720FC8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x140799A30 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140799C50 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086F29C (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140872824 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140881150 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DC5F0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408DC660 (PfpPrefetchSharedConflictNotifyStart.c)
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
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14097CB30 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     WheaConfigureErrorSource @ 0x14099CB20 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B0900 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  bool v9; // zf
  unsigned int v11; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( a2 )
    {
      *(_BYTE *)(a2 + 32) |= 2u;
      if ( *(__int64 *)(a2 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a2);
      v11 = *(_DWORD *)(v3 + 88) & 0xFFFE0000;
      *(_BYTE *)(v3 + 25) &= ~1u;
      *(_DWORD *)(v3 + 88) = v11;
      *(_QWORD *)(v3 + 32) = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140C4F7C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v3 + 40) = SessionId;
      *(_QWORD *)(v3 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_10;
    }
    LOBYTE(v6) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v6 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v3 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_5:
        if ( !v3 )
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_10;
        }
        goto LABEL_6;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v6) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v7 = v6;
    _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
    CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
    v3 = (__int64)&CurrentThread->LockEntries[v6];
    goto LABEL_5;
  }
  if ( (a3 & 1) == 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v3 = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v3;
}
