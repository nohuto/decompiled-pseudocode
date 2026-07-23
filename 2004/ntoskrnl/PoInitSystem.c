/*
 * XREFs of PoInitSystem @ 0x140A3BD5C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     KeInitializeGuardedMutex @ 0x140273520 (KeInitializeGuardedMutex.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402DF038 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KeInitializeTimer @ 0x1402FEF30 (KeInitializeTimer.c)
 *     ExInitializeNPagedLookasideList @ 0x140378790 (ExInitializeNPagedLookasideList.c)
 *     HvlIsPartitionCpuManager @ 0x1403A4A70 (HvlIsPartitionCpuManager.c)
 *     PopBatteryRefreshStatus @ 0x1403A4FB0 (PopBatteryRefreshStatus.c)
 *     PopRwLockInitialize @ 0x1403A6190 (PopRwLockInitialize.c)
 *     PopInitilizeAcDcSettings @ 0x1403A61A4 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x1403A63A4 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403C4278 (PpmInitIllegalThrottleLogging.c)
 *     HalGetInterruptTargetInformation @ 0x1403C6430 (HalGetInterruptTargetInformation.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C6740 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CA624 (PpmHeteroInitializeHgsSupport.c)
 *     PopCheckForAbnormalReset @ 0x1403CC8A4 (PopCheckForAbnormalReset.c)
 *     Feature_Servicing_2107_32739750__private_IsEnabled @ 0x1403F213C (Feature_Servicing_2107_32739750__private_IsEnabled.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     HvlIsAnyHypervisorPresent @ 0x1404EC6E0 (HvlIsAnyHypervisorPresent.c)
 *     PopUpdateUpgradeInProgress @ 0x1405C8020 (PopUpdateUpgradeInProgress.c)
 *     PopUpdateConsoleDisplayState @ 0x14076BFE8 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x14076C3F8 (PopLogSleepDisabled.c)
 *     PopInitializePowerPolicySimulate @ 0x14077BC18 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14077C5F8 (PopResetActionDefaults.c)
 *     PpmIdleRegisterDefaultStates @ 0x14077EB98 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x14077ECC8 (PopInitializeWorkItem.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140782EC0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407A7F88 (PopInitializeHeteroProcessors.c)
 *     PopIdleWakeInitialize @ 0x1407B4448 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x1407B4BBC (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407B5D10 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BDEF4 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x1407BFA50 (PopDefaultPolicy.c)
 *     TtmInit @ 0x1407BFD58 (TtmInit.c)
 *     PopSetupMixedRealitytNotification @ 0x1407C15B8 (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1407C175C (PopInitializePreSleepNotifications.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407C1E10 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMobileHotspotNotification @ 0x1407C22FC (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407C2338 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407C2374 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407C23B0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407C23EC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407C2428 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407C2464 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x1407C27F0 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408E7DB8 (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 *     HalReportResourceUsage @ 0x140A392F0 (HalReportResourceUsage.c)
 *     PopNetInitialize @ 0x140A3BBDC (PopNetInitialize.c)
 *     PopEsInit @ 0x140A3C724 (PopEsInit.c)
 *     SshInitialize @ 0x140A3C77C (SshInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140A3C848 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A3C87C (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A3CA24 (PopDeepSleepInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140A3CA70 (PopPowerAggregatorInitialize.c)
 *     PopCoalescingInitialize @ 0x140A3F4CC (PopCoalescingInitialize.c)
 *     PopProcessBootstat @ 0x140A3F58C (PopProcessBootstat.c)
 *     PopDiagInitialize @ 0x140A42B6C (PopDiagInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A679AC (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x140A680B4 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x140A6819C (PpmInitHeteroPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A68EF4 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x140A694B0 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A6954C (PpmPerfInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140A69DF0 (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x140A69E54 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140A6A118 (PopEtInit.c)
 *     PopRecorderInit @ 0x140A6A354 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A6B010 (PopInitDripsWakeAccounting.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6BDA0 (PopBatteryInitPhaseTwo.c)
 *     PopUmpoInitializeChannel @ 0x140A6C61C (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A6CA68 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x140A6CC74 (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A6D250 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A6D3E0 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A6DA5C (PopInitializeHighPerfPowerRequest.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A6DBDC (PopCreateTimebrokerServiceSid.c)
 *     PopInitializePowerSettings @ 0x140A6EBAC (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A6EF78 (PopInitializeAdpm.c)
 *     PopCheckForUpgradeInProgress @ 0x140A6F0C0 (PopCheckForUpgradeInProgress.c)
 *     PpmInitCoreParkingPolicy @ 0x140A6F5C0 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A6F9A8 (PpmInitHeteroEngine.c)
 *     PopWatchdogInit @ 0x140A6FA68 (PopWatchdogInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A6FB1C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x140A6FC84 (PopInitVideoWnfState.c)
 *     PopInitializeSystemIdleDetection @ 0x140A6FD18 (PopInitializeSystemIdleDetection.c)
 *     PpmCheckInit @ 0x140A6FE70 (PpmCheckInit.c)
 *     PopWakeSourceInit @ 0x140A7002C (PopWakeSourceInit.c)
 *     PopInitShutdownList @ 0x140A704D0 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A706B0 (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A70A28 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A70B74 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PpmWmiInit @ 0x140A70C38 (PpmWmiInit.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A70CA8 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A70D1C (PopCreateIdlePhaseWatchdog.c)
 *     PopCoolingInit @ 0x140A70D90 (PopCoolingInit.c)
 *     PopTransitionCheckpointInit @ 0x140A70DC0 (PopTransitionCheckpointInit.c)
 *     PopSetupKsrCallbacks @ 0x140A70DF0 (PopSetupKsrCallbacks.c)
 *     PpmEventInitialize @ 0x140A70EBC (PpmEventInitialize.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x140A70F20 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopDripsWatchdogInitialize @ 0x140A70F60 (PopDripsWatchdogInitialize.c)
 *     PopRecordFirmwareResetReason @ 0x140A71100 (PopRecordFirmwareResetReason.c)
 *     PopCheckpointDetermineEfiRuntimeRedirection @ 0x140A71128 (PopCheckpointDetermineEfiRuntimeRedirection.c)
 *     PopInitModernSleepEnabledActions @ 0x140A71168 (PopInitModernSleepEnabledActions.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140A71258 (PopReadErrataForIncorrectLidNotification.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140A71278 (PopEvaluateInputSuppressionRequired.c)
 *     PopCoolingInitializeWnfEvents @ 0x140A905F8 (PopCoolingInitializeWnfEvents.c)
 *     PoInitializePdc @ 0x140A90A4C (PoInitializePdc.c)
 *     PopPolicyDeviceInit @ 0x140A90A60 (PopPolicyDeviceInit.c)
 *     PopFanInit @ 0x140A90A78 (PopFanInit.c)
 *     PopEmRegister @ 0x140A90A90 (PopEmRegister.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int TimebrokerServiceSid; // eax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  signed __int64 v14; // rdx
  int v15; // ebx
  unsigned __int8 v16; // di
  unsigned __int8 v17; // zf
  int v18; // edx
  __int64 v19; // rdx
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]
  int Buffer; // [rsp+90h] [rbp+8h] BYREF
  LARGE_INTEGER v24; // [rsp+A0h] [rbp+18h] BYREF

  PopOsInitPhase = a1;
  v24.QuadPart = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&v24);
    PopQpcFrequency = v24.QuadPart;
    PopComputeCounterShifts(v24.QuadPart, &PpmPerformanceDistributionShift, &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopCsResiliencyStatsLock = 0LL;
    PopPowerAggregatorInitialize(0LL);
    PopRwLockInitialize(PopPowerEventLock);
    PopRwLockInitialize(PopSystemIdleLock);
    PopRwLockInitialize(PopCoalRegistrationListLock);
    qword_140C235B8 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140C235C8 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0x100uLL, 0x72496F50u, 0);
    BootStatFileHandle = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
    BootStatDataCache = 0LL;
    BootStatDisableFlush = 0;
    PopBsdSkipLogging = 0;
    PopRwLockInitialize(PopBsdUpdateLock);
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v4);
    PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v5);
    PopWdiCurrentScenarioInstanceId = 0LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v6);
    PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v7);
    PopRwLockInitialize(PopInputSuppressionLock);
    PopTransitionCheckpointInit();
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport(v9, v8, v10);
    PpmCheckInit();
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    PopRwLockInitialize(PpmIdlePolicyLock);
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140C4FE88 = 0LL;
    KeInitializeEvent(&stru_140C23628, SynchronizationEvent, 1u);
    PopWorkerLock = 0LL;
    qword_140C23648 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140C23608 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    KeInitializeEvent(&PopTransitionLock, SynchronizationEvent, 1u);
    PopDisableSleepMutex.Count = 1;
    qword_140C23668 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140C248E8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v12 = PopIdleScanInterval;
    qword_140C23678 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v12 = a1 + 30;
        PopIdleScanInterval = a1 + 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v12 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v12 + 59) / v12;
      PopBackgroundTaskIgnoreCount = (v12 + 179) / v12;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.List.Flink = 0LL;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    KeInitializeGuardedMutex(&PopVolumeLock);
    KeInitializeEvent(&PopPowerSettingCallbackReturned, NotificationEvent, 0);
    qword_140C236E8 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140C23948 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140C23958 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    qword_140C23968 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140C23978 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140C237C4;
    PopDefaultPolicy(dword_140C237C4);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140C23930 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140C4FE80 = -1;
    dword_140C4FE84 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    PopPolicyDeviceInit();
    PopBatteryInit();
    PopFanInit();
    PopThermalInit();
    PopCoolingInit();
    dword_140C23A00 = 4;
    qword_140C23A08 = (__int64)PopShutdownHandler;
    byte_140C23A04 = 0;
    PopWakeSourceInit();
    PpmWmiInit();
    PopUserPresentSetStatus = 0;
    KeInitializeTimer(&PopAwayModeUserPresenceTimer);
    KeInitializeEvent(&PopUserPresentCompletedEvent, SynchronizationEvent, 0);
    KeInitializeEvent(&stru_140C244E8, SynchronizationEvent, 1u);
    PoFxInitPowerManagement();
    dword_140C238CC = 0;
    qword_140C238D0 = 100LL;
    qword_140C238D8 = 100LL;
    dword_140C238E0 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    PopRecordFirmwareResetReason(a2);
    TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopInitializeDirectedDrips(0LL);
    SshInitialize(0LL);
  }
  if ( a1 != 1 )
    goto LABEL_20;
  PopPowerAggregatorInitialize(1LL);
  if ( HvlIsAnyHypervisorPresent() )
  {
    PpmExitLatencyCheckEnabled = 0;
    PpmExitLatencySamplingPercentage = 0;
  }
  PopInitModernSleepEnabledActions();
  PopUmpoInitializeChannel();
  PopUmpoInitializeMonitorChannel();
  PoInitializePdc();
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
          TimebrokerServiceSid = PopEmRegister();
          if ( TimebrokerServiceSid >= 0 )
          {
            PopReadErrataDisablePrimaryDeviceFastResume();
LABEL_20:
            if ( a1 == 2 )
            {
              PoFxRegisterDebugger();
              HalReportResourceUsage(1);
              PopBatteryInitPhaseTwo();
              TimebrokerServiceSid = PpmEventInitialize();
              if ( TimebrokerServiceSid >= 0 )
              {
                KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
                PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
                LOBYTE(v13) = 1;
                PopInitializeHeteroProcessors(v13, v14);
                PpmReleaseLock(&PpmPerfPolicyLock);
                if ( PpmPerfArtificialDomainSetting != -1 )
                  PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
                PpmIdleRegisterDefaultStates();
                PpmCheckInitProcessors(0);
                PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
                PoFxSendSystemLatencyUpdate();
                PpmReleaseLock(&PopFxSystemLatencyLock);
                PopPdcCsCheckSystemVolumeDevice();
                PopCoolingInitializeWnfEvents();
              }
              return TimebrokerServiceSid >= 0;
            }
            if ( a1 != 3 )
            {
LABEL_57:
              TimebrokerServiceSid = 0;
              return TimebrokerServiceSid >= 0;
            }
            TimebrokerServiceSid = PopDiagInitialize();
            if ( TimebrokerServiceSid < 0 )
              return TimebrokerServiceSid >= 0;
            SshInitialize(3LL);
            PopTriggerDiagTraceAoAcCapability();
            PopFanReportBootStartDevices();
            v15 = 2;
            v16 = 1;
            if ( PopSkipTickPolicy )
            {
              if ( PopSkipTickPolicy == 1 )
              {
                v16 = 0;
                if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v21) >= 0 )
                {
                  PopApicMode = HIDWORD(v22);
                  if ( PopCheckSkipTick() )
                  {
                    PoSkipTickMode = 0;
                    goto LABEL_38;
                  }
                  v15 = 1;
                }
              }
              else
              {
                v15 = 0;
              }
            }
            PoSkipTickMode = v15;
            v17 = v15 == 2;
            if ( v15 == 2 )
            {
LABEL_37:
              PopDiagTraceSkipTick(v17, v16);
              goto LABEL_38;
            }
            if ( v16 )
            {
              v17 = v15 == 2;
              goto LABEL_37;
            }
LABEL_38:
            PpmInitIllegalThrottleLogging();
            PopProcessBootstat(a2);
            PopCheckForAbnormalReset();
            PopIdleWakeInitialize();
            PopAcquirePolicyLock();
            if ( (unsigned int)Feature_Servicing_2107_32739750__private_IsEnabled() )
              PopUpdateUpgradeInProgress(0LL);
            else
              PopCheckForUpgradeInProgress();
            if ( InitIsWinPEMode )
              PopLogSleepDisabled(16, 15, 0LL, 0LL);
            if ( byte_140C23A74 )
              PopLogSleepDisabled(17, 7, 0LL, 0LL);
            if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2616LL) & 8) != 0 )
              PopSecureLaunched = 1;
            if ( !(unsigned int)HvlIsPartitionCpuManager() && VslVsmEnabled )
              v18 = 31;
            if ( v18 )
              PopLogSleepDisabled(21, v18, 0LL, 0LL);
            PopDeepSleepInitialize(3LL);
            PopInitializePowerPolicySimulate();
            if ( (PopSimulate & 1) != 0 )
            {
              byte_140C23A7E = 1;
              *(_QWORD *)&xmmword_140C23A80 = 0x19000000064LL;
              *((_QWORD *)&xmmword_140C23A80 + 1) = 0xFFFF0000000ALL;
              LODWORD(qword_140C23AA0) = 4;
              dword_140C23AA8 = 2;
            }
            if ( (PopSimulate & 2) != 0 )
            {
              LODWORD(PopCapabilities) = 16843009;
              WORD2(PopCapabilities) = 257;
              BYTE6(PopCapabilities) = 1;
              unk_140C23A71 = 257;
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
            v19 = *(_QWORD *)(a2 + 240);
            PopHiberLoaderScratchPages = *(_DWORD *)(v19 + 272);
            PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v19 + 132) & 0x10000000) != 0;
            PopSetupHighPerfPowerRequest();
            PpmEnableWmiInterface();
            PopAcquirePolicyLock();
            PopCoalescingInitialize();
            PopReleasePolicyLock();
            PopInitializeDirectedDrips(3LL);
            PopDripsWatchdogInitialize();
            PopSetupAudioEventNotification();
            PopSetupMixedRealitytNotification();
            PopSetupFullScrenVideoNotification();
            PopSetupUserPresencePredictionNotification();
            PopSetupSprActiveSessionChangeNotification();
            PopSetupAirplaneModeNotification();
            PopSetupBluetoothChargingNotification();
            PopSetupMobileHotspotNotification();
            PopThermalHandlePreviousShutdown();
            PopCheckpointDetermineEfiRuntimeRedirection(a2);
            TtmInit();
            PopReadErrataForIncorrectLidNotification();
            PopEvaluateInputSuppressionRequired();
            PopBatteryRefreshStatus();
            PopSetupKsrCallbacks();
            PopHiberEvaluateSkippingMemoryMapValidation();
            PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
            goto LABEL_57;
          }
        }
      }
    }
  }
  return TimebrokerServiceSid >= 0;
}
