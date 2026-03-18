/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0
 * Callers:
 *     KeSetDisableQuantumProcess @ 0x1402094C4 (KeSetDisableQuantumProcess.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiLockIoPfnTree @ 0x1402165BC (MiLockIoPfnTree.c)
 *     MiCheckForControlAreaDeletion @ 0x140220944 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x140220A44 (MiClearFilePointer.c)
 *     MiInsertUnusedSubsection @ 0x140220AAC (MiInsertUnusedSubsection.c)
 *     MiInsertDecayClusterTimer @ 0x140232200 (MiInsertDecayClusterTimer.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140234D1C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiPreventControlAreaDeletion @ 0x14023F8E8 (MiPreventControlAreaDeletion.c)
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     KeFreezeProcess @ 0x1402443D8 (KeFreezeProcess.c)
 *     KeSetExecuteOptions @ 0x140253A44 (KeSetExecuteOptions.c)
 *     KeThawMultiProcess @ 0x14025753C (KeThawMultiProcess.c)
 *     MiZeroSectionObjectPointer @ 0x14025C884 (MiZeroSectionObjectPointer.c)
 *     MiRemoveFaultNode @ 0x14025CE80 (MiRemoveFaultNode.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140263404 (MmQuerySystemWorkingSetInformation.c)
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiPruneProcessLargePageCaches @ 0x140267594 (MiPruneProcessLargePageCaches.c)
 *     MiSignalLargePageRebuild @ 0x140267CA8 (MiSignalLargePageRebuild.c)
 *     MiBeginPageAccessor @ 0x140268520 (MiBeginPageAccessor.c)
 *     MiRemoveUnusedSubsection @ 0x14026EF44 (MiRemoveUnusedSubsection.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiSectionCreated @ 0x140281DE0 (MiSectionCreated.c)
 *     MiDrainSystemAccessLog @ 0x1402829D0 (MiDrainSystemAccessLog.c)
 *     MiRemoveUnusedSegment @ 0x140287A2C (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x140287FB8 (MiInsertUnusedSegment.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiInsertLargePageChain @ 0x1402C15F0 (MiInsertLargePageChain.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiDeleteBatch @ 0x1402C9E70 (MiDeleteBatch.c)
 *     MiDemoteLocalLargePage @ 0x1402CA210 (MiDemoteLocalLargePage.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiLargePagePromote @ 0x1402CC9A0 (MiLargePagePromote.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1402D8304 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402D8E9C (MmLockLoadedModuleListExclusive.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x1402E48A0 (MiCreateDecayPfn.c)
 *     MiDecayNodeNowEmpty @ 0x1402E4BF0 (MiDecayNodeNowEmpty.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiLargePageFreeToZero @ 0x1402E86F0 (MiLargePageFreeToZero.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1402EC4D0 (KeSetQuantumProcess.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     KiUpdateProcessConcurrencyCount @ 0x140302650 (KiUpdateProcessConcurrencyCount.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiSetVadDeleted @ 0x14030FC20 (MiSetVadDeleted.c)
 *     MiEmptyDecayClusterTimers @ 0x1403122F0 (MiEmptyDecayClusterTimers.c)
 *     MiSetVaAgeList @ 0x1403171A0 (MiSetVaAgeList.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiAcquirePageListLock @ 0x1403277D0 (MiAcquirePageListLock.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     PopPepWork @ 0x140355EE8 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x140356948 (PopPepLockActivityLink.c)
 *     KeForceResumeProcess @ 0x14035EB3C (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x14035EC68 (KeSetProcessSchedulingGroup.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     MiPreUnlockWorkingSetShared @ 0x140373E1C (MiPreUnlockWorkingSetShared.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403872A4 (MiTryUnlinkNodeLargePages.c)
 *     MiWaitForPageWriteCompletion @ 0x140389084 (MiWaitForPageWriteCompletion.c)
 *     MiLockAllMemoryLists @ 0x14038A214 (MiLockAllMemoryLists.c)
 *     MiMirrorGatherBrownPages @ 0x14038A428 (MiMirrorGatherBrownPages.c)
 *     MiPurgeLargeZeroNodePages @ 0x14038E148 (MiPurgeLargeZeroNodePages.c)
 *     MiLockStandbyOldestPage @ 0x14038ECAC (MiLockStandbyOldestPage.c)
 *     MiRepurposeDecayNode @ 0x14038EE6C (MiRepurposeDecayNode.c)
 *     MiLockMemoryLists @ 0x140395670 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x140396D30 (MiRebuildLargePages.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     MiCopyWorkingSetFields @ 0x1403DA8E4 (MiCopyWorkingSetFields.c)
 *     KeSetAffinityProcess @ 0x1403DAC1C (KeSetAffinityProcess.c)
 *     VmpProcessContextLockExclusive @ 0x14045F78C (VmpProcessContextLockExclusive.c)
 *     VslIumEfiRuntimeService @ 0x14054E830 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x14056C444 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140588C48 (MiReleasePartitionHugeIoSpace.c)
 *     MiSetHugeRangePartitionId @ 0x140588F74 (MiSetHugeRangePartitionId.c)
 *     MiPurgeSubsection @ 0x14058BA98 (MiPurgeSubsection.c)
 *     MiAddPendingBadPageNode @ 0x14058DFB8 (MiAddPendingBadPageNode.c)
 *     MiBadPageInserted @ 0x14058E05C (MiBadPageInserted.c)
 *     MiRemovePendingBadPageNode @ 0x14058E7F4 (MiRemovePendingBadPageNode.c)
 *     MiFreezeIoPfnNode @ 0x140591724 (MiFreezeIoPfnNode.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140591AD0 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiFreeModifiedReservations @ 0x14059C6B4 (MiFreeModifiedReservations.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiMarkFileOnlyPfnGood @ 0x14059FBF4 (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x1405A0964 (MiQueueExtentPfnDeletion.c)
 *     MiFaultGetFileExtents @ 0x1405A7158 (MiFaultGetFileExtents.c)
 *     MiAllocateEnclavePages @ 0x1405A828C (MiAllocateEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiFreeListPageContentsChanged @ 0x1405AD7A0 (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x1405AD9AC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x1405ADDA8 (MiSetPfnRemovalRequested.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1405AEA7C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLockPageListAndFirstPage @ 0x1405B350C (MiLockPageListAndFirstPage.c)
 *     MiLockPageListAndLastPage @ 0x1405B3654 (MiLockPageListAndLastPage.c)
 *     MiNoPagesLastChance @ 0x1405B379C (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiUpdatePageFileBlockOwner @ 0x1405BC9E8 (MiUpdatePageFileBlockOwner.c)
 *     MiDrainCrossPartitionUsage @ 0x1405BE340 (MiDrainCrossPartitionUsage.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x1405C184C (MiCreateProcessLargePageCacheAnchor.c)
 *     PspIumReplenishPartitionPages @ 0x1405E29C8 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405E4244 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405E439C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x1405E7AF0 (RtlpAcquirePropStoreLockExclusive.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140601F88 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     VmpFaultEntryInsert @ 0x140629628 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1406297E0 (VmpFaultEntryRemove.c)
 *     ViDeadlockDetectionLock @ 0x140A994C4 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char v5; // dl
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  volatile LONG i; // ecx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v5);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[6];
        SchedulerAssist[6] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v9[6] - 1;
          v9[6] = v10;
          if ( !v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v12 = ExpWaitForSpinLockExclusiveAndAcquire((int *)SpinLock, 0xFFu);
    }
    for ( i = *SpinLock; (*SpinLock & 0xBFFFFFFF) != 0x80000000; i = *SpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(SpinLock, 0x40000000u);
      KeYieldProcessorEx(&v12, v1, v2, v3);
    }
  }
}
