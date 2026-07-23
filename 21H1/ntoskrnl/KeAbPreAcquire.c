/*
 * XREFs of KeAbPreAcquire @ 0x140260280
 * Callers:
 *     MiInitializeInPageSupport @ 0x140224D70 (MiInitializeInPageSupport.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     FsRtlAcquireHeaderMutex @ 0x14025F100 (FsRtlAcquireHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140281B54 (MiReferenceControlArea.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiLockControlAreaSectionExtend @ 0x1402BEEF4 (MiLockControlAreaSectionExtend.c)
 *     KiWaitForAllObjects @ 0x1402CD0F4 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x1402CD4E0 (KiWaitSatisfyAny.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1402F31E0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402F6030 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     CmpAcquireWriteQueue @ 0x14031A120 (CmpAcquireWriteQueue.c)
 *     ExTryToAcquireFastMutex @ 0x140340D30 (ExTryToAcquireFastMutex.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     KeAcquireGuardedMutex @ 0x140359B90 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x140359C80 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     MiRebuildLargePages @ 0x140389C30 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceExclusive @ 0x14038B730 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038BB10 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038BE10 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14038D4D0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14038DC40 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1403F18F0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x14051CFF4 (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x140539DF8 (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x14053AC60 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x14053CBC0 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405AE220 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405AE2F0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405CBC44 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405CC48C (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405CC650 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CC714 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CC7D8 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CC954 (WbGetWarbirdEncryptionSegment.c)
 *     PfpPrefetchSharedStart @ 0x1405D33F0 (PfpPrefetchSharedStart.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405E3A50 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     AlpcpReceiveMessagePort @ 0x14060B9B0 (AlpcpReceiveMessagePort.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406265A0 (CmpPerformSingleKcbCacheLookup.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     ExUuidCreate @ 0x14065B780 (ExUuidCreate.c)
 *     WbAllocateUserMemory @ 0x14065BCCC (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14065BFB4 (WbAllocateSlots.c)
 *     sub_14065C808 @ 0x14065C808 (sub_14065C808.c)
 *     WbFreeMemoryBlockRegion @ 0x14065C910 (WbFreeMemoryBlockRegion.c)
 *     WbRemoveWarbirdProcess @ 0x14065E8CC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14065EA7C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14065EEC0 (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x14065F368 (WbGetHeapExecutedBlock.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14065F7F0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     ExpWnfDeleteScopeById @ 0x140662C0C (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140665990 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140665BD0 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14066602C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteNameInstance @ 0x1406664CC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140666870 (ExpWnfDeleteStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140666D98 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140667274 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14066753C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140667800 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140667974 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x140667AD0 (ExpWnfWriteStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x140667EEC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x140668CC4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140669454 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140669648 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140669A70 (ExpWnfUpdateSubscription.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     ExpWnfCreateProcessContext @ 0x1406D4F74 (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D54B0 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D55C4 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D56C8 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406D6A70 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406D6B84 (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfNotifySubscription @ 0x1406D76DC (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D7884 (ExpWnfDispatchKernelSubscription.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E36A8 (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x1406E4530 (NtAllocateUuids.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406E5568 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406E610C (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockKcbExclusive @ 0x1406E9AB4 (CmpTryToLockKcbExclusive.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EA720 (ExpWnfEnumerateScopeInstances.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14071F104 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     NtSetVolumeInformationFile @ 0x140758BF0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 *     ExRegisterExtension @ 0x1407A6A00 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407A6C20 (ExRegisterHost.c)
 *     NtSetUuidSeed @ 0x1407B16A0 (NtSetUuidSeed.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086D7DC (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140871530 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14087FE60 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DB280 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408DB2F0 (PfpPrefetchSharedConflictNotifyStart.c)
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
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14097B790 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     WheaConfigureErrorSource @ 0x14099B380 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409AFAA0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  unsigned int v15; // ecx
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
      v15 = *(_DWORD *)(v3 + 88) & 0xFFFE0000;
      *(_BYTE *)(v3 + 25) &= ~1u;
      *(_DWORD *)(v3 + 88) = v15;
      *(_QWORD *)(v3 + 32) = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140C4F908[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10, v9, v11, v12);
  return v3;
}
