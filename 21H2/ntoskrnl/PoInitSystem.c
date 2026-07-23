/*
 * XREFs of PoInitSystem @ 0x140A40948
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x14026FA58 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     ExInitializeNPagedLookasideList @ 0x14037A210 (ExInitializeNPagedLookasideList.c)
 *     PopBatteryQueueWork @ 0x14039AC0C (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5B60 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x1403AE554 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x1403AE754 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403C71A0 (PpmInitIllegalThrottleLogging.c)
 *     HalGetInterruptTargetInformation @ 0x1403C9C00 (HalGetInterruptTargetInformation.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C9F10 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CDDB4 (PpmHeteroInitializeHgsSupport.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x140570D14 (PopDiagTraceAbnormalReset.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CF3D0 (PopUpdateUpgradeInProgress.c)
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x14077EDCC (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x1407816A4 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x14078E1A8 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14078EB88 (PopResetActionDefaults.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1407907E0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
 *     PpmIdleRegisterDefaultStates @ 0x140796858 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x140796988 (PopInitializeWorkItem.c)
 *     EmpProviderRegister @ 0x14079D1E0 (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 *     PopIdleWakeInitialize @ 0x1407C7258 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x1407C79CC (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C8B20 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0BB0 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x1407D2700 (PopDefaultPolicy.c)
 *     TtmInit @ 0x1407D2B48 (TtmInit.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D431C (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1407D44FC (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D4B24 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4BB0 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D509C (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D50D8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D5114 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D5150 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D518C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D51C8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D5204 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x1407D55E0 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408EB328 (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1409910E0 (EmClientQueryRuleState.c)
 *     PopCoalescingInitialize @ 0x140A3A1C0 (PopCoalescingInitialize.c)
 *     PopProcessBootstat @ 0x140A3A280 (PopProcessBootstat.c)
 *     HalReportResourceUsage @ 0x140A3DE50 (HalReportResourceUsage.c)
 *     PopNetInitialize @ 0x140A407C8 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A4152C (PopEsInit.c)
 *     SshInitialize @ 0x140A41584 (SshInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140A41650 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A41684 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A4182C (PopDeepSleepInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140A41878 (PopPowerAggregatorInitialize.c)
 *     PopDiagInitialize @ 0x140A41D18 (PopDiagInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A6C410 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x140A6C864 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x140A6C94C (PpmInitHeteroPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6D6A4 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x140A6DC60 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A6DCFC (PpmPerfInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140A6E67C (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x140A6E6E0 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140A6E9A4 (PopEtInit.c)
 *     PopRecorderInit @ 0x140A6EBE0 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A6F89C (PopInitDripsWakeAccounting.c)
 *     PopBatteryInitPhaseTwo @ 0x140A70604 (PopBatteryInitPhaseTwo.c)
 *     PopUmpoInitializeChannel @ 0x140A70E7C (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A712C8 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x140A714D4 (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A71AB0 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A71C40 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A720FC (PopInitializeHighPerfPowerRequest.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A7227C (PopCreateTimebrokerServiceSid.c)
 *     PopInitializePowerSettings @ 0x140A7330C (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A734AC (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x140A73A44 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A73E48 (PpmInitHeteroEngine.c)
 *     PopWatchdogInit @ 0x140A73F08 (PopWatchdogInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A73FBC (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x140A74124 (PopInitVideoWnfState.c)
 *     PopInitializeSystemIdleDetection @ 0x140A741B8 (PopInitializeSystemIdleDetection.c)
 *     PopWakeSourceInit @ 0x140A7445C (PopWakeSourceInit.c)
 *     PopInitShutdownList @ 0x140A74888 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A74A68 (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A74DD8 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A74E44 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A74F08 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A74F7C (PopCreateIdlePhaseWatchdog.c)
 *     PopSetupKsrCallbacks @ 0x140A74FF0 (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A9446C (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A944CC (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A94554 (PopDripsWatchdogInitializeDiagnosticTimer.c)
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
    qword_140C22FC8 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140C22FA8 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    qword_140C20D18 = 0LL;
    PopPowerEventLock = 0LL;
    qword_140C20CF8 = 0LL;
    PopSystemIdleLock = 0LL;
    qword_140C244C8 = 0LL;
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
    qword_140C25178 = 0LL;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v6);
    PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v7);
    PopWdiCurrentScenarioInstanceId = 0LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v8);
    PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v9);
    qword_140C21798 = 0LL;
    qword_140C251C8 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    PopInputSuppressionLock = 0LL;
    qword_140C251A8 = 0LL;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport();
    PpmCheckCurrentPipelineId = 6;
    qword_140C21098 = (__int64)PpmCheckRun;
    LODWORD(PpmCheckDpc) = 787;
    qword_140C210A0 = 0LL;
    qword_140C210B8 = 0LL;
    qword_140C21090 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_140C210D8 = (__int64)PpmCheckPeriodicStart;
    qword_140C210E0 = 0LL;
    qword_140C210F8 = 0LL;
    qword_140C210D0 = 0LL;
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    qword_140C23138 = (__int64)&qword_140C23130;
    qword_140C23130 = (__int64)&qword_140C23130;
    qword_140C23148 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140C23118 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140C230F8 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140C24BC8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    qword_140C23168 = 0LL;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140C500C8 = 0LL;
    word_140C23128 = 1;
    byte_140C2312A = 6;
    dword_140C2312C = 1;
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
    qword_140C230D8 = (__int64)&PopIdleDetectList;
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
    qword_140C23408 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140C233E8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140C233F8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140C233C8 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140C233D8 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140C23244;
    PopDefaultPolicy(dword_140C23244);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140C233B0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140C500C0 = -1;
    dword_140C500C4 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    qword_140C23518 = 0LL;
    PopPolicyDeviceLock = 0LL;
    PopBatteryInit();
    qword_140C23538 = 0LL;
    PopFanLock = 0LL;
    PopThermalInit();
    qword_140C23868 = 0LL;
    qword_140C23858 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    qword_140C231E8 = (__int64)PopShutdownHandler;
    PopCoolingExtensionLock = 0LL;
    dword_140C231E0 = 4;
    byte_140C231E4 = 0;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140C20B98 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_140CF4690 = (__int64)&qword_140CF4688;
    qword_140CF4688 = (__int64)&qword_140CF4688;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140C247B8 = (__int64)&qword_140C247B0;
    qword_140C247B0 = (__int64)&qword_140C247B0;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    PpmWmiIdleAccountingTimer.Period = 0;
    PpmWmiIdleAccountingTimer.Processor = 0;
    PpmWmiIdleAccountingDpc = 275;
    qword_140C20BA0 = 0LL;
    qword_140C20BB8 = 0LL;
    qword_140C20B90 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_140CF4698 = 0LL;
    dword_140CF46BC = 0;
    word_140CF46B8 = 0;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140C247A8 = 1;
    byte_140C247AA = 6;
    dword_140C247AC = 1;
    PoFxInitPowerManagement();
    dword_140C2334C = 0;
    qword_140C23350 = 100LL;
    qword_140C23358 = 100LL;
    dword_140C23360 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v11 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v11 + 3408);
    if ( *(_BYTE *)(v11 + 3408) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v11 + 3416);
      xmmword_140C543C8 = *(_OWORD *)(v11 + 3424);
      xmmword_140C543D8 = *(_OWORD *)(v11 + 3440);
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
              PpmAcquireLock(&PopFxSystemLatencyLock);
              PoFxSendSystemLatencyUpdate();
              PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
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
                    PopProcessBootstat();
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
                    if ( byte_140C23434 )
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
                      byte_140C2343E = 1;
                      *(_QWORD *)&xmmword_140C23440 = 0x19000000064LL;
                      *((_QWORD *)&xmmword_140C23440 + 1) = 0xFFFF0000000ALL;
                      LODWORD(qword_140C23460) = 4;
                      dword_140C23468 = 2;
                    }
                    if ( (PopSimulate & 2) != 0 )
                    {
                      LODWORD(PopCapabilities) = 16843009;
                      WORD2(PopCapabilities) = 257;
                      BYTE6(PopCapabilities) = 1;
                      unk_140C23431 = 257;
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
                      dword_140C21468 |= 2u;
                    }
                    dword_140C21468 |= 1u;
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
