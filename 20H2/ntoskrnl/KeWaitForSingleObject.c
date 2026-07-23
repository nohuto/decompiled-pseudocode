/*
 * XREFs of KeWaitForSingleObject @ 0x14021B560
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140203960 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CcSetValidData @ 0x14020467C (CcSetValidData.c)
 *     AlpcpSignalAndWait @ 0x1402084C0 (AlpcpSignalAndWait.c)
 *     IopWaitForSynchronousIo @ 0x14020AD88 (IopWaitForSynchronousIo.c)
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     ExpWaitForResource @ 0x140217F70 (ExpWaitForResource.c)
 *     WmipFindRegEntryByProviderId @ 0x14023FF30 (WmipFindRegEntryByProviderId.c)
 *     IopWaitForLockAlertable @ 0x1402419E4 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     PoFxActivateComponent @ 0x140245E90 (PoFxActivateComponent.c)
 *     CcWriteBehind @ 0x14024A910 (CcWriteBehind.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140254D40 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140255F38 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcCanIWrite @ 0x14029A7B0 (CcCanIWrite.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AD640 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402F38F0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402F39D8 (ExpUnblockPushLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402F488C (FsRtlpWaitForIoAtEof.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402FC820 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402FD320 (LdrpGetFromMUIMemCache.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140306170 (ExfWaitForRundownProtectionRelease.c)
 *     PpmCheckPeriodicStart @ 0x14030BEB0 (PpmCheckPeriodicStart.c)
 *     MiIssueSynchronousFlush @ 0x14030F1D8 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x140314168 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403154B0 (CcWaitForUninitializeCacheMap.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14031ABD8 (MmStoreFlushOutstandingEvictions.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14031C3B8 (SmKmStoreDeleteWhenEmpty.c)
 *     IoSynchronousCallDriver @ 0x14031D280 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x14031E678 (MiZeroPageWrite.c)
 *     CmpDoFileRead @ 0x140326840 (CmpDoFileRead.c)
 *     WmipReceiveNotifications @ 0x14032A3E8 (WmipReceiveNotifications.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14032A7D0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140330730 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140331A5C (MiQueueSyncModifiedWriterApc.c)
 *     MiRetryNonPagedAllocation @ 0x140333F40 (MiRetryNonPagedAllocation.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403376F4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14033B490 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     PopFxProcessWorkPool @ 0x14033D5EC (PopFxProcessWorkPool.c)
 *     PopExecuteOnTargetProcessors @ 0x14033E6D0 (PopExecuteOnTargetProcessors.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x14033F820 (PopSetWatchdog.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140358194 (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperWorker @ 0x140358340 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCleanup @ 0x140359C70 (SmKmStoreHelperCleanup.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140359CC0 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PnpLockDeviceActionQueue @ 0x140362B34 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14036D658 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 *     WmipFindRegEntryByDevice @ 0x1403708F4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1403709B4 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140370AA4 (WmipDeregisterRegEntry.c)
 *     PpmTryAcquireLock @ 0x14037DA68 (PpmTryAcquireLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC1C (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037F358 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F530 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380CCC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     ExUnregisterCallback @ 0x140381270 (ExUnregisterCallback.c)
 *     PopWakeDeviceList @ 0x1403829EC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140382BCC (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x140388668 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x14038B0B8 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x14038BC90 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D438 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038D650 (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x14039394C (PnpLockMountableDevice.c)
 *     IopLoadDriverImage @ 0x140399A08 (IopLoadDriverImage.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14039A9D0 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14039C4D0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039CBCC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5294 (MiQueueWorkingSetRequest.c)
 *     WmiQueryTraceProviderCount @ 0x1403A8990 (WmiQueryTraceProviderCount.c)
 *     MiZeroPageCalibrate @ 0x1403A9F18 (MiZeroPageCalibrate.c)
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 *     KeSwapProcessOrStack @ 0x1403B2C70 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B89A0 (CcQueueLazyWriteScanThread.c)
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403BA624 (WheapAddErrorSource.c)
 *     PopFxActivateComponent @ 0x1403BDFF0 (PopFxActivateComponent.c)
 *     MiModifiedPageWriter @ 0x1403BE5C0 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x1403BF850 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x1403C07B0 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x1403C5480 (WmipBuildTraceDeviceList.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C7A60 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x1403CB5E0 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x1403CE0A0 (PnpSerializeBoot.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F057C (IopWaitForSynchronousIoEvent.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404CEE60 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcDeleteSectionsForPartition @ 0x1404EA2F4 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x1404EF150 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x1404EF51C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1404EFB34 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1404FE530 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FE7D0 (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x14050DBE8 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x14050E96C (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140517464 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x14051F398 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051FE8C (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x1405202E4 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140520320 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052B1F4 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14053758C (MiPfCompleteCoalescedIo.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053C7DC (MiCheckHoldFaultForHotPatch.c)
 *     MiIssuePageExtendRequest @ 0x140541E44 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePagesToZero @ 0x14054E4BC (MiWaitForFreePagesToZero.c)
 *     MiApplyCommitDelay @ 0x14054E760 (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x14055A5D4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055A9E0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x1405605CC (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x140562EA0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140569940 (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x1405822E0 (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x14059D3BC (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059DD34 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14059E614 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A9E7C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405AD05C (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1405B1730 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1405B19A0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1405BA180 (WheapProcessWorkQueueItem.c)
 *     sub_1405BD780 @ 0x1405BD780 (sub_1405BD780.c)
 *     CmpFileFlushAndPurge @ 0x1405DCDAC (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1405DCF4C (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1405DD164 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405DD5B0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405DD720 (IoVolumeDeviceNameToGuidPath.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     IoVolumeDeviceToDosName @ 0x1405FA930 (IoVolumeDeviceToDosName.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObWaitForSingleObject @ 0x1406115B0 (ObWaitForSingleObject.c)
 *     CmpParseKey @ 0x140619690 (CmpParseKey.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1406366D4 (IopGetFileInformation.c)
 *     WmipDeleteMethod @ 0x140647B80 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x140647C78 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x140647D4C (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x140647F88 (WmipPrepareForWnodeAD.c)
 *     PnpDeviceEventWorker @ 0x14064A080 (PnpDeviceEventWorker.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     PiDrvDbLoadNode @ 0x140657654 (PiDrvDbLoadNode.c)
 *     WmipFindGEByGuid @ 0x140667D70 (WmipFindGEByGuid.c)
 *     WmipOpenBlock @ 0x140667E58 (WmipOpenBlock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140688200 (FsRtlCancellableWaitForMultipleObjects.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 *     IopGetSetObjectId @ 0x1406A05D8 (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x1406A6F3C (AlpcpWaitForPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x1406A7DD0 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406A7F40 (RtlDecompressFragmentLZNT1.c)
 *     FsRtlSetFileSize @ 0x1406B407C (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406B41A0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406B4340 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeSession @ 0x1406BB800 (NtNotifyChangeSession.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     NtGetMUIRegistryInfo @ 0x1406C1890 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x1406C2AC8 (IopCancelIrpsInThreadList.c)
 *     WmipEnableCollectOrEvent @ 0x1406C51EC (WmipEnableCollectOrEvent.c)
 *     SmStoreCompressionStop @ 0x1406C5700 (SmStoreCompressionStop.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     WmipIsQuerySetGuid @ 0x1406CE520 (WmipIsQuerySetGuid.c)
 *     MiReadImageHeaders @ 0x1406D15FC (MiReadImageHeaders.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406D47F0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406DE170 (FsRtlQueryCachedVdl.c)
 *     WmipEnumerateMofResources @ 0x1406DE824 (WmipEnumerateMofResources.c)
 *     WmipDisableCollectOrEvent @ 0x1406E1860 (WmipDisableCollectOrEvent.c)
 *     FsRtlBalanceReads @ 0x1406E2C50 (FsRtlBalanceReads.c)
 *     MiInSwapStore @ 0x1406F0CBC (MiInSwapStore.c)
 *     PnpDisableWatchdog @ 0x1406F4B48 (PnpDisableWatchdog.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     FsRtlGetFileSize @ 0x14070AA70 (FsRtlGetFileSize.c)
 *     EtwpSynchronizeWithLogger @ 0x14071269C (EtwpSynchronizeWithLogger.c)
 *     EtwpStartTrace @ 0x140713044 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407149CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 *     EtwpDisableTraceProviders @ 0x140717A88 (EtwpDisableTraceProviders.c)
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072B200 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072B3D0 (PnpQueueQueryAndRemoveEvent.c)
 *     IopGetVolumeId @ 0x14072F200 (IopGetVolumeId.c)
 *     PiIrpQueryRemoveDevice @ 0x1407302BC (PiIrpQueryRemoveDevice.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PnpStartDeviceNode @ 0x14073AFA8 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14073B440 (IopUncacheInterfaceInformation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140742824 (PopFxUnregisterDeviceOrWait.c)
 *     PnpAllocateResources @ 0x140749128 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140749EC0 (IopFilterResourceRequirementsCall.c)
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 *     WmipDeregisterDevice @ 0x14074E030 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14074E0D0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14074E1A8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14074E314 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14074E3EC (WmipUpdateDeviceStackSize.c)
 *     WmipAddDataSource @ 0x14074FAD8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1407502A8 (WmipDetermineInstanceBaseIndex.c)
 *     WmipPrepareWnodeSI @ 0x140750834 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x140750CFC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140750FB0 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140751344 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipFindISinGEbyName @ 0x140751598 (WmipFindISinGEbyName.c)
 *     IoDisconnectInterrupt @ 0x14075D220 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x14075DE60 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140761540 (HalGetAdapterV2.c)
 *     PnpQueryInterface @ 0x140762AB4 (PnpQueryInterface.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     WmipDSCleanup @ 0x1407688C0 (WmipDSCleanup.c)
 *     WmipRegistrationWorker @ 0x140768A40 (WmipRegistrationWorker.c)
 *     IoReportTargetDeviceChange @ 0x1407697B0 (IoReportTargetDeviceChange.c)
 *     PnpCallDriverEntry @ 0x14076C0A8 (PnpCallDriverEntry.c)
 *     ArbArbiterHandler @ 0x14076D270 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x14076E510 (PoUnregisterPowerSettingCallback.c)
 *     NtInitiatePowerAction @ 0x140771010 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140771D78 (PopPowerAggregatorNotifySuspendResume.c)
 *     EmPowerPagingEnabled @ 0x140772A18 (EmPowerPagingEnabled.c)
 *     PopFxNotifySxTransitionState @ 0x140772B74 (PopFxNotifySxTransitionState.c)
 *     PopResizeHiberFile @ 0x140772E5C (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x1407734E4 (ExSwapinWorkerThreads.c)
 *     PopGetWakeSource @ 0x140774808 (PopGetWakeSource.c)
 *     HalpGetDynamicDevicePointer @ 0x140774F24 (HalpGetDynamicDevicePointer.c)
 *     PopInitSystemSleeperThread @ 0x140775A28 (PopInitSystemSleeperThread.c)
 *     IopInvalidateVolumesForDevice @ 0x140777870 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140778120 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x1407793F4 (IopLoadFileSystemDriver.c)
 *     WmipSendEnableDisableRequest @ 0x14077A220 (WmipSendEnableDisableRequest.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     WmipSetTraceNotify @ 0x14077CF78 (WmipSetTraceNotify.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140788F9C (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407894C4 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1407898D4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x140789C98 (PopAcquireTransitionLock.c)
 *     PopSanityCheckHiberFile @ 0x14078A4A8 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078A8C4 (PopClearHiberFileSignature.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14078E1F8 (EtwpUpdateGlobalGroupMasks.c)
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     ArbBuildAssignmentOrdering @ 0x140798058 (ArbBuildAssignmentOrdering.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14079B220 (EtwpCrimsonProvEnableCallback.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407A25C8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407A25F4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     SepRmCommandServerThread @ 0x1407A4480 (SepRmCommandServerThread.c)
 *     PopFxUnregisterDevice @ 0x1407AF52C (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x1407AF88C (PopPepUnregisterDevice.c)
 *     IopAllocateBootResources @ 0x1407B0DD0 (IopAllocateBootResources.c)
 *     MiZeroPageFileFirstPage @ 0x1407B2998 (MiZeroPageFileFirstPage.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407B4D30 (PopDirectedDripsWorkerRoutine.c)
 *     WmipAddMofResource @ 0x1407BA18C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1407BA3C8 (WmipFindMRByNames.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407BD234 (WmipSendWmiIrpToTraceDeviceList.c)
 *     HalGetAdapterV3 @ 0x1407BEFB0 (HalGetAdapterV3.c)
 *     WmipUpdateDataSource @ 0x1407BFBC8 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C03E8 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1407C0C90 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407C0DF0 (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407C280C (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407C3658 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C5980 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x1407CF1E0 (WheapEtwEnableCallback.c)
 *     IoWMISetNotificationCallback @ 0x1407CF890 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x1407D0920 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1407D0EE0 (FsRtlWaitForSmssEvent.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408662EC (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408663D0 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140866CB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpCallWakeAlarmDriver @ 0x140868650 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140868730 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x140868E6C (HalpQueryPccInterface.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086C470 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140874DEC (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140886CA0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140887F78 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140888EB0 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14088ADB4 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088D75C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14088E1D0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14088ECE0 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140890260 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x140894090 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x140894B00 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140895730 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140896050 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140896910 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089D358 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x14089DAF4 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14089E37C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x1408A0E70 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1408A27C8 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A3F1C (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408ADDA8 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1408B5B90 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1408B6F80 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1408B7130 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1408BC374 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408E2BFC (PfTCleanup.c)
 *     PopDeactiveThermalRequest @ 0x1408E53E8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1408E55C8 (PopDisableCoolingExtension.c)
 *     PopReadPagesFromHiberFile @ 0x1408E96EC (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408E9FD0 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408EA580 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408EFE20 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408F3F30 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x140908DD4 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x14090C5F8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x14090D648 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14090DB3C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x14090F8E0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x140910A74 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x140911B84 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140911CD8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140912128 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14091BEF0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x14092C76C (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x14092C868 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x14092CD38 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14092DE24 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14092E694 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14092E748 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14092E80C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092EF6C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092F008 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14092F6A4 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x140933560 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140934458 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140934C1C (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x140934E74 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14093500C (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x1409355EC (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x140935E00 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x140936124 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140936A48 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140936C74 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x140939D8C (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14093F684 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14093F6E0 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x140941538 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x140943E6C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x140945000 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x14094AF50 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x140958888 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x14095D550 (NtStartProfile.c)
 *     NtStopProfile @ 0x14095D7C0 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x14095D9C0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095DD80 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x14095FA10 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095FAD0 (WheaAttemptPhysicalPageOffline.c)
 *     sub_1409647BC @ 0x1409647BC (sub_1409647BC.c)
 *     sub_140965F90 @ 0x140965F90 (sub_140965F90.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140982834 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x140982C1C (VhdiVerifyBootDisk.c)
 *     PopCaptureTimeOnProcZero @ 0x140993688 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x1409938C4 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x140998990 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x140999250 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140999FC8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099AAFC (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AE234 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1409B08FC (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409B1D60 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409B3070 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 *     VfDriverLock @ 0x1409C55C8 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1409C8A28 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D4520 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1409D8B34 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409D8EB0 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E3350 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1409E8310 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1409F51B4 (AnFwFadeCompletion.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A5A814 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A98758 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A98958 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A98D34 (SbpWaitForVmbus.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1402D8158 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r10
  LONGLONG v8; // r9
  unsigned __int8 WaitIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v11; // rcx
  unsigned __int8 v12; // r12
  $FA66ECE7F681727997618FC8DC30F69A *v13; // r15
  unsigned int v14; // r14d
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _KPRCB *v17; // r13
  volatile __int64 WaitStatus; // rsi
  __int64 ThreadTimerDelay; // rdx
  int v20; // r10d
  unsigned __int64 v21; // rax
  PVOID *v22; // rcx
  __int64 v23; // r13
  unsigned __int8 v24; // r10
  unsigned __int64 v25; // rdi
  _KWAIT_STATUS_REGISTER v26; // al
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  struct _KPRCB *v32; // rsi
  _DWORD *v33; // rcx
  volatile unsigned __int8 DpcRoutineActive; // cl
  int v35; // eax
  char v36; // al
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v38; // rcx
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  ULONG_PTR AbWaitObject; // rcx
  _KWAIT_STATUS_REGISTER v42; // al
  struct _KPRCB *v43; // rbx
  _DWORD *v44; // rcx
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  struct _KPRCB *v49; // rdi
  _DWORD *v50; // rcx
  int v51; // eax
  _DWORD *v52; // rcx
  _DWORD *v53; // rcx
  int v54; // eax
  int v55; // eax
  unsigned __int8 v56; // cl
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  int v59; // eax
  _DWORD *SchedulerAssist; // r9
  int v61; // eax
  int v62; // eax
  int v63; // eax
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // rdx
  bool v66; // zf
  __int64 v67; // rax
  ULONG_PTR v68; // rax
  int v69; // edi
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  int v75; // eax
  _DWORD *v76; // rcx
  int v77; // eax
  _DWORD *v78; // rcx
  int v79; // eax
  int v80; // eax
  struct _KPRCB *v81; // rcx
  _DWORD *v82; // rdx
  struct _KPRCB *v83; // rbx
  _DWORD *v84; // rcx
  int v85; // eax
  _DWORD *v86; // rcx
  int v87; // eax
  _DWORD *v88; // rcx
  int v89; // eax
  struct _KPRCB *v90; // rcx
  _DWORD *v91; // rdx
  int v92; // eax
  struct _KPRCB *v93; // rcx
  _DWORD *v94; // rdx
  unsigned __int8 v95; // al
  struct _KPRCB *v96; // r9
  _DWORD *v97; // r8
  int v98; // eax
  signed __int32 v99[8]; // [rsp+0h] [rbp-91h] BYREF
  unsigned __int8 v100; // [rsp+30h] [rbp-61h]
  unsigned __int8 v101; // [rsp+31h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-59h]
  ULONG_PTR v103; // [rsp+40h] [rbp-51h]
  int v104; // [rsp+48h] [rbp-49h] BYREF
  int v105; // [rsp+4Ch] [rbp-45h] BYREF
  int v106; // [rsp+50h] [rbp-41h] BYREF
  int v107; // [rsp+54h] [rbp-3Dh] BYREF
  int v108; // [rsp+58h] [rbp-39h] BYREF
  __int64 v109; // [rsp+60h] [rbp-31h] BYREF
  __int64 v110; // [rsp+68h] [rbp-29h] BYREF
  __int64 v111; // [rsp+70h] [rbp-21h] BYREF
  __int128 v112; // [rsp+78h] [rbp-19h]
  __int64 v113; // [rsp+88h] [rbp-9h]
  __int64 v114; // [rsp+90h] [rbp-1h]
  unsigned __int8 v116; // [rsp+F8h] [rbp+67h]
  KPROCESSOR_MODE v117; // [rsp+100h] [rbp+6Fh]
  int Timeouta; // [rsp+110h] [rbp+7Fh]

  v117 = WaitMode;
  v116 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v111 = 0LL;
  QuadPart = 0LL;
  v100 = 0;
  v103 = 0LL;
  v114 = 0LL;
  v101 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v101 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitMode = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = WaitMode;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v8 = 1LL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      Timeouta = 1;
    }
    else
    {
      Timeouta = 2;
      v8 = MEMORY[0xFFFFF78000000008]
         - MEMORY[0xFFFFF780000003B0]
         - (Timeout->QuadPart
          + CurrentThread->RelativeTimerBias);
      QuadPart = v8;
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
      CurrentThread->WaitMode = v117;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v104 = 0;
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v61 = v11[6];
          v11[6] = v61 + 1;
          if ( v61 == -1 )
LABEL_136:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v47 = CurrentPrcb->SchedulerAssist;
        if ( v47 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v62 = v47[6] - 1;
            v47[6] = v62;
            if ( !v62 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v104);
        while ( CurrentThread->ThreadLock );
        v48 = CurrentPrcb->SchedulerAssist;
        if ( v48 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v63 = v48[6];
            v48[6] = v63 + 1;
            if ( v63 == -1 )
              goto LABEL_136;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v64 = KeGetCurrentPrcb();
          v65 = v64->SchedulerAssist;
          v66 = (v65[5] & 0xFFFF0003) == 0;
          v65[5] &= 0xFFFF0003;
          if ( v66 )
            KiRemoveSystemWorkPriorityKick(v64);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
      {
        v8 = (LONGLONG)KeGetCurrentPrcb()->SchedulerAssist;
        *(_QWORD *)&WaitMode = *(unsigned int *)(v8 + 20);
        *(_DWORD *)(v8 + 20) = WaitMode | ~((unsigned __int8)(1LL << (v56 + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = 0;
    }
    v12 = v101;
    v13 = &CurrentThread->320;
    if ( Alertable )
    {
      *(_QWORD *)&WaitMode = v117;
      if ( CurrentThread->Alerted[v117] )
      {
        CurrentThread->Alerted[v117] = 0;
        v69 = 257;
        goto LABEL_114;
      }
      if ( v117 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_113:
        v69 = 192;
LABEL_114:
        KiReleaseThreadLockSafe(CurrentThread);
        KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql);
        LODWORD(WaitStatus) = v69;
        return WaitStatus;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v69 = 257;
        goto LABEL_114;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v117 )
    {
      goto LABEL_113;
    }
    v14 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v116;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v59 = v16[6] - 1;
        v16[6] = v59;
        if ( !v59 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    v17 = KeGetCurrentPrcb();
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v16, WaitMode, v8) )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
    }
    ThreadTimerDelay = *((unsigned int *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( (int)ThreadTimerDelay <= 0 )
      {
        *(_QWORD *)&WaitMode = v100;
        goto LABEL_19;
      }
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        *((_DWORD *)Object + 1) = ThreadTimerDelay - 1;
      }
      goto LABEL_32;
    }
    v29 = *((unsigned __int8 *)Object + 48);
    WaitMode = (v29 & 2) != 0;
    v100 = WaitMode;
    if ( (int)ThreadTimerDelay > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == v17->DpcRoutineActive )
    {
      break;
    }
LABEL_19:
    v8 = QuadPart;
    v20 = Timeouta;
    v21 = QuadPart;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v28 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v21 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v21 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_21;
      if ( !QuadPart )
        goto LABEL_31;
      v28 = MEMORY[0xFFFFF78000000014];
    }
    if ( v28 > v21 )
    {
LABEL_31:
      LODWORD(WaitStatus) = 258;
      goto LABEL_32;
    }
LABEL_21:
    v22 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v22 != (char *)Object + 8 )
      goto LABEL_201;
    v13->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v22;
    *v22 = v13;
    *((_QWORD *)Object + 2) = v13;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( WaitMode )
    {
      v67 = KeAbPreAcquire((ULONG_PTR)Object);
      LODWORD(v8) = QuadPart;
      v23 = v67;
      v20 = Timeouta;
      v103 = v67;
    }
    else
    {
      v23 = v103;
    }
    if ( v23 )
    {
      KeAbPreWait(v23);
      LODWORD(v8) = QuadPart;
      v20 = Timeouta;
    }
    LODWORD(WaitStatus) = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, v20, v8, (__int64)&v111);
    if ( v23 )
    {
      v68 = KeAbPreAcquire((ULONG_PTR)Object);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object, v68);
        v103 = 0LL;
      }
      else
      {
        *(_BYTE *)(v68 + 26) |= 1u;
        v103 = v68;
      }
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v101 = 0;
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
    {
      v8 = (LONGLONG)KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitMode = *(unsigned int *)(v8 + 20);
      *(_DWORD *)(v8 + 20) = WaitMode | ~((unsigned __int8)(1LL << (v24 + 1)) - 1) & 4;
    }
    CurrentThread->WaitIrql = v24;
  }
  v30 = *((_DWORD *)Object + 1);
  if ( v30 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait(v17, CurrentThread, v12);
    RtlRaiseStatus(-1073741423);
  }
  v31 = v30 - 1;
  *((_DWORD *)Object + 1) = v31;
  if ( v31 )
  {
LABEL_32:
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v99, 0);
    if ( CurrentThread->ThreadLock )
    {
      v49 = KeGetCurrentPrcb();
      v107 = 0;
      v50 = v49->SchedulerAssist;
      if ( v50 )
      {
        if ( v49->NestingLevel <= 1u )
        {
          v51 = v50[6];
          v50[6] = v51 + 1;
          if ( v51 == -1 )
LABEL_106:
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v52 = v49->SchedulerAssist;
        if ( v52 )
        {
          if ( v49->NestingLevel <= 1u )
          {
            v55 = v52[6] - 1;
            v52[6] = v55;
            if ( !v55 )
              KiRemoveSystemWorkPriorityKick(v49);
          }
        }
        do
          KeYieldProcessorEx(&v107);
        while ( CurrentThread->ThreadLock );
        v53 = v49->SchedulerAssist;
        if ( v53 )
        {
          if ( v49->NestingLevel <= 1u )
          {
            v54 = v53[6];
            v53[6] = v54 + 1;
            if ( v54 == -1 )
              goto LABEL_106;
          }
        }
      }
      KiReleaseThreadLockSafe(CurrentThread);
    }
    v25 = CurrentThread->WaitIrql;
    v26.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    if ( (v26.Flags & 0x38) == 0 )
    {
LABEL_34:
      if ( v12 )
      {
        KiCheckForThreadDispatch(v17, (unsigned __int8)v25);
      }
      else
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v95 = KeGetCurrentIrql();
            if ( v95 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v95 >= 2u )
            {
              v96 = KeGetCurrentPrcb();
              v97 = v96->SchedulerAssist;
              v98 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
              v66 = (v98 & v97[5]) == 0;
              v97[5] &= v98;
              if ( v66 )
                KiRemoveSystemWorkPriorityKick(v96);
            }
          }
        }
        __writecr8(v25);
      }
      return WaitStatus;
    }
    if ( (v26.Flags & 0x18) != 0 )
    {
      if ( (v26.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      v110 = 0LL;
      v83 = KeGetCurrentPrcb();
      v108 = 0;
      v84 = v83->SchedulerAssist;
      if ( v84 )
      {
        if ( v83->NestingLevel <= 1u )
        {
          v85 = v84[6];
          v84[6] = v85 + 1;
          if ( v85 == -1 )
LABEL_207:
            KiRemoveSystemWorkPriorityKick(v83);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
      {
        v86 = v83->SchedulerAssist;
        if ( v86 )
        {
          if ( v83->NestingLevel <= 1u )
          {
            v87 = v86[6] - 1;
            v86[6] = v87;
            if ( !v87 )
              KiRemoveSystemWorkPriorityKick(v83);
          }
        }
        do
          KeYieldProcessorEx(&v108);
        while ( v17->PrcbLock );
        v88 = v83->SchedulerAssist;
        if ( v88 )
        {
          if ( v83->NestingLevel <= 1u )
          {
            v89 = v88[6];
            v88[6] = v89 + 1;
            if ( v89 == -1 )
              goto LABEL_207;
          }
        }
      }
      if ( !v17->NextThread )
        KiSelectNextThread(v17, &v110, WaitMode, v8);
      _InterlockedAnd64((volatile signed __int64 *)&v17->PrcbLock, 0LL);
      v90 = KeGetCurrentPrcb();
      v91 = v90->SchedulerAssist;
      if ( v91 )
      {
        if ( v90->NestingLevel <= 1u )
        {
          v92 = v91[6] - 1;
          v91[6] = v92;
          if ( !v92 )
            KiRemoveSystemWorkPriorityKick(v90);
        }
      }
      KiProcessDeferredReadyList(v17, &v110, (unsigned __int8)v25, v8);
      return WaitStatus;
    }
    LOBYTE(ThreadTimerDelay) = 1;
    KiCheckForThreadDispatch(v17, ThreadTimerDelay);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v93 = KeGetCurrentPrcb();
        v94 = v93->SchedulerAssist;
        v66 = (v94[5] & 0xFFFF0001) == 0;
        v94[5] &= 0xFFFF0001;
        if ( v66 )
          KiRemoveSystemWorkPriorityKick(v93);
      }
    }
LABEL_127:
    __writecr8(0LL);
    return WaitStatus;
  }
  CurrentThread->WaitStatus = 0LL;
  v32 = KeGetCurrentPrcb();
  v105 = 0;
  v33 = v32->SchedulerAssist;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      v70 = v33[6];
      v33[6] = v70 + 1;
      if ( v70 == -1 )
LABEL_165:
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v57 = v32->SchedulerAssist;
    if ( v57 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v71 = v57[6] - 1;
        v57[6] = v71;
        if ( !v71 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    do
      KeYieldProcessorEx(&v105);
    while ( CurrentThread->ThreadLock );
    v58 = v32->SchedulerAssist;
    if ( v58 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v72 = v58[6];
        v58[6] = v72 + 1;
        if ( v72 == -1 )
          goto LABEL_165;
      }
    }
  }
  if ( *((_BYTE *)Object + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v17->CurrentThread == CurrentThread )
    DpcRoutineActive = v17->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v113 = 0LL;
  v35 = *(_DWORD *)Object;
  v112 = 0LL;
  LODWORD(v112) = v35;
  BYTE2(v112) = DpcRoutineActive;
  *(_DWORD *)Object = v112;
  v36 = *((_BYTE *)Object + 48);
  *((_QWORD *)Object + 5) = CurrentThread;
  if ( (v36 & 1) != 0 )
  {
    *((_BYTE *)Object + 48) = v36 & 0xFE;
    CurrentThread->WaitStatus |= 0x80uLL;
    v36 = *((_BYTE *)Object + 48);
  }
  if ( (v36 & 2) != 0 )
    CurrentThread->AbWaitObject = Object;
  else
    CurrentThread->AbWaitObject = 0LL;
  Blink = CurrentThread->MutantListHead.Blink;
  v38 = (struct _LIST_ENTRY *)((char *)Object + 24);
  if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_201:
    __fastfail(3u);
  v38->Flink = &CurrentThread->MutantListHead;
  *((_QWORD *)Object + 4) = Blink;
  Blink->Flink = v38;
  CurrentThread->MutantListHead.Blink = v38;
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v39 = KeGetCurrentPrcb();
  v40 = v39->SchedulerAssist;
  if ( v40 )
  {
    if ( v39->NestingLevel <= 1u )
    {
      v73 = v40[6] - 1;
      v40[6] = v73;
      if ( !v73 )
        KiRemoveSystemWorkPriorityKick(v39);
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v74 = KeAbPreAcquire(AbWaitObject);
    if ( v74 )
      *(_BYTE *)(v74 + 26) |= 1u;
  }
  v25 = CurrentThread->WaitIrql;
  v42.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v42.Flags & 0x38) == 0 )
    goto LABEL_34;
  if ( (v42.Flags & 0x18) == 0 )
  {
    LOBYTE(v40) = 1;
    KiCheckForThreadDispatch(v17, v40);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v81 = KeGetCurrentPrcb();
        v82 = v81->SchedulerAssist;
        v66 = (v82[5] & 0xFFFF0001) == 0;
        v82[5] &= 0xFFFF0001;
        if ( v66 )
          KiRemoveSystemWorkPriorityKick(v81);
      }
    }
    goto LABEL_127;
  }
  if ( (v42.Flags & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
  v109 = 0LL;
  v43 = KeGetCurrentPrcb();
  v106 = 0;
  v44 = v43->SchedulerAssist;
  if ( v44 )
  {
    if ( v43->NestingLevel <= 1u )
    {
      v75 = v44[6];
      v44[6] = v75 + 1;
      if ( v75 == -1 )
LABEL_181:
        KiRemoveSystemWorkPriorityKick(v43);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
  {
    v76 = v43->SchedulerAssist;
    if ( v76 )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v77 = v76[6] - 1;
        v76[6] = v77;
        if ( !v77 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    do
      KeYieldProcessorEx(&v106);
    while ( v17->PrcbLock );
    v78 = v43->SchedulerAssist;
    if ( v78 )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v79 = v78[6];
        v78[6] = v79 + 1;
        if ( v79 == -1 )
          goto LABEL_181;
      }
    }
  }
  if ( !v17->NextThread )
    KiSelectNextThread(v17, &v109, WaitMode, v8);
  _InterlockedAnd64((volatile signed __int64 *)&v17->PrcbLock, 0LL);
  v45 = KeGetCurrentPrcb();
  v46 = v45->SchedulerAssist;
  if ( v46 )
  {
    if ( v45->NestingLevel <= 1u )
    {
      v80 = v46[6] - 1;
      v46[6] = v80;
      if ( !v80 )
        KiRemoveSystemWorkPriorityKick(v45);
    }
  }
  KiProcessDeferredReadyList(v17, &v109, (unsigned __int8)v25, v8);
  return WaitStatus;
}
