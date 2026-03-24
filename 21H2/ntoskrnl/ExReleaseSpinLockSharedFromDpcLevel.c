/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800
 * Callers:
 *     PsGetWorkOnBehalfThread @ 0x1402055CC (PsGetWorkOnBehalfThread.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14024E760 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140251564 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReferenceCallBackBlock @ 0x14025A950 (ExReferenceCallBackBlock.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     KeQueryAffinityProcess @ 0x14025C840 (KeQueryAffinityProcess.c)
 *     PopPepReleaseActivityLink @ 0x140261C28 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140261F78 (PopPepLockActivityLink.c)
 *     MiFindFreePageFileSpace @ 0x14026A714 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14026AE68 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     KiRundownMutants @ 0x140277650 (KiRundownMutants.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1402841E0 (vDbgPrintExWithPrefixInternal.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14028452C (PopPepGetDevicePlatformStateDependents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     IopFindDiskIoAttribution @ 0x14028A6D0 (IopFindDiskIoAttribution.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExRemovePoolTag @ 0x140297D28 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x14029859C (MiLookupIoPageNode.c)
 *     MiIsProbeActive @ 0x140299E04 (MiIsProbeActive.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029F4FC (KiActivateWaiterQueueWithNoLocks.c)
 *     MiFindLastSubsection @ 0x1402A13FC (MiFindLastSubsection.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402A3F14 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1402A4830 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402A66E0 (RtlpHpLfhSubsegmentCreate.c)
 *     KeQueryBasePriorityThread @ 0x1402A74C0 (KeQueryBasePriorityThread.c)
 *     MiFreeSlabEntries @ 0x1402BA910 (MiFreeSlabEntries.c)
 *     MiReferencePfBackedSection @ 0x1402C5218 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteRanges @ 0x1402C9F88 (MiGetPrototypePteRanges.c)
 *     MiGetPageFromSlabAllocator @ 0x1402E80D0 (MiGetPageFromSlabAllocator.c)
 *     KeSetLegacyAffinityThread @ 0x1402ECAF0 (KeSetLegacyAffinityThread.c)
 *     MiTrimSection @ 0x1402EF6E0 (MiTrimSection.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402F2040 (KiAbEntryGetLockedHeadEntry.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402F895C (IopReferenceIoAttributionFromProcess.c)
 *     PsGetNextPartitionUnsafe @ 0x1402F8D08 (PsGetNextPartitionUnsafe.c)
 *     MiAbortCombineScan @ 0x140303770 (MiAbortCombineScan.c)
 *     RtlpHpLfhContextCompact @ 0x140306B2C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x140306C14 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140307730 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiGetControlAreaPtes @ 0x140315EFC (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140316AE0 (MiLocateSubsectionNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x14031A798 (MiSystemImageHasPrivateFixups.c)
 *     PfSnGetFileInformation @ 0x14031BA90 (PfSnGetFileInformation.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14031BFE0 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x14031C454 (MmIsFileObjectAPagingFile.c)
 *     MmUnlockLoadedModuleListShared @ 0x14031C754 (MmUnlockLoadedModuleListShared.c)
 *     MiEndingOffsetWithLock @ 0x14031C790 (MiEndingOffsetWithLock.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x14031D004 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x140320B50 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     ExpAddTagForBigPages @ 0x14033BDC0 (ExpAddTagForBigPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x14033CE40 (RtlpHpLfhSlotAllocate.c)
 *     ExProtectPoolEx @ 0x140362BE8 (ExProtectPoolEx.c)
 *     MiAllocateCombineProto @ 0x140367E10 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036E284 (PopFxLockDevice.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140371C0C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiFreePageToSlabAllocator @ 0x140375730 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140375F60 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037CFD0 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038C194 (MiKernelStackVaToStackNode.c)
 *     DbgEnumerateCallback @ 0x1403953D0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A628C (MiGetSharedProtosAtDpcLevel.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8A70 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CEE9C (HalpQueryNumaRangeTableInformation.c)
 *     KeQueryCpuSetsProcess @ 0x14051C654 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CBE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x140525BA4 (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x140531C90 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x140547E00 (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x140548560 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x140552F60 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x140557C80 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x140557DAC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x14055D224 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x14055D5C0 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x1405745B0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1405746A8 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140574780 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140574890 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1405754BC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140575DA4 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140581E40 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582224 (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058579C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x140595310 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x140595464 (RtlpHpLargeAllocSize.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405979EC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405A26D0 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x1405A27D0 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1405A2B6C (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A3C94 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A4584 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1405A4BEC (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x1405A5144 (VmpSplitMemoryRange.c)
 *     ExpRemoveTagForBigPages @ 0x1405B3BE8 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B5624 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B2C64 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DF2E4 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5DBC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
