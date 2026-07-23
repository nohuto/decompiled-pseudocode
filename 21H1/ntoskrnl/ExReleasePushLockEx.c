/*
 * XREFs of ExReleasePushLockEx @ 0x140260EE0
 * Callers:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14022B9F8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x14023210C (CcAllocateInitializeBcb.c)
 *     CcPostWorkQueueAsyncRead @ 0x140235324 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140235528 (CcShouldSpinAsyncReadWorkerThread.c)
 *     EtwpUnlockBufferList @ 0x1402416B8 (EtwpUnlockBufferList.c)
 *     ObpUnlockDirectory @ 0x14025B2D4 (ObpUnlockDirectory.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14025FFF0 (FsRtlLookupPerStreamContextInternal.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402EC4D0 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402F5090 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402F61C0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402F62B0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F6E60 (FsRtlInsertPerStreamContext.c)
 *     CcGetVirtualAddressIfMapped @ 0x1402FC2C0 (CcGetVirtualAddressIfMapped.c)
 *     FsRtlInsertPerFileContext @ 0x14030F8D0 (FsRtlInsertPerFileContext.c)
 *     FsRtlLookupPerFileContext @ 0x140314D60 (FsRtlLookupPerFileContext.c)
 *     CcCompleteAsyncReadWorker @ 0x14031C6D0 (CcCompleteAsyncReadWorker.c)
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 *     IopCleanupNotifications @ 0x140379718 (IopCleanupNotifications.c)
 *     CcGetNumberOfMappedPages @ 0x1403917D0 (CcGetNumberOfMappedPages.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A327C (ExpUnlockCallbackListExclusive.c)
 *     CcAsyncReadWorker @ 0x1403B2B50 (CcAsyncReadWorker.c)
 *     CcAsyncReadWorkerThread @ 0x1404E6EF0 (CcAsyncReadWorkerThread.c)
 *     FsRtlRemovePerFileContext @ 0x1404EB9A0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1404EBAA0 (FsRtlRemovePerStreamContext.c)
 *     PnpCancelDeviceActionRequest @ 0x140508D28 (PnpCancelDeviceActionRequest.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140564D50 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     CmSetCallbackObjectContext @ 0x1405CB020 (CmSetCallbackObjectContext.c)
 *     VrpUnloadDifferencingHive @ 0x1405CB8A8 (VrpUnloadDifferencingHive.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405CBA70 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405CBCD4 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405CC2F8 (CmpFreeCallbackObjectContexts.c)
 *     ObQueryDeviceMapInformation @ 0x1405DF8B0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x1405DFEE0 (ObpReferenceDeviceMap.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405F31AC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405F6270 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405F7EF0 (EtwpDeleteRegistrationObject.c)
 *     CmpUnlockTwoKcbs @ 0x1405FA0B0 (CmpUnlockTwoKcbs.c)
 *     ObpFreeObject @ 0x1405FB360 (ObpFreeObject.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     ObpCallPreOperationCallbacks @ 0x14060FBC0 (ObpCallPreOperationCallbacks.c)
 *     ObSetSecurityDescriptorInfo @ 0x140613930 (ObSetSecurityDescriptorInfo.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockNameHashEntry @ 0x14061D640 (CmpUnlockNameHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x14061D680 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntryByKcb @ 0x140622370 (CmpUnlockHashEntryByKcb.c)
 *     DelistKeyBodyFromKCB @ 0x1406229D0 (DelistKeyBodyFromKCB.c)
 *     CmpOKToFollowLink @ 0x140623500 (CmpOKToFollowLink.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406265A0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1406270E0 (CmpCallbackFillObjectContext.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x140629320 (ObpIncrementHandleCountEx.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     ObDereferenceDeviceMap @ 0x14065E844 (ObDereferenceDeviceMap.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140677748 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14067B578 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     NtOpenPrivateNamespace @ 0x14067DAC0 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x14067DC90 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14067E0DC (ObpRegisterPrivateNamespace.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpQueueNotification @ 0x14067FA78 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x14067FFB8 (EtwpReceiveNotification.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x14068AC10 (ObpDeleteNameCheck.c)
 *     CmpUnlockHiveList @ 0x14068DF80 (CmpUnlockHiveList.c)
 *     UnlockShutdown @ 0x14068E070 (UnlockShutdown.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140691040 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140693AC8 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x140695840 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x140695CA8 (CmpUnlockHashEntry.c)
 *     CmpFreeKeyByCell @ 0x1406963D0 (CmpFreeKeyByCell.c)
 *     CmUnlockHiveSecurity @ 0x140696808 (CmUnlockHiveSecurity.c)
 *     CmpAssignSecurityToKcb @ 0x1406969B4 (CmpAssignSecurityToKcb.c)
 *     PiDqIrpQueryGetResult @ 0x14069FD54 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x1406A09B0 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1406A0E7C (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x1406A13AC (PiDqQuerySerializeActionQueue.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406A73E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406A7750 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406A86D4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406A8E04 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406A8FCC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectIsEnumerable @ 0x1406A96AC (PiDmObjectIsEnumerable.c)
 *     NtQuerySymbolicLinkObject @ 0x1406B8F10 (NtQuerySymbolicLinkObject.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406B95D0 (FsRtlTeardownPerStreamContexts.c)
 *     CmpGetCallbackObjectContext @ 0x1406BC424 (CmpGetCallbackObjectContext.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x1406C16B0 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406C1728 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406C192C (ObpDeleteSymbolicLinkName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C1EA8 (ObSetCurrentProcessDeviceMap.c)
 *     EtwpRundownNotifications @ 0x1406C238C (EtwpRundownNotifications.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406C5C00 (FsRtlTeardownPerFileContexts.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1406CD17C (CmpInsertCallbackInListByAltitude.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D2B64 (ObDestroyHandleRevocationBlock.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406D52FC (ObpRemoveNamespaceFromTable.c)
 *     EtwpFreeGuidEntry @ 0x1406DE9BC (EtwpFreeGuidEntry.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406DEFC0 (PiDmObjectGetCachedObjectReference.c)
 *     ObCheckActiveHandles @ 0x1406DF63C (ObCheckActiveHandles.c)
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     WdipTimeoutCheckRoutine @ 0x1406E15C0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406E1670 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406E16F8 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     CmpGetLastHive @ 0x1406E268C (CmpGetLastHive.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E3D08 (ObpCreateSymbolicLinkName.c)
 *     ObpSetDeviceMap @ 0x1406E7654 (ObpSetDeviceMap.c)
 *     EtwpTrackProviderBinary @ 0x1406E9B78 (EtwpTrackProviderBinary.c)
 *     PopReleaseUmpoPushLock @ 0x140700060 (PopReleaseUmpoPushLock.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     ObMakeTemporaryObject @ 0x140704430 (ObMakeTemporaryObject.c)
 *     PopUmpoProcessMessage @ 0x14070EC54 (PopUmpoProcessMessage.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407156C0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     EtwpGetTraceGuidInfo @ 0x14071A7D4 (EtwpGetTraceGuidInfo.c)
 *     PiDmListRemoveList @ 0x14071CAF8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14071CC1C (PiDmListRemoveObject.c)
 *     NtMakePermanentObject @ 0x14071DB90 (NtMakePermanentObject.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x14072E038 (PiDmListAddObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x14072F324 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectReleaseLock @ 0x140730208 (PiDmObjectReleaseLock.c)
 *     EtwUnregister @ 0x140748B40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x14074B530 (EtwpRegisterProvider.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074BA90 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14074BE34 (PiDqQueryApplyObjectEvent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14074E0A0 (CmpUnlockTwoSecurityCaches.c)
 *     ExpGetNextCallback @ 0x140758950 (ExpGetNextCallback.c)
 *     PiDmListAddList @ 0x14075A20C (PiDmListAddList.c)
 *     ObRevokeHandles @ 0x140764EFC (ObRevokeHandles.c)
 *     CmpEnumerateCallback @ 0x1407685E0 (CmpEnumerateCallback.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140773DE8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140773F30 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableScenario @ 0x140774B60 (WdipSemDisableScenario.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140774CB0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemEnableScenario @ 0x140774DEC (WdipSemEnableScenario.c)
 *     WdipSemActivateInstance @ 0x1407750BC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProvider @ 0x140775180 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x1407752D8 (WdipSemEnableContextProvider.c)
 *     ObCreateObjectTypeEx @ 0x14077E640 (ObCreateObjectTypeEx.c)
 *     WdipSemInitialize @ 0x140784BAC (WdipSemInitialize.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1407882E0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmpStartSiloKeyLockTracker @ 0x14078CE30 (CmpStartSiloKeyLockTracker.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     WdipSemAllocatePool @ 0x1407AABE8 (WdipSemAllocatePool.c)
 *     CmLockKeyForWrite @ 0x1407ADB50 (CmLockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407ADD40 (CmpGlobalLockKeyForWrite.c)
 *     ObRegisterCallbacks @ 0x1407B4BB0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x1407B4D84 (ObpInsertCallbackByAltitude.c)
 *     CmpMachineHiveLoadedWorkItem @ 0x1407B5C80 (CmpMachineHiveLoadedWorkItem.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407B8710 (ObIsDosDeviceLocallyMapped.c)
 *     EtwpTracingProvEnableCallback @ 0x1407BF520 (EtwpTracingProvEnableCallback.c)
 *     CmUnRegisterCallback @ 0x1408652A0 (CmUnRegisterCallback.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140865730 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14086D994 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x14086DAB8 (CmpStopSiloKeyLockTracker.c)
 *     CmpLazyCommitWorker @ 0x14086DBC0 (CmpLazyCommitWorker.c)
 *     CmpSyncNextBackupHive @ 0x1408701C0 (CmpSyncNextBackupHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x14087148C (CmpUnlockHashEntryByIndex.c)
 *     CmDumpKey @ 0x140877530 (CmDumpKey.c)
 *     IoRegisterContainerNotification @ 0x1408904D0 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140890710 (IoUnregisterContainerNotification.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14089ED5C (PiPnpRtlEnsureObjectCached.c)
 *     PiDqQueryUnlock @ 0x1408A077C (PiDqQueryUnlock.c)
 *     ObpGetShadowDirectory @ 0x1408D798C (ObpGetShadowDirectory.c)
 *     ObShutdownSystem @ 0x1408D7B20 (ObShutdownSystem.c)
 *     ObHandleRevocationBlockAddObject @ 0x1408D7FB0 (ObHandleRevocationBlockAddObject.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1408D8070 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408D88E8 (ObpSetObjectAuditInfo.c)
 *     ObpCreateTypeArray @ 0x1408D9190 (ObpCreateTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1408D92D0 (ObUnRegisterCallbacks.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408DFDC4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PsRegisterAltSystemCallHandler @ 0x140907470 (PsRegisterAltSystemCallHandler.c)
 *     WdipSemUpdate @ 0x14092B2A4 (WdipSemUpdate.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14092B7C4 (WdipSemUpdateFrequentScenarioTable.c)
 *     EtwpDisallowedGuidAddition @ 0x14092F354 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14092F63C (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x14092FEA4 (EtwpGetTraceGroupInfo.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093A6B0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093A77C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093A910 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x14093AB08 (EtwpRegisterPrivateSession.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093B0C0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093CAC0 (EtwpTrackGuidEntryRegistrations.c)
 *     PopReleaseAwaymodeLock @ 0x14098CD68 (PopReleaseAwaymodeLock.c)
 *     ExShutdownSystem @ 0x1409AEE88 (ExShutdownSystem.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A57FF4 (PsNotifyCoreDriversInitialized.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoQoS @ 0x1402DB77C (PsBoostThreadIoQoS.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140303FF4 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x140320A10 (KiAbThreadUnboostIoPriority.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x14035A550 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A18A0 (EtwTraceAutoBoostClearFloor.c)
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
  __int64 SessionId; // r8
  unsigned __int8 v11; // r15
  __int64 v12; // rdx
  ULONG_PTR v13; // r9
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // eax
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
    LOBYTE(v6) = ExfReleasePushLock(BugCheckParameter2, v5);
  }
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    v19 = 0;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F908[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3Fu;
    v13 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    v14 = !_BitScanReverse((unsigned int *)&v15, v12);
    if ( v14 )
      goto LABEL_27;
    while ( 1 )
    {
      v16 = (__int64)&CurrentThread->LockEntries[v15];
      v12 = ~(1 << v15) & (unsigned int)v12;
      if ( (*(_BYTE *)(v16 + 26) & 1) != 0
        && (*(_DWORD *)(v16 + 32) & 1) == 0
        && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v13
        && *(_DWORD *)(v16 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v16 + 26) &= ~1u;
        if ( *(_QWORD *)(v16 + 32) )
          break;
      }
      v14 = !_BitScanReverse((unsigned int *)&v15, v12);
      if ( v14 )
        goto LABEL_27;
    }
    if ( !v16 )
    {
LABEL_27:
      LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( (v6 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v16 + 32) |= 2u;
      if ( *(__int64 *)(v16 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v16);
      v9 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
      v17 = *(_DWORD *)(v16 + 88) & 0xFFFE0000;
      *(_BYTE *)(v16 + 25) &= ~1u;
      v19 = BYTE2(v9);
      *(_DWORD *)(v16 + 88) = v17;
      *(_QWORD *)(v16 + 32) = 0LL;
      v12 = (signed __int64)(v16 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v11 == 1 )
      {
        LODWORD(v6) = CurrentThread->AbEntrySummary | (1 << v12);
        CurrentThread->AbEntrySummary = v6;
      }
      else
      {
        v15 = (unsigned int)v12;
        LOBYTE(v6) = 1 << v12;
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v12);
      }
    }
    --CurrentThread->AbAllocationRegionCount;
    if ( (v9 & 0x1FFFF) != 0 )
    {
      if ( (v9 & 0x8000u) != 0 )
        KiAbThreadUnboostIoPriority(CurrentThread, 0LL);
      if ( (v19 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoQoSBoostCount);
        PsBoostThreadIoQoS(CurrentThread, 1LL);
      }
      LOBYTE(v6) = -1;
      if ( (v9 & 0x7FFF) != 0 )
        LOBYTE(v6) = KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        LOBYTE(v6) = EtwTraceAutoBoostClearFloor(CurrentThread, BugCheckParameter2, v9 & 0x1FFFF);
    }
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery(v15, v12, SessionId, v13);
  }
  return v6;
}
