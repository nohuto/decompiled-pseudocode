/*
 * XREFs of PoInitSystem @ 0x140A41DE0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14033D9E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x14037A4C0 (ExInitializeNPagedLookasideList.c)
 *     PopBatteryQueueWork @ 0x14039A64C (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x1403A8724 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x1403A87E0 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403C6610 (PpmInitIllegalThrottleLogging.c)
 *     HalGetInterruptTargetInformation @ 0x1403C8EC0 (HalGetInterruptTargetInformation.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C91D0 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CD264 (PpmHeteroInitializeHgsSupport.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x14056F0C4 (PopDiagTraceAbnormalReset.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CD360 (PopUpdateUpgradeInProgress.c)
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x14077AE28 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x14078A218 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14078ABF8 (PopResetActionDefaults.c)
 *     PpmIdleRegisterDefaultStates @ 0x14078C138 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x14078C268 (PopInitializeWorkItem.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14078FB34 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopResetCurrentPolicies @ 0x140793178 (PopResetCurrentPolicies.c)
 *     EmpProviderRegister @ 0x140793AF0 (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407B5FAC (PopInitializeHeteroProcessors.c)
 *     PopIdleWakeInitialize @ 0x1407C2C78 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x1407C33EC (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C4540 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407CC784 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x1407CE2E0 (PopDefaultPolicy.c)
 *     TtmInit @ 0x1407CE5E8 (TtmInit.c)
 *     PopSetupMixedRealitytNotification @ 0x1407CFDBC (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1407CFF5C (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D0584 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D0610 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D0AFC (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D0B38 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D0B74 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D0BB0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D0BEC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D0C28 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D0C64 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x1407D0FF0 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408ED9C8 (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1409930E0 (EmClientQueryRuleState.c)
 *     HalReportResourceUsage @ 0x140A3F2D0 (HalReportResourceUsage.c)
 *     PopNetInitialize @ 0x140A41C60 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A429C4 (PopEsInit.c)
 *     SshInitialize @ 0x140A42A1C (SshInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140A42AE8 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A42B1C (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A42CC4 (PopDeepSleepInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140A42D10 (PopPowerAggregatorInitialize.c)
 *     PopCoalescingInitialize @ 0x140A4576C (PopCoalescingInitialize.c)
 *     PopProcessBootstat @ 0x140A4582C (PopProcessBootstat.c)
 *     PopDiagInitialize @ 0x140A48E0C (PopDiagInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A6E1D4 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x140A6E8E4 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x140A6E9CC (PpmInitHeteroPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6F724 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x140A6FCE0 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A6FD7C (PpmPerfInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140A706FC (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x140A70760 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140A70A24 (PopEtInit.c)
 *     PopRecorderInit @ 0x140A70C60 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A7191C (PopInitDripsWakeAccounting.c)
 *     PopBatteryInitPhaseTwo @ 0x140A72684 (PopBatteryInitPhaseTwo.c)
 *     PopUmpoInitializeChannel @ 0x140A72EFC (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A73348 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x140A73554 (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A73B30 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A73CC0 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A7417C (PopInitializeHighPerfPowerRequest.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A742FC (PopCreateTimebrokerServiceSid.c)
 *     PopInitializePowerSettings @ 0x140A7538C (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A75668 (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x140A75AC4 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A75EC8 (PpmInitHeteroEngine.c)
 *     PopWatchdogInit @ 0x140A75F88 (PopWatchdogInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A7603C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x140A761A4 (PopInitVideoWnfState.c)
 *     PopInitializeSystemIdleDetection @ 0x140A76238 (PopInitializeSystemIdleDetection.c)
 *     PopWakeSourceInit @ 0x140A764DC (PopWakeSourceInit.c)
 *     PopInitShutdownList @ 0x140A76908 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A76AE8 (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A76DCC (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A76EC4 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A76F88 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A76FFC (PopCreateIdlePhaseWatchdog.c)
 *     PopSetupKsrCallbacks @ 0x140A77070 (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A965FC (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A9665C (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A966E4 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  signed __int64 v13; // rdx
  int v14; // ebx
  unsigned __int8 v15; // di
  int v16; // edx
  __int64 v17; // rdx
  unsigned __int8 v18; // zf
  int Buffer; // [rsp+40h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+B0h] [rbp+40h] BYREF
  int v25; // [rsp+C0h] [rbp+50h] BYREF
  int v26; // [rsp+C8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopCsResiliencyStatsLock = 0LL;
    PopPowerAggregatorInitialize(0LL);
    qword_140C23A78 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140C23A88 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    qword_140C20E78 = 0LL;
    PopPowerEventLock = 0LL;
    qword_140C20B58 = 0LL;
    PopSystemIdleLock = 0LL;
    qword_140C243D8 = 0LL;
    PopCoalRegistrationListLock = 0LL;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0x100uLL, 0x72496F50u, 0);
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
    BootStatDataCache = 0LL;
    BootStatDisableFlush = 0;
    PopBsdSkipLogging = 0;
    qword_140C25058 = 0LL;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v6);
    PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v7);
    PopWdiCurrentScenarioInstanceId = 0LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v8);
    PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v9);
    qword_140C21618 = 0LL;
    qword_140C24F48 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    PopInputSuppressionLock = 0LL;
    qword_140C24F68 = 0LL;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport();
    PpmCheckCurrentPipelineId = 6;
    qword_140C20EF8 = (__int64)PpmCheckRun;
    LODWORD(PpmCheckDpc) = 787;
    qword_140C20F00 = 0LL;
    qword_140C20F18 = 0LL;
    qword_140C20EF0 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_140C20EB8 = (__int64)PpmCheckPeriodicStart;
    qword_140C20EC0 = 0LL;
    qword_140C20ED8 = 0LL;
    qword_140C20EB0 = 0LL;
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    qword_140C23AF8 = (__int64)&qword_140C23AF0;
    qword_140C23AF0 = (__int64)&qword_140C23AF0;
    qword_140C23AB8 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140C23AC8 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140C23B08 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140C24AC8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    qword_140C23AA8 = 0LL;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140C4FF08 = 0LL;
    word_140C23AE8 = 1;
    byte_140C23AEA = 6;
    dword_140C23AEC = 1;
    PopWorkerLock = 0LL;
    LOWORD(PopTransitionLock.Header.Lock) = 1;
    PopTransitionLock.Header.Size = 6;
    PopTransitionLock.Header.SignalState = 1;
    PopDisableSleepMutex.Count = 1;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v10 = PopIdleScanInterval;
    qword_140C23B38 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v10 = 30;
        PopIdleScanInterval = 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v10 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v10 + 59) / v10;
      PopBackgroundTaskIgnoreCount = (v10 + 179) / v10;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.List.Flink = 0LL;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Count = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_140C23DB8 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140C23DC8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140C23DD8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140C23DE8 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140C23C38 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140C23C64;
    PopDefaultPolicy(dword_140C23C64);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140C23E10 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140C4FF00 = -1;
    dword_140C4FF04 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    qword_140C22DE8 = 0LL;
    PopPolicyDeviceLock = 0LL;
    PopBatteryInit();
    qword_140C22DF8 = 0LL;
    PopFanLock = 0LL;
    PopThermalInit();
    qword_140C23138 = 0LL;
    qword_140C23148 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    qword_140C23E88 = (__int64)PopShutdownHandler;
    PopCoolingExtensionLock = 0LL;
    dword_140C23E80 = 4;
    byte_140C23E84 = 0;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140C20A18 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_140CF43D0 = (__int64)&qword_140CF43C8;
    qword_140CF43C8 = (__int64)&qword_140CF43C8;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140C24978 = (__int64)&qword_140C24970;
    qword_140C24970 = (__int64)&qword_140C24970;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    PpmWmiIdleAccountingTimer.Period = 0;
    PpmWmiIdleAccountingTimer.Processor = 0;
    PpmWmiIdleAccountingDpc = 275;
    qword_140C20A20 = 0LL;
    qword_140C20A38 = 0LL;
    qword_140C20A10 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_140CF43D8 = 0LL;
    dword_140CF43FC = 0;
    word_140CF43F8 = 0;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140C24968 = 1;
    byte_140C2496A = 6;
    dword_140C2496C = 1;
    PoFxInitPowerManagement();
    dword_140C23D6C = 0;
    qword_140C23D70 = 100LL;
    qword_140C23D78 = 100LL;
    dword_140C23D80 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v11 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v11 + 3408);
    if ( *(_BYTE *)(v11 + 3408) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v11 + 3416);
      xmmword_140C54200 = *(_OWORD *)(v11 + 3424);
      xmmword_140C54210 = *(_OWORD *)(v11 + 3440);
    }
    TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopInitializeDirectedDrips(0LL);
    SshInitialize(0LL);
  }
  if ( a1 != 1 )
    goto LABEL_3;
  PopPowerAggregatorInitialize(1LL);
  if ( HviIsAnyHypervisorPresent() )
  {
    PpmExitLatencyCheckEnabled = 0;
    PpmExitLatencySamplingPercentage = 0;
  }
  if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 4 )
    PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
  PopUmpoInitializeChannel();
  PopUmpoInitializeMonitorChannel();
  PopPdcDeviceListLock = 0LL;
  PopEsInit(1LL);
  PopInitializePowerSettingCallbacks();
  TimebrokerServiceSid = PopEtInit();
  if ( TimebrokerServiceSid >= 0 )
  {
    TimebrokerServiceSid = PopPowerRequestInit();
    if ( TimebrokerServiceSid >= 0 )
    {
      TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopCheckPowerSourceAfterRtcWakeInitialize();
        PopWatchdogInit();
        PopInitializePowerButtonHold(1LL);
        TimebrokerServiceSid = PpmInitHeteroEngine();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitDripsWakeAccounting();
          TimebrokerServiceSid = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 2u, &v21);
          if ( TimebrokerServiceSid >= 0 )
          {
            v24 = 1;
            PopErrataDisablePrimaryDeviceFastResume = 0;
            EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v24);
            if ( v24 != 2 )
            {
LABEL_5:
              TimebrokerServiceSid = 0;
              return TimebrokerServiceSid >= 0;
            }
            PopErrataDisablePrimaryDeviceFastResume = 1;
LABEL_3:
            if ( a1 == 2 )
            {
              PoFxRegisterDebugger();
              HalReportResourceUsage(1);
              PopBatteryInitPhaseTwo();
              TimebrokerServiceSid = EtwRegister(
                                       &PPM_ETW_PROVIDER,
                                       (PETWENABLECALLBACK)PpmEventTraceControlCallback,
                                       0LL,
                                       &PpmEtwHandle);
              if ( TimebrokerServiceSid < 0 )
                return TimebrokerServiceSid >= 0;
              PpmEtwRegistered = 1;
              KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
              PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
              LOBYTE(v12) = 1;
              PopInitializeHeteroProcessors(v12, v13);
              PpmReleaseLock(&PpmPerfPolicyLock);
              if ( PpmPerfArtificialDomainSetting != -1 )
                PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
              PpmIdleRegisterDefaultStates();
              PpmCheckInitProcessors(0);
              PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
              PoFxSendSystemLatencyUpdate();
              PpmReleaseLock(&PopFxSystemLatencyLock);
              PopPdcCsCheckSystemVolumeDevice();
              PopUpdateBackgroundCoolingStatus(0);
              PopInitVideoWnfState();
            }
            if ( a1 != 3 )
              goto LABEL_5;
            TimebrokerServiceSid = PopDiagInitialize();
            if ( TimebrokerServiceSid < 0 )
              return TimebrokerServiceSid >= 0;
            SshInitialize(3LL);
            PopTriggerDiagTraceAoAcCapability();
            PopFanReportBootStartDevices();
            v14 = 2;
            v15 = 1;
            if ( PopSkipTickPolicy )
            {
              if ( PopSkipTickPolicy == 1 )
              {
                v15 = 0;
                if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v22) >= 0 )
                {
                  PopApicMode = HIDWORD(v23);
                  if ( PopCheckSkipTick() )
                  {
                    PoSkipTickMode = 0;
LABEL_37:
                    PpmInitIllegalThrottleLogging();
                    PopProcessBootstat(a2);
                    if ( (unsigned __int8)off_140C008D0[0]()
                      || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
                    {
                      PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
                    }
                    PopIdleWakeInitialize();
                    PopAcquirePolicyLock();
                    PopUpdateUpgradeInProgress(0LL);
                    if ( InitIsWinPEMode )
                      PopLogSleepDisabled(16, 15, 0LL, 0LL);
                    if ( byte_140C23EF4 )
                      PopLogSleepDisabled(17, 7, 0LL, 0LL);
                    v16 = 0;
                    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2616LL) & 8) != 0 )
                    {
                      PopSecureLaunched = 1;
                      v16 = 4;
                    }
                    if ( (HvlpFlags & 2) == 0 && VslVsmEnabled )
                      v16 = 31;
                    if ( v16 )
                      PopLogSleepDisabled(21, v16, 0LL, 0LL);
                    PopDeepSleepInitialize(3LL);
                    PopInitializePowerPolicySimulate();
                    if ( (PopSimulate & 1) != 0 )
                    {
                      byte_140C23EFE = 1;
                      *(_QWORD *)&xmmword_140C23F00 = 0x19000000064LL;
                      *((_QWORD *)&xmmword_140C23F00 + 1) = 0xFFFF0000000ALL;
                      LODWORD(qword_140C23F20) = 4;
                      dword_140C23F28 = 2;
                    }
                    if ( (PopSimulate & 2) != 0 )
                    {
                      LODWORD(PopCapabilities) = 16843009;
                      WORD2(PopCapabilities) = 257;
                      BYTE6(PopCapabilities) = 1;
                      unk_140C23EF1 = 257;
                    }
                    PopResetCurrentPolicies();
                    PopInitializeAdpm();
                    PopEsInit(3LL);
                    PopInitilizeAcDcSettings();
                    Buffer = 1;
                    PopUpdateConsoleDisplayState(1u);
                    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
                    PopNetInitialize(3);
                    PopReleasePolicyLock();
                    PopIdleInitAoAcDozeS4Timer();
                    PopCreateIdlePhaseWatchdog();
                    PopInitializeSystemIdleDetection();
                    PopInitializePreSleepNotifications();
                    v17 = *(_QWORD *)(a2 + 240);
                    PopHiberLoaderScratchPages = *(_DWORD *)(v17 + 272);
                    PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v17 + 132) & 0x10000000) != 0;
                    PopSetupHighPerfPowerRequest();
                    PpmEnableWmiInterface();
                    PopAcquirePolicyLock();
                    PopCoalescingInitialize();
                    PopReleasePolicyLock();
                    PopInitializeDirectedDrips(3LL);
                    ExInitializeResourceLite(&PopDripsWatchdogContext);
                    if ( PopPlatformAoAc )
                    {
                      if ( (int)PopDripsWatchdogInitializeActions() < 0
                        || (int)PopDripsWatchdogInitializeCallbackTimer() < 0
                        || (int)PopDripsWatchdogInitializeDiagnosticTimer() < 0 )
                      {
                        goto LABEL_56;
                      }
                      dword_140C212A8 |= 2u;
                    }
                    dword_140C212A8 |= 1u;
LABEL_56:
                    PopSetupAudioEventNotification();
                    PopSetupMixedRealitytNotification();
                    PopSetupFullScrenVideoNotification();
                    PopSetupUserPresencePredictionNotification();
                    PopSetupSprActiveSessionChangeNotification();
                    PopSetupAirplaneModeNotification();
                    PopSetupBluetoothChargingNotification();
                    PopSetupMobileHotspotNotification();
                    PopThermalHandlePreviousShutdown();
                    PopCheckpointEfiRuntimeRedirected = (*(_DWORD *)(a2 + 264) & 2) != 0;
                    TtmInit();
                    if ( PopPlatformAoAc )
                    {
                      v25 = 1;
                      EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v25);
                      if ( v25 == 2 )
                        PopErrataReportingIncorrectLidState = 1;
                      if ( PopPlatformAoAc )
                      {
                        if ( PopLidStateForInputSuppressionOverride != -1 )
                          PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
                        v26 = 1;
                        EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v26);
                        PopEnableInputSuppression = v26 == 2;
                        if ( v26 != 2 && PopEnableInputSuppressionOverride != -1 )
                          PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
                      }
                    }
                    PopBatteryQueueWork(1u);
                    PopSetupKsrCallbacks();
                    PopHiberEvaluateSkippingMemoryMapValidation();
                    PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
                    goto LABEL_5;
                  }
                  v14 = 1;
                }
              }
              else
              {
                v14 = 0;
              }
            }
            PoSkipTickMode = v14;
            v18 = v14 == 2;
            if ( v14 != 2 )
            {
              if ( !v15 )
                goto LABEL_37;
              v18 = v14 == 2;
            }
            PopDiagTraceSkipTick(v18, v15);
            goto LABEL_37;
          }
        }
      }
    }
  }
  return TimebrokerServiceSid >= 0;
}
