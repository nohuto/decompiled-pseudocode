/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x1403410E0
 * Callers:
 *     PspStorageEmptyArrayNonReadonly @ 0x140200C80 (PspStorageEmptyArrayNonReadonly.c)
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MiManageSubsectionView @ 0x14022A510 (MiManageSubsectionView.c)
 *     CcAmILowPriorityWriter @ 0x140231E08 (CcAmILowPriorityWriter.c)
 *     CcApplyLowIoPriorityToThread @ 0x14023288C (CcApplyLowIoPriorityToThread.c)
 *     ExpDeleteTimer @ 0x140236430 (ExpDeleteTimer.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140237AF4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140238750 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402390D0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140239674 (RtlpHpLfhBucketAddSubsegment.c)
 *     SmpKeyedStoreEntryGet @ 0x140239CC0 (SmpKeyedStoreEntryGet.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14023B284 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14023CC0C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     RtlpHpVsChunkSplit @ 0x14024D3F0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpLfhSlotAllocate @ 0x140250B40 (RtlpHpLfhSlotAllocate.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140260600 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140260770 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiGetWsAndInsertVad @ 0x1402A2750 (MiGetWsAndInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402A2E58 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A5728 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1402AB338 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402AFF30 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402B27B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402B2C50 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402B373C (RtlpHpSegMgrCommitInitiate.c)
 *     PfFileInfoNotify @ 0x1402B5440 (PfFileInfoNotify.c)
 *     MiCreatePrototypePtes @ 0x1402BC59C (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402C505C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1402C5BA8 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402C8BCC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402CAF84 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1402CBC18 (SmpKeyedStoreSetVaRanges.c)
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D0704 (CcBoostLowPriorityWorkerThread.c)
 *     MmOutSwapVirtualAddresses @ 0x1402D10EC (MmOutSwapVirtualAddresses.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402D1614 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402D4788 (MiUnlockDynamicMemoryExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x1402D7380 (PspUnlockProcessListExclusive.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402F6FD4 (RtlInsertDynamicFunctionTable.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FD194 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1402FDA9C (RtlRemoveDynamicFunctionTable.c)
 *     MiExpandPtes @ 0x140300D04 (MiExpandPtes.c)
 *     MiObtainSessionVa @ 0x140301EC0 (MiObtainSessionVa.c)
 *     MiReleaseSessionVa @ 0x1403024F0 (MiReleaseSessionVa.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140309D4C (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14030CF04 (PspUnlockThreadSecurityExclusive.c)
 *     SepDeleteSessionLowboxEntries @ 0x14030D754 (SepDeleteSessionLowboxEntries.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14030D938 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     PspUnlockQuotaExpansion @ 0x14030F474 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140310538 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1403188F8 (RtlpHpSegMgrCommitComplete.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14031A3C8 (SSHSupportReleasePushLockExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14031BD28 (PspUnlockProcessExclusive.c)
 *     RtlpHpHeapExtendContext @ 0x14031DA7C (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14031DDF4 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiDereferenceExtendInfo @ 0x14031F914 (MiDereferenceExtendInfo.c)
 *     RtlpHpFixedVsAllocate @ 0x140321610 (RtlpHpFixedVsAllocate.c)
 *     MiUnlockLoaderEntry @ 0x140325A5C (MiUnlockLoaderEntry.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     EtwpFreeCompression @ 0x14033FF7C (EtwpFreeCompression.c)
 *     KeAbEntryFree @ 0x140341074 (KeAbEntryFree.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     RtlpHpSegContextCompact @ 0x14035DCA0 (RtlpHpSegContextCompact.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14035E770 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14035E9F0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpLargeFree @ 0x14035F014 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14035F3BC (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140360090 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVaMgrCtxFree @ 0x140360210 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140360D10 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1403615BC (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140361C78 (RtlpHpSegMgrVaCtxAlloc.c)
 *     KsepShimDbChanged @ 0x14036F390 (KsepShimDbChanged.c)
 *     MiUnlockDriverMappings @ 0x14036FADC (MiUnlockDriverMappings.c)
 *     FlushLookUpTableBucket @ 0x140372368 (FlushLookUpTableBucket.c)
 *     RtlpHpFixedVsFree @ 0x14037D8D0 (RtlpHpFixedVsFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14037E020 (ExQueryHandleExceptionsPermanency.c)
 *     PfTSetTraceWorkerPriority @ 0x1403801BC (PfTSetTraceWorkerPriority.c)
 *     KiAbCrossThreadRelease @ 0x14038B2B0 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x14038E09C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038E50C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140390EB4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403910BC (ExpSaPageGroupFreeMemory.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403A93F4 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     EmpQueueRuleUpdateState @ 0x1403B2128 (EmpQueueRuleUpdateState.c)
 *     PopPepRemoveDevice @ 0x1403B984C (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1403B9F74 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x1403BA568 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1403BABF4 (PopFxRemoveDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1403C2490 (EmpRuleUpdateWorkerThread.c)
 *     MiFreeUnusedPfnPages @ 0x1403C9CE0 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CAF0C (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x1403CB8DC (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x1403CBCB0 (PfLockExclusiveRelease.c)
 *     HalpLeaveDmaDomain @ 0x1404BF8DC (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x1404C3B00 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C4AD0 (HalpIommuUnblockDevice.c)
 *     IommuBeginDeviceReset @ 0x1404D2700 (IommuBeginDeviceReset.c)
 *     IommuFinalizeDeviceReset @ 0x1404D33C0 (IommuFinalizeDeviceReset.c)
 *     CcChangeBackingFileObject @ 0x1404E3418 (CcChangeBackingFileObject.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x140529AE4 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiMarkSystemVaAllocated @ 0x140538150 (MiMarkSystemVaAllocated.c)
 *     MiCommitPageTableRangesForVad @ 0x14053F768 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x140546B54 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x14054F878 (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405569C0 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x14055B964 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140562E20 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140563910 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140563B84 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x140564558 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x1405652CC (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14056607C (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x140566468 (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x140566904 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x14056FA2C (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1405771C0 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     SshpSetCollectionActive @ 0x14057A3BC (SshpSetCollectionActive.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x14057BED4 (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x14057C154 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x14057CDC0 (PspUnlockProcessExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x14057E954 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x14057EC8C (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x14057F0BC (PsLoadVsmEnclaveData.c)
 *     NormalizationList__Unlock @ 0x14058E7FC (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14058F050 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140593194 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405933D0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405989BC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140598DC0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140599368 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405A6898 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x1405A6E38 (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x1405A7150 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405A7508 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1405A7C14 (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x1405ACD18 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x1405B0498 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B15D0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B2250 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B2680 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B31C4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4818 (ExpSaPageGroupDescriptorFree.c)
 *     MiInitializePagedPoolEvents @ 0x140A41AA4 (MiInitializePagedPoolEvents.c)
 *     EmpParseInfDatabase @ 0x140A47468 (EmpParseInfDatabase.c)
 *     MiInitializeMirroring @ 0x140A4CDA0 (MiInitializeMirroring.c)
 *     WheaInitialize @ 0x140A5B63C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140341478 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140341500 (RtlRbReplaceNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node)
{
  __int64 v2; // rax
  volatile LONG *v3; // r15
  _RTL_RB_TREE *v4; // r14
  unsigned __int8 CurrentIrql; // r12
  int i; // edi
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_RB_TREE *v13; // rcx
  char v14; // al
  char *v15; // rcx
  __int64 result; // rax
  _RTL_BALANCED_NODE *v17; // rdi
  __int64 v18; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // [rsp+20h] [rbp-68h]
  unsigned int ParentValue; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+48h] [rbp-40h] BYREF

  ParentValue = Node[1].ParentValue;
  v25 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v25 >> 4) & 0x3FF) << 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  memset(&v28, 0, sizeof(v28));
  v4 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  for ( i = BYTE3(Node[1].Left) & 1; ; i = 1 )
  {
    if ( i )
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v3);
    Min = v4->Min;
    Root = (unsigned __int64)v4->Root;
    if ( ((unsigned __int8)Min & 1) != 0 && Root )
      Root ^= (unsigned __int64)v4;
    v9 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v10 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v10 < v25 )
        goto LABEL_29;
      if ( v10 > v25 )
        goto LABEL_13;
      v11 = *(_DWORD *)(Root + 40);
      if ( v11 == ParentValue )
        break;
      if ( v11 < ParentValue )
      {
LABEL_29:
        v12 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( v9 && v12 )
        {
LABEL_33:
          Root ^= (unsigned __int64)v12;
          continue;
        }
      }
      else
      {
LABEL_13:
        v12 = *(_RTL_BALANCED_NODE **)Root;
        if ( v9 && v12 )
          goto LABEL_33;
      }
      Root = (unsigned __int64)v12;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Root + 80));
    if ( (PRTL_BALANCED_NODE)Root != Node )
      break;
    if ( i )
    {
      if ( *(_QWORD *)(Root + 64) )
      {
        v13 = (_RTL_RB_TREE *)(Root + 64);
      }
      else
      {
        v13 = (_RTL_RB_TREE *)(Root + 48);
        if ( !*(_QWORD *)(Root + 48) )
          goto LABEL_20;
      }
      if ( v13 )
      {
        v17 = v13->Root;
        RtlRbRemoveNode(v13, v13->Root);
        RtlRbReplaceNode(v4, Root, v17);
        v28.LockQueue.Next = 0LL;
        v28.LockQueue.Lock = (unsigned __int64 *volatile)&v17[3].Children[1];
        KxAcquireQueuedSpinLock((__int64)&v28, (volatile __int64 *)&v17[3].Children[1]);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v17[2].0 = *($657F03FA94A954BB9D31D3A421B28642 *)(Root + 48);
        *(_OWORD *)&v17[2].0 = *(_OWORD *)(Root + 64);
        *((_WORD *)&v17[3].1 + 1) ^= (*((_WORD *)&v17[3].1 + 1) ^ *(_WORD *)(Root + 90)) & 0x1FE;
        *((_WORD *)&v17[3].1 + 1) = *(_WORD *)(Root + 90) ^ (*((_WORD *)&v17[3].1 + 1) ^ *(_WORD *)(Root + 90)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(Root, v17);
        BYTE3(v17[1].Left) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
      }
      else
      {
LABEL_20:
        RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)Root);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v14 = *(_BYTE *)(Root + 27);
        if ( (v14 & 2) != 0 )
        {
          *(_WORD *)(Root + 90) ^= (*(_WORD *)(Root + 90) ^ (2 * ((*(_WORD *)(Root + 90) >> 1) - 1))) & 0x1FE;
          *(_BYTE *)(Root + 27) &= ~2u;
          v14 = *(_BYTE *)(Root + 27);
        }
        if ( (v14 & 4) != 0 )
        {
          *(_WORD *)(Root + 90) = *(_WORD *)(Root + 90) & 0x1FF | (((*(_WORD *)(Root + 90) >> 9) - 1) << 9);
          *(_BYTE *)(Root + 27) &= ~4u;
        }
      }
      *(_BYTE *)(Root + 39) &= ~0x80u;
      *(_BYTE *)(Root + 27) &= ~1u;
      goto LABEL_25;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  HIBYTE(Node[1].Right) &= ~0x80u;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCounts(Node, Root);
    v18 = 64LL;
  }
  else
  {
    v18 = 48LL;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(Root + v18), Node);
LABEL_25:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v15 = (char *)Node - 16 * LOBYTE(Node[1].Children[0]);
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v15[793];
  else
    _InterlockedExchangeAdd8(v15 + 871, 0xFFu);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
