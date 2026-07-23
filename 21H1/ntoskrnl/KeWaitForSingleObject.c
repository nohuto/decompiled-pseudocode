/*
 * XREFs of KeWaitForSingleObject @ 0x1402643F0
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcCanIWrite @ 0x14022E140 (CcCanIWrite.c)
 *     CcWriteBehind @ 0x1402326E4 (CcWriteBehind.c)
 *     PoFxActivateComponent @ 0x1402374C0 (PoFxActivateComponent.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023B900 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14023CC0C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     AlpcpSignalAndWait @ 0x140259F40 (AlpcpSignalAndWait.c)
 *     ExpWaitForResource @ 0x140267490 (ExpWaitForResource.c)
 *     PpmCheckPeriodicStart @ 0x140278F40 (PpmCheckPeriodicStart.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402C8EB4 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1402C9C38 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1402D09B8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1402D1D64 (SmKmStoreHelperCleanup.c)
 *     PopFxProcessWorkPool @ 0x1402D79B4 (PopFxProcessWorkPool.c)
 *     WmipFindRegEntryByProviderId @ 0x1402DF260 (WmipFindRegEntryByProviderId.c)
 *     CcSetValidData @ 0x1402E0DAC (CcSetValidData.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402EAF9C (FsRtlpWaitForIoAtEof.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402EBD30 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402EBE18 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402F60B0 (ExfWaitForRundownProtectionRelease.c)
 *     MiIssueSynchronousFlush @ 0x1402FFCB0 (MiIssueSynchronousFlush.c)
 *     IopWaitForSynchronousIo @ 0x14030050C (IopWaitForSynchronousIo.c)
 *     AlpcpWaitForSingleObject @ 0x1403053E4 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403065D4 (CcWaitForUninitializeCacheMap.c)
 *     SmKmStoreHelperWorker @ 0x140309210 (SmKmStoreHelperWorker.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14030C454 (MmStoreFlushOutstandingEvictions.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14030DF18 (SmKmStoreDeleteWhenEmpty.c)
 *     IoSynchronousCallDriver @ 0x14030EE80 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x140310298 (MiZeroPageWrite.c)
 *     CmpDoFileRead @ 0x14031861C (CmpDoFileRead.c)
 *     WmipReceiveNotifications @ 0x14031BF18 (WmipReceiveNotifications.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14031C300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140322030 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1403231BC (MiQueueSyncModifiedWriterApc.c)
 *     MiRetryNonPagedAllocation @ 0x140326EE4 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     LdrpGetFromMUIMemCache @ 0x14033A4C0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14033B550 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14033F6A0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     IopCompleteUnloadOrDelete @ 0x14033FAD0 (IopCompleteUnloadOrDelete.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403546E0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     IopWaitForLockAlertable @ 0x140359C04 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     PopSetWatchdog @ 0x14035BDF8 (PopSetWatchdog.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PnpLockDeviceActionQueue @ 0x14035FFAC (PnpLockDeviceActionQueue.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14036B5A8 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14036B650 (PopFxActivateDevice.c)
 *     WmipFindRegEntryByDevice @ 0x14036DD74 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x14036DE34 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x14036DF24 (WmipDeregisterRegEntry.c)
 *     PpmTryAcquireLock @ 0x14037AFB8 (PpmTryAcquireLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037C27C (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037CB68 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037CD40 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14037E4DC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     ExUnregisterCallback @ 0x14037EB50 (ExUnregisterCallback.c)
 *     PopWakeDeviceList @ 0x1403803EC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403805CC (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x140385558 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x140387EA8 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x140388A80 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038A0C8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038A29C (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x14039091C (PnpLockMountableDevice.c)
 *     IopLoadDriverImage @ 0x140396978 (IopLoadDriverImage.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403978E0 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14039C950 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2744 (MiQueueWorkingSetRequest.c)
 *     MiZeroPageCalibrate @ 0x1403AD950 (MiZeroPageCalibrate.c)
 *     WmiQueryTraceProviderCount @ 0x1403AF408 (WmiQueryTraceProviderCount.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 *     KeSwapProcessOrStack @ 0x1403B1FF0 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B50D0 (CcQueueLazyWriteScanThread.c)
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403B6D54 (WheapAddErrorSource.c)
 *     PopFxActivateComponent @ 0x1403BA820 (PopFxActivateComponent.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x1403BC0B0 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x1403C1E50 (WmipBuildTraceDeviceList.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C4100 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x1403C7B90 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x1403CA6A0 (PnpSerializeBoot.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404CB450 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcDeleteSectionsForPartition @ 0x1404E67B4 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB290 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x1404EB65C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1404EBC74 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1404FA650 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FA8DC (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x140509C68 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x14050A9EC (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1405134E4 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051BE6C (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x14051C2C4 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14051C300 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x140520420 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1405271D4 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x14053356C (MiPfCompleteCoalescedIo.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1405387BC (MiCheckHoldFaultForHotPatch.c)
 *     MiIssuePageExtendRequest @ 0x14053DE24 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePagesToZero @ 0x14054A49C (MiWaitForFreePagesToZero.c)
 *     MiApplyCommitDelay @ 0x14054A740 (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x1405565B4 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405569C0 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x14055C5AC (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055EE80 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1405658BC (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x14057E270 (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x14059922C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140599BA4 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14059A484 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A5CEC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405A8E0C (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1405AD4B0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1405AD720 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1405B5F00 (WheapProcessWorkQueueItem.c)
 *     sub_1405B9500 @ 0x1405B9500 (sub_1405B9500.c)
 *     IopGetFileInformation @ 0x1405DB0F4 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x1405DB3D0 (IoVolumeDeviceToDosName.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     PiDrvDbLoadNode @ 0x1405EE954 (PiDrvDbLoadNode.c)
 *     EtwpDisableTraceProviders @ 0x1405F3508 (EtwpDisableTraceProviders.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405F7600 (FsRtlCancellableWaitForMultipleObjects.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     CmpParseKey @ 0x140623680 (CmpParseKey.c)
 *     ObWaitForSingleObject @ 0x14062CB00 (ObWaitForSingleObject.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x140643C90 (FsRtlGetFileSize.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 *     MiInSwapStore @ 0x140656008 (MiInSwapStore.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 *     EtwpStartTrace @ 0x140678DB0 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14067A780 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     WmipDeleteMethod @ 0x1406816F0 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x1406817E8 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1406818BC (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x140681B1C (WmipPrepareForWnodeAD.c)
 *     WmipOpenBlock @ 0x140681D4C (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x140682F00 (WmipFindGEByGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140683100 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406831F4 (WmipIsQuerySetGuid.c)
 *     CmpFileFlushAndPurge @ 0x1406877D0 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140687970 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x140687FE0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140688150 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     IopGetSetObjectId @ 0x1406B5B58 (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x1406B71CC (AlpcpWaitForPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x1406B7560 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1406B76D0 (RtlDecompressFragmentLZNT1.c)
 *     FsRtlSetFileSize @ 0x1406BABEC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406BAD10 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406BAEB0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeSession @ 0x1406C4F30 (NtNotifyChangeSession.c)
 *     IopSynchronousApiServiceTail @ 0x1406C796C (IopSynchronousApiServiceTail.c)
 *     NtGetMUIRegistryInfo @ 0x1406CC610 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x1406CD8A8 (IopCancelIrpsInThreadList.c)
 *     SmStoreCompressionStop @ 0x1406D11CC (SmStoreCompressionStop.c)
 *     MiReadImageHeaders @ 0x1406DB9D0 (MiReadImageHeaders.c)
 *     FsRtlIssueDeviceIoControl @ 0x1406DE430 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x1406E8230 (FsRtlQueryCachedVdl.c)
 *     WmipEnumerateMofResources @ 0x1406E8724 (WmipEnumerateMofResources.c)
 *     WmipDisableCollectOrEvent @ 0x1406EB610 (WmipDisableCollectOrEvent.c)
 *     FsRtlBalanceReads @ 0x1406ECDE0 (FsRtlBalanceReads.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PnpDeviceEventWorker @ 0x14070A0D0 (PnpDeviceEventWorker.c)
 *     PnpDisableWatchdog @ 0x14070AEC0 (PnpDisableWatchdog.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14071B3E4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14071B5B4 (PnpQueueQueryAndRemoveEvent.c)
 *     IopGetVolumeId @ 0x14071F350 (IopGetVolumeId.c)
 *     PiIrpQueryRemoveDevice @ 0x1407202EC (PiIrpQueryRemoveDevice.c)
 *     PnpStartDeviceNode @ 0x140723644 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x140723A8C (IopUncacheInterfaceInformation.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736CE8 (PopFxUnregisterDeviceOrWait.c)
 *     PnpAllocateResources @ 0x140738698 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140739430 (IopFilterResourceRequirementsCall.c)
 *     IopLegacyResourceAllocation @ 0x14073BE24 (IopLegacyResourceAllocation.c)
 *     WmipDeregisterDevice @ 0x14073D8D0 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14073D970 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14073DA48 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14073DBB4 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14073DC8C (WmipUpdateDeviceStackSize.c)
 *     WmipAddDataSource @ 0x14073F378 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14073FB48 (WmipDetermineInstanceBaseIndex.c)
 *     WmipPrepareWnodeSI @ 0x1407400D4 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074059C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140740850 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140740BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipFindISinGEbyName @ 0x140740E38 (WmipFindISinGEbyName.c)
 *     IoDisconnectInterrupt @ 0x14074A220 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x14074AE60 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x14074E2D0 (HalGetAdapterV2.c)
 *     PnpQueryInterface @ 0x14074F850 (PnpQueryInterface.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     WmipDSCleanup @ 0x1407586B0 (WmipDSCleanup.c)
 *     WmipRegistrationWorker @ 0x140758830 (WmipRegistrationWorker.c)
 *     IoReportTargetDeviceChange @ 0x140759040 (IoReportTargetDeviceChange.c)
 *     PnpCallDriverEntry @ 0x14075B558 (PnpCallDriverEntry.c)
 *     ArbArbiterHandler @ 0x14075C7B0 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x14075DB90 (PoUnregisterPowerSettingCallback.c)
 *     PopResizeHiberFile @ 0x14075F68C (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     NtInitiatePowerAction @ 0x140761120 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140761E88 (PopPowerAggregatorNotifySuspendResume.c)
 *     EmPowerPagingEnabled @ 0x140762B28 (EmPowerPagingEnabled.c)
 *     PopFxNotifySxTransitionState @ 0x140762C84 (PopFxNotifySxTransitionState.c)
 *     PopGetWakeSource @ 0x140763DB8 (PopGetWakeSource.c)
 *     HalpGetDynamicDevicePointer @ 0x1407644D4 (HalpGetDynamicDevicePointer.c)
 *     PopInitSystemSleeperThread @ 0x140765038 (PopInitSystemSleeperThread.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x140768A04 (IopLoadFileSystemDriver.c)
 *     WmipSendEnableDisableRequest @ 0x140769080 (WmipSendEnableDisableRequest.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     WmipSetTraceNotify @ 0x14076BDA8 (WmipSetTraceNotify.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14077858C (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140778AB4 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140778EC4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x140779288 (PopAcquireTransitionLock.c)
 *     PopSanityCheckHiberFile @ 0x140779A98 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x140779EB4 (PopClearHiberFileSignature.c)
 *     CmCompleteRegistryInitialization @ 0x14077A5E4 (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140787014 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140788960 (EtwpCrimsonProvEnableCallback.c)
 *     ArbBuildAssignmentOrdering @ 0x140789A48 (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407934E8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140793514 (PnpWaitForEmptyDeviceActionQueue.c)
 *     SepRmCommandServerThread @ 0x1407953A0 (SepRmCommandServerThread.c)
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x14079C578 (PopPepUnregisterDevice.c)
 *     IopAllocateBootResources @ 0x14079DAC0 (IopAllocateBootResources.c)
 *     MiZeroPageFileFirstPage @ 0x14079F688 (MiZeroPageFileFirstPage.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407A3390 (PopDirectedDripsWorkerRoutine.c)
 *     WmipAddMofResource @ 0x1407A90EC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1407A9328 (WmipFindMRByNames.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407AC194 (WmipSendWmiIrpToTraceDeviceList.c)
 *     HalGetAdapterV3 @ 0x1407ADF10 (HalGetAdapterV3.c)
 *     WmipUpdateDataSource @ 0x1407AEB28 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407AF3CC (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1407AFBD0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407AFD30 (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407B0E64 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407B1CB8 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B3FE0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x1407BD7E0 (WheapEtwEnableCallback.c)
 *     IoWMISetNotificationCallback @ 0x1407BDDE0 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x1407BEC20 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1407BF1E0 (FsRtlWaitForSmssEvent.c)
 *     HalpQueryAcpiRealTimeClock @ 0x14085F57C (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x14085F660 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x14085FF40 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpCallWakeAlarmDriver @ 0x140861910 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408619F0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x14086212C (HalpQueryPccInterface.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140865730 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086D7DC (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14087FE60 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140881108 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140882040 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140883F44 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1408868EC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x140887360 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x140887E70 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1408893F0 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x14088D2B0 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x14088DD20 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x14088E928 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x14088FB00 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140896388 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14089752C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14089A020 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089B978 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14089D0CC (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408A6F58 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1408AED40 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1408B0040 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1408B01F0 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1408B5434 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408DBA4C (PfTCleanup.c)
 *     PopDeactiveThermalRequest @ 0x1408DE348 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1408DE528 (PopDisableCoolingExtension.c)
 *     PopReadPagesFromHiberFile @ 0x1408E2858 (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408E3140 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408E36F0 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408E8F90 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408ED030 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409023A4 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1409056F8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x140906778 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x140906C6C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x140908A10 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x140908B50 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x140909B88 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14090ACA4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090ADF8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090B248 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140915050 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x140925694 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140925790 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x140925C60 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x140926D4C (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1409275BC (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140927670 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x140927734 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x140927E94 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140927F30 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1409285CC (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x14092C480 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14092D378 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14092DB3C (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x14092DD94 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14092DF2C (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x14092E50C (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x14092ED20 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x14092F044 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x14092F968 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x14092FB94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x140932CBC (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409385B4 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140938610 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x14093A468 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x14093CE2C (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x14093DFC0 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x140943F20 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x140951728 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x1409560C0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140956330 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x140956530 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1409568F0 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x1409588B0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140958970 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14095D64C @ 0x14095D64C (sub_14095D64C.c)
 *     sub_14095EE20 @ 0x14095EE20 (sub_14095EE20.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14097B6C4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x14097BAAC (VhdiVerifyBootDisk.c)
 *     PopTransitionToSleep @ 0x14098C540 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     PopCaptureTimeOnProcZero @ 0x14098CE80 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x14098D0BC (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PopEndMirroring @ 0x140991AB0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140992828 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099335C (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A7464 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1409A9B2C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409AAF90 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409AC2A0 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 *     VfDriverLock @ 0x1409BF5A8 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1409C29F8 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE4F0 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1409D2AB4 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409D2E30 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409DD2D0 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1409E2290 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1409EF1B4 (AnFwFadeCompletion.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A54414 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A92A98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A933E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A935E8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A939C4 (SbpWaitForVmbus.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KiFastExitThreadWait @ 0x140329A64 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int8 WaitIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  unsigned __int8 v13; // r12
  $A4B5D2C1751CB7039976B0B68C9462E1 *v14; // r15
  unsigned int v15; // r14d
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *v18; // r13
  volatile __int64 WaitStatus; // rsi
  __int64 ThreadTimerDelay; // rdx
  int v21; // r10d
  unsigned __int64 v22; // rax
  PVOID *v23; // rcx
  __int64 v24; // r13
  unsigned __int8 v25; // r10
  unsigned __int64 v26; // rdi
  _KWAIT_STATUS_REGISTER v27; // al
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
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
  __int64 v41; // rdx
  ULONG_PTR AbWaitObject; // rcx
  _KWAIT_STATUS_REGISTER v43; // al
  struct _KPRCB *v44; // rbx
  _DWORD *v45; // rcx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  _DWORD *v54; // rcx
  int v55; // eax
  int v56; // eax
  unsigned __int8 v57; // cl
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  int v60; // eax
  _DWORD *SchedulerAssist; // r9
  int v62; // eax
  int v63; // eax
  int v64; // eax
  struct _KPRCB *v65; // rcx
  _DWORD *v66; // rdx
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // edi
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  int v76; // eax
  _DWORD *v77; // rcx
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  int v81; // eax
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  struct _KPRCB *v84; // rbx
  _DWORD *v85; // rcx
  int v86; // eax
  _DWORD *v87; // rcx
  int v88; // eax
  _DWORD *v89; // rcx
  int v90; // eax
  struct _KPRCB *v91; // rcx
  _DWORD *v92; // rdx
  int v93; // eax
  struct _KPRCB *v94; // rcx
  _DWORD *v95; // rdx
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r9
  _DWORD *v98; // r8
  int v99; // eax
  signed __int32 v100[8]; // [rsp+0h] [rbp-91h] BYREF
  unsigned __int8 v101; // [rsp+30h] [rbp-61h]
  unsigned __int8 v102; // [rsp+31h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-59h]
  __int64 v104; // [rsp+40h] [rbp-51h]
  int v105; // [rsp+48h] [rbp-49h] BYREF
  int v106; // [rsp+4Ch] [rbp-45h] BYREF
  int v107; // [rsp+50h] [rbp-41h] BYREF
  int v108; // [rsp+54h] [rbp-3Dh] BYREF
  int v109; // [rsp+58h] [rbp-39h] BYREF
  __int64 v110; // [rsp+60h] [rbp-31h] BYREF
  __int64 v111; // [rsp+68h] [rbp-29h] BYREF
  __int64 v112; // [rsp+70h] [rbp-21h] BYREF
  __int128 v113; // [rsp+78h] [rbp-19h]
  __int64 v114; // [rsp+88h] [rbp-9h]
  __int64 v115; // [rsp+90h] [rbp-1h]
  unsigned __int8 v117; // [rsp+F8h] [rbp+67h]
  KPROCESSOR_MODE v118; // [rsp+100h] [rbp+6Fh]
  int Timeouta; // [rsp+110h] [rbp+7Fh]

  v118 = WaitMode;
  v117 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v112 = 0LL;
  QuadPart = 0LL;
  v101 = 0;
  v104 = 0LL;
  v115 = 0LL;
  v102 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v102 )
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
  v8 = 0xFFFFF78000000008uLL;
  v9 = 1LL;
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
      v9 = MEMORY[0xFFFFF78000000008]
         - MEMORY[0xFFFFF780000003B0]
         - (Timeout->QuadPart
          + CurrentThread->RelativeTimerBias);
      QuadPart = v9;
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
      CurrentThread->WaitMode = v118;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v105 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v62 = v12[6];
          v12[6] = v62 + 1;
          if ( v62 == -1 )
LABEL_136:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v48 = CurrentPrcb->SchedulerAssist;
        if ( v48 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v63 = v48[6] - 1;
            v48[6] = v63;
            if ( !v63 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v105, v8, WaitMode, v9);
        while ( CurrentThread->ThreadLock );
        v49 = CurrentPrcb->SchedulerAssist;
        if ( v49 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v64 = v49[6];
            v49[6] = v64 + 1;
            if ( v64 == -1 )
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
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = (v66[5] & 0xFFFF0003) == 0;
          v66[5] &= 0xFFFF0003;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
      {
        v9 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        *(_QWORD *)&WaitMode = *(unsigned int *)(v9 + 20);
        v8 = WaitMode | ~((unsigned __int8)(1LL << (v57 + 1)) - 1) & 4u;
        *(_DWORD *)(v9 + 20) = v8;
      }
      CurrentThread->WaitIrql = 0;
    }
    v13 = v102;
    v14 = &CurrentThread->320;
    if ( Alertable )
    {
      *(_QWORD *)&WaitMode = v118;
      if ( CurrentThread->Alerted[v118] )
      {
        CurrentThread->Alerted[v118] = 0;
        v70 = 257;
        goto LABEL_114;
      }
      if ( v118 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_113:
        v70 = 192;
LABEL_114:
        KiReleaseThreadLockSafe(CurrentThread);
        KiCheckForThreadDispatch(KeGetCurrentPrcb(), WaitIrql);
        LODWORD(WaitStatus) = v70;
        return WaitStatus;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v70 = 257;
        goto LABEL_114;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v118 )
    {
      goto LABEL_113;
    }
    v15 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v117;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v60 = v17[6] - 1;
        v17[6] = v60;
        if ( !v60 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    v18 = KeGetCurrentPrcb();
    LODWORD(WaitStatus) = 0;
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v17, WaitMode, v9) )
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
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( (int)ThreadTimerDelay <= 0 )
      {
        *(_QWORD *)&WaitMode = v101;
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
    v30 = *((unsigned __int8 *)Object + 48);
    WaitMode = (v30 & 2) != 0;
    v101 = WaitMode;
    if ( (int)ThreadTimerDelay > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == v18->DpcRoutineActive )
    {
      break;
    }
LABEL_19:
    v9 = QuadPart;
    v21 = Timeouta;
    v22 = QuadPart;
    if ( Timeouta == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v29 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v22 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v22 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !Timeouta )
        goto LABEL_21;
      if ( !QuadPart )
        goto LABEL_31;
      v29 = MEMORY[0xFFFFF78000000014];
    }
    if ( v29 > v22 )
    {
LABEL_31:
      LODWORD(WaitStatus) = 258;
      goto LABEL_32;
    }
LABEL_21:
    v23 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v23 != (char *)Object + 8 )
      goto LABEL_201;
    v14->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v23;
    *v23 = v14;
    *((_QWORD *)Object + 2) = v14;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( WaitMode )
    {
      v68 = KeAbPreAcquire((ULONG_PTR)Object, 0LL, 0);
      LODWORD(v9) = QuadPart;
      v24 = v68;
      v21 = Timeouta;
      v104 = v68;
    }
    else
    {
      v24 = v104;
    }
    if ( v24 )
    {
      KeAbPreWait(v24);
      LODWORD(v9) = QuadPart;
      v21 = Timeouta;
    }
    LODWORD(WaitStatus) = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, v21, v9, (__int64)&v112);
    if ( v24 )
    {
      v69 = KeAbPreAcquire((ULONG_PTR)Object, v24, 0);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        KeAbPostReleaseEx((ULONG_PTR)Object);
        v104 = 0LL;
      }
      else
      {
        *(_BYTE *)(v69 + 26) |= 1u;
        v104 = v69;
      }
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v102 = 0;
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
    {
      v9 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&WaitMode = *(unsigned int *)(v9 + 20);
      v8 = WaitMode | ~((unsigned __int8)(1LL << (v25 + 1)) - 1) & 4u;
      *(_DWORD *)(v9 + 20) = v8;
    }
    CurrentThread->WaitIrql = v25;
  }
  v31 = *((_DWORD *)Object + 1);
  if ( v31 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait(v18, CurrentThread, v13);
    RtlRaiseStatus(-1073741423);
  }
  v32 = v31 - 1;
  *((_DWORD *)Object + 1) = v32;
  if ( v32 )
  {
LABEL_32:
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v100, 0);
    if ( CurrentThread->ThreadLock )
    {
      v50 = KeGetCurrentPrcb();
      v108 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v52 = v51[6];
          v51[6] = v52 + 1;
          if ( v52 == -1 )
LABEL_106:
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v53 = v50->SchedulerAssist;
        if ( v53 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v56 = v53[6] - 1;
            v53[6] = v56;
            if ( !v56 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v108, ThreadTimerDelay, WaitMode, v9);
        while ( CurrentThread->ThreadLock );
        v54 = v50->SchedulerAssist;
        if ( v54 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v55 = v54[6];
            v54[6] = v55 + 1;
            if ( v55 == -1 )
              goto LABEL_106;
          }
        }
      }
      KiReleaseThreadLockSafe(CurrentThread);
    }
    v26 = CurrentThread->WaitIrql;
    v27.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    if ( (v27.Flags & 0x38) == 0 )
    {
LABEL_34:
      if ( v13 )
      {
        KiCheckForThreadDispatch(v18, (unsigned __int8)v26);
      }
      else
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v96 = KeGetCurrentIrql();
            if ( v96 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v96 >= 2u )
            {
              v97 = KeGetCurrentPrcb();
              v98 = v97->SchedulerAssist;
              v99 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
              v67 = (v99 & v98[5]) == 0;
              v98[5] &= v99;
              if ( v67 )
                KiRemoveSystemWorkPriorityKick(v97);
            }
          }
        }
        __writecr8(v26);
      }
      return WaitStatus;
    }
    if ( (v27.Flags & 0x18) != 0 )
    {
      if ( (v27.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      v111 = 0LL;
      v84 = KeGetCurrentPrcb();
      v109 = 0;
      v85 = v84->SchedulerAssist;
      if ( v85 )
      {
        if ( v84->NestingLevel <= 1u )
        {
          v86 = v85[6];
          v85[6] = v86 + 1;
          if ( v86 == -1 )
LABEL_207:
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
      {
        v87 = v84->SchedulerAssist;
        if ( v87 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v88 = v87[6] - 1;
            v87[6] = v88;
            if ( !v88 )
              KiRemoveSystemWorkPriorityKick(v84);
          }
        }
        do
          KeYieldProcessorEx(&v109, ThreadTimerDelay, WaitMode, v9);
        while ( v18->PrcbLock );
        v89 = v84->SchedulerAssist;
        if ( v89 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v90 = v89[6];
            v89[6] = v90 + 1;
            if ( v90 == -1 )
              goto LABEL_207;
          }
        }
      }
      if ( !v18->NextThread )
        KiSelectNextThread(v18, &v111);
      _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
      v91 = KeGetCurrentPrcb();
      v92 = v91->SchedulerAssist;
      if ( v92 )
      {
        if ( v91->NestingLevel <= 1u )
        {
          v93 = v92[6] - 1;
          v92[6] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(v91);
        }
      }
      KiProcessDeferredReadyList(v18, &v111, (unsigned __int8)v26, v9);
      return WaitStatus;
    }
    LOBYTE(ThreadTimerDelay) = 1;
    KiCheckForThreadDispatch(v18, ThreadTimerDelay);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v94 = KeGetCurrentPrcb();
        v95 = v94->SchedulerAssist;
        v67 = (v95[5] & 0xFFFF0001) == 0;
        v95[5] &= 0xFFFF0001;
        if ( v67 )
          KiRemoveSystemWorkPriorityKick(v94);
      }
    }
LABEL_127:
    __writecr8(0LL);
    return WaitStatus;
  }
  CurrentThread->WaitStatus = 0LL;
  v33 = KeGetCurrentPrcb();
  v106 = 0;
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v71 = v34[6];
      v34[6] = v71 + 1;
      if ( v71 == -1 )
LABEL_165:
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v58 = v33->SchedulerAssist;
    if ( v58 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v72 = v58[6] - 1;
        v58[6] = v72;
        if ( !v72 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    do
      KeYieldProcessorEx(&v106, ThreadTimerDelay, WaitMode, v9);
    while ( CurrentThread->ThreadLock );
    v59 = v33->SchedulerAssist;
    if ( v59 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v73 = v59[6];
        v59[6] = v73 + 1;
        if ( v73 == -1 )
          goto LABEL_165;
      }
    }
  }
  if ( *((_BYTE *)Object + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v18->CurrentThread == CurrentThread )
    DpcRoutineActive = v18->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v114 = 0LL;
  v36 = *(_DWORD *)Object;
  v113 = 0LL;
  LODWORD(v113) = v36;
  BYTE2(v113) = DpcRoutineActive;
  *(_DWORD *)Object = v113;
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
LABEL_201:
    __fastfail(3u);
  v39->Flink = &CurrentThread->MutantListHead;
  *((_QWORD *)Object + 4) = Blink;
  Blink->Flink = v39;
  CurrentThread->MutantListHead.Blink = v39;
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  v40 = KeGetCurrentPrcb();
  v41 = (__int64)v40->SchedulerAssist;
  if ( v41 )
  {
    if ( v40->NestingLevel <= 1u )
    {
      v74 = *(_DWORD *)(v41 + 24) - 1;
      *(_DWORD *)(v41 + 24) = v74;
      if ( !v74 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
  }
  WaitStatus = CurrentThread->WaitStatus;
  AbWaitObject = (ULONG_PTR)CurrentThread->AbWaitObject;
  if ( AbWaitObject )
  {
    CurrentThread->AbWaitObject = 0LL;
    v75 = KeAbPreAcquire(AbWaitObject, 0LL, 1);
    if ( v75 )
      *(_BYTE *)(v75 + 26) |= 1u;
  }
  v26 = CurrentThread->WaitIrql;
  v43.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v43.Flags & 0x38) == 0 )
    goto LABEL_34;
  if ( (v43.Flags & 0x18) == 0 )
  {
    LOBYTE(v41) = 1;
    KiCheckForThreadDispatch(v18, v41);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v67 = (v83[5] & 0xFFFF0001) == 0;
        v83[5] &= 0xFFFF0001;
        if ( v67 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
    goto LABEL_127;
  }
  if ( (v43.Flags & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
  v110 = 0LL;
  v44 = KeGetCurrentPrcb();
  v107 = 0;
  v45 = v44->SchedulerAssist;
  if ( v45 )
  {
    if ( v44->NestingLevel <= 1u )
    {
      v76 = v45[6];
      v45[6] = v76 + 1;
      if ( v76 == -1 )
LABEL_181:
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
  {
    v77 = v44->SchedulerAssist;
    if ( v77 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v78 = v77[6] - 1;
        v77[6] = v78;
        if ( !v78 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    do
      KeYieldProcessorEx(&v107, v41, WaitMode, v9);
    while ( v18->PrcbLock );
    v79 = v44->SchedulerAssist;
    if ( v79 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v80 = v79[6];
        v79[6] = v80 + 1;
        if ( v80 == -1 )
          goto LABEL_181;
      }
    }
  }
  if ( !v18->NextThread )
    KiSelectNextThread(v18, &v110);
  _InterlockedAnd64((volatile signed __int64 *)&v18->PrcbLock, 0LL);
  v46 = KeGetCurrentPrcb();
  v47 = v46->SchedulerAssist;
  if ( v47 )
  {
    if ( v46->NestingLevel <= 1u )
    {
      v81 = v47[6] - 1;
      v47[6] = v81;
      if ( !v81 )
        KiRemoveSystemWorkPriorityKick(v46);
    }
  }
  KiProcessDeferredReadyList(v18, &v110, (unsigned __int8)v26, v9);
  return WaitStatus;
}
