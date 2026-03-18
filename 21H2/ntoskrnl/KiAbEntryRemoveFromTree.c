/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14034EE30
 * Callers:
 *     CcChangeBackingFileObject @ 0x140201AC4 (CcChangeBackingFileObject.c)
 *     PspUnlockProcessListExclusive @ 0x140203428 (PspUnlockProcessListExclusive.c)
 *     RtlpHpFixedVsAllocate @ 0x14020DB50 (RtlpHpFixedVsAllocate.c)
 *     SepDeleteSessionLowboxEntries @ 0x1402235F4 (SepDeleteSessionLowboxEntries.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402314B0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140236A00 (RtlpHpSegMgrCommitInitiate.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140236F54 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237230 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14023C3B4 (CcBoostLowPriorityWorkerThread.c)
 *     RtlpHpVaMgrAlloc @ 0x14023CDE0 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x14023D6AC (RtlpHpVaMgrCtxFree.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14023E59C (RtlRemoveDynamicFunctionTable.c)
 *     RtlpHpSegMgrCommitComplete @ 0x140242FF4 (RtlpHpSegMgrCommitComplete.c)
 *     PspUnlockQuotaExpansion @ 0x140243794 (PspUnlockQuotaExpansion.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402491D0 (RtlpHpSegMgrVaCtxInsert.c)
 *     MiObtainSessionVa @ 0x14024D180 (MiObtainSessionVa.c)
 *     EtwpFreeCompression @ 0x14024E0F0 (EtwpFreeCompression.c)
 *     PspUnlockProcessExclusive @ 0x14025302C (PspUnlockProcessExclusive.c)
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     MiDereferenceExtendInfo @ 0x1402583CC (MiDereferenceExtendInfo.c)
 *     MiReleaseSessionVa @ 0x14025A408 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsFree @ 0x14025BC50 (RtlpHpFixedVsFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14025C4BC (ExQueryHandleExceptionsPermanency.c)
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140260A44 (SmpKeyedStoreSetVaRanges.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     CcAmILowPriorityWriter @ 0x140282258 (CcAmILowPriorityWriter.c)
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     CcApplyLowIoPriorityToThread @ 0x140288EE4 (CcApplyLowIoPriorityToThread.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14028DA5C (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     MiDeleteEmptyPageTables @ 0x14029F6FC (MiDeleteEmptyPageTables.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14029FB3C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorAllocate @ 0x14029FDC4 (ExpSaAllocatorAllocate.c)
 *     SmpKeyedStoreEntryGet @ 0x1402A1124 (SmpKeyedStoreEntryGet.c)
 *     ExReleasePushLockExclusiveEx @ 0x1402AC630 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     MiUnlockLoaderEntry @ 0x1402D94D8 (MiUnlockLoaderEntry.c)
 *     MiUnlockDriverMappings @ 0x1402DC188 (MiUnlockDriverMappings.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1402F7118 (PspUnlockThreadSecurityExclusive.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14030B538 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiSetVadDeleted @ 0x14030FC20 (MiSetVadDeleted.c)
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 *     MmResourcesAvailable @ 0x14034BAE0 (MmResourcesAvailable.c)
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14034F7F0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140350070 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140350FA0 (RtlpHpSegPageRangeCoalesce.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x140351DF0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExpDeleteTimer @ 0x140356E00 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140359C70 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14036071C (MiUnlockDynamicMemoryExclusive.c)
 *     ExpSaAllocatorFree @ 0x140360FD4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140361290 (ExpSaPageGroupFreeMemory.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140362714 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1403635BC (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14036424C (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403650F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140365834 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlInsertDynamicFunctionTable @ 0x14036858C (RtlInsertDynamicFunctionTable.c)
 *     KsepShimDbChanged @ 0x140368A88 (KsepShimDbChanged.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     RtlpHpSegContextCompact @ 0x14036DD30 (RtlpHpSegContextCompact.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14036E5F0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpHeapExtendContext @ 0x14036F04C (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14036F354 (RtlpHpAcquireReleaseLockExclusive.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14037039C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLargeFree @ 0x140370928 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x140375248 (PspStorageEmptyArrayNonReadonly.c)
 *     MmOutSwapVirtualAddresses @ 0x140375974 (MmOutSwapVirtualAddresses.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1403795D4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140379C88 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14037A04C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14037C144 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14037C880 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037EEA8 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14037FDA0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     FlushLookUpTableBucket @ 0x140386944 (FlushLookUpTableBucket.c)
 *     KiAbCrossThreadRelease @ 0x14039CE58 (KiAbCrossThreadRelease.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403A0424 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x1403AAEF4 (EtwpUpdateSelectedGroupMasks.c)
 *     MiFreeUnusedPfnPages @ 0x1403B7CB0 (MiFreeUnusedPfnPages.c)
 *     PopPepRemoveDevice @ 0x1403B9378 (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1403B9C64 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x1403BA108 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1403BA838 (PopFxRemoveDevice.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403C0554 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     MiLateInitializeSystemCache @ 0x1403C3BF8 (MiLateInitializeSystemCache.c)
 *     EmpQueueRuleUpdateState @ 0x1403C45F0 (EmpQueueRuleUpdateState.c)
 *     EmpRuleUpdateWorkerThread @ 0x1403D49C0 (EmpRuleUpdateWorkerThread.c)
 *     SshpSetCollectionActive @ 0x1403DB4A4 (SshpSetCollectionActive.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403DEEAC (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x1403DF20C (PspUnlockQuotaListExclusive.c)
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x140510DA4 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 *     HalpLeaveDmaDomain @ 0x14051541C (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x14051A460 (HalpIommuBlockDevice.c)
 *     IommuBeginDeviceReset @ 0x140524EB0 (IommuBeginDeviceReset.c)
 *     IommuFinalizeDeviceReset @ 0x140525E80 (IommuFinalizeDeviceReset.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140528900 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x140529030 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405685CC (KeUpdateDpcWatchdogConfiguration.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x140583A70 (MiUnlockDynamicMemoryNestedExclusive.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x140583BB8 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1405882D0 (MiMarkHugePfnGood.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiMarkSystemVaAllocated @ 0x140599050 (MiMarkSystemVaAllocated.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14059FECC (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x1405A44FC (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x1405AB148 (MiIncrementAweMapCount.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405B7340 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x1405BDB0C (MiClearPartitionPageBitMap.c)
 *     PfLockExclusiveRelease @ 0x1405C6010 (PfLockExclusiveRelease.c)
 *     PfTSetTraceWorkerPriority @ 0x1405C6380 (PfTSetTraceWorkerPriority.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1405C9D00 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1405CAE90 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405CB06C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1405CB970 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x1405CC520 (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1405CD27C (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x1405CD5BC (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x1405CD9A0 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x1405D5E24 (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1405DD8E4 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x1405E081C (PspUnlockAffinityUpdateExclusive.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E2E00 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x1405E30A0 (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x1405E33F8 (PsLoadVsmEnclaveData.c)
 *     NormalizationList__Unlock @ 0x1405F2A2C (NormalizationList__Unlock.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405F6C04 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405F6DBC (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405FBF80 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405FC2D0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405FC7D8 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140634830 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x140634D24 (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x140634F90 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1406352B0 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1406356A0 (EtwpSetCompressionSettings.c)
 *     ExpQueryBootLoaderMetadata @ 0x1406389A8 (ExpQueryBootLoaderMetadata.c)
 *     ExpSetBootLoaderMetadata @ 0x140638B98 (ExpSetBootLoaderMetadata.c)
 *     ExDisableHandleTracing @ 0x1406399B4 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x14063DABC (ExGetWakeTimerList.c)
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14063EC3C (ExUninitializeDeviceAts.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x140640500 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x140640800 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x140641354 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x140643104 (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 *     MiInitializeMirroring @ 0x140B05D00 (MiInitializeMirroring.c)
 *     MiInitializePagedPoolEvents @ 0x140B078E4 (MiInitializePagedPoolEvents.c)
 *     EmpParseInfDatabase @ 0x140B0B9A8 (EmpParseInfDatabase.c)
 *     ExpWorkerInitialization @ 0x140B240EC (ExpWorkerInitialization.c)
 * Callees:
 *     KiAbTryDecrementIoWaiterCounts @ 0x140234F30 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x1402398E0 (RtlRbReplaceNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(__int64 a1)
{
  __int64 v2; // rax
  volatile LONG *v3; // r13
  unsigned __int64 *v4; // r12
  unsigned __int8 CurrentIrql; // si
  int i; // edi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 *v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 *v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int64 v26; // [rsp+20h] [rbp-68h]
  unsigned int v27; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+48h] [rbp-40h] BYREF

  v27 = *(_DWORD *)(a1 + 8);
  v26 = *(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v26 >> 4) & 0x3FF) << 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  memset(&v29, 0, sizeof(v29));
  v4 = (unsigned __int64 *)((char *)&KiAbTreeArray + v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  for ( i = *(_BYTE *)(a1 + 19) & 1; ; i = 1 )
  {
    if ( i )
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v3);
    v7 = v4[1];
    v8 = *v4;
    if ( (v7 & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_14;
      v8 ^= (unsigned __int64)v4;
    }
    v9 = v7 & 1;
    while ( v8 )
    {
      v10 = *(_QWORD *)(v8 - 24) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v10 < v26 )
        goto LABEL_27;
      if ( v10 > v26 )
        goto LABEL_11;
      v11 = *(_DWORD *)(v8 - 16);
      if ( v11 == v27 )
        break;
      if ( v11 < v27 )
      {
LABEL_27:
        v12 = *(_QWORD *)(v8 + 8);
        if ( v9 && v12 )
        {
LABEL_31:
          v8 ^= v12;
          continue;
        }
      }
      else
      {
LABEL_11:
        v12 = *(_QWORD *)v8;
        if ( v9 && v12 )
          goto LABEL_31;
      }
      v8 = v12;
    }
LABEL_14:
    v13 = v8 - 24;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 - 24 + 80);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
    if ( v8 - 24 != a1 )
      break;
    if ( i )
    {
      if ( *(_QWORD *)(v13 + 64) )
      {
        v14 = (unsigned __int64 *)(v13 + 64);
      }
      else
      {
        v14 = (unsigned __int64 *)(v13 + 48);
        if ( !*(_QWORD *)(v13 + 48) )
          goto LABEL_18;
      }
      if ( v14 )
      {
        v20 = *v14;
        RtlRbRemoveNode(v14, *v14);
        RtlRbReplaceNode(v4, v8, v20);
        v29.LockQueue.Next = 0LL;
        v29.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 56);
        KxAcquireQueuedSpinLock((__int64)&v29, (volatile __int64 *)(v20 + 56));
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        *(_OWORD *)(v20 + 24) = *(_OWORD *)(v13 + 48);
        *(_OWORD *)(v20 + 40) = *(_OWORD *)(v13 + 64);
        *(_BYTE *)(v20 + 68) = *(_BYTE *)(v13 + 92);
        *(_DWORD *)(v20 + 68) ^= (*(_DWORD *)(v13 + 92) ^ *(_DWORD *)(v20 + 68)) & 0x7F00;
        KiAbTryDecrementIoWaiterCounts(v8 - 24, v20 - 24);
        *(_BYTE *)(v20 - 5) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
      }
      else
      {
LABEL_18:
        RtlRbRemoveNode(v4, v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v15 = *(_BYTE *)(v13 + 19);
        if ( (v15 & 2) != 0 )
        {
          --*(_BYTE *)(v13 + 92);
          *(_BYTE *)(v13 + 19) &= ~2u;
          v15 = *(_BYTE *)(v13 + 19);
        }
        if ( (v15 & 4) != 0 )
        {
          *(_DWORD *)(v13 + 92) ^= ((unsigned __int16)*(_DWORD *)(v13 + 92) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(v13 + 92) >> 8)
                                                                                                - 1) << 8)) & 0x7F00;
          *(_BYTE *)(v13 + 19) &= ~4u;
        }
      }
      *(_BYTE *)(v13 + 7) &= ~0x80u;
      *(_BYTE *)(v13 + 19) &= ~1u;
      goto LABEL_23;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  *(_BYTE *)(a1 + 7) &= ~0x80u;
  if ( *(_BYTE *)(a1 + 17) )
  {
    KiAbTryDecrementIoWaiterCounts(a1, v8 - 24);
    RtlRbRemoveNode(v19, a1 + 24);
  }
  else
  {
    RtlRbRemoveNode((unsigned __int64 *)(v13 + 48), a1 + 24);
  }
LABEL_23:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 17) )
    --*(_BYTE *)(v16 - 903);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v16 - 825), 0xFFu);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
