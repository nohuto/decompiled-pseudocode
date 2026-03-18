/*
 * XREFs of ExAcquireFastMutex @ 0x1402071B0
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x1402070D0 (FsRtlLookupPerStreamContextInternal.c)
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     CcZeroEndOfLastPage @ 0x140228884 (CcZeroEndOfLastPage.c)
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     PoRunDownDeviceObject @ 0x14026F858 (PoRunDownDeviceObject.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402BE6F8 (CcAcquireBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcAcquireByteRangeForWrite @ 0x1402C1790 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1402C2FD0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteMbcb @ 0x1402C8B10 (CcDeleteMbcb.c)
 *     PopGetPowerSettingValue @ 0x1402DF490 (PopGetPowerSettingValue.c)
 *     RawInitiateDeleteVolume @ 0x1402FF00C (RawInitiateDeleteVolume.c)
 *     RawCompletionRoutine @ 0x140311CE0 (RawCompletionRoutine.c)
 *     CmpWaitForLateUnloadWorker @ 0x14032551C (CmpWaitForLateUnloadWorker.c)
 *     FsRtlAddLargeMcbEntry @ 0x14032C250 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x14032C2C0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1403322C0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x140333FA0 (FsRtlInsertPerStreamContext.c)
 *     HalpAcpiGetTable @ 0x140335770 (HalpAcpiGetTable.c)
 *     CcGetFlushedValidData @ 0x140345D80 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14035D078 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036A630 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037D6C0 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunMaximumIrpWorkers @ 0x1403899F0 (PopRunMaximumIrpWorkers.c)
 *     PopRunNormalIrpWorkers @ 0x14038B424 (PopRunNormalIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A2440 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x1403A61A4 (PopInitilizeAcDcSettings.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B7328 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTables @ 0x1403B801C (HalpAcpiGetAllTables.c)
 *     PopIrpWorkerControl @ 0x1403C89A0 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1404E5560 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1404E57F0 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1404E9DB0 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1404E9EA0 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1404E9F50 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404E9FD0 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1404EA150 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1404EA1B0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1404EA250 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1404EA410 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EB2C8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EB3A8 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB8C0 (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x1404EC0D0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x1405086FC (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x14051F284 (KiOpPatchCode.c)
 *     PopAcquireIrpWorkerLock @ 0x140572790 (PopAcquireIrpWorkerLock.c)
 *     RawVerifyVolume @ 0x14057FA04 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x140589800 (RtlpTraceDatabaseAcquireLock.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1405D1A24 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IoGetDeviceProperty @ 0x1405DCC50 (IoGetDeviceProperty.c)
 *     CmpDelayCloseWorker @ 0x1405DF360 (CmpDelayCloseWorker.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1405FBC40 (FsRtlAcquireToCreateMappedSection.c)
 *     DbgkCopyProcessDebugPort @ 0x140618348 (DbgkCopyProcessDebugPort.c)
 *     PfGetCompletedTrace @ 0x14061D6F4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14061D984 (PfTTraceListAdd.c)
 *     RawScanDeletedList @ 0x140634184 (RawScanDeletedList.c)
 *     RawMountVolume @ 0x140635500 (RawMountVolume.c)
 *     CmpGetMappingHiveForString @ 0x140640178 (CmpGetMappingHiveForString.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140643AE0 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     PiUEventHandleGetEvent @ 0x140646D28 (PiUEventHandleGetEvent.c)
 *     PiUEventProcessEventWorker @ 0x140647610 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x1406477AC (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x140647C2C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x14064824C (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x140648330 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1406483CC (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140648658 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpInsertEventInQueue @ 0x140648AB0 (PnpInsertEventInQueue.c)
 *     PnpProcessDeferredRegistrations @ 0x1406495D4 (PnpProcessDeferredRegistrations.c)
 *     PopGetSettingNotificationName @ 0x14064BA50 (PopGetSettingNotificationName.c)
 *     PopDiagTraceControlCallback @ 0x14064EB10 (PopDiagTraceControlCallback.c)
 *     CmpRemoveFromDelayedClose @ 0x140652DA0 (CmpRemoveFromDelayedClose.c)
 *     CmpDelayFreeCmRm @ 0x14065306C (CmpDelayFreeCmRm.c)
 *     EtwpSetProviderTraitsCommon @ 0x14066B740 (EtwpSetProviderTraitsCommon.c)
 *     PopCallPowerSettingCallback @ 0x1406A4CB0 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1406A5194 (PopLogDisabledSleepReason.c)
 *     IopDestroyDeviceNode @ 0x1406A58D4 (IopDestroyDeviceNode.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A5D5C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1406A7380 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 *     RawDispatch @ 0x1406BBD40 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x1406BBF48 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1406BC004 (RawCreate.c)
 *     RawClose @ 0x1406BC19C (RawClose.c)
 *     RawCleanup @ 0x1406BC21C (RawCleanup.c)
 *     PnpDeferNotification @ 0x1406C5954 (PnpDeferNotification.c)
 *     PfSnEndTrace @ 0x1406CDD38 (PfSnEndTrace.c)
 *     CmpWorkerEngineWorker @ 0x1406D4630 (CmpWorkerEngineWorker.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406DA8E0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406DADF0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406DAEC0 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406DB030 (FsRtlAddToTunnelCacheEx.c)
 *     CmpAddToDelayedClose @ 0x1406E3324 (CmpAddToDelayedClose.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406E9238 (EtwpReleaseProviderTraitsReference.c)
 *     PopDispatchNotificationsToList @ 0x1406F0938 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1406F0D30 (PopGetSettingValue.c)
 *     PiUEventHandleRegistration @ 0x1406F35B0 (PiUEventHandleRegistration.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406F9878 (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1406FD9DC (PfSnGetCompletedTrace.c)
 *     CmWorkerEngineQueueWorkItem @ 0x14070848C (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14070A3A8 (PiUEventFreeClientRegistrationContext.c)
 *     CmpDelayFreeRMWorker @ 0x14070D010 (CmpDelayFreeRMWorker.c)
 *     PiUEventHandleUnregisterClient @ 0x14070F14C (PiUEventHandleUnregisterClient.c)
 *     CmpAddStringToMapping @ 0x14070FA60 (CmpAddStringToMapping.c)
 *     PnpBusTypeGuidGet @ 0x1407103AC (PnpBusTypeGuidGet.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140711570 (PfSnTracingStateExWorkerRoutine.c)
 *     PoRegisterPowerSettingCallback @ 0x140711A90 (PoRegisterPowerSettingCallback.c)
 *     PnpRestartDeviceNode @ 0x14071F4B8 (PnpRestartDeviceNode.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14072C304 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpNotifyDeviceClassChange @ 0x14072CDB4 (PnpNotifyDeviceClassChange.c)
 *     PnpOrphanNotification @ 0x1407336D0 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073376C (PnpCleanupDeviceRegistryValues.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140734C88 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PnpBuildCmResourceLists @ 0x140739A7C (PnpBuildCmResourceLists.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14073A5FC (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x14073B0C4 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14073D0F0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopReleaseResources @ 0x14073D8FC (IopReleaseResources.c)
 *     IopLegacyResourceAllocation @ 0x14073D9A4 (IopLegacyResourceAllocation.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074FEB0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140754568 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpFreeDeviceInstancePath @ 0x140758E18 (PnpFreeDeviceInstancePath.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14075953C (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140759E74 (PiUEventNotifyDeviceInstanceChange.c)
 *     PnpBusTypeGuidGetIndex @ 0x14075A034 (PnpBusTypeGuidGetIndex.c)
 *     RawUserFsCtrl @ 0x14075B548 (RawUserFsCtrl.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075E2CC (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PoUnregisterPowerSettingCallback @ 0x14075FEA0 (PoUnregisterPowerSettingCallback.c)
 *     DbgkClearProcessDebugObject @ 0x140760860 (DbgkClearProcessDebugObject.c)
 *     PiUEventBroadcastEventWorker @ 0x140761710 (PiUEventBroadcastEventWorker.c)
 *     PopFreeSessionState @ 0x140765D80 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x140766B84 (PopQueryPowerSettingUlong.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 *     PoVolumeDevice @ 0x14076DA7C (PoVolumeDevice.c)
 *     PfTInitialize @ 0x1407AC9FC (PfTInitialize.c)
 *     PfTStart @ 0x1407AD6FC (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407B5D10 (KeRegisterProcessorChangeCallback.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407C1894 (WheaCrashDumpInitializationComplete.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140862200 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x140862354 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x1408625CC (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1408626F8 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x1408627E8 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140862918 (HalpIrtReleaseDeviceAperture.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x140868B44 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x1408812F8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140881740 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x140881A3C (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140882428 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140882720 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140882E60 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x1408831D0 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140883360 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088E278 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14089C9C8 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408A1790 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408A807C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408A82A8 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1408A8330 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408A83DC (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408A852C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1408A85EC (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1408A863C (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1408A8CAC (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408AFCD4 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x1408AFE78 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x1408B203C (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x1408E05E0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1408E06A0 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1408E3050 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x140949874 (ExpUpdateDebugInfo.c)
 *     WheapReportDeferredLiveDumps @ 0x14095AB4C (WheapReportDeferredLiveDumps.c)
 *     PopFlushVolumes @ 0x14099499C (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140994C50 (PopFlushVolumeWorker.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x1409B0A54 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x1409B0B04 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v5; // rcx
  int SessionId; // eax
  bool v7; // zf
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // di

  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_20;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  v1 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v1 )
  {
LABEL_20:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_140C4F7C8[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v1 + 40) = SessionId;
  *(_QWORD *)(v1 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
