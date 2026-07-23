/*
 * XREFs of KeAbPreAcquire @ 0x140354F80
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x14020AF10 (ExTryToAcquireFastMutex.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14021B630 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     MiLockControlAreaSectionExtend @ 0x14021E86C (MiLockControlAreaSectionExtend.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14021FB50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KiWaitForAllObjects @ 0x14022A600 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x14022A9EC (KiWaitSatisfyAny.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     CmpAcquireWriteQueue @ 0x140247F50 (CmpAcquireWriteQueue.c)
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiInitializeInPageSupport @ 0x1402E3830 (MiInitializeInPageSupport.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeAcquireGuardedMutex @ 0x1402FA0B0 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1402FD830 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     FsRtlAcquireHeaderMutex @ 0x140353DC0 (FsRtlAcquireHeaderMutex.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiRebuildLargePages @ 0x14038D810 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceExclusive @ 0x14038EE20 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038F200 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390B50 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403912C0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2068 (IopValidateAndGetWriteParameters.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1403F95A0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x140522D34 (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x14053FB58 (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x1405409C0 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x140542920 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405B40D0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B41A0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405D6600 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 *     WbAllocateUserMemory @ 0x1405E6754 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1405E6A3C (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1405E7190 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1405E72A4 (WbAddHeapExecutedBlockToLRU.c)
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1405F79F0 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x1405FA4E0 (NtQueryEaFile.c)
 *     ExpWnfCreateProcessContext @ 0x140605804 (ExpWnfCreateProcessContext.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140605B70 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140605C84 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140605D88 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     sub_1406069DC @ 0x1406069DC (sub_1406069DC.c)
 *     WbFreeMemoryBlockRegion @ 0x140606AE4 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfNotifySubscription @ 0x140609C14 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140609DB4 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x14060C48C (ExpWnfDeleteScopeById.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14060CF80 (NtNotifyChangeDirectoryFileEx.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406177B8 (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x140618D20 (NtAllocateUuids.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x14061A4F8 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     CmpTryToLockKcbExclusive @ 0x14061EC84 (CmpTryToLockKcbExclusive.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14061FA28 (ExpWnfEnumerateScopeInstances.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x140642370 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x1406427A4 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140643E64 (WbGetWarbirdProcess.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x140644AD0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406456E0 (NtQueryVolumeInformationFile.c)
 *     PfpPrefetchSharedStart @ 0x140675848 (PfpPrefetchSharedStart.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     WbRemoveWarbirdProcess @ 0x14067BEB0 (WbRemoveWarbirdProcess.c)
 *     ExpWnfCreateNameInstance @ 0x14069D4E4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14069DAC4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14069DD8C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14069E08C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x14069EE64 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14069F5F4 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14069F7E8 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x14069FC10 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x14069FF60 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1406A04B0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDeleteNameInstance @ 0x1406A0880 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406A0C24 (ExpWnfDeleteStateData.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1406A114C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteProcessContext @ 0x1406A2998 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1406A2BD8 (ExpWnfDeleteSubscription.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406D89C0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     ExUuidCreate @ 0x1406F73B0 (ExUuidCreate.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x14070A290 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730E70 (NtSetEaFile.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407333C4 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     ExRegisterExtension @ 0x14079DA00 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DC20 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A4DEC (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x1407C7620 (NtSetUuidSeed.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087279C (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140875DC0 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1408843A0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DFD50 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408DFDC0 (PfpPrefetchSharedConflictNotifyStart.c)
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
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140980200 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     WheaConfigureErrorSource @ 0x1409A1370 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B46A0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

PRTL_BALANCED_NODE __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, PRTL_BALANCED_NODE Node, char a3)
{
  PRTL_BALANCED_NODE p_TreeNode; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  bool v9; // zf
  unsigned int v11; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al

  p_TreeNode = Node;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( Node )
    {
      LOBYTE(Node[1].Right) |= 2u;
      if ( (__int64)Node[1].Children[1] < 0 )
        KiAbEntryRemoveFromTree(Node);
      v11 = *(_DWORD *)&p_TreeNode[3].0 & 0xFFFE0000;
      BYTE1(p_TreeNode[1].Children[0]) &= ~1u;
      *(_DWORD *)&p_TreeNode[3].0 = v11;
      p_TreeNode[1].Children[1] = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140C4FA08[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)&p_TreeNode[1].0 = SessionId;
      p_TreeNode[1].Children[1] = (_RTL_BALANCED_NODE *)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
      goto LABEL_10;
    }
    LOBYTE(v6) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v6 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        p_TreeNode = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_5:
        if ( !p_TreeNode )
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
    p_TreeNode = &CurrentThread->LockEntries[v6].TreeNode;
    goto LABEL_5;
  }
  if ( (a3 & 1) == 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  p_TreeNode = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return p_TreeNode;
}
