/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x1402F05E0
 * Callers:
 *     PspStorageEmptyArrayNonReadonly @ 0x140200C80 (PspStorageEmptyArrayNonReadonly.c)
 *     RtlpHpLfhSlotAllocate @ 0x140212CB0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x140214BB0 (RtlpHpVsChunkSplit.c)
 *     KeAbEntryFree @ 0x14021EB90 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140220660 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x1402207D0 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiGetWsAndInsertVad @ 0x14022DCA0 (MiGetWsAndInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14022E3A8 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140232E14 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140237788 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     RtlpHpSegContextCompact @ 0x14023AFB0 (RtlpHpSegContextCompact.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14023BB80 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14023C370 (RtlpHpVsSubsegmentCommitPages.c)
 *     PspUnlockProcessListExclusive @ 0x14023D370 (PspUnlockProcessListExclusive.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     ExpDeleteTimer @ 0x140247950 (ExpDeleteTimer.c)
 *     CcApplyLowIoPriorityToThread @ 0x14024AAB8 (CcApplyLowIoPriorityToThread.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiUnlockLoaderEntry @ 0x140252F08 (MiUnlockLoaderEntry.c)
 *     MiExpandPtes @ 0x1402531D4 (MiExpandPtes.c)
 *     SmpKeyedStoreEntryGet @ 0x140253B98 (SmpKeyedStoreEntryGet.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14025491C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140255780 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140255F38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14025A05C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402636E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     MiManageSubsectionView @ 0x1402986E0 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     PfFileInfoNotify @ 0x1402A0D50 (PfFileInfoNotify.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402CCAB0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402CE210 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402CEE70 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402D1660 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402D1FE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1402EB73C (RtlRemoveDynamicFunctionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402ECA08 (RtlInsertDynamicFunctionTable.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403066D4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1403071D4 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x140307A80 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14030813C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140308510 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x140308734 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140308ADC (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14030C934 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     CcAmILowPriorityWriter @ 0x14030FF54 (CcAmILowPriorityWriter.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403107B4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140310A68 (RtlpHpLfhBucketAddSubsegment.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140316460 (CcBoostLowPriorityWorkerThread.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14031B448 (PspUnlockThreadSecurityExclusive.c)
 *     SepDeleteSessionLowboxEntries @ 0x14031BBF4 (SepDeleteSessionLowboxEntries.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031BDD8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     PspUnlockQuotaExpansion @ 0x14031D8A4 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14031E918 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     MiObtainSessionVa @ 0x1403247C0 (MiObtainSessionVa.c)
 *     RtlpHpSegMgrCommitComplete @ 0x140326D54 (RtlpHpSegMgrCommitComplete.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140328558 (SSHSupportReleasePushLockExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14032A1F8 (PspUnlockProcessExclusive.c)
 *     RtlpHpHeapExtendContext @ 0x14032C0CC (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14032C444 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiDereferenceExtendInfo @ 0x14032DE10 (MiDereferenceExtendInfo.c)
 *     MiReleaseSessionVa @ 0x14032F29C (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsAllocate @ 0x14032FDC0 (RtlpHpFixedVsAllocate.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140337B6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140338FE8 (SmpKeyedStoreSetVaRanges.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14033AC68 (MmOutSwapVirtualAddresses.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140357EAC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140358E7C (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140359CC0 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14035A1C4 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     EtwpFreeCompression @ 0x140360504 (EtwpFreeCompression.c)
 *     KsepShimDbChanged @ 0x140371F10 (KsepShimDbChanged.c)
 *     MiUnlockDriverMappings @ 0x14037265C (MiUnlockDriverMappings.c)
 *     FlushLookUpTableBucket @ 0x140375838 (FlushLookUpTableBucket.c)
 *     RtlpHpFixedVsFree @ 0x1403800C0 (RtlpHpFixedVsFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380810 (ExQueryHandleExceptionsPermanency.c)
 *     PfTSetTraceWorkerPriority @ 0x1403827BC (PfTSetTraceWorkerPriority.c)
 *     KiAbCrossThreadRelease @ 0x14038E2E0 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x1403910FC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14039156C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140393EE4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403940EC (ExpSaPageGroupFreeMemory.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403A7B24 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     EmpQueueRuleUpdateState @ 0x1403B2DA8 (EmpQueueRuleUpdateState.c)
 *     PopPepRemoveDevice @ 0x1403BD010 (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1403BD744 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x1403BDD38 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1403BE394 (PopFxRemoveDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1403C5AC0 (EmpRuleUpdateWorkerThread.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD700 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CE8EC (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x1403CF36C (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x1403CF760 (PfLockExclusiveRelease.c)
 *     HalpLeaveDmaDomain @ 0x1404C34DC (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x1404C7490 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C84B0 (HalpIommuUnblockDevice.c)
 *     IommuBeginDeviceReset @ 0x1404D6140 (IommuBeginDeviceReset.c)
 *     IommuFinalizeDeviceReset @ 0x1404D6E00 (IommuFinalizeDeviceReset.c)
 *     CcChangeBackingFileObject @ 0x1404E6F58 (CcChangeBackingFileObject.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x14052DB04 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiMarkSystemVaAllocated @ 0x14053C170 (MiMarkSystemVaAllocated.c)
 *     MiCommitPageTableRangesForVad @ 0x140543788 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x14054AB74 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x140553898 (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055A9E0 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x14055F984 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140566E50 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140567940 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140567BB4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x140568588 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x140569350 (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14056A0FC (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x14056A4E8 (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x14056A984 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x140573AAC (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057B240 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     SshpSetCollectionActive @ 0x14057E42C (SshpSetCollectionActive.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x14057FF44 (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x1405801C4 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x140580E30 (PspUnlockProcessExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405829C4 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x140582CFC (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x14058312C (PsLoadVsmEnclaveData.c)
 *     NormalizationList__Unlock @ 0x140592990 (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1405931E0 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140597324 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140597560 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059CB4C (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059CF50 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14059D4F8 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AAAEC (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x1405AB08C (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x1405AB3A0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AB758 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1405ABE64 (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x1405B0F98 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x1405B4718 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B5850 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B64D0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B6900 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B7444 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B8A98 (ExpSaPageGroupDescriptorFree.c)
 *     EmpParseInfDatabase @ 0x140A46698 (EmpParseInfDatabase.c)
 *     MiInitializePagedPoolEvents @ 0x140A4D59C (MiInitializePagedPoolEvents.c)
 *     MiInitializeMirroring @ 0x140A53120 (MiInitializeMirroring.c)
 *     WheaInitialize @ 0x140A61A3C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x1402F0978 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x1402F0A00 (RtlRbReplaceNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
