/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14020C630
 * Callers:
 *     PspStorageEmptyArrayNonReadonly @ 0x140200C90 (PspStorageEmptyArrayNonReadonly.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402208C4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402213C4 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x140221C70 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140222330 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140222704 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x140222928 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140222AE0 (RtlpHpLargeAlloc.c)
 *     RtlInsertDynamicFunctionTable @ 0x140225708 (RtlInsertDynamicFunctionTable.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140229C08 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14022AB88 (RtlRemoveDynamicFunctionTable.c)
 *     CcAmILowPriorityWriter @ 0x14022ECB0 (CcAmILowPriorityWriter.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14022F1B0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14022F464 (RtlpHpLfhBucketAddSubsegment.c)
 *     MiExpandPtes @ 0x140231448 (MiExpandPtes.c)
 *     MiObtainSessionVa @ 0x140232364 (MiObtainSessionVa.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14023B9E8 (PspUnlockThreadSecurityExclusive.c)
 *     SepDeleteSessionLowboxEntries @ 0x14023C434 (SepDeleteSessionLowboxEntries.c)
 *     PspUnlockQuotaExpansion @ 0x14023D704 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14023E408 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrCommitComplete @ 0x140246428 (RtlpHpSegMgrCommitComplete.c)
 *     EtwpFreeCompression @ 0x140246784 (EtwpFreeCompression.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1402481C8 (SSHSupportReleasePushLockExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14024A0C8 (PspUnlockProcessExclusive.c)
 *     RtlpHpHeapExtendContext @ 0x14024BCBC (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14024C034 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiDereferenceExtendInfo @ 0x14024DEB4 (MiDereferenceExtendInfo.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14024ECCC (CcBoostLowPriorityWorkerThread.c)
 *     MiReleaseSessionVa @ 0x14024F6DC (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsAllocate @ 0x140250200 (RtlpHpFixedVsAllocate.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402745E0 (MiUnlockDynamicMemoryExclusive.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14027C398 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExpDeleteTimer @ 0x140281910 (ExpDeleteTimer.c)
 *     PspUnlockProcessListExclusive @ 0x140285280 (PspUnlockProcessListExclusive.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402865B4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x140287698 (SmpKeyedStoreEntryGet.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14028841C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140289280 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140289A38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14028DB5C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402911E4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402921AC (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     MiUnlockLoaderEntry @ 0x140298840 (MiUnlockLoaderEntry.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14029F4C4 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MmOutSwapVirtualAddresses @ 0x1402A0C0C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1402A2148 (SmpKeyedStoreSetVaRanges.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1402A3FD4 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     NtCancelTimer @ 0x1402ED350 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     CcApplyLowIoPriorityToThread @ 0x140301058 (CcApplyLowIoPriorityToThread.c)
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     RtlpHpSegContextCompact @ 0x140311520 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140311B00 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140312480 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140312B20 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140313FB8 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140314740 (RtlpHpSegPageRangeAllocate.c)
 *     MiManageSubsectionView @ 0x14031BE50 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiGetWsAndInsertVad @ 0x140320DD0 (MiGetWsAndInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1403214D8 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiFinishVadDeletion @ 0x140321B10 (MiFinishVadDeletion.c)
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 *     RtlpHpSegPageRangeShrink @ 0x140334740 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x140349EE0 (RtlpHpVsChunkSplit.c)
 *     KeAbEntryFree @ 0x140353870 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140355300 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140355470 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KsepShimDbChanged @ 0x140372140 (KsepShimDbChanged.c)
 *     MiUnlockDriverMappings @ 0x140372518 (MiUnlockDriverMappings.c)
 *     FlushLookUpTableBucket @ 0x140375598 (FlushLookUpTableBucket.c)
 *     RtlpHpFixedVsFree @ 0x140380450 (RtlpHpFixedVsFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380BA0 (ExQueryHandleExceptionsPermanency.c)
 *     PfTSetTraceWorkerPriority @ 0x140382F54 (PfTSetTraceWorkerPriority.c)
 *     KiAbCrossThreadRelease @ 0x14038E9A0 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391B8C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1403944A4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403946AC (ExpSaPageGroupFreeMemory.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403AD7E4 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     EmpQueueRuleUpdateState @ 0x1403B4338 (EmpQueueRuleUpdateState.c)
 *     PopPepRemoveDevice @ 0x1403BDC90 (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1403BE3C4 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x1403BE9B8 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1403BF014 (PopFxRemoveDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1403C6650 (EmpRuleUpdateWorkerThread.c)
 *     MiFreeUnusedPfnPages @ 0x1403CE250 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403CF44C (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x1403CFE4C (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x1403D0240 (PfLockExclusiveRelease.c)
 *     HalpLeaveDmaDomain @ 0x1404C50EC (HalpLeaveDmaDomain.c)
 *     HalpIommuBlockDevice @ 0x1404C90A0 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404CA0C0 (HalpIommuUnblockDevice.c)
 *     IommuBeginDeviceReset @ 0x1404D7D50 (IommuBeginDeviceReset.c)
 *     IommuFinalizeDeviceReset @ 0x1404D8A10 (IommuFinalizeDeviceReset.c)
 *     CcChangeBackingFileObject @ 0x1404E8D28 (CcChangeBackingFileObject.c)
 *     MiUpControlAreaRefs @ 0x14052ADB0 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x14052F844 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiMarkSystemVaAllocated @ 0x14053DEB0 (MiMarkSystemVaAllocated.c)
 *     MiCommitPageTableRangesForVad @ 0x1405454CC (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x14054C8B4 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x1405555A8 (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C6F0 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x140561694 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140568B60 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140569650 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405698C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x14056A298 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x14056AFA8 (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14056BD4C (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x14056C138 (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x14056C5D4 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x1405756FC (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CE90 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     SshpSetCollectionActive @ 0x14058007C (SshpSetCollectionActive.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x140581BDC (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x140581E10 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PspUnlockProcessExclusiveUnsafe @ 0x140582A70 (PspUnlockProcessExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140584604 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x14058493C (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x140584D6C (PsLoadVsmEnclaveData.c)
 *     NormalizationList__Unlock @ 0x140594608 (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594E60 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140598F84 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405991C0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E7AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059EBB0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14059F158 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC72C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x1405ACCCC (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x1405ACFD0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AD388 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1405ADA94 (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x1405B2BC8 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x1405B6378 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B74B0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B8130 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8560 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B90A4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA70C (ExpSaPageGroupDescriptorFree.c)
 *     EmpParseInfDatabase @ 0x140A465E8 (EmpParseInfDatabase.c)
 *     MiInitializePagedPoolEvents @ 0x140A4FB3C (MiInitializePagedPoolEvents.c)
 *     MiInitializeMirroring @ 0x140A55728 (MiInitializeMirroring.c)
 *     WheaInitialize @ 0x140A6405C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x14020C9C8 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x14020CA50 (RtlRbReplaceNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node)
{
  __int64 v2; // rax
  volatile LONG *v3; // r15
  _RTL_RB_TREE *v4; // r14
  unsigned __int8 CurrentIrql; // r12
  int i; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v11; // edx
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  _RTL_BALANCED_NODE *v14; // rax
  _RTL_RB_TREE *v15; // rcx
  char v16; // al
  char *v17; // rcx
  __int64 result; // rax
  _RTL_BALANCED_NODE *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int64 v29; // [rsp+20h] [rbp-68h]
  unsigned int ParentValue; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+48h] [rbp-40h] BYREF

  ParentValue = Node[1].ParentValue;
  v29 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v29 >> 4) & 0x3FF) << 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  memset(&v32, 0, sizeof(v32));
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
    v11 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v12 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v12 < v29 )
        goto LABEL_29;
      if ( v12 > v29 )
        goto LABEL_13;
      v13 = *(_DWORD *)(Root + 40);
      if ( v13 == ParentValue )
        break;
      if ( v13 < ParentValue )
      {
LABEL_29:
        v14 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( v11 && v14 )
        {
LABEL_33:
          Root ^= (unsigned __int64)v14;
          continue;
        }
      }
      else
      {
LABEL_13:
        v14 = *(_RTL_BALANCED_NODE **)Root;
        if ( v11 && v14 )
          goto LABEL_33;
      }
      Root = (unsigned __int64)v14;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
    KxAcquireQueuedSpinLock(&LockHandle, Root + 80, v7, v8);
    if ( (PRTL_BALANCED_NODE)Root != Node )
      break;
    if ( i )
    {
      if ( *(_QWORD *)(Root + 64) )
      {
        v15 = (_RTL_RB_TREE *)(Root + 64);
      }
      else
      {
        v15 = (_RTL_RB_TREE *)(Root + 48);
        if ( !*(_QWORD *)(Root + 48) )
          goto LABEL_20;
      }
      if ( v15 )
      {
        v19 = v15->Root;
        RtlRbRemoveNode(v15, v15->Root);
        RtlRbReplaceNode(v4, Root, v19);
        v32.LockQueue.Next = 0LL;
        v32.LockQueue.Lock = (unsigned __int64 *volatile)&v19[3].Children[1];
        KxAcquireQueuedSpinLock(&v32, &v19[3].Right, v20, v21);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v19[2].0 = *($657F03FA94A954BB9D31D3A421B28642 *)(Root + 48);
        *(_OWORD *)&v19[2].0 = *(_OWORD *)(Root + 64);
        *((_WORD *)&v19[3].1 + 1) ^= (*((_WORD *)&v19[3].1 + 1) ^ *(_WORD *)(Root + 90)) & 0x1FE;
        *((_WORD *)&v19[3].1 + 1) = *(_WORD *)(Root + 90) ^ (*((_WORD *)&v19[3].1 + 1) ^ *(_WORD *)(Root + 90)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(Root, v19);
        BYTE3(v19[1].Left) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
      }
      else
      {
LABEL_20:
        RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)Root);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v16 = *(_BYTE *)(Root + 27);
        if ( (v16 & 2) != 0 )
        {
          *(_WORD *)(Root + 90) ^= (*(_WORD *)(Root + 90) ^ (2 * ((*(_WORD *)(Root + 90) >> 1) - 1))) & 0x1FE;
          *(_BYTE *)(Root + 27) &= ~2u;
          v16 = *(_BYTE *)(Root + 27);
        }
        if ( (v16 & 4) != 0 )
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
    v22 = 64LL;
  }
  else
  {
    v22 = 48LL;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(Root + v22), Node);
LABEL_25:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v17 = (char *)Node - 16 * LOBYTE(Node[1].Children[0]);
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v17[793];
  else
    _InterlockedExchangeAdd8(v17 + 871, 0xFFu);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
