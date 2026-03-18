/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x14023C6E0
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1402012C8 (PsIoRateControlOverQuotaNotify.c)
 *     MiSetTrimWhileAgingState @ 0x140202F1C (MiSetTrimWhileAgingState.c)
 *     MiDeleteStaleCacheMaps @ 0x1402032E0 (MiDeleteStaleCacheMaps.c)
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiLockSectionControlArea @ 0x14022F9DC (MiLockSectionControlArea.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402356D8 (MiCheckAndUpdateIoAttribution.c)
 *     PopFxArmResidentTimer @ 0x14023A38C (PopFxArmResidentTimer.c)
 *     PfSnNameRemove @ 0x14023A89C (PfSnNameRemove.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14023AA8C (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14023B628 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023B900 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14023BD00 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     PopPepLockActivityLink @ 0x14023C510 (PopPepLockActivityLink.c)
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 *     PfSnNameQueryWorker @ 0x14023C5E0 (PfSnNameQueryWorker.c)
 *     MiAdjustModifiedPageLoad @ 0x14024012C (MiAdjustModifiedPageLoad.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiFreePhysicalView @ 0x14027ABF8 (MiFreePhysicalView.c)
 *     PfSnGetFileInformation @ 0x140281140 (PfSnGetFileInformation.c)
 *     MiDecrementModifiedWriteCount @ 0x14028170C (MiDecrementModifiedWriteCount.c)
 *     MiReferenceControlArea @ 0x140281B54 (MiReferenceControlArea.c)
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiInsertVadEvent @ 0x1402A120C (MiInsertVadEvent.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1402A23D0 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1402A2680 (MiCheckPurgeAndUpMapCount.c)
 *     MiFlushRelease @ 0x1402A3248 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x1402A3888 (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiReleaseControlAreaCharges @ 0x1402A42A0 (MiReleaseControlAreaCharges.c)
 *     MiRemoveSecureEntry @ 0x1402A4930 (MiRemoveSecureEntry.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiReferenceControlAreaPfn @ 0x1402B875C (MiReferenceControlAreaPfn.c)
 *     MiDeleteControlArea @ 0x1402B9578 (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x1402B96A0 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1402B9798 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x1402B9840 (MiDrainControlAreaWrites.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402BB49C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCreatePrototypePtes @ 0x1402BC59C (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402BCBAC (MiUpdateControlAreaCommitCount.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiDeleteEmptySubsections @ 0x1402BE850 (MiDeleteEmptySubsections.c)
 *     MiCopyHeaderIfResident @ 0x1402BEB60 (MiCopyHeaderIfResident.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402BEE3C (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x1402BEEF4 (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x1402BF084 (MiAppendSubsectionChain.c)
 *     MiSectionCreated @ 0x1402C00A4 (MiSectionCreated.c)
 *     MiInsertSubsectionNode @ 0x1402C0388 (MiInsertSubsectionNode.c)
 *     MiReleaseImageSection @ 0x1402C083C (MiReleaseImageSection.c)
 *     MmInSwapWorkingSet @ 0x1402CBE58 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x1402CC77C (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1402CC91C (MiBeginProcessClean.c)
 *     MiOutlawInswaps @ 0x1402CCA18 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402CCAAC (MmQueryProcessWorkingSetSwapPages.c)
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402CFE0C (MiCanFileBeTruncatedInternal.c)
 *     MiDecrementSubsection @ 0x1402D02E8 (MiDecrementSubsection.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1402D4688 (IoSetDiskIoAttributionOnProcess.c)
 *     MiContractPagingFiles @ 0x1402D4CA0 (MiContractPagingFiles.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x1402D9A34 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402DAC50 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402DB598 (IoStopDiskIoAttributionForContext.c)
 *     PspJobIoRateQueryHistory @ 0x1402E12B0 (PspJobIoRateQueryHistory.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x1402FAECC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402FB4A4 (MiDeleteRotateAndStopFaults.c)
 *     MmFlushImageSection @ 0x140306E90 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140307000 (MiForceSectionClosed.c)
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 *     MiImageUnused @ 0x14030B498 (MiImageUnused.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14030C454 (MmStoreFlushOutstandingEvictions.c)
 *     PopPepTryPowerDownDevice @ 0x14030D134 (PopPepTryPowerDownDevice.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     MiInsertMappingNode @ 0x140312A20 (MiInsertMappingNode.c)
 *     MmChangeSectionBackingFile @ 0x140313464 (MmChangeSectionBackingFile.c)
 *     MiDereferencePageRunsEx @ 0x140313848 (MiDereferencePageRunsEx.c)
 *     MiFlushAcquire @ 0x140313AC8 (MiFlushAcquire.c)
 *     MiStoreSetPageFileRunEvicted @ 0x1403142F0 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140314390 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140314420 (MiRefPageFileSpaceBitmaps.c)
 *     MiCleanWorkingSet @ 0x140314724 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x140319690 (MiMakeSecureExclusive.c)
 *     MiReleaseFaultCharges @ 0x1403197DC (MiReleaseFaultCharges.c)
 *     MiDeleteCloneZombies @ 0x1403199AC (MiDeleteCloneZombies.c)
 *     MiRetainSubsection @ 0x14031A044 (MiRetainSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x14031B464 (MiUpdateLastSubsectionSize.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14031DDF4 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiUpdatePerSessionProto @ 0x14031F110 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14031FD1C (MiFlowThroughInsertNode.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140320100 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiSetSubsectionBase @ 0x140320A4C (MiSetSubsectionBase.c)
 *     MiWaitForRotateToComplete @ 0x1403222E0 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x140322A2C (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x140323908 (MiDereferenceControlArea.c)
 *     SepInitSingletonEntry @ 0x140339310 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140339CCC (SepCleanupMarkedForDeletionEntries.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiFindFreePageFileSpace @ 0x14034CC50 (MiFindFreePageFileSpace.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     RtlpCSparseBitmapLock @ 0x14036195C (RtlpCSparseBitmapLock.c)
 *     MiCombiningInProgress @ 0x140364068 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiFreeCombineBlock @ 0x140368AE0 (MiFreeCombineBlock.c)
 *     PoFxIdleDevice @ 0x14036B4B4 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036B650 (PopFxActivateDevice.c)
 *     FlushLookUpTableBucket @ 0x140372368 (FlushLookUpTableBucket.c)
 *     MiRemoveMappingNode @ 0x140377740 (MiRemoveMappingNode.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140378ED0 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiLocateOldestSecure @ 0x14037B488 (MiLocateOldestSecure.c)
 *     MiCleanSection @ 0x14037C0AC (MiCleanSection.c)
 *     MiSetControlAreaSystemVa @ 0x14037C204 (MiSetControlAreaSystemVa.c)
 *     MiProcessDereferenceList @ 0x1403842FC (MiProcessDereferenceList.c)
 *     MmStealTopLevelPage @ 0x140384D68 (MmStealTopLevelPage.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1403851E4 (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x140385D7C (MiDeleteSessionAddressSpace.c)
 *     MiWritePageFileHash @ 0x140386744 (MiWritePageFileHash.c)
 *     MiSessionRemoveImage @ 0x140387778 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x140388238 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1403893E0 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     ExDeleteFastResource @ 0x140390680 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x140396510 (PopFxAllocatePowerIrp.c)
 *     ExpAddResourceToSystemResourceList @ 0x14039671C (ExpAddResourceToSystemResourceList.c)
 *     MiInsertSlabEntry @ 0x140396BCC (MiInsertSlabEntry.c)
 *     MmManageFaultRange @ 0x14039A5E8 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039BA28 (MiFreePrivateFixupEntryForSystemImage.c)
 *     PoFxReportDevicePoweredOn @ 0x14039C760 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 *     MiSessionInsertImage @ 0x14039F454 (MiSessionInsertImage.c)
 *     PopFxReleasePowerIrp @ 0x1403A17F4 (PopFxReleasePowerIrp.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A24C8 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiDeleteBootRange @ 0x1403AB508 (MiDeleteBootRange.c)
 *     ExCompareExchangeCallBack @ 0x1403AF60C (ExCompareExchangeCallBack.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 *     MiMapWithLargePages @ 0x1403B48CC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B5380 (MiFreeUnusedPfnPagesDpc.c)
 *     PopPepWaitForDeviceRelease @ 0x1403B9AB4 (PopPepWaitForDeviceRelease.c)
 *     PoFxStartDevicePowerManagement @ 0x1403B9D40 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x1403B9EAC (PopPepDeviceStarted.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BA1B4 (PopFxAssignDeviceToDevNode.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiUpdatePageFileList @ 0x1403BBAB8 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x1403BBD98 (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C4100 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x1403C4A94 (SmFpPreAllocate.c)
 *     PspAddPartitionToGlobalList @ 0x1403C650C (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1403C7130 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403C78E4 (MiInitializeWorkingSetManagerParameters.c)
 *     SepExpandSingletonArrays @ 0x1403C9BB8 (SepExpandSingletonArrays.c)
 *     HalpNumaAddRangeProximity @ 0x1404CC840 (HalpNumaAddRangeProximity.c)
 *     HalpUpdateCoolingPacket @ 0x1404D7550 (HalpUpdateCoolingPacket.c)
 *     MiDeleteCachedSegment @ 0x1405230B8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140523BC4 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x140523C94 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140524268 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140524498 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x14052473C (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x140524B1C (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140524E04 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140524EF4 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x1405259B8 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526848 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140526A34 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140526BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x140527170 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1405271D4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052740C (MmSetCommitReleaseEligibility.c)
 *     MiZeroPageFile @ 0x140527C30 (MiZeroPageFile.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140528F18 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x140530228 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x14053034C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140531098 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x140531930 (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x140534C74 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x140537320 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1405373C0 (MiUpdateActiveSubsection.c)
 *     MiBeginHoldingDirtyFaults @ 0x140538710 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1405387BC (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x140538FE4 (MiFinishHoldingDirtyFaults.c)
 *     MiChangingSubsectionProtos @ 0x140539DF8 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053B960 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053BDD0 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x14053C530 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x14053C964 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14053CAB4 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x14053CDE8 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x14053CFB0 (MiAttemptPageFileReductionApc.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x14053D4A8 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x14053D570 (MiExtendPagingFileMaximum.c)
 *     MiFinishPageFileExtension @ 0x14053DAD0 (MiFinishPageFileExtension.c)
 *     MiIssuePageExtendRequest @ 0x14053DE24 (MiIssuePageExtendRequest.c)
 *     MiPageFileNoFreeSpace @ 0x14053E114 (MiPageFileNoFreeSpace.c)
 *     MiQueuePageFileExtension @ 0x14053E2DC (MiQueuePageFileExtension.c)
 *     MiUpdatePagingFileMinimum @ 0x14053E41C (MiUpdatePagingFileMinimum.c)
 *     MiCloneCaptureVadCommit @ 0x14053F528 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x140549CC0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140549CE8 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x14054A740 (MiApplyCommitDelay.c)
 *     MiImageCantMove @ 0x14054F190 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x14054F230 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x14054F878 (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405523C0 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140553FD0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1405542BC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140554648 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140555808 (MiLockDownWorkingSet.c)
 *     MiComparePageHash @ 0x140557850 (MiComparePageHash.c)
 *     MiClearPartitionPageBitMap @ 0x14055B964 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14055C5AC (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x14055C938 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x14055CA50 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x14055D0A0 (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x14055D1D4 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x14055D984 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140565524 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x14056E544 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056EF60 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x14056F30C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140570670 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14057C66C (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14057C8C0 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x14057E160 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x14057E89C (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x140591CFC (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1405930E4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x14059908C (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x140599150 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14059CA4C (ViIrpDatabaseAcquireLockExclusive.c)
 *     EtwpRegisterPartitionPages @ 0x1405AAB14 (EtwpRegisterPartitionPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1405AAEE0 (EtwpUnregisterPartitionPages.c)
 *     ExGetBigPoolInfo @ 0x1405ADADC (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x1409926B0 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x140A42174 (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A90848 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
  __int64 v16; // [rsp+20h] [rbp-8h]

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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v1, v2, SchedulerAssist, v16) )
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
