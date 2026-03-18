/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x1402CF510
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1402012C8 (PsIoRateControlOverQuotaNotify.c)
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiFreePhysicalView @ 0x140221BA8 (MiFreePhysicalView.c)
 *     PfSnGetFileInformation @ 0x1402280F0 (PfSnGetFileInformation.c)
 *     MiDecrementModifiedWriteCount @ 0x1402286BC (MiDecrementModifiedWriteCount.c)
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     MiInsertVadEvent @ 0x1402481DC (MiInsertVadEvent.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1402493A0 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140249650 (MiCheckPurgeAndUpMapCount.c)
 *     MiFlushRelease @ 0x14024A218 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x14024A858 (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiReleaseControlAreaCharges @ 0x14024B270 (MiReleaseControlAreaCharges.c)
 *     MiRemoveSecureEntry @ 0x14024B900 (MiRemoveSecureEntry.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiReferenceControlAreaPfn @ 0x14025F72C (MiReferenceControlAreaPfn.c)
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x140260670 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x140260768 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x140260810 (MiDrainControlAreaWrites.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14026246C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x140263B7C (MiUpdateControlAreaCommitCount.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiDeleteEmptySubsections @ 0x140265820 (MiDeleteEmptySubsections.c)
 *     MiCopyHeaderIfResident @ 0x140265B30 (MiCopyHeaderIfResident.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140265E0C (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140265EC4 (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x140266054 (MiAppendSubsectionChain.c)
 *     MiSectionCreated @ 0x140267074 (MiSectionCreated.c)
 *     MiInsertSubsectionNode @ 0x140267358 (MiInsertSubsectionNode.c)
 *     MiReleaseImageSection @ 0x14026780C (MiReleaseImageSection.c)
 *     SepInitSingletonEntry @ 0x140269610 (SepInitSingletonEntry.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14026ACE8 (IoSetDiskIoAttributionOnProcess.c)
 *     MiContractPagingFiles @ 0x14026B300 (MiContractPagingFiles.c)
 *     IoStopDiskIoAttributionForContext @ 0x14027A6A8 (IoStopDiskIoAttributionForContext.c)
 *     IoStartDiskIoAttributionForContext @ 0x14027A724 (IoStartDiskIoAttributionForContext.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x14027AA98 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     MmEnforceWorkingSetLimit @ 0x14027B43C (MmEnforceWorkingSetLimit.c)
 *     MiWalkPageTablesRecursively @ 0x14029DD80 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MiSynchronizeSystemVa @ 0x1402BDCD0 (MiSynchronizeSystemVa.c)
 *     MiLockSectionControlArea @ 0x1402C280C (MiLockSectionControlArea.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402C8508 (MiCheckAndUpdateIoAttribution.c)
 *     PopFxArmResidentTimer @ 0x1402CD1BC (PopFxArmResidentTimer.c)
 *     PfSnNameRemove @ 0x1402CD6CC (PfSnNameRemove.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402CD8BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402CE458 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402CE730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402CEB30 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     PopPepLockActivityLink @ 0x1402CF340 (PopPepLockActivityLink.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 *     PfSnNameQueryWorker @ 0x1402CF410 (PfSnNameQueryWorker.c)
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     RtlpCSparseBitmapLock @ 0x1402D9B88 (RtlpCSparseBitmapLock.c)
 *     PspJobIoRateQueryHistory @ 0x1402F23A4 (PspJobIoRateQueryHistory.c)
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 *     MiDeleteStaleCacheMaps @ 0x1402F3000 (MiDeleteStaleCacheMaps.c)
 *     MiAdjustModifiedPageLoad @ 0x1402F342C (MiAdjustModifiedPageLoad.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MmInSwapWorkingSet @ 0x14030DA98 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x14030E3BC (MiOutSwapWorkingSet.c)
 *     MiFindFreePageFileSpace @ 0x14030F5B4 (MiFindFreePageFileSpace.c)
 *     MiBeginProcessClean @ 0x140310758 (MiBeginProcessClean.c)
 *     MiOutlawInswaps @ 0x140310854 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140311198 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140311254 (MmStoreFlushOutstandingEvictions.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiTrimSection @ 0x14031E730 (MiTrimSection.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiCanFileBeTruncatedInternal @ 0x14032023C (MiCanFileBeTruncatedInternal.c)
 *     MiDecrementSubsection @ 0x140320E6C (MiDecrementSubsection.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x14032AAEC (SepCleanupMarkedForDeletionEntries.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiDereferenceIoPages @ 0x140337818 (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x140337EFC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1403384D4 (MiDeleteRotateAndStopFaults.c)
 *     MiSetTrimWhileAgingState @ 0x140343F50 (MiSetTrimWhileAgingState.c)
 *     MmFlushImageSection @ 0x140344C90 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140344E00 (MiForceSectionClosed.c)
 *     MiFreeSlabEntries @ 0x140346D00 (MiFreeSlabEntries.c)
 *     MiImageUnused @ 0x140349068 (MiImageUnused.c)
 *     PopPepTryPowerDownDevice @ 0x14034A424 (PopPepTryPowerDownDevice.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MiInsertMappingNode @ 0x140350868 (MiInsertMappingNode.c)
 *     MmChangeSectionBackingFile @ 0x140351314 (MmChangeSectionBackingFile.c)
 *     MiDereferencePageRunsEx @ 0x1403516F8 (MiDereferencePageRunsEx.c)
 *     MiFlushAcquire @ 0x140351918 (MiFlushAcquire.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140352140 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1403521E0 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140352270 (MiRefPageFileSpaceBitmaps.c)
 *     MiCleanWorkingSet @ 0x140352534 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x140357280 (MiMakeSecureExclusive.c)
 *     MiReleaseFaultCharges @ 0x1403573CC (MiReleaseFaultCharges.c)
 *     MiDeleteCloneZombies @ 0x1403574FC (MiDeleteCloneZombies.c)
 *     MiRetainSubsection @ 0x140357B64 (MiRetainSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x140359034 (MiUpdateLastSubsectionSize.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14035B9E4 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiUpdatePerSessionProto @ 0x14035CC20 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14035D7CC (MiFlowThroughInsertNode.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14035DCDC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiSetSubsectionBase @ 0x14035E63C (MiSetSubsectionBase.c)
 *     MiWaitForRotateToComplete @ 0x14035FBF0 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x14036063C (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x140360978 (MiDereferenceControlArea.c)
 *     MiCombiningInProgress @ 0x140364A28 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiFreeCombineBlock @ 0x1403694A0 (MiFreeCombineBlock.c)
 *     PoFxIdleDevice @ 0x14036B584 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     FlushLookUpTableBucket @ 0x140373178 (FlushLookUpTableBucket.c)
 *     MiRemoveMappingNode @ 0x140378550 (MiRemoveMappingNode.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140379C90 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiLocateOldestSecure @ 0x14037C208 (MiLocateOldestSecure.c)
 *     MiCleanSection @ 0x14037CD1C (MiCleanSection.c)
 *     MiSetControlAreaSystemVa @ 0x14037CE74 (MiSetControlAreaSystemVa.c)
 *     MiProcessDereferenceList @ 0x140385268 (MiProcessDereferenceList.c)
 *     MmStealTopLevelPage @ 0x140385CD8 (MmStealTopLevelPage.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140386154 (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x140386CEC (MiDeleteSessionAddressSpace.c)
 *     MiWritePageFileHash @ 0x1403876B4 (MiWritePageFileHash.c)
 *     MiSessionRemoveImage @ 0x1403886E8 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x1403891A8 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14038A450 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     ExDeleteFastResource @ 0x1403911F0 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x140397120 (PopFxAllocatePowerIrp.c)
 *     ExpAddResourceToSystemResourceList @ 0x14039732C (ExpAddResourceToSystemResourceList.c)
 *     MiInsertSlabEntry @ 0x1403977DC (MiInsertSlabEntry.c)
 *     MmManageFaultRange @ 0x14039AD78 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039C1B8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     PoFxReportDevicePoweredOn @ 0x14039CEF0 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x14039D7DC (PopPepUpdateConstraints.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     PopFxReleasePowerIrp @ 0x1403A1F84 (PopFxReleasePowerIrp.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A2C58 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 *     ExCompareExchangeCallBack @ 0x1403AB8EC (ExCompareExchangeCallBack.c)
 *     MiDeleteBootRange @ 0x1403B1188 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B51CC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B61B0 (MiFreeUnusedPfnPagesDpc.c)
 *     PopPepWaitForDeviceRelease @ 0x1403BADF8 (PopPepWaitForDeviceRelease.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BB090 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x1403BB1FC (PopPepDeviceStarted.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BB504 (PopFxAssignDeviceToDevNode.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 *     MiUpdatePageFileList @ 0x1403BCDD8 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x1403BD0B8 (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x1403BE290 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C5070 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMapMdlCommon @ 0x1403C56B4 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x1403C5A04 (SmFpPreAllocate.c)
 *     PspAddPartitionToGlobalList @ 0x1403C731C (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1403C7F40 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403C86F4 (MiInitializeWorkingSetManagerParameters.c)
 *     SepExpandSingletonArrays @ 0x1403CA998 (SepExpandSingletonArrays.c)
 *     HalpNumaAddRangeProximity @ 0x1404CCCF0 (HalpNumaAddRangeProximity.c)
 *     HalpUpdateCoolingPacket @ 0x1404D7A60 (HalpUpdateCoolingPacket.c)
 *     MiDeleteCachedSegment @ 0x140523708 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140524214 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1405242E4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1405248B8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140524AE8 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x140524D8C (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x140524E00 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x14052516C (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140525454 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140525544 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x140526008 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140527084 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140527238 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1405277C0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140527824 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140527A5C (MmSetCommitReleaseEligibility.c)
 *     MiZeroPageFile @ 0x140528280 (MiZeroPageFile.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140529568 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x14052C254 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x140530878 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x14053099C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1405316E8 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x140531F80 (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x1405352C4 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x140537970 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x140537A10 (MiUpdateActiveSubsection.c)
 *     MiBeginHoldingDirtyFaults @ 0x140538D60 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x140538E0C (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x140539634 (MiFinishHoldingDirtyFaults.c)
 *     MiChangingSubsectionProtos @ 0x14053A448 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x14053AF40 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053BFB0 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053C420 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x14053CB80 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x14053CFB4 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14053D104 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x14053D438 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x14053D600 (MiAttemptPageFileReductionApc.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x14053DAF8 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x14053DBC0 (MiExtendPagingFileMaximum.c)
 *     MiFinishPageFileExtension @ 0x14053E120 (MiFinishPageFileExtension.c)
 *     MiIssuePageExtendRequest @ 0x14053E474 (MiIssuePageExtendRequest.c)
 *     MiPageFileNoFreeSpace @ 0x14053E764 (MiPageFileNoFreeSpace.c)
 *     MiQueuePageFileExtension @ 0x14053E92C (MiQueuePageFileExtension.c)
 *     MiUpdatePagingFileMinimum @ 0x14053EA6C (MiUpdatePagingFileMinimum.c)
 *     MiCloneCaptureVadCommit @ 0x14053FB78 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x14054A310 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054A338 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x14054AD90 (MiApplyCommitDelay.c)
 *     MiImageCantMove @ 0x14054F7E0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x14054F880 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x14054FEC8 (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140552A10 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140554620 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x14055490C (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140554C98 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140555E58 (MiLockDownWorkingSet.c)
 *     MiComparePageHash @ 0x140557EA0 (MiComparePageHash.c)
 *     MiClearPartitionPageBitMap @ 0x14055BFB4 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14055C478 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14055CBFC (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x14055CF88 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x14055D0A0 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x14055D6F0 (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x14055D824 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x14055DFD4 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140565B74 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x14056EB94 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056F5B0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x14056F95C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140570CC0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14057CCAC (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14057CF00 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x14057E7A0 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x14057EEDC (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x1405923EC (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405937D4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x14059977C (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x140599840 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14059D13C (ViIrpDatabaseAcquireLockExclusive.c)
 *     EtwpRegisterPartitionPages @ 0x1405AB204 (EtwpRegisterPartitionPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1405AB5D0 (EtwpUnregisterPartitionPages.c)
 *     ExGetBigPoolInfo @ 0x1405AE1FC (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x140993CF0 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x140A479D0 (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A8FE38 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  KIRQL CurrentIrql; // bp
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v8; // rcx
  volatile unsigned int v9; // eax
  __int64 v10; // rcx
  _DWORD *v12; // rcx
  volatile unsigned int v13; // ett
  int v14; // eax
  int v15; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)v1 | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    v6 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v8[6];
        v8[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v12[6] - 1;
          v12[6] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, CurrentIrql);
    }
    v9 = *SpinLock;
    v10 = *(unsigned int *)SpinLock;
    LODWORD(v10) = v10 & 0xBFFFFFFF;
    if ( (_DWORD)v10 != 0x80000000 )
    {
      do
      {
        if ( (v9 & 0x40000000) != 0
          || (v10 = v9,
              LODWORD(v10) = v9 | 0x40000000,
              v13 = v9,
              v9 = _InterlockedCompareExchange(SpinLock, v9 | 0x40000000, v9),
              v13 == v9) )
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v1, v2, SchedulerAssist) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
          v9 = *SpinLock;
        }
        v10 = v9;
        LODWORD(v10) = v9 & 0xBFFFFFFF;
      }
      while ( (v9 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  return CurrentIrql;
}
