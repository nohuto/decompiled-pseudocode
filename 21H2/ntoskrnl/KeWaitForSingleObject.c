/*
 * XREFs of KeWaitForSingleObject @ 0x1402AF080
 * Callers:
 *     PpmTryAcquireLock @ 0x140224624 (PpmTryAcquireLock.c)
 *     PpmCheckPeriodicStart @ 0x140224980 (PpmCheckPeriodicStart.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PopFxProcessWorkPool @ 0x14022EBF8 (PopFxProcessWorkPool.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140230070 (ExfWaitForRundownProtectionRelease.c)
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237230 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1402375D8 (SmKmStoreHelperCleanup.c)
 *     CcWaitForUninitializeCacheMap @ 0x14023AFD8 (CcWaitForUninitializeCacheMap.c)
 *     CcSetValidData @ 0x14023F3E8 (CcSetValidData.c)
 *     IoSynchronousCallDriver @ 0x140245250 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x1402459E8 (MiZeroPageWrite.c)
 *     WmipReceiveNotifications @ 0x140246604 (WmipReceiveNotifications.c)
 *     WmipFindRegEntryByDevice @ 0x140248854 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140248914 (WmipAllocRegEntry.c)
 *     FsRtlpWaitOnIrp @ 0x140249470 (FsRtlpWaitOnIrp.c)
 *     NtSignalAndWaitForSingleObject @ 0x14024F140 (NtSignalAndWaitForSingleObject.c)
 *     CmpDoFileRead @ 0x1402509C4 (CmpDoFileRead.c)
 *     SmKmStoreHelperWorker @ 0x140253900 (SmKmStoreHelperWorker.c)
 *     PnpLockDeviceActionQueue @ 0x140253E78 (PnpLockDeviceActionQueue.c)
 *     IopLoadDriverImage @ 0x140255A78 (IopLoadDriverImage.c)
 *     PopSetWatchdog @ 0x140256998 (PopSetWatchdog.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14025BA80 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14025C690 (LdrUnloadAlternateResourceModuleEx.c)
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     EtwpStartLoggerThread @ 0x140261C40 (EtwpStartLoggerThread.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1402621B0 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     MiRetryNonPagedAllocation @ 0x140284C74 (MiRetryNonPagedAllocation.c)
 *     CcUnmapVacbArray @ 0x1402853B0 (CcUnmapVacbArray.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     IopWaitForLockAlertable @ 0x14029ED34 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     IopWaitForSynchronousIo @ 0x1402A41A4 (IopWaitForSynchronousIo.c)
 *     MiReadyToZeroNextLargePage @ 0x1402C4BF0 (MiReadyToZeroNextLargePage.c)
 *     PopFxActivateDevice @ 0x1402D2864 (PopFxActivateDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1402D2A14 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     LdrpGetFromMUIMemCache @ 0x1402D72FC (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402D7A40 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     WmipFindRegEntryByProviderId @ 0x1402E00A4 (WmipFindRegEntryByProviderId.c)
 *     EtwpEnableMetaProviderGuid @ 0x1402E1010 (EtwpEnableMetaProviderGuid.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F4850 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     AlpcpWaitForSingleObject @ 0x1402F5DDC (AlpcpWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x1402F63D0 (AlpcpSignalAndWait.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     FsRtlpWaitForIoAtEof @ 0x14035D3E0 (FsRtlpWaitForIoAtEof.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14035F344 (SmKmStoreDeleteWhenEmpty.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140369540 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140369634 (ExpUnblockPushLock.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140373D18 (MmStoreFlushOutstandingEvictions.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140376A50 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140379848 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14037A5F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14037C880 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     MiQueueWorkingSetRequest @ 0x1403867F4 (MiQueueWorkingSetRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140389670 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403898C4 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopWakeDeviceList @ 0x14038BB00 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14038BCE0 (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x140395114 (PopHaltDeviceIdle.c)
 *     PopRunMaximumIrpWorkers @ 0x140396464 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140399104 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x140399318 (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x1403A0154 (PnpLockMountableDevice.c)
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403A7530 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x1403B1270 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x1403B17EC (PopPepUpdateConstraints.c)
 *     WmipBuildTraceDeviceList @ 0x1403B423C (WmipBuildTraceDeviceList.c)
 *     PopFxActivateComponent @ 0x1403BA340 (PopFxActivateComponent.c)
 *     WheapAddErrorSource @ 0x1403C0774 (WheapAddErrorSource.c)
 *     MiZeroLargePageThread @ 0x1403C6B00 (MiZeroLargePageThread.c)
 *     KeSwapProcessOrStack @ 0x1403C6D20 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x1403C7DE0 (CcQueueLazyWriteScanThread.c)
 *     CmpLazyWriteWorker @ 0x1403CBDF0 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x1403CDBF0 (MiStoreEvictThread.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     MiZeroPageCalibrate @ 0x1403D3EE0 (MiZeroPageCalibrate.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403D525C (LdrpSetAlternateResourceModuleHandle.c)
 *     WmiQueryTraceProviderCount @ 0x1403D6930 (WmiQueryTraceProviderCount.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403D8FF0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiZeroPageThread @ 0x1403D9D30 (MiZeroPageThread.c)
 *     PnpSerializeBoot @ 0x1403DCD34 (PnpSerializeBoot.c)
 *     PopIrpWorkerControl @ 0x1403DEE60 (PopIrpWorkerControl.c)
 *     IopWaitForSynchronousIoEvent @ 0x140417B94 (IopWaitForSynchronousIoEvent.c)
 *     FsFilterAllocateCompletionStack @ 0x140459984 (FsFilterAllocateCompletionStack.c)
 *     WmipEnterSMCritSection @ 0x14045F87C (WmipEnterSMCritSection.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x14051CE3C (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x14053DDB8 (CcDeleteSectionsForPartition.c)
 *     FsRtlpPostStackOverflow @ 0x140542FC4 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x140556050 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1405562E8 (IopAllocateReserveIrp.c)
 *     NtSubmitIoRing @ 0x14055A160 (NtSubmitIoRing.c)
 *     PnprQuiesce @ 0x140563058 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x140564C24 (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x14056EC2C (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x1405757C0 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140576200 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x14057657C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1405765B0 (KiSynchronizePassiveInterruptExecution.c)
 *     KiStallBugcheckThread @ 0x1405798A8 (KiStallBugcheckThread.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x140581748 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140594698 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x14059C99C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14059CFBC (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1405A2E3C (MiCheckHoldFaultForHotPatch.c)
 *     MiApplyCommitDelay @ 0x1405B2E5C (MiApplyCommitDelay.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405B7340 (MiContractWsSwapPageFileWorker.c)
 *     MiWaitForAvailablePages @ 0x1405B81F0 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 *     MiDrainCrossPartitionUsage @ 0x1405BE340 (MiDrainCrossPartitionUsage.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405CCAC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x1405E2740 (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x1405FC690 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405FCF84 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x1405FD830 (SmWaitForSyncIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1406161C0 (DifKeWaitForSingleObjectWrapper.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406330FC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x140635EEC (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x14063A090 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x14063A300 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140644030 (WheapProcessWorkQueueItem.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     PiQueueDeviceRequest @ 0x14065F5D4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14065FA0C (PnpQueueQueryAndRemoveEvent.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     IoVolumeDeviceToGuidPath @ 0x14068BA10 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpGetVolumeClusterSize @ 0x14068BEAC (CmpGetVolumeClusterSize.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     AlpcpWaitForPortReferences @ 0x14069B63C (AlpcpWaitForPortReferences.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1406A443C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     IopCancelIrpsInThreadList @ 0x1406A4C58 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeSession @ 0x1406A91F0 (NtNotifyChangeSession.c)
 *     NtGetMUIRegistryInfo @ 0x1406BE9A0 (NtGetMUIRegistryInfo.c)
 *     IopSynchronousApiServiceTail @ 0x1406BF8BC (IopSynchronousApiServiceTail.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1406C1A74 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x1406C8478 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x1406C8550 (WmipUpdateDeviceStackSize.c)
 *     WmipPrepareForWnodeAD @ 0x1406D2BE8 (WmipPrepareForWnodeAD.c)
 *     IopGetSetObjectId @ 0x1406D3ACC (IopGetSetObjectId.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406D520C (EtwpUpdateGlobalGroupMasks.c)
 *     WmipDisableCollectOrEvent @ 0x1406D8750 (WmipDisableCollectOrEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1406D8994 (WmipSendEnableDisableRequest.c)
 *     WmipRegistrationWorker @ 0x1406DAF30 (WmipRegistrationWorker.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406E30E0 (EtwpCrimsonProvEnableCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1406E825C (SPCallServerHandleWaitForDisplayWindow.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1406EA5EC (PnpSynchronizeDeviceEventQueue.c)
 *     MiInSwapStore @ 0x1406EBCCC (MiInSwapStore.c)
 *     EtwpSynchronizeWithLogger @ 0x1406EC9F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStartTrace @ 0x1406EDF6C (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     MiReadImageHeaders @ 0x1407063CC (MiReadImageHeaders.c)
 *     IopGetFileInformation @ 0x14070FC40 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140710B90 (IoVolumeDeviceToDosName.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     PnpCallDriverEntry @ 0x140747DDC (PnpCallDriverEntry.c)
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140748D6C (IopFilterResourceRequirementsCall.c)
 *     IopUncacheInterfaceInformation @ 0x1407490C0 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PnpCallAddDevice @ 0x140749DA0 (PnpCallAddDevice.c)
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 *     PnpDisableWatchdog @ 0x14074D6EC (PnpDisableWatchdog.c)
 *     WmipAddDataSource @ 0x14075D1B4 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14075D814 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x14075DA88 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14075DD3C (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x14075F09C (WmipFindISinGEbyName.c)
 *     PiControlGetSetDeviceStatus @ 0x1407793D0 (PiControlGetSetDeviceStatus.c)
 *     WmipOpenBlock @ 0x140783428 (WmipOpenBlock.c)
 *     WmipUnreferenceEntry @ 0x1407838E0 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x140783A9C (WmipForwardWmiIrp.c)
 *     WmipFindGEByGuid @ 0x140783CD8 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140783DB8 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectOrEvent @ 0x1407841FC (WmipEnableCollectOrEvent.c)
 *     WmipDeleteMethod @ 0x1407842F0 (WmipDeleteMethod.c)
 *     WmipIsQuerySetGuid @ 0x1407843EC (WmipIsQuerySetGuid.c)
 *     WmipEnumerateMofResources @ 0x14078D1A8 (WmipEnumerateMofResources.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407940E4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpDisableTraceProviders @ 0x140795400 (EtwpDisableTraceProviders.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407A11A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     PiDrvDbLoadNode @ 0x1407D4E34 (PiDrvDbLoadNode.c)
 *     PnpDeviceEventWorker @ 0x1407D5E30 (PnpDeviceEventWorker.c)
 *     RtlDecompressBufferLZNT1 @ 0x1407D6FA0 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1407D80F0 (RtlDecompressFragmentLZNT1.c)
 *     ObWaitForSingleObject @ 0x1407E0200 (ObWaitForSingleObject.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     SmStoreCompressionStop @ 0x1407F575C (SmStoreCompressionStop.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407FA460 (FsRtlIssueDeviceIoControl.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 *     FsRtlBalanceReads @ 0x1407FC880 (FsRtlBalanceReads.c)
 *     NtInitiatePowerAction @ 0x1407FEA60 (NtInitiatePowerAction.c)
 *     PopFxNotifySxTransitionState @ 0x1407FF67C (PopFxNotifySxTransitionState.c)
 *     EmPowerPagingEnabled @ 0x1407FF7F4 (EmPowerPagingEnabled.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x1407FFBAC (PopPowerAggregatorNotifySuspendResume.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 *     PopClearHiberFileSignature @ 0x1408005A0 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140801624 (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1408017F8 (PopSanityCheckHiberFile.c)
 *     HalpGetDynamicDevicePointer @ 0x14080637C (HalpGetDynamicDevicePointer.c)
 *     PopGetWakeSource @ 0x140806788 (PopGetWakeSource.c)
 *     PopInitSystemSleeperThread @ 0x140807FEC (PopInitSystemSleeperThread.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     IopInvalidateVolumesForDevice @ 0x14080AB40 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14080C5C8 (IopLoadFileSystemDriver.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14080D7EC (PopFxUnregisterDeviceOrWait.c)
 *     WmipDSCleanup @ 0x14080E2B0 (WmipDSCleanup.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14080EEFC (WmipDisableCollectionForRemovedGuid.c)
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     WmipDeregisterDevice @ 0x140810420 (WmipDeregisterDevice.c)
 *     WmipSetTraceNotify @ 0x140810B00 (WmipSetTraceNotify.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x1408176BC (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14081788C (IopAcquireReleaseConnectLockInternal.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14081AB80 (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14081C234 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     HalpPutAcpiHacksInRegistry @ 0x14081E700 (HalpPutAcpiHacksInRegistry.c)
 *     IopLegacyResourceAllocation @ 0x14081F570 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140820280 (IopAllocateBootResources.c)
 *     PopFxUnregisterDevice @ 0x14082310C (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140823318 (PopPepUnregisterDevice.c)
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14082EF8C (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14082EFB8 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     ArbBuildAssignmentOrdering @ 0x14083AAB8 (ArbBuildAssignmentOrdering.c)
 *     SepRmCommandServerThread @ 0x14083B300 (SepRmCommandServerThread.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140845880 (PopDirectedDripsWorkerRoutine.c)
 *     HalGetAdapterV2 @ 0x140845A60 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
 *     MiZeroPageFileFirstPage @ 0x14084BA88 (MiZeroPageFileFirstPage.c)
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 *     WmipAddMofResource @ 0x14084E03C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x14084E278 (WmipFindMRByNames.c)
 *     ArbArbiterHandler @ 0x140852700 (ArbArbiterHandler.c)
 *     EtwpFixBootLoggers @ 0x140854CB8 (EtwpFixBootLoggers.c)
 *     WmipLegacyEtwWorker @ 0x140855120 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140855238 (WmipProcessLegacyEtwRegister.c)
 *     FsRtlpRegisterUncProvider @ 0x1408567A8 (FsRtlpRegisterUncProvider.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1408605C8 (IopInsertLegacyBusDeviceNode.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F60 (WheapProcessWaitingETWEvents.c)
 *     IoWMISetNotificationCallback @ 0x140862AB0 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x140864AC0 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1408650D0 (FsRtlWaitForSmssEvent.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140881870 (IopAcquireReleaseDispatcherLock.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140908124 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140908208 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140908CD0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpCallWakeAlarmDriver @ 0x14090A480 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14090A560 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x14090AD84 (HalpQueryPccInterface.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140919170 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140927128 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x1409283F4 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140929380 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14092B264 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14092D730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14092E1B0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140930280 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopGetVolumeId @ 0x14093449C (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x1409345F0 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x140935044 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140935C64 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14093F428 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x1409404FC (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140943170 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140944C08 (PnpRequestHwProfileChangeNotification.c)
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14094FB70 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x1409589A4 (PiIrpQueryRemoveDevice.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x14095A544 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x14095A67C (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x14095F204 (IopQueryConflictList.c)
 *     MiInjectThreadForHotPatch @ 0x140973B80 (MiInjectThreadForHotPatch.c)
 *     PfTCleanup @ 0x1409882B4 (PfTCleanup.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140989F5C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopDeactiveThermalRequest @ 0x14098B5B8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x14098B798 (PopDisableCoolingExtension.c)
 *     PopReadPagesFromHiberFile @ 0x14098F634 (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x140990100 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x140990740 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x140995040 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1409991F0 (PopFanRemove.c)
 *     SshSessionManagerFlushBuffers @ 0x1409A0D80 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AC2BC (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     PsSetVmProcessorHostProcess @ 0x1409AF410 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x1409B1468 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1409B196C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1409B3490 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1409B35D0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B45F0 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1409B4F34 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x1409B5088 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1409B54D8 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409BEBB0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x1409D42F8 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D43FC (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D48D8 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5B38 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1409D6368 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1409D6428 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1409D64F8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D6C58 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D6CF4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1409DB760 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1409DC80C (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1409DCFD4 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1409DD22C (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1409DD3C4 (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x1409DD9A4 (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x1409DE220 (WmipLegacyEtwCallback.c)
 *     WmipUpdateDataSource @ 0x1409DE80C (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1409DED88 (WmipWaitForCollectionEnabled.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetPmcProfileSource @ 0x1409E39EC (EtwpSetPmcProfileSource.c)
 *     EtwpEnableDisableUMGL @ 0x1409E4318 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E491C (EtwpUpdatePerProcessTracing.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409E93FC (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409E9458 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1409EB5B4 (EtwpSampledProfileRunDown.c)
 *     EtwpKsrCallback @ 0x1409ECB90 (EtwpKsrCallback.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EDE68 (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x1409EEF94 (EtwpCovSampCaptureFlush.c)
 *     ExpWorkQueueDestroy @ 0x140A02158 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140A05860 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140A06B80 (NtStartProfile.c)
 *     NtStopProfile @ 0x140A06DF0 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x140A06FF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A073C0 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x140A08BE0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_140A0D5E8 @ 0x140A0D5E8 (sub_140A0D5E8.c)
 *     sub_140A0E96C @ 0x140A0E96C (sub_140A0E96C.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A31BF4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x140A3437C (VhdiVerifyBootDisk.c)
 *     PopTransitionToSleep @ 0x140A48630 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140A51CA4 (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A65554 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140A67C74 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140A69140 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140A6A1B0 (MiZeroAllPageFiles.c)
 *     PfpScenCtxPrefetchWait @ 0x140A6AACC (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 *     IovpUnloadDriver @ 0x140A81078 (IovpUnloadDriver.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfIrpSendSynchronousIrp @ 0x140A8D17C (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140A91260 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140A91580 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140A9A410 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140A9E540 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140AACA74 (AnFwFadeCompletion.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140B0EB5C (IopAssignBootDriveLetter.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B26348 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     IopGetBootDiskInformation @ 0x140B4F04C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140B55478 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B55668 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140B55A38 (SbpWaitForVmbus.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiFastExitThreadWait @ 0x1402946B8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r10
  __int64 v8; // r8
  LONGLONG QuadPart; // r9
  unsigned __int8 WaitIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  unsigned __int8 v13; // r13
  $0EA7835A9B05193480487A73CEA01DA9 *v14; // r12
  unsigned int v15; // esi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // r15
  NTSTATUS v19; // r14d
  __int64 ThreadTimerDelay; // rdx
  bool v21; // r10
  int v22; // r11d
  unsigned __int64 v23; // rax
  PVOID *v24; // rcx
  __int64 *v25; // r15
  unsigned __int8 v26; // r10
  unsigned __int64 v27; // rdi
  _KWAIT_STATUS_REGISTER v28; // al
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rsi
  _DWORD *v34; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  int v36; // eax
  char v37; // al
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v39; // rcx
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  volatile __int64 WaitStatus; // rsi
  void *volatile AbWaitObject; // rcx
  unsigned __int64 v44; // rdi
  _KWAIT_STATUS_REGISTER v45; // al
  unsigned __int64 v46; // rcx
  struct _KPRCB *v47; // rdi
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  _DWORD *v51; // rcx
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  unsigned __int8 v56; // cl
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  struct _KPRCB *v62; // rcx
  _DWORD *v63; // rdx
  bool v64; // zf
  int v65; // eax
  __int64 v66; // rax
  NTSTATUS v67; // edi
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  struct _KPRCB *v73; // rbx
  _DWORD *v74; // rcx
  int v75; // eax
  _DWORD *v76; // rcx
  int v77; // eax
  _DWORD *v78; // rcx
  int v79; // eax
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rdx
  int v82; // eax
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r9
  _DWORD *v87; // r8
  int v88; // eax
  struct _KPRCB *v89; // rbx
  _DWORD *v90; // rcx
  int v91; // eax
  _DWORD *v92; // rcx
  int v93; // eax
  _DWORD *v94; // rcx
  int v95; // eax
  struct _KPRCB *v96; // rcx
  _DWORD *v97; // rdx
  int v98; // eax
  struct _KPRCB *v99; // rcx
  _DWORD *v100; // rdx
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r9
  _DWORD *v103; // r8
  int v104; // eax
  signed __int32 v105[8]; // [rsp+0h] [rbp-91h] BYREF
  bool v106; // [rsp+30h] [rbp-61h]
  unsigned __int8 v107; // [rsp+31h] [rbp-60h]
  LONGLONG v108; // [rsp+38h] [rbp-59h]
  __int64 v109; // [rsp+40h] [rbp-51h]
  int v110; // [rsp+48h] [rbp-49h] BYREF
  int v111; // [rsp+4Ch] [rbp-45h] BYREF
  int v112; // [rsp+50h] [rbp-41h] BYREF
  int v113; // [rsp+54h] [rbp-3Dh] BYREF
  int v114; // [rsp+58h] [rbp-39h] BYREF
  __int64 v115; // [rsp+60h] [rbp-31h] BYREF
  __int64 v116; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v117[2]; // [rsp+70h] [rbp-21h] BYREF
  __int128 v118; // [rsp+80h] [rbp-11h]
  __int64 v119; // [rsp+90h] [rbp-1h]
  unsigned __int8 v121; // [rsp+F8h] [rbp+67h]
  int Timeouta; // [rsp+110h] [rbp+7Fh]

  v121 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v115 = 0LL;
  v108 = 0LL;
  v106 = 0;
  v109 = 0LL;
  v107 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v107 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v8 = 0xFFFFF780000003B0uLL;
  QuadPart = 0xFFFFF78000000008uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      Timeouta = 2;
      v108 = MEMORY[0xFFFFF78000000008]
           - MEMORY[0xFFFFF780000003B0]
           - (Timeout->QuadPart
            + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v108 = Timeout->QuadPart;
      Timeouta = 1;
    }
  }
  else
  {
    Timeouta = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v110 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v59 = v12[6];
          v12[6] = v59 + 1;
          if ( v59 == -1 )
LABEL_141:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v54 = CurrentPrcb->SchedulerAssist;
        if ( v54 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v60 = v54[6] - 1;
            v54[6] = v60;
            if ( !v60 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v110);
        while ( CurrentThread->ThreadLock );
        v55 = CurrentPrcb->SchedulerAssist;
        if ( v55 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v61 = v55[6];
            v55[6] = v61 + 1;
            if ( v61 == -1 )
              goto LABEL_141;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v62 = KeGetCurrentPrcb();
          v63 = v62->SchedulerAssist;
          v64 = (v63[5] & 0xFFFF0003) == 0;
          v63[5] &= 0xFFFF0003;
          if ( v64 )
            KiRemoveSystemWorkPriorityKick(v62);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
      {
        QuadPart = (LONGLONG)KeGetCurrentPrcb()->SchedulerAssist;
        v8 = *(unsigned int *)(QuadPart + 20);
        *(_DWORD *)(QuadPart + 20) = v8 | ~((unsigned __int8)(1LL << (v56 + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = 0;
    }
    v13 = v107;
    v14 = &CurrentThread->320;
    if ( Alertable )
    {
      v8 = WaitMode;
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v67 = 257;
        goto LABEL_96;
      }
      if ( WaitMode
        && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_95:
        v67 = 192;
LABEL_96:
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
        return v67;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v67 = 257;
        goto LABEL_96;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
    {
      goto LABEL_95;
    }
    v15 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v121;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v65 = v17[6] - 1;
        v17[6] = v65;
        if ( !v65 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    v18 = KeGetCurrentPrcb();
    v19 = 0;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v17, v8, QuadPart) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
    }
    ThreadTimerDelay = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) == 2 )
      break;
    if ( (int)ThreadTimerDelay > 0 )
    {
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = ThreadTimerDelay - 1;
      }
      goto LABEL_31;
    }
    v21 = v106;
LABEL_19:
    v22 = v108;
    v23 = v108;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v46 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v23 = v108;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v23 = v108 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_21;
      if ( !v108 )
        goto LABEL_66;
      v46 = MEMORY[0xFFFFF78000000014];
    }
    if ( v46 > v23 )
    {
LABEL_66:
      v19 = 258;
LABEL_31:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v105, 0);
      if ( CurrentThread->ThreadLock )
      {
        v47 = KeGetCurrentPrcb();
        v113 = 0;
        v48 = v47->SchedulerAssist;
        if ( v48 )
        {
          if ( v47->NestingLevel <= 1u )
          {
            v49 = v48[6];
            v48[6] = v49 + 1;
            if ( v49 == -1 )
LABEL_106:
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v50 = v47->SchedulerAssist;
          if ( v50 )
          {
            if ( v47->NestingLevel <= 1u )
            {
              v53 = v50[6] - 1;
              v50[6] = v53;
              if ( !v53 )
                KiRemoveSystemWorkPriorityKick(v47);
            }
          }
          do
            KeYieldProcessorEx(&v113);
          while ( CurrentThread->ThreadLock );
          v51 = v47->SchedulerAssist;
          if ( v51 )
          {
            if ( v47->NestingLevel <= 1u )
            {
              v52 = v51[6];
              v51[6] = v52 + 1;
              if ( v52 == -1 )
                goto LABEL_106;
            }
          }
        }
        KiReleaseThreadLockSafe((__int64)CurrentThread);
      }
      v27 = CurrentThread->WaitIrql;
      v28.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      if ( (v28.Flags & 0x38) != 0 )
      {
        if ( (v28.Flags & 0x18) != 0 )
        {
          if ( (v28.Flags & 8) != 0 )
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
          v117[0] = 0LL;
          v89 = KeGetCurrentPrcb();
          v114 = 0;
          v90 = v89->SchedulerAssist;
          if ( v90 )
          {
            if ( v89->NestingLevel <= 1u )
            {
              v91 = v90[6];
              v90[6] = v91 + 1;
              if ( v91 == -1 )
LABEL_217:
                KiRemoveSystemWorkPriorityKick(v89);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
          {
            v92 = v89->SchedulerAssist;
            if ( v92 )
            {
              if ( v89->NestingLevel <= 1u )
              {
                v93 = v92[6] - 1;
                v92[6] = v93;
                if ( !v93 )
                  KiRemoveSystemWorkPriorityKick(v89);
              }
            }
            do
              KeYieldProcessorEx(&v114);
            while ( v18->PrcbLock );
            v94 = v89->SchedulerAssist;
            if ( v94 )
            {
              if ( v89->NestingLevel <= 1u )
              {
                v95 = v94[6];
                v94[6] = v95 + 1;
                if ( v95 == -1 )
                  goto LABEL_217;
              }
            }
          }
          if ( !v18->NextThread )
            KiSelectNextThread(v18, v117, v8);
          _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
          v96 = KeGetCurrentPrcb();
          v97 = v96->SchedulerAssist;
          if ( v97 )
          {
            if ( v96->NestingLevel <= 1u )
            {
              v98 = v97[6] - 1;
              v97[6] = v98;
              if ( !v98 )
                KiRemoveSystemWorkPriorityKick(v96);
            }
          }
          KiProcessDeferredReadyList(v18, v117, (unsigned __int8)v27);
        }
        else
        {
          KiCheckForThreadDispatch((__int64)v18, 1u);
          KiDeliverApc(0LL, 0LL, 0LL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v99 = KeGetCurrentPrcb();
              v100 = v99->SchedulerAssist;
              v64 = (v100[5] & 0xFFFF0001) == 0;
              v100[5] &= 0xFFFF0001;
              if ( v64 )
                KiRemoveSystemWorkPriorityKick(v99);
            }
          }
          __writecr8(0LL);
        }
      }
      else if ( v13 )
      {
        KiCheckForThreadDispatch((__int64)v18, v27);
      }
      else
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v101 = KeGetCurrentIrql();
            if ( v101 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v101 >= 2u )
            {
              v102 = KeGetCurrentPrcb();
              v103 = v102->SchedulerAssist;
              v104 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
              v64 = (v104 & v103[5]) == 0;
              v103[5] &= v104;
              if ( v64 )
                KiRemoveSystemWorkPriorityKick(v102);
            }
          }
        }
        __writecr8(v27);
      }
      return v19;
    }
LABEL_21:
    v24 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v24 != (char *)Object + 8 )
      goto LABEL_211;
    v14->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v24;
    *v24 = v14;
    *((_QWORD *)Object + 2) = v14;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( v21 )
    {
      v66 = KeAbPreAcquire(Object, 0LL, 0LL);
      v22 = v108;
      v25 = (__int64 *)v66;
      v109 = v66;
    }
    else
    {
      v25 = (__int64 *)v109;
    }
    if ( v25 )
    {
      KeAbPreWait(v25, ThreadTimerDelay, v8);
      v19 = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, Timeouta, v108, (__int64)&v115);
      if ( (v19 & 0xFFFFFF7F) != 0 )
      {
        KeAbPreAcquire(Object, v25, 0LL);
        KeAbPostReleaseEx((ULONG_PTR)Object);
        v109 = 0LL;
      }
      else
      {
        v109 = KeAbPreAcquire(Object, v25, 0LL);
        *(_BYTE *)(v109 + 18) = 1;
      }
    }
    else
    {
      v19 = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, Timeouta, v22, (__int64)&v115);
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( v19 != 256 )
      return v19;
    v107 = 0;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
    {
      QuadPart = (LONGLONG)KeGetCurrentPrcb()->SchedulerAssist;
      v8 = *(unsigned int *)(QuadPart + 20);
      *(_DWORD *)(QuadPart + 20) = v8 | ~((unsigned __int8)(1LL << (v26 + 1)) - 1) & 4;
    }
    CurrentThread->WaitIrql = v26;
  }
  v21 = (*((_BYTE *)Object + 48) & 2) != 0;
  v106 = v21;
  if ( (int)ThreadTimerDelay <= 0
    && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != v18->DpcRoutineActive) )
  {
    goto LABEL_19;
  }
  v31 = *((_DWORD *)Object + 1);
  if ( v31 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait((__int64)v18, (__int64)CurrentThread, v13);
    RtlRaiseStatus(3221225873LL);
  }
  v32 = v31 - 1;
  *((_DWORD *)Object + 1) = v32;
  if ( v32 )
    goto LABEL_31;
  CurrentThread->WaitStatus = 0LL;
  v33 = KeGetCurrentPrcb();
  v111 = 0;
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v68 = v34[6];
      v34[6] = v68 + 1;
      if ( v68 == -1 )
LABEL_162:
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v57 = v33->SchedulerAssist;
    if ( v57 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v69 = v57[6] - 1;
        v57[6] = v69;
        if ( !v69 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    do
      KeYieldProcessorEx(&v111);
    while ( CurrentThread->ThreadLock );
    v58 = v33->SchedulerAssist;
    if ( v58 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v70 = v58[6];
        v58[6] = v70 + 1;
        if ( v70 == -1 )
          goto LABEL_162;
      }
    }
  }
  if ( *((_BYTE *)Object + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v18->CurrentThread == CurrentThread )
    DpcRoutineActive = v18->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v119 = 0LL;
  v36 = *(_DWORD *)Object;
  v118 = 0LL;
  LODWORD(v118) = v36;
  BYTE2(v118) = DpcRoutineActive;
  *(_DWORD *)Object = v118;
  v37 = *((_BYTE *)Object + 48);
  *((_QWORD *)Object + 5) = CurrentThread;
  if ( (v37 & 1) != 0 )
  {
    *((_BYTE *)Object + 48) = v37 & 0xFE;
    CurrentThread->WaitStatus |= 0x80uLL;
    v37 = *((_BYTE *)Object + 48);
  }
  if ( (v37 & 2) != 0 )
    CurrentThread->AbWaitObject = Object;
  else
    CurrentThread->AbWaitObject = 0LL;
  Blink = CurrentThread->MutantListHead.Blink;
  v39 = (struct _LIST_ENTRY *)((char *)Object + 24);
  if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_211:
    __fastfail(3u);
  v39->Flink = &CurrentThread->MutantListHead;
  *((_QWORD *)Object + 4) = Blink;
  Blink->Flink = v39;
  CurrentThread->MutantListHead.Blink = v39;
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v40 = KeGetCurrentPrcb();
  v41 = v40->SchedulerAssist;
  if ( v41 )
  {
    if ( v40->NestingLevel <= 1u )
    {
      v71 = v41[6] - 1;
      v41[6] = v71;
      if ( !v71 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v72 = KeAbPreAcquire(AbWaitObject, 0LL, 1LL);
    if ( v72 )
      *(_BYTE *)(v72 + 18) = 1;
  }
  v44 = CurrentThread->WaitIrql;
  v45.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v45.Flags & 0x38) == 0 )
  {
    if ( v13 )
    {
      KiCheckForThreadDispatch((__int64)v18, v44);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v85 = KeGetCurrentIrql();
          if ( v85 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v85 >= 2u )
          {
            v86 = KeGetCurrentPrcb();
            v87 = v86->SchedulerAssist;
            v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
            v64 = (v88 & v87[5]) == 0;
            v87[5] &= v88;
            if ( v64 )
              KiRemoveSystemWorkPriorityKick(v86);
          }
        }
      }
      __writecr8(v44);
    }
    return WaitStatus;
  }
  if ( (v45.Flags & 0x18) != 0 )
  {
    if ( (v45.Flags & 8) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
    v116 = 0LL;
    v73 = KeGetCurrentPrcb();
    v112 = 0;
    v74 = v73->SchedulerAssist;
    if ( v74 )
    {
      if ( v73->NestingLevel <= 1u )
      {
        v75 = v74[6];
        v74[6] = v75 + 1;
        if ( v75 == -1 )
LABEL_181:
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
    {
      v76 = v73->SchedulerAssist;
      if ( v76 )
      {
        if ( v73->NestingLevel <= 1u )
        {
          v77 = v76[6] - 1;
          v76[6] = v77;
          if ( !v77 )
            KiRemoveSystemWorkPriorityKick(v73);
        }
      }
      do
        KeYieldProcessorEx(&v112);
      while ( v18->PrcbLock );
      v78 = v73->SchedulerAssist;
      if ( v78 )
      {
        if ( v73->NestingLevel <= 1u )
        {
          v79 = v78[6];
          v78[6] = v79 + 1;
          if ( v79 == -1 )
            goto LABEL_181;
        }
      }
    }
    if ( !v18->NextThread )
      KiSelectNextThread(v18, &v116, v8);
    _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
    v80 = KeGetCurrentPrcb();
    v81 = v80->SchedulerAssist;
    if ( v81 )
    {
      if ( v80->NestingLevel <= 1u )
      {
        v82 = v81[6] - 1;
        v81[6] = v82;
        if ( !v82 )
          KiRemoveSystemWorkPriorityKick(v80);
      }
    }
    KiProcessDeferredReadyList(v18, &v116, (unsigned __int8)v44);
    return WaitStatus;
  }
  else
  {
    KiCheckForThreadDispatch((__int64)v18, 1u);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v83 = KeGetCurrentPrcb();
        v84 = v83->SchedulerAssist;
        v64 = (v84[5] & 0xFFFF0001) == 0;
        v84[5] &= 0xFFFF0001;
        if ( v64 )
          KiRemoveSystemWorkPriorityKick(v83);
      }
    }
    __writecr8(0LL);
    return WaitStatus;
  }
}
