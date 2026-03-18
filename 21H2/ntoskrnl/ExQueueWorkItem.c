/*
 * XREFs of ExQueueWorkItem @ 0x140345FC0
 * Callers:
 *     PspHardDereferenceSiloWorker @ 0x14020B10C (PspHardDereferenceSiloWorker.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     SepQueueWorkItem @ 0x140223644 (SepQueueWorkItem.c)
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     PpmCheckPeriodicStart @ 0x140224980 (PpmCheckPeriodicStart.c)
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     MiFreeCombineBlock @ 0x140239A98 (MiFreeCombineBlock.c)
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     PfSnTraceTimerRoutine @ 0x140244E70 (PfSnTraceTimerRoutine.c)
 *     KiIdealProcessorRebalancerTimerCallback @ 0x140247C90 (KiIdealProcessorRebalancerTimerCallback.c)
 *     HalpGenericPolledDpcRoutine @ 0x14024B730 (HalpGenericPolledDpcRoutine.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x14024C070 (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     ExpHpGCTimerCallback @ 0x1402524E0 (ExpHpGCTimerCallback.c)
 *     PnpUnlockDeviceActionQueue @ 0x140253DD4 (PnpUnlockDeviceActionQueue.c)
 *     IopLoadDriverImage @ 0x140255A78 (IopLoadDriverImage.c)
 *     PoNotifyMediaBuffering @ 0x140258980 (PoNotifyMediaBuffering.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14025B770 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     CcTelemetryPeriodicTimerDpc @ 0x14025B900 (CcTelemetryPeriodicTimerDpc.c)
 *     WdipTimeoutTimerRoutine @ 0x14025CB00 (WdipTimeoutTimerRoutine.c)
 *     PspRequestDeferredJobNotification @ 0x14025CFA4 (PspRequestDeferredJobNotification.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x14025E250 (CmpDelayFreeRMDpcRoutine.c)
 *     EtwpCoverageFlushTimerCallback @ 0x14025E460 (EtwpCoverageFlushTimerCallback.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14025E4A4 (CcQueueAsyncGetDeviceGuid.c)
 *     MiWakeBadPageSignalThread @ 0x1402676A8 (MiWakeBadPageSignalThread.c)
 *     MiCheckLogPinDriverAddresses @ 0x140267708 (MiCheckLogPinDriverAddresses.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402D5F7C (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402D6004 (PopDeepSleepClearDisengageReason.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     CmpArmDelayedCloseTimer @ 0x140345F84 (CmpArmDelayedCloseTimer.c)
 *     LZNT1DecompressChunkNewThread @ 0x14035D158 (LZNT1DecompressChunkNewThread.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14035F344 (SmKmStoreDeleteWhenEmpty.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PfSnGetFileInformation @ 0x1403661D0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x14036669C (PfSnTraceGetLogEntry.c)
 *     PopUserPresentSet @ 0x140368ED4 (PopUserPresentSet.c)
 *     PopBatteryQueueWork @ 0x14036972C (PopBatteryQueueWork.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     MmSetAccessLogging @ 0x140376830 (MmSetAccessLogging.c)
 *     PfSnTracingStateDpcRoutine @ 0x140377360 (PfSnTracingStateDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x140378CF0 (ExpCenturyDpcRoutine.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140389CB0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     PopWakeInfoDereference @ 0x140397184 (PopWakeInfoDereference.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x140398B2C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PfpPowerActionDpcRoutine @ 0x140398E60 (PfpPowerActionDpcRoutine.c)
 *     PopSleepstudyScenarioStopTimerCallback @ 0x140399400 (PopSleepstudyScenarioStopTimerCallback.c)
 *     PopWatchdogDpc @ 0x1403A1210 (PopWatchdogDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403A13C0 (ExpTimeRefreshDpcRoutine.c)
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     SshpAlpcOpenGracePeriodTimerCallback @ 0x1403B6D70 (SshpAlpcOpenGracePeriodTimerCallback.c)
 *     EmpQueueRuleUpdateState @ 0x1403C45F0 (EmpQueueRuleUpdateState.c)
 *     CmpWorkItemQueueWork @ 0x1403C7B20 (CmpWorkItemQueueWork.c)
 *     KeBalanceSetManager @ 0x1403C81D0 (KeBalanceSetManager.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403C89A0 (MiFreeUnusedPfnPagesDpc.c)
 *     SepAdtDetermineInsertQueue @ 0x1403DA1F0 (SepAdtDetermineInsertQueue.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403DC824 (CcSetupWatchForRegistryChanges.c)
 *     PopThermalIrpComplete @ 0x1403DD0E0 (PopThermalIrpComplete.c)
 *     ExpDebuggerDpcRoutine @ 0x1403DF6E0 (ExpDebuggerDpcRoutine.c)
 *     CcBcbProfiler @ 0x1403EAC70 (CcBcbProfiler.c)
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     HalpCmcDeferredRoutine @ 0x1405062C0 (HalpCmcDeferredRoutine.c)
 *     HalpQueueMapBufferWorker @ 0x14050905C (HalpQueueMapBufferWorker.c)
 *     IoFreeAdapterChannelV3 @ 0x1405127BC (IoFreeAdapterChannelV3.c)
 *     HalpBlkWdTimerRoutine @ 0x14052D920 (HalpBlkWdTimerRoutine.c)
 *     CmpFreezeThawDpcRoutine @ 0x14053F110 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x14053F140 (CmpLazyCommitDpcRoutine.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14054B43C (HvlpInitializeSvmIommuSupport.c)
 *     HvlpIommuPrqDpcRoutine @ 0x14054B540 (HvlpIommuPrqDpcRoutine.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x140558640 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1405587A0 (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x14055F0C0 (IopErrorLogDpc.c)
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x1405648E0 (IopDeviceEjectComplete.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405697EC (KiLogUserCetSetContextIpValidationFailure.c)
 *     KiScheduleBugcheckRecoveryWorkItem @ 0x140579810 (KiScheduleBugcheckRecoveryWorkItem.c)
 *     KiAltContextWorkQueueAddItem @ 0x14057C248 (KiAltContextWorkQueueAddItem.c)
 *     KiAltReturnDpcRoutine @ 0x14057C2D0 (KiAltReturnDpcRoutine.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 *     MiRemovePendingBadPageNode @ 0x14058E7F4 (MiRemovePendingBadPageNode.c)
 *     MiWakeFileOnlyReaper @ 0x1405A1CC0 (MiWakeFileOnlyReaper.c)
 *     MiPageNotZero @ 0x1405ADB14 (MiPageNotZero.c)
 *     MiNoPagesLastChance @ 0x1405B379C (MiNoPagesLastChance.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1405C5D80 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C5DC8 (ObpDeferPushRefDerefInfo.c)
 *     PfSnPowerBoostDpc @ 0x1405C6530 (PfSnPowerBoostDpc.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1405CFC70 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopUserShutdownDelayDpcCallback @ 0x1405D02A0 (PopUserShutdownDelayDpcCallback.c)
 *     PopPowerAggregatorSessionSwitchTimerCallback @ 0x1405D4950 (PopPowerAggregatorSessionSwitchTimerCallback.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1405D87D0 (PpmWmiIdleAccountingProcedure.c)
 *     PopFanIrpComplete @ 0x1405D8F20 (PopFanIrpComplete.c)
 *     PpmHeteroHgsUpdateDpcRoutine @ 0x1405D90D0 (PpmHeteroHgsUpdateDpcRoutine.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405DC1D0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     TtmpScheduledEvaluationDpc @ 0x1405DFE20 (TtmpScheduledEvaluationDpc.c)
 *     TtmpTerminalInactivityTimerDpcRoutine @ 0x1405DFE60 (TtmpTerminalInactivityTimerDpcRoutine.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     SepAuditFailedRaisedIrql @ 0x1405F5B3C (SepAuditFailedRaisedIrql.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405F7060 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405FD08C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     CarDoLiveDump @ 0x1406052FC (CarDoLiveDump.c)
 *     EtwpContainerStateWnfCallback @ 0x14062CA70 (EtwpContainerStateWnfCallback.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14062F5B0 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpCoverageResetTimerCallback @ 0x140631250 (EtwpCoverageResetTimerCallback.c)
 *     EtwpCompressionDpc @ 0x140634F40 (EtwpCompressionDpc.c)
 *     ExpNextYearDpcRoutine @ 0x140639090 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1406391E0 (ExpTimeZoneDpcRoutine.c)
 *     ExpTrackRaiseLimitNotification @ 0x14063BD64 (ExpTrackRaiseLimitNotification.c)
 *     ExpHotAddProcessorToWorkers @ 0x14063F5BC (ExpHotAddProcessorToWorkers.c)
 *     ExpSvmDpcRoutine @ 0x1406416A0 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140645B90 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140645DC0 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheaFlushETWEventsDpcRoutine @ 0x140645E40 (WheaFlushETWEventsDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140646270 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x1406462D0 (WheapWorkQueueDpcRoutine.c)
 *     WdtpTimerCallback @ 0x14064FA50 (WdtpTimerCallback.c)
 *     CmpClaimGlobalQuota @ 0x14068B144 (CmpClaimGlobalQuota.c)
 *     CmpCanGrowHive @ 0x14068D244 (CmpCanGrowHive.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14069D1D8 (SepInformFileSystemsOfDeletedLogon.c)
 *     NtNotifyChangeSession @ 0x1406A91F0 (NtNotifyChangeSession.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1406B86D0 (SepScheduleImageVerificationCallbacks.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1406C7D58 (PiDqObjectManagerHandleObjectEvent.c)
 *     PsSetProcessWin32Process @ 0x1406C7F10 (PsSetProcessWin32Process.c)
 *     WmipQueueRegWork @ 0x1406C8478 (WmipQueueRegWork.c)
 *     PspScheduleEnforcementWorker @ 0x1406CD41C (PspScheduleEnforcementWorker.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406D7CC4 (ExpWnfStartKernelDispatcher.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1406DF01C (PiUEventQueueBroadcastEventEntry.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406E30E0 (EtwpCrimsonProvEnableCallback.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1406E60B0 (PiProcessNewDeviceNodeAsync.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140748E80 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiUEventNotifyUserMode @ 0x14078B2D4 (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     PiDrvDbLoadNode @ 0x1407D4E34 (PiDrvDbLoadNode.c)
 *     PfSnPrefetchSections @ 0x1407D7100 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1407D7544 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x1407D7AE0 (PfSnPrefetchScenario.c)
 *     PfSnEndProcessTrace @ 0x1407D936C (PfSnEndProcessTrace.c)
 *     PopEsWorkItemSchedule @ 0x1407EEF9C (PopEsWorkItemSchedule.c)
 *     SmStoreCompressionStop @ 0x1407F575C (SmStoreCompressionStop.c)
 *     PopFxNotifySxTransitionState @ 0x1407FF67C (PopFxNotifySxTransitionState.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140809508 (PopPowerAggregatorScheduleWorker.c)
 *     PnpChainDereferenceComplete @ 0x14080EA40 (PnpChainDereferenceComplete.c)
 *     PerfDiagpRequestState @ 0x14081C88C (PerfDiagpRequestState.c)
 *     PopDiagTraceControlCallback @ 0x14081CBF0 (PopDiagTraceControlCallback.c)
 *     PnpBootPhaseComplete @ 0x140827E8C (PnpBootPhaseComplete.c)
 *     PopThermalZoneAdd @ 0x1408292C0 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
 *     WdipSemStartTimeoutCheck @ 0x14083F5FC (WdipSemStartTimeoutCheck.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     WmipQueueLegacyEtwWork @ 0x140857840 (WmipQueueLegacyEtwWork.c)
 *     CmpForceFlushForCoalescing @ 0x140881450 (CmpForceFlushForCoalescing.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x14091191C (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x14091D63C (CmpDiskFullWarning.c)
 *     DbgkQueueUserExceptionReport @ 0x14092972C (DbgkQueueUserExceptionReport.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14092BA58 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x14092CF10 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x140935044 (IopSendMessageToTrackService.c)
 *     IoReplacePartitionUnit @ 0x140943170 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14094A630 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x14094F804 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x1409585A4 (IopEjectDevice.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14098CEF0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopBatteryAdd @ 0x140994860 (PopBatteryAdd.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140995CC0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopFanAdd @ 0x140999060 (PopFanAdd.c)
 *     PopCadHpmiPnpNotification @ 0x14099D180 (PopCadHpmiPnpNotification.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4D70 (TtmiScheduleSessionWorker.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ABBA8 (PspCompleteServerSiloShutdown.c)
 *     PspQueueDeferredWorkAndWait @ 0x1409AC2BC (PspQueueDeferredWorkAndWait.c)
 *     PsSetVmProcessorHostProcess @ 0x1409AF410 (PsSetVmProcessorHostProcess.c)
 *     PspRundownProcess @ 0x1409B18CC (PspRundownProcess.c)
 *     RtlpCtQueueWorkItem @ 0x1409BEB64 (RtlpCtQueueWorkItem.c)
 *     VmPrefetchVirtualAddresses @ 0x1409D8CF8 (VmPrefetchVirtualAddresses.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409EC2D0 (PeriodicCaptureStateTimerCallback.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A01E60 (ExpNodeHotAddProcessorWorker.c)
 *     WheaAttemptClearPoison @ 0x140A08BE0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PnprInitiateReplaceOperation @ 0x140A67C74 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x140A6A1B0 (MiZeroAllPageFiles.c)
 *     KdpTimeSlipDpcRoutine @ 0x140A6F0F0 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140A81078 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x140A9B888 (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x140AABB9C (LogFwReport.c)
 *     HalpAcpiDetectPiix4 @ 0x140AF8A58 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140AF8B84 (HalpAcpiPopulateTableCache.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     WmipInitializeRegistration @ 0x140B231D8 (WmipInitializeRegistration.c)
 *     FsRtlInitializeSmssEvent @ 0x140B25D38 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     ExpValidateWorkItem @ 0x140346210 (ExpValidateWorkItem.c)
 *     ExpNewThreadNecessary @ 0x140346260 (ExpNewThreadNecessary.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rdi
  int v4; // r13d
  char v5; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned int NextNode; // eax
  int v10; // ebp
  unsigned __int16 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = QueueType;
  ExpValidateWorkItem((ULONG_PTR)WorkItem);
  if ( (unsigned int)v3 >= 7 )
    v4 = v3 - 32;
  else
    v4 = ExpBuiltinPriorities[v3];
  v5 = 0;
  LODWORD(SchedulerAssist) = 0;
  v23 = 0;
  v7 = *((_QWORD *)PspSystemPartition + 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  NextNode = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v10 = NextNode;
  if ( NextNode < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)NextNode];
      if ( v11 != (unsigned __int16 *)((char *)&KiNodeInit + 280 * (unsigned __int16)NextNode) )
      {
        if ( v11 )
        {
          v12 = 8LL * *v11;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + v12) + 264LL) >= 2uLL )
          {
            v13 = **(_QWORD **)(v12 + *(_QWORD *)(v7 + 8));
            if ( (v13 & 1) == 0 )
            {
              if ( v13 )
              {
                v14 = *(_DWORD *)(v13 + 712) & 0x3FFF;
                if ( (*(_DWORD *)(v13 + 712) & 0x4000) != 0 )
                  --v14;
                if ( v14 >= (2 * *(_DWORD *)(v13 + 716)) >> 1 )
                  break;
              }
            }
          }
        }
      }
      NextNode = MmGetNextNode(v10, &v23);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_18;
    }
    v15 = **(_QWORD **)(*(_QWORD *)(v7 + 8) + 8LL * *v11);
    if ( (v15 & 1) != 0 )
      v15 = 0LL;
    KeInsertPriQueue(v15, (_DWORD)WorkItem, v4, (_DWORD)SchedulerAssist, 0);
    if ( (unsigned __int8)ExpNewThreadNecessary(v15, *(unsigned int *)(v15 + 720), v16, v17) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL * *v11) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_18:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
