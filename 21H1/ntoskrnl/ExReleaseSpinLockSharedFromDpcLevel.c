/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690
 * Callers:
 *     PsGetNextPartitionUnsafe @ 0x140202E28 (PsGetNextPartitionUnsafe.c)
 *     KeQueryAffinityProcess @ 0x140204350 (KeQueryAffinityProcess.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14023561C (IopReferenceIoAttributionFromProcess.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140237F10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhContextCompact @ 0x1402384CC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402385B4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402390D0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     PopPepReleaseActivityLink @ 0x14023C1C0 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x14023C510 (PopPepLockActivityLink.c)
 *     RtlpHpLfhSlotAllocate @ 0x140250B40 (RtlpHpLfhSlotAllocate.c)
 *     ExpAddTagForBigPages @ 0x140252860 (ExpAddTagForBigPages.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140259940 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x14025A200 (PsGetWorkOnBehalfThread.c)
 *     KeQueryBasePriorityThread @ 0x14025A464 (KeQueryBasePriorityThread.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140269870 (KiAbEntryGetLockedHeadEntry.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     MmUnlockLoadedModuleListShared @ 0x14027D5E8 (MmUnlockLoadedModuleListShared.c)
 *     MiEndingOffsetWithLock @ 0x14027D624 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x14027D718 (MiStartingOffsetNeedLock.c)
 *     MmIsFileObjectAPagingFile @ 0x140280A5C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     PfSnGetFileInformation @ 0x140281140 (PfSnGetFileInformation.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiGetControlAreaPtes @ 0x1402A25CC (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402A3490 (MiLocateSubsectionNode.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     MiFindLastSubsection @ 0x1402BF004 (MiFindLastSubsection.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x1402D03FC (MiReferencePfBackedSection.c)
 *     IopFindDiskIoAttribution @ 0x1402DB0D0 (IopFindDiskIoAttribution.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     ExProtectPoolEx @ 0x1402DF9C4 (ExProtectPoolEx.c)
 *     MiIsProbeActive @ 0x1402F8260 (MiIsProbeActive.c)
 *     ExRemovePoolTag @ 0x1402FABA8 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x1402FB41C (MiLookupIoPageNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x1402FDDE4 (MiSystemImageHasPrivateFixups.c)
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 *     MiGetPrototypePteRanges @ 0x14031AA38 (MiGetPrototypePteRanges.c)
 *     MiGetPageFromSlabAllocator @ 0x1403261BC (MiGetPageFromSlabAllocator.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140339374 (SepGetSingletonEntryFromIndexNumber.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14033C57C (PopPepGetDevicePlatformStateDependents.c)
 *     vDbgPrintExWithPrefixInternal @ 0x14033C750 (vDbgPrintExWithPrefixInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiFindFreePageFileSpace @ 0x14034CC50 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14034D3A4 (MiPageFileLargestBitmapsRun.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     KiRundownMutants @ 0x140356A08 (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403573EC (KiActivateWaiterQueueWithNoLocks.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140360CA0 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1403615BC (RtlpCSparseBitmapUnlock.c)
 *     MiAllocateCombineProto @ 0x1403651C0 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036D3A4 (PopFxLockDevice.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14036EB4C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiFreePageToSlabAllocator @ 0x140372050 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140372880 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037A290 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x140388834 (MiKernelStackVaToStackNode.c)
 *     DbgEnumerateCallback @ 0x140391EF0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A2E6C (MiGetSharedProtosAtDpcLevel.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C4570 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CAAAC (HalpQueryNumaRangeTableInformation.c)
 *     KeQueryCpuSetsProcess @ 0x140516B54 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1405200A4 (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x14052C170 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x1405422E0 (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x140542A40 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x14054D470 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x140552190 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x1405522BC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x140557734 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x140557AD0 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x14056EB20 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x14056EC18 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14056ECF0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14056EE00 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14056FA2C (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140570314 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x14057C3C0 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14057C7A4 (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14057FCDC (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14058F748 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x14058F89C (RtlpHpLargeAllocSize.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140591E2C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14059CB10 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x14059CC10 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14059CFAC (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x14059E0D4 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x14059E9C4 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14059F02C (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14059F584 (VmpSplitMemoryRange.c)
 *     ExpRemoveTagForBigPages @ 0x1405ADF68 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405AF9A4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409AEF94 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DC274 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B0124 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
