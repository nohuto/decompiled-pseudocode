/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140272F70
 * Callers:
 *     PspStorageEmptyArrayNonReadonly @ 0x140200C80 (PspStorageEmptyArrayNonReadonly.c)
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1402076E0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140207850 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiGetWsAndInsertVad @ 0x140249720 (MiGetWsAndInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140249E28 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14024C6F8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140252308 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140256F00 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140259780 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140259C20 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14025A70C (RtlpHpSegMgrCommitInitiate.c)
 *     PfFileInfoNotify @ 0x14025C410 (PfFileInfoNotify.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     PspUnlockProcessListExclusive @ 0x14026A584 (PspUnlockProcessListExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14026ADE8 (MiUnlockDynamicMemoryExclusive.c)
 *     KeAbEntryFree @ 0x140272F04 (KeAbEntryFree.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     RtlpHpLfhSlotAllocate @ 0x14028D3E0 (RtlpHpLfhSlotAllocate.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 *     MiManageSubsectionView @ 0x1402BD190 (MiManageSubsectionView.c)
 *     CcAmILowPriorityWriter @ 0x1402C4C38 (CcAmILowPriorityWriter.c)
 *     CcApplyLowIoPriorityToThread @ 0x1402C56BC (CcApplyLowIoPriorityToThread.c)
 *     ExpDeleteTimer @ 0x1402C9260 (ExpDeleteTimer.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402CA924 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402CB580 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402CBF00 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1402CC4A4 (RtlpHpLfhBucketAddSubsegment.c)
 *     SmpKeyedStoreEntryGet @ 0x1402CCAF0 (SmpKeyedStoreEntryGet.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402CE0B4 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1402CFA3C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402D843C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402D8F3C (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1402D97E8 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402D9EA4 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402DA278 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x1402DA540 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402DA8E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegContextCompact @ 0x1402DB670 (RtlpHpSegContextCompact.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402DC140 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402DC3C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     MiUnlockLoaderEntry @ 0x1402E095C (MiUnlockLoaderEntry.c)
 *     EtwpFreeCompression @ 0x1402FFB4C (EtwpFreeCompression.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140302014 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1403041FC (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140304778 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14030730C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140307E58 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14030CBC4 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x14030D858 (SmpKeyedStoreSetVaRanges.c)
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403216F0 (CcBoostLowPriorityWorkerThread.c)
 *     RtlInsertDynamicFunctionTable @ 0x140334114 (RtlInsertDynamicFunctionTable.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14033A4D4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14033ADDC (RtlRemoveDynamicFunctionTable.c)
 *     MiExpandPtes @ 0x14033D84C (MiExpandPtes.c)
 *     MiObtainSessionVa @ 0x14033EA08 (MiObtainSessionVa.c)
 *     MiReleaseSessionVa @ 0x14033F038 (MiReleaseSessionVa.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14034A1F4 (PspUnlockThreadSecurityExclusive.c)
 *     SepDeleteSessionLowboxEntries @ 0x14034AC34 (SepDeleteSessionLowboxEntries.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14034AE18 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     PspUnlockQuotaExpansion @ 0x14034CB44 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034DBC8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1403564F4 (RtlpHpSegMgrCommitComplete.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140357F18 (SSHSupportReleasePushLockExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1403598F8 (PspUnlockProcessExclusive.c)
 *     RtlpHpHeapExtendContext @ 0x14035B66C (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14035B9E4 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiDereferenceExtendInfo @ 0x14035D3B8 (MiDereferenceExtendInfo.c)
 *     RtlpHpFixedVsAllocate @ 0x14035EFC0 (RtlpHpFixedVsAllocate.c)
 *     KsepShimDbChanged @ 0x14036FFC0 (KsepShimDbChanged.c)
 *     MiUnlockDriverMappings @ 0x14037070C (MiUnlockDriverMappings.c)
 *     FlushLookUpTableBucket @ 0x140373178 (FlushLookUpTableBucket.c)
 *     RtlpHpFixedVsFree @ 0x14037E390 (RtlpHpFixedVsFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14037EAE0 (ExQueryHandleExceptionsPermanency.c)
 *     PfTSetTraceWorkerPriority @ 0x1403809FC (PfTSetTraceWorkerPriority.c)
 *     KiAbCrossThreadRelease @ 0x14038BE20 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x14038EC0C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038F07C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140391A24 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140391C2C (ExpSaPageGroupFreeMemory.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403A5724 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     EmpQueueRuleUpdateState @ 0x1403B0438 (EmpQueueRuleUpdateState.c)
 *     PopPepRemoveDevice @ 0x1403BAB90 (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1403BB2C4 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x1403BB8B8 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1403BBF14 (PopFxRemoveDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1403C3350 (EmpRuleUpdateWorkerThread.c)
 *     MiFreeUnusedPfnPages @ 0x1403CAAC0 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CBCCC (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x1403CC6CC (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x1403CCAD0 (PfLockExclusiveRelease.c)
 *     HalpLeaveDmaDomain @ 0x1404BFFBC (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x1404C3F70 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C4F80 (HalpIommuUnblockDevice.c)
 *     IommuBeginDeviceReset @ 0x1404D2BB0 (IommuBeginDeviceReset.c)
 *     IommuFinalizeDeviceReset @ 0x1404D3870 (IommuFinalizeDeviceReset.c)
 *     CcChangeBackingFileObject @ 0x1404E39C8 (CcChangeBackingFileObject.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x14052A134 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiMarkSystemVaAllocated @ 0x1405387A0 (MiMarkSystemVaAllocated.c)
 *     MiCommitPageTableRangesForVad @ 0x14053FDB8 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x1405471A4 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x14054FEC8 (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x140557010 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x14055BFB4 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14055C478 (MiDeletePartitionResources.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140563470 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140563F60 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405641D4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x140564BA8 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x14056591C (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1405666CC (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x140566AB8 (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x140566F54 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x14057007C (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x140577810 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     SshpSetCollectionActive @ 0x14057A9FC (SshpSetCollectionActive.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x14057C514 (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x14057C794 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x14057D400 (PspUnlockProcessExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x14057EF94 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x14057F2CC (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x14057F6FC (PsLoadVsmEnclaveData.c)
 *     NormalizationList__Unlock @ 0x14058EEEC (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14058F740 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140593884 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140593AC0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405990AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405994B0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140599A58 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405A6F88 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x1405A7528 (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x1405A7840 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405A7BF8 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1405A8304 (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x1405AD438 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x1405B0BB8 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B1CF0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B2970 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B2DA0 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B38E4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4F38 (ExpSaPageGroupDescriptorFree.c)
 *     EmpParseInfDatabase @ 0x140A403F8 (EmpParseInfDatabase.c)
 *     MiInitializePagedPoolEvents @ 0x140A47300 (MiInitializePagedPoolEvents.c)
 *     MiInitializeMirroring @ 0x140A52AA0 (MiInitializeMirroring.c)
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A66764 (ExpWorkerInitialization.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140273308 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140273390 (RtlRbReplaceNode.c)
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
    KxAcquireQueuedSpinLock(&LockHandle);
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
        KxAcquireQueuedSpinLock(&v28);
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
