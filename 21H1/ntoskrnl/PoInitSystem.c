/*
 * XREFs of PoInitSystem @ 0x140A3BEEC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14035D148 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x140377980 (ExInitializeNPagedLookasideList.c)
 *     PopBatteryQueueWork @ 0x140397AC8 (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A2600 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x1403A9E74 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x1403AA074 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403C33B8 (PpmInitIllegalThrottleLogging.c)
 *     HalGetInterruptTargetInformation @ 0x1403C54C0 (HalGetInterruptTargetInformation.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C57D0 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403C9844 (PpmHeteroInitializeHgsSupport.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x14056B044 (PopDiagTraceAbnormalReset.c)
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x140769C88 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x14076D0B4 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x140779808 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14077A1E8 (PopResetActionDefaults.c)
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
 *     PpmIdleRegisterDefaultStates @ 0x14077F3A8 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x14077F4D8 (PopInitializeWorkItem.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1407888E0 (PopIdleInitAoAcDozeS4Timer.c)
 *     EmpProviderRegister @ 0x140788C40 (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 *     PopIdleWakeInitialize @ 0x1407B12D8 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x1407B1A4C (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407B2BA0 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BAD84 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x1407BC8E0 (PopDefaultPolicy.c)
 *     TtmInit @ 0x1407BCBE8 (TtmInit.c)
 *     PopSetupMixedRealitytNotification @ 0x1407BE30C (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1407BE518 (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407BEA94 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407BEB20 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMobileHotspotNotification @ 0x1407BEDFC (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407BEE38 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407BEE74 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407BEEB0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407BEEEC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407BEF28 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407BEF64 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x1407BF2F0 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408E6B38 (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 *     PopProcessBootstat @ 0x140A36200 (PopProcessBootstat.c)
 *     HalReportResourceUsage @ 0x140A39480 (HalReportResourceUsage.c)
 *     PopNetInitialize @ 0x140A3BD6C (PopNetInitialize.c)
 *     PopEsInit @ 0x140A3CACC (PopEsInit.c)
 *     SshInitialize @ 0x140A3CB24 (SshInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140A3CBF0 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A3CC24 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A3CDCC (PopDeepSleepInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140A3CE18 (PopPowerAggregatorInitialize.c)
 *     PopDiagInitialize @ 0x140A3D2B8 (PopDiagInitialize.c)
 *     PopCoalescingInitialize @ 0x140A4704C (PopCoalescingInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A67524 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x140A67C34 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x140A67D1C (PpmInitHeteroPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A68A74 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x140A69030 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A690CC (PpmPerfInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140A69970 (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x140A699D4 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140A69EB8 (PopEtInit.c)
 *     PopRecorderInit @ 0x140A6A0F4 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A6ADB0 (PopInitDripsWakeAccounting.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6BB18 (PopBatteryInitPhaseTwo.c)
 *     PopUmpoInitializeChannel @ 0x140A6C34C (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A6C798 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x140A6C9A4 (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A6CF80 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A6D110 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A6D3B4 (PopInitializeHighPerfPowerRequest.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A6D534 (PopCreateTimebrokerServiceSid.c)
 *     PopInitializePowerSettings @ 0x140A6E4B4 (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A6E654 (PopInitializeAdpm.c)
 *     PopCheckForUpgradeInProgress @ 0x140A6E6B0 (PopCheckForUpgradeInProgress.c)
 *     PpmInitCoreParkingPolicy @ 0x140A6EAC0 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A6EF84 (PpmInitHeteroEngine.c)
 *     PopWatchdogInit @ 0x140A6F044 (PopWatchdogInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A6F0F8 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x140A6F260 (PopInitVideoWnfState.c)
 *     PopInitializeSystemIdleDetection @ 0x140A6F2F4 (PopInitializeSystemIdleDetection.c)
 *     PopWakeSourceInit @ 0x140A6F4DC (PopWakeSourceInit.c)
 *     PopInitShutdownList @ 0x140A6F908 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A6FAE8 (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A6FDD0 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A6FF18 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A6FF98 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A7000C (PopCreateIdlePhaseWatchdog.c)
 *     PopSetupKsrCallbacks @ 0x140A70118 (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A9130C (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A9136C (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A913F4 (PopDripsWatchdogInitializeDiagnosticTimer.c)
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
  signed __int64 v12; // rdx
  int v13; // ebx
  unsigned __int8 v14; // di
  int v15; // edx
  __int64 v16; // rdx
  unsigned __int8 v17; // zf
  int Buffer; // [rsp+40h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int128 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+68h] [rbp-8h]
  int v23; // [rsp+B0h] [rbp+40h] BYREF
  int v24; // [rsp+C0h] [rbp+50h] BYREF
  int v25; // [rsp+C8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v22 = 0LL;
  v21 = 0LL;
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
    qword_140C23B88 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140C23B98 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    qword_140C20F98 = 0LL;
    PopPowerEventLock = 0LL;
    qword_140C20C68 = 0LL;
    PopSystemIdleLock = 0LL;
    qword_140C24508 = 0LL;
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
    qword_140C25108 = 0LL;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v6);
    PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v7);
    PopWdiCurrentScenarioInstanceId = 0LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v8);
    PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v9);
    qword_140C21708 = 0LL;
    qword_140C250A8 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    PopInputSuppressionLock = 0LL;
    qword_140C250C8 = 0LL;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport();
    PpmCheckCurrentPipelineId = 6;
    qword_140C21018 = (__int64)PpmCheckRun;
    LODWORD(PpmCheckDpc) = 787;
    qword_140C21020 = 0LL;
    qword_140C21038 = 0LL;
    qword_140C21010 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_140C20FD8 = (__int64)PpmCheckPeriodicStart;
    qword_140C20FE0 = 0LL;
    qword_140C20FF8 = 0LL;
    qword_140C20FD0 = 0LL;
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    qword_140C23BD8 = (__int64)&qword_140C23BD0;
    qword_140C23BD0 = (__int64)&qword_140C23BD0;
    qword_140C23C18 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140C23C28 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140C23C58 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140C24C08 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    qword_140C23BF8 = 0LL;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140C4FFC8 = 0LL;
    word_140C23BC8 = 1;
    byte_140C23BCA = 6;
    dword_140C23BCC = 1;
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
    qword_140C23C48 = (__int64)&PopIdleDetectList;
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
    qword_140C23C98 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140C23CA8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140C23CB8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140C23CC8 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140C23DC8 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140C23DE4;
    PopDefaultPolicy(dword_140C23DE4);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140C23DB0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140C4FFC0 = -1;
    dword_140C4FFC4 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    qword_140C22EF8 = 0LL;
    PopPolicyDeviceLock = 0LL;
    PopBatteryInit();
    qword_140C22F18 = 0LL;
    PopFanLock = 0LL;
    PopThermalInit();
    qword_140C23238 = 0LL;
    qword_140C23248 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    qword_140C23FA8 = (__int64)PopShutdownHandler;
    PopCoolingExtensionLock = 0LL;
    dword_140C23FA0 = 4;
    byte_140C23FA4 = 0;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140C20B18 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_140CF4450 = (__int64)&qword_140CF4448;
    qword_140CF4448 = (__int64)&qword_140CF4448;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140C24AB8 = (__int64)&qword_140C24AB0;
    qword_140C24AB0 = (__int64)&qword_140C24AB0;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    PpmWmiIdleAccountingTimer.Period = 0;
    PpmWmiIdleAccountingTimer.Processor = 0;
    PpmWmiIdleAccountingDpc = 275;
    qword_140C20B20 = 0LL;
    qword_140C20B38 = 0LL;
    qword_140C20B10 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_140CF4458 = 0LL;
    dword_140CF447C = 0;
    word_140CF4478 = 0;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140C24AA8 = 1;
    byte_140C24AAA = 6;
    dword_140C24AAC = 1;
    PoFxInitPowerManagement();
    dword_140C23EEC = 0;
    qword_140C23EF0 = 100LL;
    qword_140C23EF8 = 100LL;
    dword_140C23F00 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v11 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v11 + 3408);
    if ( *(_BYTE *)(v11 + 3408) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v11 + 3416);
      xmmword_140C54280 = *(_OWORD *)(v11 + 3424);
      xmmword_140C54290 = *(_OWORD *)(v11 + 3440);
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
          TimebrokerServiceSid = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 2u, &v20);
          if ( TimebrokerServiceSid >= 0 )
          {
            v23 = 1;
            PopErrataDisablePrimaryDeviceFastResume = 0;
            EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v23);
            if ( v23 != 2 )
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
              PopInitializeHeteroProcessors(1, v12);
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
            v13 = 2;
            v14 = 1;
            if ( PopSkipTickPolicy )
            {
              if ( PopSkipTickPolicy == 1 )
              {
                v14 = 0;
                if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v21) >= 0 )
                {
                  PopApicMode = HIDWORD(v22);
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
                    PopCheckForUpgradeInProgress();
                    if ( InitIsWinPEMode )
                      PopLogSleepDisabled(16, 15, 0LL, 0LL);
                    if ( byte_140C24014 )
                      PopLogSleepDisabled(17, 7, 0LL, 0LL);
                    v15 = 0;
                    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2616LL) & 8) != 0 )
                    {
                      PopSecureLaunched = 1;
                      v15 = 4;
                    }
                    if ( (HvlpFlags & 2) == 0 && VslVsmEnabled )
                      v15 = 31;
                    if ( v15 )
                      PopLogSleepDisabled(21, v15, 0LL, 0LL);
                    PopDeepSleepInitialize(3LL);
                    PopInitializePowerPolicySimulate();
                    if ( (PopSimulate & 1) != 0 )
                    {
                      byte_140C2401E = 1;
                      *(_QWORD *)&xmmword_140C24020 = 0x19000000064LL;
                      *((_QWORD *)&xmmword_140C24020 + 1) = 0xFFFF0000000ALL;
                      LODWORD(qword_140C24040) = 4;
                      dword_140C24048 = 2;
                    }
                    if ( (PopSimulate & 2) != 0 )
                    {
                      LODWORD(PopCapabilities) = 16843009;
                      WORD2(PopCapabilities) = 257;
                      BYTE6(PopCapabilities) = 1;
                      unk_140C24011 = 257;
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
                    v16 = *(_QWORD *)(a2 + 240);
                    PopHiberLoaderScratchPages = *(_DWORD *)(v16 + 272);
                    PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v16 + 132) & 0x10000000) != 0;
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
                      dword_140C213E8 |= 2u;
                    }
                    dword_140C213E8 |= 1u;
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
                      v24 = 1;
                      EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v24);
                      if ( v24 == 2 )
                        PopErrataReportingIncorrectLidState = 1;
                      if ( PopPlatformAoAc )
                      {
                        if ( PopLidStateForInputSuppressionOverride != -1 )
                          PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
                        v25 = 1;
                        EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v25);
                        PopEnableInputSuppression = v25 == 2;
                        if ( v25 != 2 && PopEnableInputSuppressionOverride != -1 )
                          PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
                      }
                    }
                    PopBatteryQueueWork(1u);
                    PopSetupKsrCallbacks();
                    PopHiberEvaluateSkippingMemoryMapValidation();
                    PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
                    goto LABEL_5;
                  }
                  v13 = 1;
                }
              }
              else
              {
                v13 = 0;
              }
            }
            PoSkipTickMode = v13;
            v17 = v13 == 2;
            if ( v13 != 2 )
            {
              if ( !v14 )
                goto LABEL_37;
              v17 = v13 == 2;
            }
            PopDiagTraceSkipTick(v17, v14);
            goto LABEL_37;
          }
        }
      }
    }
  }
  return TimebrokerServiceSid >= 0;
}
