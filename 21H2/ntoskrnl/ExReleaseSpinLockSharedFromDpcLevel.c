/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550
 * Callers:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     IopFindDiskIoAttribution @ 0x140207870 (IopFindDiskIoAttribution.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ExRemovePoolTag @ 0x1402187A8 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x14021901C (MiLookupIoPageNode.c)
 *     MiIsProbeActive @ 0x140219764 (MiIsProbeActive.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 *     MiFindLastSubsection @ 0x14021E97C (MiFindLastSubsection.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140221354 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x140221C70 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140223B20 (RtlpHpLfhSubsegmentCreate.c)
 *     KeQueryBasePriorityThread @ 0x140225600 (KeQueryBasePriorityThread.c)
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteRanges @ 0x140248878 (MiGetPrototypePteRanges.c)
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140258E08 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140272B84 (PopPepGetDevicePlatformStateDependents.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     KeQueryAffinityProcess @ 0x14027DDB0 (KeQueryAffinityProcess.c)
 *     PopPepReleaseActivityLink @ 0x1402830F8 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140283448 (PopPepLockActivityLink.c)
 *     MiGetPageFromSlabAllocator @ 0x140299420 (MiGetPageFromSlabAllocator.c)
 *     KeSetLegacyAffinityThread @ 0x14029DE40 (KeSetLegacyAffinityThread.c)
 *     PsGetWorkOnBehalfThread @ 0x1402A9F0C (PsGetWorkOnBehalfThread.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402F2FB0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402F5D74 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExProtectPoolEx @ 0x1402F7F18 (ExProtectPoolEx.c)
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402FCD90 (KiAbEntryGetLockedHeadEntry.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1403036AC (IopReferenceIoAttributionFromProcess.c)
 *     PsGetNextPartitionUnsafe @ 0x140303A58 (PsGetNextPartitionUnsafe.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     RtlpHpLfhContextCompact @ 0x14031187C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x140311964 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140312480 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiGetControlAreaPtes @ 0x140320C4C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x1403254E8 (MiSystemImageHasPrivateFixups.c)
 *     PfSnGetFileInformation @ 0x1403267E0 (PfSnGetFileInformation.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x1403271A4 (MmIsFileObjectAPagingFile.c)
 *     MmUnlockLoadedModuleListShared @ 0x1403274A4 (MmUnlockLoadedModuleListShared.c)
 *     MiEndingOffsetWithLock @ 0x1403274E0 (MiEndingOffsetWithLock.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x140327D54 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     ExpAddTagForBigPages @ 0x140346B10 (ExpAddTagForBigPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 *     MiAllocateCombineProto @ 0x140367FC0 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036E434 (PopFxLockDevice.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14037175C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiFreePageToSlabAllocator @ 0x140375280 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140375AB0 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037CB20 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038C2E4 (MiKernelStackVaToStackNode.c)
 *     DbgEnumerateCallback @ 0x140395520 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A63DC (MiGetSharedProtosAtDpcLevel.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8C10 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CF00C (HalpQueryNumaRangeTableInformation.c)
 *     KeQueryCpuSetsProcess @ 0x14051C894 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CE20 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x140525DE4 (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x140531ED0 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x140548040 (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x1405487A0 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x1405531A0 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x140557EC0 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x140557FEC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x14055D464 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x14055D800 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x1405747F0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1405748E8 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1405749C0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140574AD0 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1405756FC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140575FE4 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140582070 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582454 (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405859CC (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x140595540 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x140595694 (RtlpHpLargeAllocSize.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140597C1C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405A2900 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x1405A2A00 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1405A2D9C (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A3EC4 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A47B4 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1405A4E1C (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x1405A5374 (VmpSplitMemoryRange.c)
 *     ExpRemoveTagForBigPages @ 0x1405B3E18 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B5854 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B3B94 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E02E4 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
