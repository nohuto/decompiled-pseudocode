/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x140210820 (KiAbEntryGetLockedHeadEntry.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     MmUnlockLoadedModuleListShared @ 0x140224598 (MmUnlockLoadedModuleListShared.c)
 *     MiEndingOffsetWithLock @ 0x1402245D4 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x1402246C8 (MiStartingOffsetNeedLock.c)
 *     MmIsFileObjectAPagingFile @ 0x140227A0C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     PfSnGetFileInformation @ 0x1402280F0 (PfSnGetFileInformation.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiGetControlAreaPtes @ 0x14024959C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x14024A460 (MiLocateSubsectionNode.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x14024C9E0 (ExReferenceCallBackBlock.c)
 *     MiFindLastSubsection @ 0x140265FD4 (MiFindLastSubsection.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140269674 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExProtectPoolEx @ 0x14027033C (ExProtectPoolEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140278610 (PopPepGetDevicePlatformStateDependents.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     IopFindDiskIoAttribution @ 0x14027A1E0 (IopFindDiskIoAttribution.c)
 *     KeQueryAffinityProcess @ 0x14027D660 (KeQueryAffinityProcess.c)
 *     RtlpHpLfhSlotAllocate @ 0x14028D3E0 (RtlpHpLfhSlotAllocate.c)
 *     ExpAddTagForBigPages @ 0x14028F100 (ExpAddTagForBigPages.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x140296A80 (PsGetWorkOnBehalfThread.c)
 *     KeQueryBasePriorityThread @ 0x140296CE4 (KeQueryBasePriorityThread.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C844C (IopReferenceIoAttributionFromProcess.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402CAD40 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhContextCompact @ 0x1402CB2FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402CB3E4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402CBF00 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     PopPepReleaseActivityLink @ 0x1402CEFF0 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x1402CF340 (PopPepLockActivityLink.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402D8ECC (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1402D97E8 (RtlpCSparseBitmapUnlock.c)
 *     MiGetPageFromSlabAllocator @ 0x1402E10BC (MiGetPageFromSlabAllocator.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402FB40C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     MiFindFreePageFileSpace @ 0x14030F5B4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14030FD08 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSection @ 0x14031E730 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x14032106C (MiReferencePfBackedSection.c)
 *     MiIsProbeActive @ 0x140335290 (MiIsProbeActive.c)
 *     ExRemovePoolTag @ 0x140337BD8 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x14033844C (MiLookupIoPageNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033B124 (MiSystemImageHasPrivateFixups.c)
 *     PsGetNextPartitionUnsafe @ 0x140343E98 (PsGetNextPartitionUnsafe.c)
 *     MiFreeSlabEntries @ 0x140346D00 (MiFreeSlabEntries.c)
 *     MiGetPrototypePteRanges @ 0x1403584E8 (MiGetPrototypePteRanges.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 *     MiAllocateCombineProto @ 0x140365B80 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036D044 (PopFxLockDevice.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14036F77C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiFreePageToSlabAllocator @ 0x140372E60 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140373690 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037B010 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x1403897A4 (MiKernelStackVaToStackNode.c)
 *     DbgEnumerateCallback @ 0x140392AA0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A35FC (MiGetSharedProtosAtDpcLevel.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C54E0 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CB88C (HalpQueryNumaRangeTableInformation.c)
 *     KeQueryCpuSetsProcess @ 0x1405171A4 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1405206F4 (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x14052C7C0 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x140542930 (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x140543090 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x14054DAC0 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x1405527E0 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x14055290C (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x140557D84 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x140558120 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x14056F170 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x14056F268 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14056F340 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14056F450 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14057007C (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140570964 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x14057CA00 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14057CDE4 (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058042C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14058FE38 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x14058FF8C (RtlpHpLargeAllocSize.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14059251C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14059D200 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x14059D300 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14059D69C (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x14059E7C4 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x14059F0B4 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14059F71C (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14059FC74 (VmpSplitMemoryRange.c)
 *     ExpRemoveTagForBigPages @ 0x1405AE688 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B00C4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409AFDF4 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DC2D4 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0844 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockSharedFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    v3 = SchedulerAssist[6] - 1;
    SchedulerAssist[6] = v3;
    if ( !v3 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
}
