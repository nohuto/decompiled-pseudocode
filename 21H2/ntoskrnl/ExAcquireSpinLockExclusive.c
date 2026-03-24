/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x14021D060
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1402012D8 (PsIoRateControlOverQuotaNotify.c)
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14021D000 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MmPurgeSection @ 0x140238BA0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x140239170 (MiDeleteSubsectionPages.c)
 *     SepInitSingletonEntry @ 0x140251500 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140251A94 (SepCleanupMarkedForDeletionEntries.c)
 *     MmEnforceWorkingSetLimit @ 0x1402521D8 (MmEnforceWorkingSetLimit.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1402535E0 (IoSetDiskIoAttributionOnProcess.c)
 *     PspJobIoRateQueryHistory @ 0x140253728 (PspJobIoRateQueryHistory.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiRemoveSecureEntry @ 0x14025B5E0 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x14025B9BC (MiInsertVadEvent.c)
 *     PopPepTryPowerDownDevice @ 0x140261410 (PopPepTryPowerDownDevice.c)
 *     PopPepLockActivityLink @ 0x140261F78 (PopPepLockActivityLink.c)
 *     PopFxArmResidentTimer @ 0x140262ABC (PopFxArmResidentTimer.c)
 *     MiDereferenceControlAreaPfnList @ 0x140263AA0 (MiDereferenceControlAreaPfnList.c)
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x14026A714 (MiFindFreePageFileSpace.c)
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiDeleteStaleCacheMaps @ 0x140271BD0 (MiDeleteStaleCacheMaps.c)
 *     MiAdjustModifiedPageLoad @ 0x140272ACC (MiAdjustModifiedPageLoad.c)
 *     MiLockSectionControlArea @ 0x140274944 (MiLockSectionControlArea.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x140287874 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoStartDiskIoAttributionForContext @ 0x14028A250 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x14028AB98 (IoStopDiskIoAttributionForContext.c)
 *     MiContractPagingFiles @ 0x140296C40 (MiContractPagingFiles.c)
 *     MiDereferenceIoPages @ 0x140297968 (MiDereferenceIoPages.c)
 *     MiRotateComplete @ 0x14029804C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x140298624 (MiDeleteRotateAndStopFaults.c)
 *     MiFlushAcquire @ 0x1402A0C88 (MiFlushAcquire.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402A10AC (MiCanFileBeTruncatedInternal.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402A1234 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x1402A12EC (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x1402A147C (MiAppendSubsectionChain.c)
 *     MiInsertSubsectionNode @ 0x1402A15FC (MiInsertSubsectionNode.c)
 *     MiUpdateLastSubsectionSize @ 0x1402A1728 (MiUpdateLastSubsectionSize.c)
 *     MiSetSubsectionBase @ 0x1402A1874 (MiSetSubsectionBase.c)
 *     RtlpCSparseBitmapLock @ 0x1402A4BD0 (RtlpCSparseBitmapLock.c)
 *     MiSetTrimWhileAgingState @ 0x1402AC54C (MiSetTrimWhileAgingState.c)
 *     PfSnNameQueryWorker @ 0x1402B0BD0 (PfSnNameQueryWorker.c)
 *     PfSnNameRemove @ 0x1402B53B4 (PfSnNameRemove.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402B7EC0 (MiUpdateControlAreaCommitCount.c)
 *     MmFlushImageSection @ 0x1402B9080 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1402B91F0 (MiForceSectionClosed.c)
 *     MiFreeSlabEntries @ 0x1402BA910 (MiFreeSlabEntries.c)
 *     MiImageUnused @ 0x1402BBF0C (MiImageUnused.c)
 *     MiDeleteEmptySubsections @ 0x1402BD5BC (MiDeleteEmptySubsections.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402BE19C (MmAdjustWorkingSetSizeEx.c)
 *     MiInsertMappingNode @ 0x1402C2818 (MiInsertMappingNode.c)
 *     MmChangeSectionBackingFile @ 0x1402C3114 (MmChangeSectionBackingFile.c)
 *     MiDereferencePageRunsEx @ 0x1402C34F8 (MiDereferencePageRunsEx.c)
 *     MiStoreSetPageFileRunEvicted @ 0x1402C3C00 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1402C3CA0 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402C3D30 (MiRefPageFileSpaceBitmaps.c)
 *     MiCleanWorkingSet @ 0x1402C4164 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x1402C8E50 (MiMakeSecureExclusive.c)
 *     MiReleaseFaultCharges @ 0x1402C8F9C (MiReleaseFaultCharges.c)
 *     MiDeleteCloneZombies @ 0x1402C915C (MiDeleteCloneZombies.c)
 *     MiRetainSubsection @ 0x1402C9564 (MiRetainSubsection.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1402CDB34 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     MiUpdatePerSessionProto @ 0x1402CF0B8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x1402D006C (MiFlowThroughInsertNode.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1402D04DC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiWaitForRotateToComplete @ 0x1402D2AF0 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x1402D3754 (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x1402D38B8 (MiDereferenceControlArea.c)
 *     MiBeginProcessClean @ 0x1402D5048 (MiBeginProcessClean.c)
 *     MiOutlawInswaps @ 0x1402D5144 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1402D59A4 (MmQueryProcessWorkingSetSwapPages.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D74F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402D77C0 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402D7E20 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402D8524 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x1402E8D30 (MiCopyHeaderIfResident.c)
 *     MiReleaseImageSection @ 0x1402E93C0 (MiReleaseImageSection.c)
 *     MiDecrementSubsection @ 0x1402EE404 (MiDecrementSubsection.c)
 *     MiTrimSection @ 0x1402EF6E0 (MiTrimSection.c)
 *     MiDeleteControlArea @ 0x1402F7AE4 (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x1402F7C0C (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1402F7D04 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x1402F7DAC (MiDrainControlAreaWrites.c)
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402F8260 (MiUpdateSystemProtoPtesTree.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402F8A18 (MiCheckAndUpdateIoAttribution.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402FC9DC (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiRelockFaultState @ 0x1403052A8 (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x140305768 (MiDeleteProcessShadow.c)
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiSynchronizeSystemVa @ 0x140311C40 (MiSynchronizeSystemVa.c)
 *     MiReleaseControlAreaCharges @ 0x1403145C8 (MiReleaseControlAreaCharges.c)
 *     MiDereferenceControlAreaBySection @ 0x140314A6C (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MiFlushRelease @ 0x140315010 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x1403155F0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140315D00 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140315FB0 (MiCheckPurgeAndUpMapCount.c)
 *     MiFreePhysicalView @ 0x140317FB8 (MiFreePhysicalView.c)
 *     MiReferenceControlAreaPfn @ 0x140319F80 (MiReferenceControlAreaPfn.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     PfSnGetFileInformation @ 0x14031BA90 (PfSnGetFileInformation.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiReferenceControlArea @ 0x140356824 (MiReferenceControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x140357408 (MiDecrementModifiedWriteCount.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14035A558 (MmStoreFlushOutstandingEvictions.c)
 *     MmInSwapWorkingSet @ 0x14035C504 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x14035CE28 (MiOutSwapWorkingSet.c)
 *     MiCombiningInProgress @ 0x140366CB8 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiFreeCombineBlock @ 0x14036B730 (MiFreeCombineBlock.c)
 *     PoFxIdleDevice @ 0x14036FB34 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036FCD0 (PopFxActivateDevice.c)
 *     FlushLookUpTableBucket @ 0x140375A48 (FlushLookUpTableBucket.c)
 *     MiRemoveMappingNode @ 0x14037A5F0 (MiRemoveMappingNode.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14037BC10 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiLocateOldestSecure @ 0x14037E2C8 (MiLocateOldestSecure.c)
 *     MiCleanSection @ 0x14037F28C (MiCleanSection.c)
 *     MiSetControlAreaSystemVa @ 0x14037F3E4 (MiSetControlAreaSystemVa.c)
 *     MiProcessDereferenceList @ 0x140387B6C (MiProcessDereferenceList.c)
 *     MmStealTopLevelPage @ 0x1403885D8 (MmStealTopLevelPage.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140388A54 (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x1403895EC (MiDeleteSessionAddressSpace.c)
 *     MiWritePageFileHash @ 0x140389FC4 (MiWritePageFileHash.c)
 *     MiSessionRemoveImage @ 0x14038AFF8 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x14038BB98 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14038CE10 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     ExDeleteFastResource @ 0x140393B20 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x140399A10 (PopFxAllocatePowerIrp.c)
 *     ExpAddResourceToSystemResourceList @ 0x140399C1C (ExpAddResourceToSystemResourceList.c)
 *     MiInsertSlabEntry @ 0x14039A0CC (MiInsertSlabEntry.c)
 *     MmManageFaultRange @ 0x14039DB08 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039EF48 (MiFreePrivateFixupEntryForSystemImage.c)
 *     PoFxReportDevicePoweredOn @ 0x14039FC80 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x1403A056C (PopPepUpdateConstraints.c)
 *     MiSessionInsertImage @ 0x1403A2974 (MiSessionInsertImage.c)
 *     PopFxReleasePowerIrp @ 0x1403A4D14 (PopFxReleasePowerIrp.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A58D8 (MiAddPrivateFixupEntryForSystemImage.c)
 *     ExCompareExchangeCallBack @ 0x1403A7E6C (ExCompareExchangeCallBack.c)
 *     MiZeroLargePageThread @ 0x1403B3D10 (MiZeroLargePageThread.c)
 *     MiDeleteBootRange @ 0x1403B5178 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B8AEC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B9650 (MiFreeUnusedPfnPagesDpc.c)
 *     MiModifiedPageWriter @ 0x1403BDB20 (MiModifiedPageWriter.c)
 *     PopPepWaitForDeviceRelease @ 0x1403BE59C (PopPepWaitForDeviceRelease.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BE830 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x1403BE99C (PopPepDeviceStarted.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BECA4 (PopFxAssignDeviceToDevNode.c)
 *     MiUpdatePageFileList @ 0x1403BFAAC (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x1403BFD8C (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x1403C1000 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C87F0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMapMdlCommon @ 0x1403C8C44 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x1403C8F94 (SmFpPreAllocate.c)
 *     PspAddPartitionToGlobalList @ 0x1403CA8FC (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1403CB550 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBD04 (MiInitializeWorkingSetManagerParameters.c)
 *     SepExpandSingletonArrays @ 0x1403CDFC0 (SepExpandSingletonArrays.c)
 *     HalpNumaAddRangeProximity @ 0x1404D1C60 (HalpNumaAddRangeProximity.c)
 *     HalpUpdateCoolingPacket @ 0x1404DCA00 (HalpUpdateCoolingPacket.c)
 *     MiDeleteCachedSegment @ 0x140528BB8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1405296C4 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x140529794 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529D68 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140529F98 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x14052A23C (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x14052A2B0 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x14052A61C (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A924 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14052AA14 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x14052AB70 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x14052B4D8 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C368 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C554 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C708 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052CC90 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CCF4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CF2C (MmSetCommitReleaseEligibility.c)
 *     MiZeroPageFile @ 0x14052D750 (MiZeroPageFile.c)
 *     MiInitializeDynamicPfns @ 0x14052E5A0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14052EA38 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x140531724 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x140535D48 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x140535E6C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140536BB8 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x140537450 (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x14053A794 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x14053CE40 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x14053CEE0 (MiUpdateActiveSubsection.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053E230 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E2DC (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053EB04 (MiFinishHoldingDirtyFaults.c)
 *     MiChangingSubsectionProtos @ 0x14053F918 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140541480 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405418F0 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x140542050 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x140542484 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1405425D4 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x140542908 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x140542AD0 (MiAttemptPageFileReductionApc.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x140542FC8 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x140543090 (MiExtendPagingFileMaximum.c)
 *     MiFinishPageFileExtension @ 0x1405435F0 (MiFinishPageFileExtension.c)
 *     MiIssuePageExtendRequest @ 0x140543944 (MiIssuePageExtendRequest.c)
 *     MiPageFileNoFreeSpace @ 0x140543C34 (MiPageFileNoFreeSpace.c)
 *     MiQueuePageFileExtension @ 0x140543DFC (MiQueuePageFileExtension.c)
 *     MiUpdatePagingFileMinimum @ 0x140543F3C (MiUpdatePagingFileMinimum.c)
 *     MiCloneCaptureVadCommit @ 0x14054504C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x14054F7B0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054F7D8 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x140550230 (MiApplyCommitDelay.c)
 *     MiImageCantMove @ 0x140554C80 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140554D20 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x140555368 (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140557EB0 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559AC0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140559DAC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A138 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x14055B2F8 (MiLockDownWorkingSet.c)
 *     MiComparePageHash @ 0x14055D340 (MiComparePageHash.c)
 *     MiClearPartitionPageBitMap @ 0x140561454 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14056209C (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x140562428 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x140562540 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x140562B90 (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x140562CC4 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x140562E10 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x140563474 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056AFC0 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x140573FD4 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x1405749F0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x140574D9C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576100 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405820EC (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140582340 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x140583BE0 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x14058431C (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x1405978BC (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140598CA4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x14059EC4C (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x14059ED10 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A260C (ViIrpDatabaseAcquireLockExclusive.c)
 *     EtwpRegisterPartitionPages @ 0x1405B0764 (EtwpRegisterPartitionPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1405B0B30 (EtwpUnregisterPartitionPages.c)
 *     ExGetBigPoolInfo @ 0x1405B375C (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x140997040 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x140A4F20C (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A929A8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402315C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x140390140 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390F20 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
