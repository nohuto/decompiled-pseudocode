/*
 * XREFs of KeAbPreAcquire @ 0x14034A230
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 *     MiInitializeInPageSupport @ 0x14023EFE0 (MiInitializeInPageSupport.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x14028DD70 (ExTryToAcquireFastMutex.c)
 *     KiWaitForAllObjects @ 0x14029A090 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x14029A47C (KiWaitSatisfyAny.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14029E0D0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     MiLockControlAreaSectionExtend @ 0x1402A12EC (MiLockControlAreaSectionExtend.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A2710 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1402C3044 (ExfAcquireReleasePushLockExclusive.c)
 *     CmpAcquireWriteQueue @ 0x1402C9670 (CmpAcquireWriteQueue.c)
 *     KiInitializeMutant @ 0x1402ED1DC (KiInitializeMutant.c)
 *     KeAcquireGuardedMutex @ 0x1402EF360 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1402F2AE0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402F2EC0 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     FsRtlAcquireHeaderMutex @ 0x140349070 (FsRtlAcquireHeaderMutex.c)
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     MiReferenceControlArea @ 0x140356824 (MiReferenceControlArea.c)
 *     MiRebuildLargePages @ 0x14038D6C0 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceExclusive @ 0x14038ECD0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038F0B0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038F380 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390A00 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140391170 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2018 (IopValidateAndGetWriteParameters.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1403F9420 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x140522AF4 (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x14053F918 (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x140540780 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x1405426E0 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405B3EA0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B3F70 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405D6600 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1405E9260 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     ExpWnfCreateNameInstance @ 0x14060DA34 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E014 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E2DC (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14060E5DC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x14060F3B4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F4B4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14060FB44 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14060FD38 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140610160 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x1406104B0 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14061088C (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140610A00 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDeleteNameInstance @ 0x140610DD0 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x140611174 (ExpWnfDeleteStateData.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14061169C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteProcessContext @ 0x140612EE8 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140613128 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x1406135B8 (ExpWnfDeleteScopeById.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14064D550 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x14064D984 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x14064EAD0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14064F044 (WbGetWarbirdProcess.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     WbAllocateUserMemory @ 0x1406875F4 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1406878DC (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140688030 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140688144 (WbAddHeapExecutedBlockToLRU.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x140698D00 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14069B320 (NtQueryEaFile.c)
 *     WbRemoveWarbirdProcess @ 0x1406A2524 (WbRemoveWarbirdProcess.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406A2768 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406A287C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406A2980 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     ExpWnfCreateProcessContext @ 0x1406A7D84 (ExpWnfCreateProcessContext.c)
 *     sub_1406A8A5C @ 0x1406A8A5C (sub_1406A8A5C.c)
 *     WbFreeMemoryBlockRegion @ 0x1406A8B64 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfNotifySubscription @ 0x1406AB524 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406AB6C4 (ExpWnfDispatchKernelSubscription.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406AE6E0 (NtNotifyChangeDirectoryFileEx.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406B8398 (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x1406B9660 (NtAllocateUuids.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406BB228 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     CmpTryToLockKcbExclusive @ 0x1406BFD74 (CmpTryToLockKcbExclusive.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406C0B18 (ExpWnfEnumerateScopeInstances.c)
 *     PfpPrefetchSharedStart @ 0x1406C6F58 (PfpPrefetchSharedStart.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406E7BB8 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406F2EB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     ExUuidCreate @ 0x1407208B0 (ExUuidCreate.c)
 *     NtSetEaFile @ 0x140730CB0 (NtSetEaFile.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140733204 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     ExRegisterExtension @ 0x14079D800 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DA20 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A4BEC (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087263C (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140875C60 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140884240 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DFBF0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408DFC60 (PfpPrefetchSharedConflictNotifyStart.c)
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
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140980020 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     WheaConfigureErrorSource @ 0x1409A0440 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B3770 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int v12; // ecx
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
        KiAbEntryRemoveFromTree(a2);
      v12 = *(_DWORD *)(v3 + 88) & 0xFFFE0000;
      *(_BYTE *)(v3 + 25) &= ~1u;
      *(_DWORD *)(v3 + 88) = v12;
      *(_QWORD *)(v3 + 32) = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9);
  return v3;
}
