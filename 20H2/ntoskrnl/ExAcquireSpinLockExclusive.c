/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x1402D4460
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x1402012C8 (PsIoRateControlOverQuotaNotify.c)
 *     MiFlushRelease @ 0x14022BDC4 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14022D110 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertVadEvent @ 0x14022D57C (MiInsertVadEvent.c)
 *     MiRemoveSecureEntry @ 0x14022EB00 (MiRemoveSecureEntry.c)
 *     MiFreePhysicalView @ 0x140230018 (MiFreePhysicalView.c)
 *     MiReferenceControlAreaPfn @ 0x140232A28 (MiReferenceControlAreaPfn.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiRelockFaultState @ 0x140235F50 (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MmEnforceWorkingSetLimit @ 0x14023CEFC (MmEnforceWorkingSetLimit.c)
 *     MiDeleteStaleCacheMaps @ 0x14023DBCC (MiDeleteStaleCacheMaps.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140248C30 (MiCheckAndUpdateIoAttribution.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14024E10C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14025371C (MmQueryProcessWorkingSetSwapPages.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140254D40 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140255010 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140255670 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140255D74 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiDeleteRotateAndStopFaults @ 0x14025F304 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x14025F904 (MiRotateComplete.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     MiContractPagingFiles @ 0x140262E28 (MiContractPagingFiles.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140263C54 (IoSetDiskIoAttributionOnProcess.c)
 *     PspJobIoRateQueryHistory @ 0x140263D58 (PspJobIoRateQueryHistory.c)
 *     MiAdjustModifiedPageLoad @ 0x140265DCC (MiAdjustModifiedPageLoad.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiSynchronizeSystemVa @ 0x140299220 (MiSynchronizeSystemVa.c)
 *     MiDereferenceControlAreaBySection @ 0x14029BDD8 (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     MiReleaseControlAreaCharges @ 0x14029E6D0 (MiReleaseControlAreaCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x14029F534 (MiDecrementModifiedWriteCount.c)
 *     MiReferenceControlArea @ 0x14029FAA4 (MiReferenceControlArea.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MmPurgeSection @ 0x1402C73C0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiDeleteControlArea @ 0x1402D2584 (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x1402D26AC (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1402D27A4 (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x1402D284C (MiDrainControlAreaWrites.c)
 *     PfSnGetFileInformation @ 0x1402D2A40 (PfSnGetFileInformation.c)
 *     PopPepLockActivityLink @ 0x1402D4288 (PopPepLockActivityLink.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 *     PfSnNameQueryWorker @ 0x1402D4360 (PfSnNameQueryWorker.c)
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402D5630 (MiUpdateSystemProtoPtesTree.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402D57DC (MiUpdateControlAreaCommitCount.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1402E1FEC (SepCleanupMarkedForDeletionEntries.c)
 *     SepInitSingletonEntry @ 0x1402E3510 (SepInitSingletonEntry.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402EE8D8 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402EF218 (IoStopDiskIoAttributionForContext.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiDeleteEmptySubsections @ 0x140300C50 (MiDeleteEmptySubsections.c)
 *     MiUpdateLastSubsectionSize @ 0x140303B98 (MiUpdateLastSubsectionSize.c)
 *     RtlpCSparseBitmapLock @ 0x140307E20 (RtlpCSparseBitmapLock.c)
 *     MiCanFileBeTruncatedInternal @ 0x14030E88C (MiCanFileBeTruncatedInternal.c)
 *     PopFxArmResidentTimer @ 0x14030F13C (PopFxArmResidentTimer.c)
 *     PfSnNameRemove @ 0x140311FA0 (PfSnNameRemove.c)
 *     MmFlushImageSection @ 0x1403159F0 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140315B60 (MiForceSectionClosed.c)
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 *     MiImageUnused @ 0x140319C5C (MiImageUnused.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14031ABD8 (MmStoreFlushOutstandingEvictions.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     MiDereferenceControlArea @ 0x14031EF2C (MiDereferenceControlArea.c)
 *     MiDecrementSubsection @ 0x14031F71C (MiDecrementSubsection.c)
 *     MiInsertMappingNode @ 0x140321208 (MiInsertMappingNode.c)
 *     MmChangeSectionBackingFile @ 0x1403218A4 (MmChangeSectionBackingFile.c)
 *     MiDereferencePageRunsEx @ 0x1403221F0 (MiDereferencePageRunsEx.c)
 *     MiFlushAcquire @ 0x1403225B4 (MiFlushAcquire.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140322B90 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140322C30 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140322CC0 (MiRefPageFileSpaceBitmaps.c)
 *     MiCleanWorkingSet @ 0x140322FC4 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x140327C80 (MiMakeSecureExclusive.c)
 *     MiReleaseFaultCharges @ 0x140327DCC (MiReleaseFaultCharges.c)
 *     MiDeleteCloneZombies @ 0x140327EFC (MiDeleteCloneZombies.c)
 *     MiRetainSubsection @ 0x140328334 (MiRetainSubsection.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14032C444 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiUpdatePerSessionProto @ 0x14032D5A8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14032E38C (MiFlowThroughInsertNode.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14032E798 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiSetSubsectionBase @ 0x14032EF9C (MiSetSubsectionBase.c)
 *     MiWaitForRotateToComplete @ 0x140330980 (MiWaitForRotateToComplete.c)
 *     MiZeroSectionObjectPointer @ 0x140331254 (MiZeroSectionObjectPointer.c)
 *     MmInSwapWorkingSet @ 0x140339228 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x140339B4C (MiOutSwapWorkingSet.c)
 *     MiFindFreePageFileSpace @ 0x14033A15C (MiFindFreePageFileSpace.c)
 *     MiBeginProcessClean @ 0x14033B300 (MiBeginProcessClean.c)
 *     MiOutlawInswaps @ 0x14033B3FC (MiOutlawInswaps.c)
 *     MiSetTrimWhileAgingState @ 0x14033B678 (MiSetTrimWhileAgingState.c)
 *     PopPepTryPowerDownDevice @ 0x14033F734 (PopPepTryPowerDownDevice.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiLockSectionControlArea @ 0x1403544E8 (MiLockSectionControlArea.c)
 *     MiTrimSection @ 0x1403545B0 (MiTrimSection.c)
 *     MiCopyHeaderIfResident @ 0x140355BE4 (MiCopyHeaderIfResident.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140355E04 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140355EBC (MiLockControlAreaSectionExtend.c)
 *     MiAppendSubsectionChain @ 0x14035604C (MiAppendSubsectionChain.c)
 *     MiSectionCreated @ 0x1403563C4 (MiSectionCreated.c)
 *     MiInsertSubsectionNode @ 0x1403566A8 (MiInsertSubsectionNode.c)
 *     MiReleaseImageSection @ 0x140356970 (MiReleaseImageSection.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x14035D7D4 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     MiCombiningInProgress @ 0x140366A08 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiFreeCombineBlock @ 0x14036B480 (MiFreeCombineBlock.c)
 *     PoFxIdleDevice @ 0x14036D564 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 *     FlushLookUpTableBucket @ 0x140375838 (FlushLookUpTableBucket.c)
 *     MiRemoveMappingNode @ 0x14037A3F0 (MiRemoveMappingNode.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14037B9C0 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     MiLocateOldestSecure @ 0x14037DF38 (MiLocateOldestSecure.c)
 *     MiCleanSection @ 0x14037EA4C (MiCleanSection.c)
 *     MiSetControlAreaSystemVa @ 0x14037EBA4 (MiSetControlAreaSystemVa.c)
 *     MiProcessDereferenceList @ 0x140387414 (MiProcessDereferenceList.c)
 *     MmStealTopLevelPage @ 0x140387E78 (MmStealTopLevelPage.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1403882F4 (PopFxIncrementDeviceSleepCount.c)
 *     MiDeleteSessionAddressSpace @ 0x140388E8C (MiDeleteSessionAddressSpace.c)
 *     MiWritePageFileHash @ 0x140389874 (MiWritePageFileHash.c)
 *     MiSessionRemoveImage @ 0x14038A8A8 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x14038B448 (PopPepSurprisePowerOn.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14038C6F0 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     ExDeleteFastResource @ 0x1403936B0 (ExDeleteFastResource.c)
 *     PopFxAllocatePowerIrp @ 0x1403995A0 (PopFxAllocatePowerIrp.c)
 *     ExpAddResourceToSystemResourceList @ 0x1403997AC (ExpAddResourceToSystemResourceList.c)
 *     MiInsertSlabEntry @ 0x140399C5C (MiInsertSlabEntry.c)
 *     PoFxReportDevicePoweredOn @ 0x14039C2E0 (PoFxReportDevicePoweredOn.c)
 *     PopPepUpdateConstraints @ 0x14039CBCC (PopPepUpdateConstraints.c)
 *     MmManageFaultRange @ 0x14039DEC8 (MmManageFaultRange.c)
 *     MiCountSystemImageCommitment @ 0x14039F054 (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14039F308 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     PopFxReleasePowerIrp @ 0x1403A4454 (PopFxReleasePowerIrp.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A5018 (MiAddPrivateFixupEntryForSystemImage.c)
 *     ExCompareExchangeCallBack @ 0x1403ADEBC (ExCompareExchangeCallBack.c)
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 *     MiDeleteBootRange @ 0x1403B3AF8 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B8C50 (MiFreeUnusedPfnPagesDpc.c)
 *     PopPepWaitForDeviceRelease @ 0x1403BD278 (PopPepWaitForDeviceRelease.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BD510 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x1403BD67C (PopPepDeviceStarted.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BD984 (PopFxAssignDeviceToDevNode.c)
 *     MiModifiedPageWriter @ 0x1403BE5C0 (MiModifiedPageWriter.c)
 *     MiUpdatePageFileList @ 0x1403BF258 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x1403BF538 (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x1403C07B0 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C7A60 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     SmFpPreAllocate @ 0x1403C83F4 (SmFpPreAllocate.c)
 *     PspAddPartitionToGlobalList @ 0x1403C9F5C (PspAddPartitionToGlobalList.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1403CAB80 (PoFxRegisterDripsWatchdogCallback.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CB334 (MiInitializeWorkingSetManagerParameters.c)
 *     SepExpandSingletonArrays @ 0x1403CD5D8 (SepExpandSingletonArrays.c)
 *     HalpNumaAddRangeProximity @ 0x1404D0290 (HalpNumaAddRangeProximity.c)
 *     HalpUpdateCoolingPacket @ 0x1404DAFF0 (HalpUpdateCoolingPacket.c)
 *     MiDeleteCachedSegment @ 0x1405270D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140527BE4 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x140527CB4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140528288 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1405284B8 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x14052875C (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x140528B3C (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140528E24 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140528F14 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x1405299D8 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052A868 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052B190 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052B1F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052B42C (MmSetCommitReleaseEligibility.c)
 *     MiZeroPageFile @ 0x14052BC50 (MiZeroPageFile.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14052CF38 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x140534248 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x14053436C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1405350B8 (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x140535950 (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x140538C94 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x14053B340 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x14053B3E0 (MiUpdateActiveSubsection.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053C730 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053C7DC (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053D004 (MiFinishHoldingDirtyFaults.c)
 *     MiChangingSubsectionProtos @ 0x14053DE18 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053F980 (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x140540550 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x140540984 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x140540AD4 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x140540E08 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x140540FD0 (MiAttemptPageFileReductionApc.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x1405414C8 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiExtendPagingFileMaximum @ 0x140541590 (MiExtendPagingFileMaximum.c)
 *     MiFinishPageFileExtension @ 0x140541AF0 (MiFinishPageFileExtension.c)
 *     MiIssuePageExtendRequest @ 0x140541E44 (MiIssuePageExtendRequest.c)
 *     MiPageFileNoFreeSpace @ 0x140542134 (MiPageFileNoFreeSpace.c)
 *     MiQueuePageFileExtension @ 0x1405422FC (MiQueuePageFileExtension.c)
 *     MiUpdatePagingFileMinimum @ 0x14054243C (MiUpdatePagingFileMinimum.c)
 *     MiCloneCaptureVadCommit @ 0x140543548 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x14054DCE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054DD08 (MiLockWorkingSetForLargeMapping.c)
 *     MiApplyCommitDelay @ 0x14054E760 (MiApplyCommitDelay.c)
 *     MiImageCantMove @ 0x1405531B0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140553250 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x140553898 (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405563E0 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140557FF0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1405582DC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140558668 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140559828 (MiLockDownWorkingSet.c)
 *     MiComparePageHash @ 0x14055B870 (MiComparePageHash.c)
 *     MiClearPartitionPageBitMap @ 0x14055F984 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1405605CC (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x140560958 (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x140560A70 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x1405610C0 (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x1405611F4 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x1405619A4 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1405695A8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x1405725C4 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x140572FE0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x14057338C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405746F0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405806DC (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140580930 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x1405821D0 (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x14058290C (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x140595E8C (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140597274 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x14059D21C (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x14059D2E0 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A0BDC (ViIrpDatabaseAcquireLockExclusive.c)
 *     EtwpRegisterPartitionPages @ 0x1405AED64 (EtwpRegisterPartitionPages.c)
 *     EtwpUnregisterPartitionPages @ 0x1405AF130 (EtwpUnregisterPartitionPages.c)
 *     ExGetBigPoolInfo @ 0x1405B1D5C (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x140999E50 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x140A4DC6C (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x140A95B38 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
      v6 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)SpinLock, CurrentIrql, v2, SchedulerAssist);
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
