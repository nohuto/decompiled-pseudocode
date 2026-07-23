/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x1402C1960
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1402012D8 (PsIoRateControlOverQuotaNotify.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x140204A14 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402073F0 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x140207D38 (IoStopDiskIoAttributionForContext.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x140218ACC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402190A4 (MiDeleteRotateAndStopFaults.c)
 *     MiFlushAcquire @ 0x14021E208 (MiFlushAcquire.c)
 *     MiCanFileBeTruncatedInternal @ 0x14021E62C (MiCanFileBeTruncatedInternal.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14021E7B4 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x14021E86C (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x14021E9FC (MiAppendSubsectionChain.c)
 *     MiInsertSubsectionNode @ 0x14021EB7C (MiInsertSubsectionNode.c)
 *     MiUpdateLastSubsectionSize @ 0x14021ECA8 (MiUpdateLastSubsectionSize.c)
 *     MiSetSubsectionBase @ 0x14021EDF4 (MiSetSubsectionBase.c)
 *     RtlpCSparseBitmapLock @ 0x140222010 (RtlpCSparseBitmapLock.c)
 *     PfSnNameQueryWorker @ 0x14022EF30 (PfSnNameQueryWorker.c)
 *     PfSnNameRemove @ 0x140233564 (PfSnNameRemove.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402360D0 (MiUpdateControlAreaCommitCount.c)
 *     MmFlushImageSection @ 0x140237290 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140237400 (MiForceSectionClosed.c)
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 *     MiImageUnused @ 0x14023A11C (MiImageUnused.c)
 *     MiDeleteEmptySubsections @ 0x14023BC6C (MiDeleteEmptySubsections.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     MiInsertMappingNode @ 0x140240CB8 (MiInsertMappingNode.c)
 *     MmChangeSectionBackingFile @ 0x140241634 (MmChangeSectionBackingFile.c)
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140242180 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140242220 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402422B0 (MiRefPageFileSpaceBitmaps.c)
 *     MiCleanWorkingSet @ 0x1402426E4 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x1402476B0 (MiMakeSecureExclusive.c)
 *     MiReleaseFaultCharges @ 0x1402477FC (MiReleaseFaultCharges.c)
 *     MiDeleteCloneZombies @ 0x140247A3C (MiDeleteCloneZombies.c)
 *     MiRetainSubsection @ 0x140247E44 (MiRetainSubsection.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14024C034 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiUpdatePerSessionProto @ 0x14024D5B8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14024E3EC (MiFlowThroughInsertNode.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14024E85C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiSetTrimWhileAgingState @ 0x140250EBC (MiSetTrimWhileAgingState.c)
 *     MiWaitForRotateToComplete @ 0x140251070 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x140251A4C (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x140251BB8 (MiDereferenceControlArea.c)
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiDeleteStaleCacheMaps @ 0x14025FB70 (MiDeleteStaleCacheMaps.c)
 *     MiAdjustModifiedPageLoad @ 0x140260A6C (MiAdjustModifiedPageLoad.c)
 *     MiLockSectionControlArea @ 0x1402628E4 (MiLockSectionControlArea.c)
 *     MiContractPagingFiles @ 0x140273D28 (MiContractPagingFiles.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140274B54 (IoSetDiskIoAttributionOnProcess.c)
 *     PspJobIoRateQueryHistory @ 0x140274C98 (PspJobIoRateQueryHistory.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiRemoveSecureEntry @ 0x14027CB50 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x14027CF2C (MiInsertVadEvent.c)
 *     PopPepTryPowerDownDevice @ 0x1402828E0 (PopPepTryPowerDownDevice.c)
 *     PopPepLockActivityLink @ 0x140283448 (PopPepLockActivityLink.c)
 *     PopFxArmResidentTimer @ 0x140283F8C (PopFxArmResidentTimer.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x140286CF0 (MmQueryProcessWorkingSetSwapPages.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140288840 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140288B10 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140289170 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140289874 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x14029A080 (MiCopyHeaderIfResident.c)
 *     MiReleaseImageSection @ 0x14029A710 (MiReleaseImageSection.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14029F2F8 (MmStoreFlushOutstandingEvictions.c)
 *     MiBeginProcessClean @ 0x1402A0890 (MiBeginProcessClean.c)
 *     MiOutlawInswaps @ 0x1402A098C (MiOutlawInswaps.c)
 *     MmInSwapWorkingSet @ 0x1402A1434 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x1402A1D58 (MiOutSwapWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     SepInitSingletonEntry @ 0x1402F5D10 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1402F62A4 (SepCleanupMarkedForDeletionEntries.c)
 *     MmEnforceWorkingSetLimit @ 0x1402F69E8 (MmEnforceWorkingSetLimit.c)
 *     MiDecrementSubsection @ 0x1402F9150 (MiDecrementSubsection.c)
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x14030295C (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x140302A54 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x140302AFC (MiDrainControlAreaWrites.c)
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140303768 (MiCheckAndUpdateIoAttribution.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14030772C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiReleaseControlAreaCharges @ 0x14031F318 (MiReleaseControlAreaCharges.c)
 *     MiDereferenceControlAreaBySection @ 0x14031F7BC (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiFlushRelease @ 0x14031FD60 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140320D00 (MiCheckPurgeAndUpMapCount.c)
 *     MiFreePhysicalView @ 0x140322D08 (MiFreePhysicalView.c)
 *     MiReferenceControlAreaPfn @ 0x140324CD0 (MiReferenceControlAreaPfn.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     PfSnGetFileInformation @ 0x1403267E0 (PfSnGetFileInformation.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x140362158 (MiDecrementModifiedWriteCount.c)
 *     MiCombiningInProgress @ 0x140366E68 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiFreeCombineBlock @ 0x14036B8E0 (MiFreeCombineBlock.c)
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 *     FlushLookUpTableBucket @ 0x140375598 (FlushLookUpTableBucket.c)
 *     MiRemoveMappingNode @ 0x14037A140 (MiRemoveMappingNode.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14037B760 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiLocateOldestSecure @ 0x14037DE18 (MiLocateOldestSecure.c)
 *     MiCleanSection @ 0x14037EDDC (MiCleanSection.c)
 *     MiSetControlAreaSystemVa @ 0x14037EF34 (MiSetControlAreaSystemVa.c)
 *     MiProcessDereferenceList @ 0x140387CBC (MiProcessDereferenceList.c)
 *     MmStealTopLevelPage @ 0x140388728 (MmStealTopLevelPage.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140388BA4 (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x14038973C (MiDeleteSessionAddressSpace.c)
 *     MiWritePageFileHash @ 0x14038A114 (MiWritePageFileHash.c)
 *     MiSessionRemoveImage @ 0x14038B148 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x14038BCE8 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14038CF60 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     ExDeleteFastResource @ 0x140393C70 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x140399B60 (PopFxAllocatePowerIrp.c)
 *     ExpAddResourceToSystemResourceList @ 0x140399D6C (ExpAddResourceToSystemResourceList.c)
 *     MiInsertSlabEntry @ 0x14039A21C (MiInsertSlabEntry.c)
 *     MmManageFaultRange @ 0x14039DC58 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14039EDE4 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039F098 (MiFreePrivateFixupEntryForSystemImage.c)
 *     PoFxReportDevicePoweredOn @ 0x14039FDD0 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 *     MiSessionInsertImage @ 0x1403A2AC4 (MiSessionInsertImage.c)
 *     PopFxReleasePowerIrp @ 0x1403A4E64 (PopFxReleasePowerIrp.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A5A28 (MiAddPrivateFixupEntryForSystemImage.c)
 *     ExCompareExchangeCallBack @ 0x1403A8BFC (ExCompareExchangeCallBack.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 *     MiDeleteBootRange @ 0x1403B52E8 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B97C0 (MiFreeUnusedPfnPagesDpc.c)
 *     PopPepWaitForDeviceRelease @ 0x1403BDEF8 (PopPepWaitForDeviceRelease.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BE190 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x1403BE2FC (PopPepDeviceStarted.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BE604 (PopFxAssignDeviceToDevNode.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 *     MiUpdatePageFileList @ 0x1403BFED8 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x1403C01B8 (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C8990 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x1403C9134 (SmFpPreAllocate.c)
 *     PspAddPartitionToGlobalList @ 0x1403CAA9C (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1403CB6C0 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBE74 (MiInitializeWorkingSetManagerParameters.c)
 *     SepExpandSingletonArrays @ 0x1403CE130 (SepExpandSingletonArrays.c)
 *     HalpNumaAddRangeProximity @ 0x1404D1EA0 (HalpNumaAddRangeProximity.c)
 *     HalpUpdateCoolingPacket @ 0x1404DCC40 (HalpUpdateCoolingPacket.c)
 *     MiDeleteCachedSegment @ 0x140528DF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140529904 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1405299D4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529FA8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14052A1D8 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x14052A47C (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x14052A85C (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14052AC54 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x14052ADB0 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x14052B718 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C5A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C794 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C948 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052CED0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CF34 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052D16C (MmSetCommitReleaseEligibility.c)
 *     MiZeroPageFile @ 0x14052D990 (MiZeroPageFile.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14052EC78 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x140535F88 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x1405360AC (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140536DF8 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x140537690 (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x14053A9D4 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x14053D080 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x14053D120 (MiUpdateActiveSubsection.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053E470 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E51C (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053ED44 (MiFinishHoldingDirtyFaults.c)
 *     MiChangingSubsectionProtos @ 0x14053FB58 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405416C0 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x140542290 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x1405426C4 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x140542814 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x140542B48 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x140542D10 (MiAttemptPageFileReductionApc.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x140543208 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x1405432D0 (MiExtendPagingFileMaximum.c)
 *     MiFinishPageFileExtension @ 0x140543830 (MiFinishPageFileExtension.c)
 *     MiIssuePageExtendRequest @ 0x140543B84 (MiIssuePageExtendRequest.c)
 *     MiPageFileNoFreeSpace @ 0x140543E74 (MiPageFileNoFreeSpace.c)
 *     MiQueuePageFileExtension @ 0x14054403C (MiQueuePageFileExtension.c)
 *     MiUpdatePagingFileMinimum @ 0x14054417C (MiUpdatePagingFileMinimum.c)
 *     MiCloneCaptureVadCommit @ 0x14054528C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x14054F9F0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054FA18 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x140550470 (MiApplyCommitDelay.c)
 *     MiImageCantMove @ 0x140554EC0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140554F60 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x1405555A8 (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405580F0 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559D00 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140559FEC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A378 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x14055B538 (MiLockDownWorkingSet.c)
 *     MiComparePageHash @ 0x14055D580 (MiComparePageHash.c)
 *     MiClearPartitionPageBitMap @ 0x140561694 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x140562668 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x140562780 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x140562DD0 (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x140562F04 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x1405636B4 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056B200 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x140574214 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x140574C30 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576340 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14058231C (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140582570 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x140583E10 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x14058454C (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x140597AEC (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140598ED4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x14059EE7C (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x14059EF40 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A283C (ViIrpDatabaseAcquireLockExclusive.c)
 *     EtwpRegisterPartitionPages @ 0x1405B0994 (EtwpRegisterPartitionPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1405B0D60 (EtwpUnregisterPartitionPages.c)
 *     ExGetBigPoolInfo @ 0x1405B398C (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x140998040 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x140A5020C (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A939A8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
