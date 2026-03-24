/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14028F490
 * Callers:
 *     PspStorageEmptyArrayNonReadonly @ 0x140200C90 (PspStorageEmptyArrayNonReadonly.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     NtCancelTimer @ 0x140248B00 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     PspUnlockProcessListExclusive @ 0x1402523C8 (PspUnlockProcessListExclusive.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14025AE28 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExpDeleteTimer @ 0x1402601A0 (ExpDeleteTimer.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402A3484 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402A3F84 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x1402A4830 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402A4EF0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402A52C4 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x1402A54E8 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402A56A0 (RtlpHpLargeAlloc.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402A75C8 (RtlInsertDynamicFunctionTable.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402ABAC8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402AC034 (MiUnlockDynamicMemoryExclusive.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1402AC82C (RtlRemoveDynamicFunctionTable.c)
 *     CcAmILowPriorityWriter @ 0x1402B0950 (CcAmILowPriorityWriter.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402B0E50 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1402B1104 (RtlpHpLfhBucketAddSubsegment.c)
 *     MiExpandPtes @ 0x1402B3298 (MiExpandPtes.c)
 *     MiObtainSessionVa @ 0x1402B41B4 (MiObtainSessionVa.c)
 *     PspUnlockThreadSecurityExclusive @ 0x1402BD338 (PspUnlockThreadSecurityExclusive.c)
 *     SepDeleteSessionLowboxEntries @ 0x1402BDDF4 (SepDeleteSessionLowboxEntries.c)
 *     PspUnlockQuotaExpansion @ 0x1402BF2B4 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402BFFB8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1402C7BD4 (RtlpHpSegMgrCommitComplete.c)
 *     EtwpFreeCompression @ 0x1402C7F24 (EtwpFreeCompression.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1402C98E8 (SSHSupportReleasePushLockExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1402CB978 (PspUnlockProcessExclusive.c)
 *     RtlpHpHeapExtendContext @ 0x1402CD7BC (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1402CDB34 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiDereferenceExtendInfo @ 0x1402CFB34 (MiDereferenceExtendInfo.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D083C (CcBoostLowPriorityWorkerThread.c)
 *     MiReleaseSessionVa @ 0x1402D124C (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsAllocate @ 0x1402D1E30 (RtlpHpFixedVsAllocate.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402D5268 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x1402D6348 (SmpKeyedStoreEntryGet.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1402D70CC (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402D7F30 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1402D86E8 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D99DC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402DC80C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402DFE94 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402E0E5C (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     MiUnlockLoaderEntry @ 0x1402E74F0 (MiUnlockLoaderEntry.c)
 *     KeAbPreWait @ 0x1402F30C0 (KeAbPreWait.c)
 *     CcApplyLowIoPriorityToThread @ 0x1402F6308 (CcApplyLowIoPriorityToThread.c)
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     RtlpHpSegContextCompact @ 0x1403067D0 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140306DB0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140307730 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140307DD0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140309268 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1403099F0 (RtlpHpSegPageRangeAllocate.c)
 *     MiManageSubsectionView @ 0x140311100 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x140312500 (MiObtainSystemCacheView.c)
 *     MiUnlockVad @ 0x140314658 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140314860 (UNLOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x1403155F0 (MiAddViewsForSection.c)
 *     MiGetWsAndInsertVad @ 0x140316080 (MiGetWsAndInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140316788 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFinishVadDeletion @ 0x140316DC0 (MiFinishVadDeletion.c)
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 *     RtlpHpSegPageRangeShrink @ 0x1403299F0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14033BA80 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpLfhSlotAllocate @ 0x14033CE40 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x14033F190 (RtlpHpVsChunkSplit.c)
 *     KeAbEntryFree @ 0x140348B20 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14034A5B0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x14034A720 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14035A724 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035AA5C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MmOutSwapVirtualAddresses @ 0x14035BCDC (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 *     SmpKeyedStoreSetVaRanges @ 0x14035D218 (SmpKeyedStoreSetVaRanges.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14035D458 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14035F0A4 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     KsepShimDbChanged @ 0x1403725F0 (KsepShimDbChanged.c)
 *     MiUnlockDriverMappings @ 0x1403729C8 (MiUnlockDriverMappings.c)
 *     FlushLookUpTableBucket @ 0x140375A48 (FlushLookUpTableBucket.c)
 *     RtlpHpFixedVsFree @ 0x140380900 (RtlpHpFixedVsFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140381050 (ExQueryHandleExceptionsPermanency.c)
 *     PfTSetTraceWorkerPriority @ 0x140382DA4 (PfTSetTraceWorkerPriority.c)
 *     KiAbCrossThreadRelease @ 0x14038E850 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x1403915CC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391A3C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140394354 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14039455C (ExpSaPageGroupFreeMemory.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403AD694 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     EmpQueueRuleUpdateState @ 0x1403B41C8 (EmpQueueRuleUpdateState.c)
 *     PopPepRemoveDevice @ 0x1403BE334 (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1403BEA64 (PopFxInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1403BF3FC (PopFxRemoveDevice.c)
 *     PopPepInsertDevice @ 0x1403C5ACC (PopPepInsertDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1403C64B0 (EmpRuleUpdateWorkerThread.c)
 *     MiFreeUnusedPfnPages @ 0x1403CE0E0 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CF2DC (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x1403CFCDC (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x1403D00D0 (PfLockExclusiveRelease.c)
 *     HalpLeaveDmaDomain @ 0x1404C4EAC (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x1404C8E60 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C9E80 (HalpIommuUnblockDevice.c)
 *     IommuBeginDeviceReset @ 0x1404D7B10 (IommuBeginDeviceReset.c)
 *     IommuFinalizeDeviceReset @ 0x1404D87D0 (IommuFinalizeDeviceReset.c)
 *     CcChangeBackingFileObject @ 0x1404E8AE8 (CcChangeBackingFileObject.c)
 *     MiUpControlAreaRefs @ 0x14052AB70 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x14052F604 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiMarkSystemVaAllocated @ 0x14053DC70 (MiMarkSystemVaAllocated.c)
 *     MiCommitPageTableRangesForVad @ 0x14054528C (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x14054C674 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x140555368 (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C4B0 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x140561454 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140568920 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569410 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140569684 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x14056A058 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x14056AD68 (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14056BB0C (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x14056BEF8 (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x14056C394 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x1405754BC (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CC50 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     SshpSetCollectionActive @ 0x14057FE3C (SshpSetCollectionActive.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x140581954 (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x140581BD4 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x140582840 (PspUnlockProcessExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405843D4 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x14058470C (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x140584B3C (PsLoadVsmEnclaveData.c)
 *     NormalizationList__Unlock @ 0x1405943D8 (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594C30 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140598D54 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140598F90 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E57C (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059E980 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14059EF28 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC4FC (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x1405ACA9C (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x1405ACDA0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AD158 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1405AD864 (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x1405B2998 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x1405B6148 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B7F00 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8330 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B8E74 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA4DC (ExpSaPageGroupDescriptorFree.c)
 *     EmpParseInfDatabase @ 0x140A455E8 (EmpParseInfDatabase.c)
 *     MiInitializePagedPoolEvents @ 0x140A4EB3C (MiInitializePagedPoolEvents.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x14028F828 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x14028F8B0 (RtlRbReplaceNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(__int64 a1)
{
  __int64 v2; // rax
  volatile LONG *v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int8 CurrentIrql; // r12
  int i; // edi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // [rsp+20h] [rbp-68h]
  unsigned int v32; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+48h] [rbp-40h] BYREF

  v32 = *(_DWORD *)(a1 + 40);
  v31 = *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v31 >> 4) & 0x3FF) << 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  memset(&v34, 0, sizeof(v34));
  v4 = (unsigned __int64)&KiAbTreeArray + v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  for ( i = *(_BYTE *)(a1 + 27) & 1; ; i = 1 )
  {
    if ( i )
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v3);
    v8 = *(_QWORD *)(v4 + 8);
    v9 = *(_QWORD *)v4;
    if ( (v8 & 1) != 0 && v9 )
      v9 ^= v4;
    v10 = v8 & 1;
    while ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v11 < v31 )
        goto LABEL_29;
      if ( v11 > v31 )
        goto LABEL_13;
      v12 = *(_DWORD *)(v9 + 40);
      if ( v12 == v32 )
        break;
      if ( v12 < v32 )
      {
LABEL_29:
        v13 = *(_QWORD *)(v9 + 8);
        if ( v10 && v13 )
        {
LABEL_33:
          v9 ^= v13;
          continue;
        }
      }
      else
      {
LABEL_13:
        v13 = *(_QWORD *)v9;
        if ( v10 && v13 )
          goto LABEL_33;
      }
      v9 = v13;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 80);
    KxAcquireQueuedSpinLock(&LockHandle, v9 + 80, v7);
    if ( v9 != a1 )
      break;
    if ( i )
    {
      if ( *(_QWORD *)(v9 + 64) )
      {
        v16 = (_QWORD *)(v9 + 64);
      }
      else
      {
        v16 = (_QWORD *)(v9 + 48);
        if ( !*(_QWORD *)(v9 + 48) )
          goto LABEL_20;
      }
      if ( v16 )
      {
        v20 = *v16;
        RtlRbRemoveNode(v16, *v16, v14, v15);
        RtlRbReplaceNode(v4, v9, v20);
        v34.LockQueue.Next = 0LL;
        v34.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 80);
        KxAcquireQueuedSpinLock(&v34, v20 + 80, v21);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        *(_OWORD *)(v20 + 48) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)(v20 + 64) = *(_OWORD *)(v9 + 64);
        *(_WORD *)(v20 + 90) ^= (*(_WORD *)(v20 + 90) ^ *(_WORD *)(v9 + 90)) & 0x1FE;
        *(_WORD *)(v20 + 90) = *(_WORD *)(v9 + 90) ^ (*(_WORD *)(v20 + 90) ^ *(_WORD *)(v9 + 90)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(v9, v20);
        *(_BYTE *)(v20 + 27) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
      }
      else
      {
LABEL_20:
        RtlRbRemoveNode(v4, v9, v14, v15);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v17 = *(_BYTE *)(v9 + 27);
        if ( (v17 & 2) != 0 )
        {
          *(_WORD *)(v9 + 90) ^= (*(_WORD *)(v9 + 90) ^ (2 * ((*(_WORD *)(v9 + 90) >> 1) - 1))) & 0x1FE;
          *(_BYTE *)(v9 + 27) &= ~2u;
          v17 = *(_BYTE *)(v9 + 27);
        }
        if ( (v17 & 4) != 0 )
        {
          *(_WORD *)(v9 + 90) = *(_WORD *)(v9 + 90) & 0x1FF | (((*(_WORD *)(v9 + 90) >> 9) - 1) << 9);
          *(_BYTE *)(v9 + 27) &= ~4u;
        }
      }
      *(_BYTE *)(v9 + 39) &= ~0x80u;
      *(_BYTE *)(v9 + 27) &= ~1u;
      goto LABEL_25;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  *(_BYTE *)(a1 + 39) &= ~0x80u;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCounts(a1, v9);
    v24 = 64LL;
  }
  else
  {
    v24 = 48LL;
  }
  RtlRbRemoveNode(v9 + v24, a1, v22, v23);
LABEL_25:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v18 = a1 - 16LL * *(unsigned __int8 *)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    --*(_BYTE *)(v18 + 793);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v18 + 871), 0xFFu);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
