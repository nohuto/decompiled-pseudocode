/*
 * XREFs of ExAcquireFastMutex @ 0x140354DD0
 * Callers:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 *     FsRtlAddLargeMcbEntry @ 0x140219B30 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x140219BA0 (FsRtlTruncateLargeMcb.c)
 *     FsRtlInsertPerStreamContext @ 0x140225430 (FsRtlInsertPerStreamContext.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14022BD50 (FsRtlpCancelOplockRHIrp.c)
 *     CcGetFlushedValidData @ 0x140237F40 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x14024ACC0 (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14024DAC8 (FsRtlPrivateInitializeFileLock.c)
 *     CmpWaitForLateUnloadWorker @ 0x14026CE98 (CmpWaitForLateUnloadWorker.c)
 *     PopGetPowerSettingValue @ 0x140270104 (PopGetPowerSettingValue.c)
 *     RawCompletionRoutine @ 0x1402A55A0 (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x1402A592C (RawInitiateDeleteVolume.c)
 *     PoRunDownDeviceObject @ 0x1402A5F48 (PoRunDownDeviceObject.c)
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcDeleteMbcb @ 0x1402FD68C (CcDeleteMbcb.c)
 *     CcGetDirtyPagesHelper @ 0x1402FEF50 (CcGetDirtyPagesHelper.c)
 *     CcAcquireByteRangeForWrite @ 0x14031AC90 (CcAcquireByteRangeForWrite.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14031BAF4 (CcAcquireBcbLockAndVacbLock.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140354CF0 (FsRtlLookupPerStreamContextInternal.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CDF0 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037F780 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunNormalIrpWorkers @ 0x14038427C (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x14038C530 (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A5320 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x1403AE554 (PopInitilizeAcDcSettings.c)
 *     HalpAcpiGetFacsMapping @ 0x1403BA938 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTables @ 0x1403BB62C (HalpAcpiGetAllTables.c)
 *     PopIrpWorkerControl @ 0x1403CC120 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1404EA8C0 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1404EAB50 (CcGetLsnForFileObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1404EF160 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1404EF250 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1404EF300 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404EF380 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1404EF500 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1404EF560 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1404EF600 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1404EF7C0 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404F0678 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404F0758 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0C70 (FsRtlpWaitOnIrp.c)
 *     FsRtlRemovePerStreamContext @ 0x1404F1480 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x14050DD9C (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x140524974 (KiOpPatchCode.c)
 *     PopAcquireIrpWorkerLock @ 0x140577E10 (PopAcquireIrpWorkerLock.c)
 *     RawVerifyVolume @ 0x140585074 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x14058EE70 (RtlpTraceDatabaseAcquireLock.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1405E06B0 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpRemoveFromDelayedClose @ 0x1405E0D30 (CmpRemoveFromDelayedClose.c)
 *     CmpDelayFreeCmRm @ 0x1405E0FFC (CmpDelayFreeCmRm.c)
 *     CmpWorkerEngineWorker @ 0x1405E29D0 (CmpWorkerEngineWorker.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1405E7DB0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1405E7E80 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405E7FF0 (FsRtlAddToTunnelCacheEx.c)
 *     CmpAddToDelayedClose @ 0x1405F2B64 (CmpAddToDelayedClose.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F8C48 (EtwpReleaseProviderTraitsReference.c)
 *     PopGetSettingValue @ 0x14060048C (PopGetSettingValue.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140607154 (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x14060DBEC (PfSnGetCompletedTrace.c)
 *     IopDestroyDeviceNode @ 0x1406120F4 (IopDestroyDeviceNode.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140619274 (CmWorkerEngineQueueWorkItem.c)
 *     CmpDelayFreeRMWorker @ 0x14061E450 (CmpDelayFreeRMWorker.c)
 *     CmpAddStringToMapping @ 0x140621174 (CmpAddStringToMapping.c)
 *     PnpBusTypeGuidGet @ 0x1406214AC (PnpBusTypeGuidGet.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x140622930 (PfSnTracingStateExWorkerRoutine.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1406236A8 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     EtwpSetProviderTraitsCommon @ 0x14063804C (EtwpSetProviderTraitsCommon.c)
 *     CmpGetMappingHiveForString @ 0x140667A38 (CmpGetMappingHiveForString.c)
 *     PopGetSettingNotificationName @ 0x14066CF64 (PopGetSettingNotificationName.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14066D620 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
 *     PopLogDisabledSleepReason @ 0x14066EACC (PopLogDisabledSleepReason.c)
 *     PopCallPowerSettingCallback @ 0x14066F158 (PopCallPowerSettingCallback.c)
 *     PoRegisterPowerSettingCallback @ 0x14066F440 (PoRegisterPowerSettingCallback.c)
 *     PopDispatchNotificationsToList @ 0x14066F714 (PopDispatchNotificationsToList.c)
 *     PopDiagTraceControlCallback @ 0x140671060 (PopDiagTraceControlCallback.c)
 *     PnpDeferNotification @ 0x140673554 (PnpDeferNotification.c)
 *     PfGetCompletedTrace @ 0x14067C10C (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x14067C39C (PfTTraceListAdd.c)
 *     DbgkCopyProcessDebugPort @ 0x14069744C (DbgkCopyProcessDebugPort.c)
 *     PfSnEndTrace @ 0x1406A6A68 (PfSnEndTrace.c)
 *     PiUEventHandleUnregisterClient @ 0x1406B8780 (PiUEventHandleUnregisterClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406B8888 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x1406B8FF8 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x1406B9390 (PiUEventHandleRegistration.c)
 *     RawDispatch @ 0x1406C8830 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x1406C8A38 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1406C8AF4 (RawCreate.c)
 *     RawClose @ 0x1406C8C8C (RawClose.c)
 *     RawCleanup @ 0x1406C8D0C (RawCleanup.c)
 *     RawMountVolume @ 0x1406C90C8 (RawMountVolume.c)
 *     RawScanDeletedList @ 0x1406CA050 (RawScanDeletedList.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406CA160 (FsRtlTeardownPerStreamContexts.c)
 *     CmpDelayCloseWorker @ 0x1406DBAF0 (CmpDelayCloseWorker.c)
 *     PiUEventProcessEventWorker @ 0x1406FD520 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x1406FD6BC (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x1406FE15C (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1406FE240 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1406FE2DC (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1406FE568 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpInsertEventInQueue @ 0x1406FE94C (PnpInsertEventInQueue.c)
 *     PnpProcessDeferredRegistrations @ 0x1406FEACC (PnpProcessDeferredRegistrations.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14071ED54 (FsRtlAcquireToCreateMappedSection.c)
 *     PnpRestartDeviceNode @ 0x1407319F8 (PnpRestartDeviceNode.c)
 *     PnpFreeDeviceInstancePath @ 0x140735E70 (PnpFreeDeviceInstancePath.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140736550 (PnpCleanupDeviceRegistryValues.c)
 *     PnpOrphanNotification @ 0x1407365AC (PnpOrphanNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D798 (PnpNotifyDeviceClassChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1407499F8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B72C (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpBuildCmResourceLists @ 0x14074F70C (PnpBuildCmResourceLists.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x140750D54 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752D80 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopReleaseResources @ 0x14075358C (IopReleaseResources.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407632E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140766958 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14076C4AC (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14076CB5C (PiUEventNotifyDeviceInstanceChange.c)
 *     PnpBusTypeGuidGetIndex @ 0x14076CD1C (PnpBusTypeGuidGetIndex.c)
 *     RawUserFsCtrl @ 0x14076E0B8 (RawUserFsCtrl.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140770E1C (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772840 (PoUnregisterPowerSettingCallback.c)
 *     DbgkClearProcessDebugObject @ 0x140773150 (DbgkClearProcessDebugObject.c)
 *     PiUEventBroadcastEventWorker @ 0x140773DB0 (PiUEventBroadcastEventWorker.c)
 *     ExSwapinWorkerThreads @ 0x140777514 (ExSwapinWorkerThreads.c)
 *     PopFreeSessionState @ 0x140778F20 (PopFreeSessionState.c)
 *     PopQueryPowerSettingUlong @ 0x140779D24 (PopQueryPowerSettingUlong.c)
 *     PoVolumeDevice @ 0x14078044C (PoVolumeDevice.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     PfTStart @ 0x1407BFF5C (PfTStart.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C8B20 (KeRegisterProcessorChangeCallback.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407D4634 (WheaCrashDumpInitializationComplete.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140865990 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x140865AE4 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x140865D5C (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x140865E88 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x140865F78 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1408660A8 (HalpIrtReleaseDeviceAperture.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x14086C2F4 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x140884548 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140884990 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x140884C8C (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140885678 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140885970 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1408860B0 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140886420 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x1408865B0 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408914F8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14089FC28 (PnpNotifyHwProfileChange.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408A49F0 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408AB2DC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408AB508 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1408AB590 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1408AB63C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408AB78C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1408AB84C (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1408AB89C (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1408ABF0C (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408B2F34 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x1408B30D8 (PipKsrNotifyDrivers.c)
 *     PiUpdateDeviceResourceLists @ 0x1408B529C (PiUpdateDeviceResourceLists.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x1408E3D80 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1408E3E40 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1408E67F0 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x14094CFD4 (ExpUpdateDebugInfo.c)
 *     WheapReportDeferredLiveDumps @ 0x14095E36C (WheapReportDeferredLiveDumps.c)
 *     PopFlushVolumes @ 0x140998CEC (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140998FA0 (PopFlushVolumeWorker.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x1409B47F4 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x1409B48A4 (WheapSaveRecordForLiveDump.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
    && byte_140C4FA08[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  if ( v7 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v1);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
