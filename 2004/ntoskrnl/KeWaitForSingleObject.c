/*
 * XREFs of KeWaitForSingleObject @ 0x14020B3A0
 * Callers:
 *     ExpWaitForResource @ 0x14020E440 (ExpWaitForResource.c)
 *     PpmCheckPeriodicStart @ 0x14021FEF0 (PpmCheckPeriodicStart.c)
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14026FD10 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CcSetValidData @ 0x14027171C (CcSetValidData.c)
 *     WmipFindRegEntryByProviderId @ 0x140272900 (WmipFindRegEntryByProviderId.c)
 *     IopWaitForLockAlertable @ 0x140273F64 (IopWaitForLockAlertable.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     PopSetWatchdog @ 0x140275C48 (PopSetWatchdog.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     AlpcpSignalAndWait @ 0x1402967C0 (AlpcpSignalAndWait.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcWriteBehind @ 0x1402C5514 (CcWriteBehind.c)
 *     PoFxActivateComponent @ 0x1402CA2F0 (PoFxActivateComponent.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402CE730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1402CFA3C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1402D8314 (PnpLockDeviceActionQueue.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     MiRetryNonPagedAllocation @ 0x1402E1CAC (MiRetryNonPagedAllocation.c)
 *     PopFxProcessWorkPool @ 0x1402E3688 (PopFxProcessWorkPool.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402F8700 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030287C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140302C94 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperWorker @ 0x1403036C0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140304A60 (SmKmStoreHelperWaitForCommand.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14030B618 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1403108E8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140311254 (MmStoreFlushOutstandingEvictions.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     FsRtlpWaitForIoAtEof @ 0x1403248CC (FsRtlpWaitForIoAtEof.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140325660 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140325748 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140332F50 (ExfWaitForRundownProtectionRelease.c)
 *     MiIssueSynchronousFlush @ 0x14033C5B0 (MiIssueSynchronousFlush.c)
 *     IopWaitForSynchronousIo @ 0x14033CE0C (IopWaitForSynchronousIo.c)
 *     AlpcpWaitForSingleObject @ 0x140342E34 (AlpcpWaitForSingleObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403443D8 (CcWaitForUninitializeCacheMap.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14034B3F8 (SmKmStoreDeleteWhenEmpty.c)
 *     IoSynchronousCallDriver @ 0x14034C550 (IoSynchronousCallDriver.c)
 *     MiZeroPageWrite @ 0x14034D928 (MiZeroPageWrite.c)
 *     CmpDoFileRead @ 0x14035613C (CmpDoFileRead.c)
 *     WmipReceiveNotifications @ 0x140359AE8 (WmipReceiveNotifications.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140359ED0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14035F9A0 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140360CAC (MiQueueSyncModifiedWriterApc.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140361C64 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140362814 (LdrpGetFromMUIMemCache.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14036B678 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     WmipFindRegEntryByDevice @ 0x14036E9A4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x14036EA64 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x14036EB54 (WmipDeregisterRegEntry.c)
 *     PpmTryAcquireLock @ 0x14037BD38 (PpmTryAcquireLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037CEEC (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037D628 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037D800 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14037EF9C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 *     PopWakeDeviceList @ 0x140380C2C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140380E0C (PopSleepDeviceList.c)
 *     PopHaltDeviceIdle @ 0x1403864C8 (PopHaltDeviceIdle.c)
 *     PopTimeoutWakeTracking @ 0x140388E18 (PopTimeoutWakeTracking.c)
 *     PopRunMaximumIrpWorkers @ 0x1403899F0 (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038B138 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038B30C (PopIgnoreBatteryStatusChange.c)
 *     PnpLockMountableDevice @ 0x14039148C (PnpLockMountableDevice.c)
 *     IopLoadDriverImage @ 0x140397588 (IopLoadDriverImage.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x140398510 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14039D7DC (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2ED4 (MiQueueWorkingSetRequest.c)
 *     WmiQueryTraceProviderCount @ 0x1403A7220 (WmiQueryTraceProviderCount.c)
 *     MiZeroPageCalibrate @ 0x1403A7530 (MiZeroPageCalibrate.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 *     KeSwapProcessOrStack @ 0x1403B0300 (KeSwapProcessOrStack.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B5F00 (CcQueueLazyWriteScanThread.c)
 *     WheaLogInternalEvent @ 0x1403B78B0 (WheaLogInternalEvent.c)
 *     WheapAddErrorSource @ 0x1403B7B84 (WheapAddErrorSource.c)
 *     PopFxActivateComponent @ 0x1403BBB70 (PopFxActivateComponent.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x1403BD3D0 (CmpLazyWriteWorker.c)
 *     MiStoreEvictThread @ 0x1403BE290 (MiStoreEvictThread.c)
 *     WmipBuildTraceDeviceList @ 0x1403C2D10 (WmipBuildTraceDeviceList.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C5070 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopIrpWorkerControl @ 0x1403C89A0 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x1403CB480 (PnpSerializeBoot.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x1404CB900 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcDeleteSectionsForPartition @ 0x1404E6D64 (CcDeleteSectionsForPartition.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB8C0 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x1404EBC8C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1404EC2A4 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1404FACA0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FAF2C (IopAllocateReserveIrp.c)
 *     PnprQuiesce @ 0x14050A2B8 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x14050B03C (PnpProcessRebalance.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140513B34 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KeAbCrossThreadDelete @ 0x14051B9C8 (KeAbCrossThreadDelete.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051C4BC (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x14051C914 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14051C950 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x140527824 (MmReleaseCommitForMemResetPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140533BBC (MiPfCompleteCoalescedIo.c)
 *     MiCheckHoldFaultForHotPatch @ 0x140538E0C (MiCheckHoldFaultForHotPatch.c)
 *     MiIssuePageExtendRequest @ 0x14053E474 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePagesToZero @ 0x14054AAEC (MiWaitForFreePagesToZero.c)
 *     MiApplyCommitDelay @ 0x14054AD90 (MiApplyCommitDelay.c)
 *     MiWaitForAvailablePages @ 0x140556C04 (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     MiContractWsSwapPageFileWorker @ 0x140557010 (MiContractWsSwapPageFileWorker.c)
 *     MiDrainCrossPartitionUsage @ 0x14055CBFC (MiDrainCrossPartitionUsage.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055F4D0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140565F0C (PopFxIssueComponentPerfStateChanges.c)
 *     PspIumFreePartitionState @ 0x14057E8B0 (PspIumFreePartitionState.c)
 *     SmpFpWaitForResource @ 0x14059991C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059A294 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14059AB74 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A63DC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureContextStop @ 0x1405A94FC (EtwpCovSampCaptureContextStop.c)
 *     ExRegisterBootDevice @ 0x1405ADBD0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1405ADE40 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1405B6620 (WheapProcessWorkQueueItem.c)
 *     sub_1405B9C20 @ 0x1405B9C20 (sub_1405B9C20.c)
 *     WmipFindGEByGuid @ 0x1405DC190 (WmipFindGEByGuid.c)
 *     WmipOpenBlock @ 0x1405DC278 (WmipOpenBlock.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x1405EE060 (CmpParseKey.c)
 *     ObWaitForSingleObject @ 0x1405F7AC0 (ObWaitForSingleObject.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x14060EA60 (FsRtlGetFileSize.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     RtlDecompressFragmentLZNT1 @ 0x14062F4D0 (RtlDecompressFragmentLZNT1.c)
 *     RtlDecompressBufferLZNT1 @ 0x140630A80 (RtlDecompressBufferLZNT1.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     CmpFileFlushAndPurge @ 0x140639C54 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140639DF4 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 *     IoVolumeDeviceToGuidPath @ 0x14063A460 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14063A5D0 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140645544 (EtwpAcquireLoggerContextByLoggerName.c)
 *     WmipDeleteMethod @ 0x140646590 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x140646688 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x140646998 (WmipPrepareForWnodeAD.c)
 *     PnpDeviceEventWorker @ 0x140648C30 (PnpDeviceEventWorker.c)
 *     PnpDisableWatchdog @ 0x1406498CC (PnpDisableWatchdog.c)
 *     IopGetFileInformation @ 0x1406613F4 (IopGetFileInformation.c)
 *     IoVolumeDeviceToDosName @ 0x1406616D0 (IoVolumeDeviceToDosName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SPCallServerHandleQueryPolicy @ 0x14066E740 (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14066F6A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     PiDrvDbLoadNode @ 0x140697E54 (PiDrvDbLoadNode.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A5A70 (PiControlGetSetDeviceStatus.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PspUserThreadStartup @ 0x1406B5110 (PspUserThreadStartup.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
 *     EtwpDisableTraceProviders @ 0x1406C7034 (EtwpDisableTraceProviders.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpStartTrace @ 0x1406C7834 (EtwpStartTrace.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 *     MiInSwapStore @ 0x1406D0668 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x1406D2A04 (SmStoreCompressionStop.c)
 *     IopGetSetObjectId @ 0x1406D41D8 (IopGetSetObjectId.c)
 *     AlpcpWaitForPortReferences @ 0x1406D555C (AlpcpWaitForPortReferences.c)
 *     FsRtlSetFileSize @ 0x1406DBEFC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406DC020 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406DC1C0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeSession @ 0x1406E48A0 (NtNotifyChangeSession.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     NtGetMUIRegistryInfo @ 0x1406ED910 (NtGetMUIRegistryInfo.c)
 *     IopCancelIrpsInThreadList @ 0x1406EEBA8 (IopCancelIrpsInThreadList.c)
 *     WmipEnableCollectOrEvent @ 0x1406F1F58 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1406FBBF0 (WmipIsQuerySetGuid.c)
 *     MiReadImageHeaders @ 0x1406FE9CC (MiReadImageHeaders.c)
 *     FsRtlIssueDeviceIoControl @ 0x1407010C0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x14070C030 (FsRtlQueryCachedVdl.c)
 *     WmipEnumerateMofResources @ 0x14070C6F4 (WmipEnumerateMofResources.c)
 *     WmipDisableCollectOrEvent @ 0x14070F280 (WmipDisableCollectOrEvent.c)
 *     FsRtlBalanceReads @ 0x1407108C0 (FsRtlBalanceReads.c)
 *     PiQueueDeviceRequest @ 0x14071D364 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14071D534 (PnpQueueQueryAndRemoveEvent.c)
 *     IopGetVolumeId @ 0x140721210 (IopGetVolumeId.c)
 *     PiIrpQueryRemoveDevice @ 0x1407221AC (PiIrpQueryRemoveDevice.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PnpStartDeviceNode @ 0x14072C52C (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14072C9C4 (IopUncacheInterfaceInformation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140733394 (PopFxUnregisterDeviceOrWait.c)
 *     PnpAllocateResources @ 0x14073A218 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x14073AFB0 (IopFilterResourceRequirementsCall.c)
 *     IopLegacyResourceAllocation @ 0x14073D9A4 (IopLegacyResourceAllocation.c)
 *     WmipDeregisterDevice @ 0x14073F450 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14073F4F0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14073F5C8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14073F734 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14073F80C (WmipUpdateDeviceStackSize.c)
 *     WmipAddDataSource @ 0x140740EF8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1407416C8 (WmipDetermineInstanceBaseIndex.c)
 *     WmipPrepareWnodeSI @ 0x140741C54 (WmipPrepareWnodeSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074211C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1407423D0 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140742764 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipFindISinGEbyName @ 0x1407429B8 (WmipFindISinGEbyName.c)
 *     IoDisconnectInterrupt @ 0x14074E640 (IoDisconnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x14074F280 (IopDestroyActiveConnectBlock.c)
 *     HalGetAdapterV2 @ 0x140752960 (HalGetAdapterV2.c)
 *     PnpQueryInterface @ 0x140753EE0 (PnpQueryInterface.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     WmipDSCleanup @ 0x14075A100 (WmipDSCleanup.c)
 *     WmipRegistrationWorker @ 0x14075A280 (WmipRegistrationWorker.c)
 *     IoReportTargetDeviceChange @ 0x14075AEC0 (IoReportTargetDeviceChange.c)
 *     PnpCallDriverEntry @ 0x14075DA40 (PnpCallDriverEntry.c)
 *     ArbArbiterHandler @ 0x14075EC00 (ArbArbiterHandler.c)
 *     PoUnregisterPowerSettingCallback @ 0x14075FEA0 (PoUnregisterPowerSettingCallback.c)
 *     NtInitiatePowerAction @ 0x140762A00 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140763768 (PopPowerAggregatorNotifySuspendResume.c)
 *     EmPowerPagingEnabled @ 0x140764408 (EmPowerPagingEnabled.c)
 *     PopFxNotifySxTransitionState @ 0x140764564 (PopFxNotifySxTransitionState.c)
 *     PopGetWakeSource @ 0x1407657D8 (PopGetWakeSource.c)
 *     HalpGetDynamicDevicePointer @ 0x140765EF4 (HalpGetDynamicDevicePointer.c)
 *     PopInitSystemSleeperThread @ 0x1407669F8 (PopInitSystemSleeperThread.c)
 *     PopResizeHiberFile @ 0x140767784 (PopResizeHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     IopLoadFileSystemDriver @ 0x14076ADE4 (IopLoadFileSystemDriver.c)
 *     WmipSendEnableDisableRequest @ 0x14076B460 (WmipSendEnableDisableRequest.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     IopCreateArcName @ 0x14076DB08 (IopCreateArcName.c)
 *     WmipSetTraceNotify @ 0x14076E548 (WmipSetTraceNotify.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14077A99C (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14077AEC4 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14077B2D4 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x14077B698 (PopAcquireTransitionLock.c)
 *     PopSanityCheckHiberFile @ 0x14077BEA8 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14077C2C4 (PopClearHiberFileSignature.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14077D740 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140780310 (EtwpUpdateGlobalGroupMasks.c)
 *     CmCompleteRegistryInitialization @ 0x140782FEC (CmCompleteRegistryInitialization.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14078C318 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14078C344 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 *     PopFxUnregisterDevice @ 0x1407A01FC (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x1407A055C (PopPepUnregisterDevice.c)
 *     IopAllocateBootResources @ 0x1407A1AA0 (IopAllocateBootResources.c)
 *     MiZeroPageFileFirstPage @ 0x1407A3668 (MiZeroPageFileFirstPage.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407A5BE0 (PopDirectedDripsWorkerRoutine.c)
 *     ArbBuildAssignmentOrdering @ 0x1407A9798 (ArbBuildAssignmentOrdering.c)
 *     WmipAddMofResource @ 0x1407AC24C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1407AC488 (WmipFindMRByNames.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407AF2F4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     HalGetAdapterV3 @ 0x1407B1070 (HalGetAdapterV3.c)
 *     WmipUpdateDataSource @ 0x1407B1C88 (WmipUpdateDataSource.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1407B24A0 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipLegacyEtwWorker @ 0x1407B2D40 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407B2EA0 (WmipProcessLegacyEtwRegister.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407B3FD4 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1407B4E28 (FsRtlpRegisterUncProvider.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B7150 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x1407C0950 (WheapEtwEnableCallback.c)
 *     IoWMISetNotificationCallback @ 0x1407C1000 (IoWMISetNotificationCallback.c)
 *     CmpDummyThreadRoutine @ 0x1407C2120 (CmpDummyThreadRoutine.c)
 *     FsRtlWaitForSmssEvent @ 0x1407C26E0 (FsRtlWaitForSmssEvent.c)
 *     HalpQueryAcpiRealTimeClock @ 0x1408608D0 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408609B4 (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140861290 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalpCallWakeAlarmDriver @ 0x140862C30 (HalpCallWakeAlarmDriver.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140862D10 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPccInterface @ 0x14086344C (HalpQueryPccInterface.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140866A50 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086F29C (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140881150 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140882428 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140883360 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140885264 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140887C0C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x140888680 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x140889190 (FsRtlQueryInformationFile.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x14088A710 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopCancelAlertedRequest @ 0x14088DF6C (IopCancelAlertedRequest.c)
 *     IopHardErrorThread @ 0x14088E5D0 (IopHardErrorThread.c)
 *     IopSendMessageToTrackService @ 0x14088F040 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x14088FC48 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140890560 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140890E20 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1408976A8 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x140897FD0 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14089884C (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14089B340 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089CC98 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14089E3EC (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408A8278 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x1408B0060 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1408B1360 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1408B1510 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1408B6754 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 *     PopDeactiveThermalRequest @ 0x1408DF5A8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1408DF788 (PopDisableCoolingExtension.c)
 *     PopReadPagesFromHiberFile @ 0x1408E3AD8 (PopReadPagesFromHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1408E43C0 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1408E4970 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1408EA210 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408EE320 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409031B4 (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1409069D8 (PsSetVmProcessorHostProcess.c)
 *     PsWaitForAllProcesses @ 0x140907A28 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x140907F1C (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x140909CC0 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x140909E00 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090AE38 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x14090BF54 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14090C0A8 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14090C4F8 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409162C0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessResizeRequest @ 0x140926944 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140926A40 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x140926F10 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x140927FFC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14092886C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140928920 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1409289E4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x140929144 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409291E0 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14092987C (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x14092D730 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14092E628 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14092EDEC (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x14092F044 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14092F1DC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x14092F7BC (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x14092FFD0 (WmipLegacyEtwCallback.c)
 *     WmipWaitForCollectionEnabled @ 0x1409302F4 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140930C18 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140930E44 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x140933F5C (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x140939854 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409398B0 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x14093B708 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x14093E0AC (EtwpUpdateDisallowedGuids.c)
 *     EtwpCovSampCaptureFlush @ 0x14093F240 (EtwpCovSampCaptureFlush.c)
 *     EtwpKsrCallback @ 0x140945190 (EtwpKsrCallback.c)
 *     ExpWorkQueueDestroy @ 0x140952AC8 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x140957790 (NtStartProfile.c)
 *     NtStopProfile @ 0x140957A00 (NtStopProfile.c)
 *     NtReleaseKeyedEvent @ 0x140957C00 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140957FC0 (NtWaitForKeyedEvent.c)
 *     WheaAttemptClearPoison @ 0x140959C50 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140959D10 (WheaAttemptPhysicalPageOffline.c)
 *     sub_14095E9EC @ 0x14095E9EC (sub_14095E9EC.c)
 *     sub_1409601C0 @ 0x1409601C0 (sub_1409601C0.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14097CA64 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdiVerifyBootDisk @ 0x14097CE4C (VhdiVerifyBootDisk.c)
 *     PopCaptureTimeOnProcZero @ 0x14098D698 (PopCaptureTimeOnProcZero.c)
 *     PfpScenCtxPrefetchWait @ 0x14098D8D4 (PfpScenCtxPrefetchWait.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PopTransitionToSleep @ 0x140992920 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x1409930F0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140993E68 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099499C (PopFlushVolumes.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A82C4 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1409AA98C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1409ABDF0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1409AD100 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 *     VfDriverLock @ 0x1409BF5B8 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1409C2A08 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE500 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1409D2B14 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1409D2E90 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409DD330 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x1409E22F0 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1409EF1B4 (AnFwFadeCompletion.c)
 *     IopAssignBootDriveLetter @ 0x140A67244 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140A675EC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8CE7C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A921A8 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A92AF8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A92CF8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A930D4 (SbpWaitForVmbus.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int64 v8; // rdx
  LONGLONG v9; // r9
  unsigned __int8 WaitIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  unsigned __int8 v13; // r12
  $58B70396B7C968FDBCA820C1D7C540BB *v14; // r15
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
  _DWORD *v41; // rdx
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
          KeYieldProcessorEx(&v105, v8);
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
        v9 = (LONGLONG)KeGetCurrentPrcb()->SchedulerAssist;
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
      v9 = (LONGLONG)KeGetCurrentPrcb()->SchedulerAssist;
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
    KiFastExitThreadWait(v18, CurrentThread, v13, v9);
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
          KeYieldProcessorEx(&v108, ThreadTimerDelay);
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
          KeYieldProcessorEx(&v109, ThreadTimerDelay);
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
        KiSelectNextThread(v18, &v111, WaitMode, v9);
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
      KeYieldProcessorEx(&v106, ThreadTimerDelay);
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
  v41 = v40->SchedulerAssist;
  if ( v41 )
  {
    if ( v40->NestingLevel <= 1u )
    {
      v74 = v41[6] - 1;
      v41[6] = v74;
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
      KeYieldProcessorEx(&v107, v41);
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
    KiSelectNextThread(v18, &v110, WaitMode, v9);
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
