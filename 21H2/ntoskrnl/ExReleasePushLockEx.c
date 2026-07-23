/*
 * XREFs of ExReleasePushLockEx @ 0x140355BE0
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14020F360 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14021F710 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlRemovePerFileObjectContext @ 0x14021FCE0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14021FDD0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x140225430 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileContext @ 0x14023DA80 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x140242C00 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x14024A930 (CcCompleteAsyncReadWorker.c)
 *     EtwpUnlockBufferList @ 0x14025426C (EtwpUnlockBufferList.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     ObpUnlockDirectory @ 0x14026CAAC (ObpUnlockDirectory.c)
 *     NtTraceEvent @ 0x14027E790 (NtTraceEvent.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403033B4 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1403035B8 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcGetVirtualAddressIfMapped @ 0x14031A194 (CcGetVirtualAddressIfMapped.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14031BA74 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcAllocateInitializeBcb @ 0x140327AD0 (CcAllocateInitializeBcb.c)
 *     CcGetVirtualAddress @ 0x14032BC60 (CcGetVirtualAddress.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140354CF0 (FsRtlLookupPerStreamContextInternal.c)
 *     IopCleanupNotifications @ 0x14037BFA8 (IopCleanupNotifications.c)
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     CcGetNumberOfMappedPages @ 0x140394CC0 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A67BC (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x1403B7AC0 (CcAsyncReadWorker.c)
 *     CcAsyncReadWorkerThread @ 0x1404EC800 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x1404F1380 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1404F1480 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x14050EA18 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14056AA70 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     CmSetCallbackObjectContext @ 0x1405D5830 (CmSetCallbackObjectContext.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405D642C (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405D6690 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405D6B4C (CmpFreeCallbackObjectContexts.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpUnlockHiveList @ 0x1405E2A98 (CmpUnlockHiveList.c)
 *     NtQuerySymbolicLinkObject @ 0x1405E57B0 (NtQuerySymbolicLinkObject.c)
 *     CmpGetCallbackObjectContext @ 0x1405EAE54 (CmpGetCallbackObjectContext.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1405F18B0 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1405F1928 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405F1B2C (ObpDeleteSymbolicLinkName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1405F222C (ObSetCurrentProcessDeviceMap.c)
 *     FsRtlTeardownPerFileContexts @ 0x1405F66C0 (FsRtlTeardownPerFileContexts.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1405FC65C (CmpInsertCallbackInListByAltitude.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406034B4 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406059BC (ObpRemoveNamespaceFromTable.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14060CBA0 (EtwpRealtimeUpdateConsumers.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140611F80 (PiDmObjectGetCachedObjectReference.c)
 *     ObCheckActiveHandles @ 0x1406129DC (ObCheckActiveHandles.c)
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     WdipTimeoutCheckRoutine @ 0x1406154B0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140615560 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406155E8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     EtwpRealtimeConnect @ 0x140617EC8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406182F8 (EtwpRealtimeDisconnectConsumer.c)
 *     ObpCreateSymbolicLinkName @ 0x140618538 (ObpCreateSymbolicLinkName.c)
 *     UnlockShutdown @ 0x14061B8D0 (UnlockShutdown.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObpSetDeviceMap @ 0x14061C8E4 (ObpSetDeviceMap.c)
 *     EtwpTrackProviderBinary @ 0x14061ED28 (EtwpTrackProviderBinary.c)
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     PiDqIrpQueryGetResult @ 0x1406230F8 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x140623C70 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x14062413C (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x14062466C (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14062A270 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14062A5E0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14062B564 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14062BC94 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14062BE5C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x14062C53C (PiDmObjectIsEnumerable.c)
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x1406540D0 (ObSetSecurityDescriptorInfo.c)
 *     DelistKeyBodyFromKCB @ 0x14065C750 (DelistKeyBodyFromKCB.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x14065F004 (CmUnlockHiveSecurity.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x140660E70 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140661844 (CmpUnlockDeletedHashEntryByKcb.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 *     CmpGetLastHive @ 0x140664774 (CmpGetLastHive.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1406672E4 (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406677F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     PopUmpoProcessMessage @ 0x14066DC54 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x14066FEF4 (PopReleaseUmpoPushLock.c)
 *     ObDereferenceDeviceMap @ 0x14067BE28 (ObDereferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14068ED10 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x14068F1A4 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x14068F360 (ObpReferenceDeviceMap.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406B8424 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpQueueNotification @ 0x1406BB52C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1406BBA6C (EtwpReceiveNotification.c)
 *     NtOpenPrivateNamespace @ 0x1406BBF90 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x1406BC160 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406BC888 (ObpRegisterPrivateNamespace.c)
 *     EtwpFreeGuidEntry @ 0x1406BCEEC (EtwpFreeGuidEntry.c)
 *     EtwpRundownNotifications @ 0x1406BCF58 (EtwpRundownNotifications.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406CA160 (FsRtlTeardownPerStreamContexts.c)
 *     ObpCallPreOperationCallbacks @ 0x1406D8EC0 (ObpCallPreOperationCallbacks.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     CmpUnlockHashEntry @ 0x1406DBD98 (CmpUnlockHashEntry.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x1406DF5C0 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406DF600 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpUnlockTwoKcbs @ 0x1406E30B0 (CmpUnlockTwoKcbs.c)
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     EtwpDeleteRegistrationObject @ 0x1406EC060 (EtwpDeleteRegistrationObject.c)
 *     ObpFreeObject @ 0x140707900 (ObpFreeObject.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x14070A290 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x14070ADD0 (CmpCallbackFillObjectContext.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpOKToFollowLink @ 0x1407133F0 (CmpOKToFollowLink.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 *     EtwpGetTraceGuidInfo @ 0x14072E894 (EtwpGetTraceGuidInfo.c)
 *     PiDmListRemoveList @ 0x140730AF8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140730C1C (PiDmListRemoveObject.c)
 *     NtMakePermanentObject @ 0x140731D50 (NtMakePermanentObject.c)
 *     PiDmListAddObject @ 0x140735694 (PiDmListAddObject.c)
 *     IopRegisterDeviceInterface @ 0x140748630 (IopRegisterDeviceInterface.c)
 *     PiDmObjectReleaseLock @ 0x1407499A8 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A614 (PiDmObjectProcessPropertyChange.c)
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407632E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140763684 (PiDqQueryApplyObjectEvent.c)
 *     ExpGetNextCallback @ 0x14076D090 (ExpGetNextCallback.c)
 *     PiDmListAddList @ 0x14076EBA4 (PiDmListAddList.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14076FCB8 (CmpUnlockTwoSecurityCaches.c)
 *     ObRevokeHandles @ 0x140779A5C (ObRevokeHandles.c)
 *     CmpEnumerateCallback @ 0x14077CF70 (CmpEnumerateCallback.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140788798 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407888E0 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x140789510 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140789660 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x14078979C (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x140789A6C (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140789B30 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140789C88 (WdipSemEnableContextProvider.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x140790860 (CmRegisterMachineHiveLoadedNotification.c)
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 *     WdipSemInitialize @ 0x140799208 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     CmpStartSiloKeyLockTracker @ 0x1407A5970 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     WdipSemAllocatePool @ 0x1407C05A8 (WdipSemAllocatePool.c)
 *     CmLockKeyForWrite @ 0x1407C3510 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407C3700 (CmpGlobalLockKeyForWrite.c)
 *     ObRegisterCallbacks @ 0x1407CAB30 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1407CAD04 (ObpInsertCallbackByAltitude.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407CBAE0 (CmpMachineHiveLoadedWorkItem.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407CE540 (ObIsDosDeviceLocallyMapped.c)
 *     EtwpTracingProvEnableCallback @ 0x1407D5870 (EtwpTracingProvEnableCallback.c)
 *     CmUnRegisterCallback @ 0x140869D70 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x14086A200 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmpSyncNextBackupHive @ 0x1408715C0 (CmpSyncNextBackupHive.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140872954 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140872A78 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x140872C90 (CmpLazyCommitWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140875D1C (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x14087BE78 (CmDumpKey.c)
 *     IoRegisterContainerNotification @ 0x140894BA0 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140894DE0 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A32DC (PiPnpRtlEnsureObjectCached.c)
 *     PiDqQueryUnlock @ 0x1408A4CFC (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1408DC43C (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1408DC5F0 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408DCA80 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408DCB40 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408DD3B8 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1408DDC60 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1408DDDA0 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E47E4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PsRegisterAltSystemCallHandler @ 0x14090BC50 (PsRegisterAltSystemCallHandler.c)
 *     WdipSemUpdate @ 0x14092FCB4 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409301D4 (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x140933DD4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409340BC (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x140934924 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093F120 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093F1EC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F380 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x14093F578 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093FB10 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14094149C (EtwpTrackGuidEntryRegistrations.c)
 *     PopReleaseAwaymodeLock @ 0x140991570 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1409B3A88 (ExShutdownSystem.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A5FF60 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402045F8 (PsBoostThreadIoQoS.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402119C0 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14024F460 (KiAbThreadUnboostIoPriority.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1402FC190 (ExfReleasePushLock.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A7690 (EtwTraceAutoBoostClearFloor.c)
 */

char __fastcall ExReleasePushLockEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // rax
  __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rdi
  int v9; // ebx
  unsigned int SessionId; // r8d
  unsigned __int8 v11; // r15
  unsigned int v12; // edx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdx
  char v19; // [rsp+72h] [rbp+1Ah]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw((const void *)BugCheckParameter2);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || (v7 = *(_QWORD *)BugCheckParameter2,
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v4),
        v7 != v6) )
  {
    LOBYTE(v6) = ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v19 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4FA08[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      goto LABEL_27;
    while ( 1 )
    {
      v15 = (__int64)&CurrentThread->LockEntries[v14];
      v12 &= ~(1 << v14);
      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
        && (*(_DWORD *)(v15 + 32) & 1) == 0
        && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v15 + 40) == SessionId )
      {
        *(_BYTE *)(v15 + 26) &= ~1u;
        if ( *(_QWORD *)(v15 + 32) )
          break;
      }
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      if ( v13 )
        goto LABEL_27;
    }
    if ( !v15 )
    {
LABEL_27:
      LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v6 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v15 + 32) |= 2u;
      if ( *(__int64 *)(v15 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
      v9 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
      v16 = *(_DWORD *)(v15 + 88) & 0xFFFE0000;
      *(_BYTE *)(v15 + 25) &= ~1u;
      v19 = BYTE2(v9);
      *(_DWORD *)(v15 + 88) = v16;
      *(_QWORD *)(v15 + 32) = 0LL;
      v17 = (signed __int64)(v15 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v11 == 1 )
      {
        LODWORD(v6) = CurrentThread->AbEntrySummary | (1 << v17);
        CurrentThread->AbEntrySummary = v6;
      }
      else
      {
        LOBYTE(v6) = 1 << v17;
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
      }
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority((__int64)CurrentThread, 0LL);
      if ( (v19 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        PsBoostThreadIoQoS((__int64)CurrentThread, 1);
      }
      LOBYTE(v6) = -1;
      if ( (v9 & 0x7FFF) != 0 )
        LOBYTE(v6) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread, v9 & 0x7FFF);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v6) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return v6;
}
