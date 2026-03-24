/*
 * XREFs of PoInitSystem @ 0x140A3F948
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC50 (ExInitializeResourceLite.c)
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140281818 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x14037A6C0 (ExInitializeNPagedLookasideList.c)
 *     PopBatteryQueueWork @ 0x14039AABC (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5A10 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x1403AE404 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x1403AE604 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403C7000 (PpmInitIllegalThrottleLogging.c)
 *     HalGetInterruptTargetInformation @ 0x1403C9A60 (HalGetInterruptTargetInformation.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C9D70 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC828 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CDC44 (PpmHeteroInitializeHgsSupport.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x140570AD4 (PopDiagTraceAbnormalReset.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CF3D0 (PopUpdateUpgradeInProgress.c)
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x14077EC0C (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x1407814E4 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x14078DFE8 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14078E9C8 (PopResetActionDefaults.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14078F230 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopResetCurrentPolicies @ 0x1407928E8 (PopResetCurrentPolicies.c)
 *     PpmIdleRegisterDefaultStates @ 0x140796658 (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x140796788 (PopInitializeWorkItem.c)
 *     EmpProviderRegister @ 0x14079CFE0 (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407BAC0C (PopInitializeHeteroProcessors.c)
 *     PopIdleWakeInitialize @ 0x1407C6F38 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x1407C76AC (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C8800 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D0A40 (PopThermalHandlePreviousShutdown.c)
 *     PopDefaultPolicy @ 0x1407D2590 (PopDefaultPolicy.c)
 *     TtmInit @ 0x1407D29D8 (TtmInit.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D41AC (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1407D438C (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D49B4 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D4A40 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D4F2C (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D4F68 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D4FA4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D4FE0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D501C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D5058 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D5094 (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x1407D5470 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x1408EB1C8 (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x14098F620 (EmClientQueryRuleState.c)
 *     PopCoalescingInitialize @ 0x140A391C0 (PopCoalescingInitialize.c)
 *     PopProcessBootstat @ 0x140A39280 (PopProcessBootstat.c)
 *     HalReportResourceUsage @ 0x140A3CE50 (HalReportResourceUsage.c)
 *     PopNetInitialize @ 0x140A3F7C8 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A4052C (PopEsInit.c)
 *     SshInitialize @ 0x140A40584 (SshInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140A40650 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140A40684 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140A4082C (PopDeepSleepInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140A40878 (PopPowerAggregatorInitialize.c)
 *     PopDiagInitialize @ 0x140A40D18 (PopDiagInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A6B410 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x140A6B864 (PpmInitPolicyConfiguration.c)
 *     PpmInitHeteroPolicy @ 0x140A6B94C (PpmInitHeteroPolicy.c)
 *     PpmInitIdlePolicy @ 0x140A6C6A4 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x140A6CC60 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A6CCFC (PpmPerfInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140A6D67C (PopFanReportBootStartDevices.c)
 *     PoFxInitPowerManagement @ 0x140A6D6E0 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x140A6D9A4 (PopEtInit.c)
 *     PopRecorderInit @ 0x140A6DBE0 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140A6E89C (PopInitDripsWakeAccounting.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6F604 (PopBatteryInitPhaseTwo.c)
 *     PopUmpoInitializeChannel @ 0x140A6FE7C (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x140A702C8 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x140A704D4 (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A70AB0 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140A70C40 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A710FC (PopInitializeHighPerfPowerRequest.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A7127C (PopCreateTimebrokerServiceSid.c)
 *     PopInitializePowerSettings @ 0x140A7230C (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140A725E8 (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x140A72A44 (PpmInitCoreParkingPolicy.c)
 *     PpmInitHeteroEngine @ 0x140A72E48 (PpmInitHeteroEngine.c)
 *     PopWatchdogInit @ 0x140A72F08 (PopWatchdogInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140A72FBC (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x140A73124 (PopInitVideoWnfState.c)
 *     PopInitializeSystemIdleDetection @ 0x140A731B8 (PopInitializeSystemIdleDetection.c)
 *     PopWakeSourceInit @ 0x140A7345C (PopWakeSourceInit.c)
 *     PopInitShutdownList @ 0x140A73888 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140A73A68 (PoFxRegisterDebugger.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A73DD8 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A73E44 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A73F08 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A73F7C (PopCreateIdlePhaseWatchdog.c)
 *     PopSetupKsrCallbacks @ 0x140A73FF0 (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A9346C (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A934CC (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A93554 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  signed __int64 v16; // rdx
  int v17; // ebx
  unsigned __int8 v18; // di
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int8 v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+40h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-28h] BYREF
  __int64 v48; // [rsp+50h] [rbp-20h] BYREF
  __int128 v49; // [rsp+58h] [rbp-18h] BYREF
  __int64 v50; // [rsp+68h] [rbp-8h]
  int v51; // [rsp+B0h] [rbp+40h] BYREF
  int v52; // [rsp+C0h] [rbp+50h] BYREF
  int v53; // [rsp+C8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v50 = 0LL;
  v49 = 0LL;
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
    qword_140C23BE8 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140C23BD8 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    qword_140C20CD8 = 0LL;
    PopPowerEventLock = 0LL;
    qword_140C20CC8 = 0LL;
    PopSystemIdleLock = 0LL;
    qword_140C24538 = 0LL;
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
    qword_140C251B8 = 0LL;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v6);
    PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v7);
    PopWdiCurrentScenarioInstanceId = 0LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v8);
    PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v9);
    qword_140C21738 = 0LL;
    qword_140C250A8 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    PopInputSuppressionLock = 0LL;
    qword_140C250E8 = 0LL;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmHeteroInitializeHgsSupport(v11, v10, v12);
    PpmCheckCurrentPipelineId = 6;
    qword_140C21078 = (__int64)PpmCheckRun;
    LODWORD(PpmCheckDpc) = 787;
    qword_140C21080 = 0LL;
    qword_140C21098 = 0LL;
    qword_140C21070 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_140C210B8 = (__int64)PpmCheckPeriodicStart;
    qword_140C210C0 = 0LL;
    qword_140C210D8 = 0LL;
    qword_140C210B0 = 0LL;
    TimebrokerServiceSid = PopInitializeIrpWorkers();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    PopIrpSerialLock = 0LL;
    qword_140C23C78 = (__int64)&qword_140C23C70;
    qword_140C23C70 = (__int64)&qword_140C23C70;
    qword_140C23C38 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140C23C28 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140C23F38 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140C24C08 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    qword_140C23C08 = 0LL;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140C50088 = 0LL;
    word_140C23C68 = 1;
    byte_140C23C6A = 6;
    dword_140C23C6C = 1;
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
    v13 = PopIdleScanInterval;
    qword_140C23F58 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v13 = 30;
        PopIdleScanInterval = 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v13 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v13 + 59) / v13;
      PopBackgroundTaskIgnoreCount = (v13 + 179) / v13;
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
    qword_140C23F08 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140C23EF8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140C23F28 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140C23F18 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
    qword_140C23D88 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140C23DA4;
    PopDefaultPolicy(dword_140C23DA4);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140C23F90 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140C50080 = -1;
    dword_140C50084 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    qword_140C22F58 = 0LL;
    PopPolicyDeviceLock = 0LL;
    PopBatteryInit();
    qword_140C22F68 = 0LL;
    PopFanLock = 0LL;
    PopThermalInit();
    qword_140C23258 = 0LL;
    qword_140C23268 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    qword_140C24008 = (__int64)PopShutdownHandler;
    PopCoolingExtensionLock = 0LL;
    dword_140C24000 = 4;
    byte_140C24004 = 0;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140C20B38 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_140CF4640 = (__int64)&qword_140CF4638;
    qword_140CF4638 = (__int64)&qword_140CF4638;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140C24AB8 = (__int64)&qword_140C24AB0;
    qword_140C24AB0 = (__int64)&qword_140C24AB0;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    PpmWmiIdleAccountingTimer.Period = 0;
    PpmWmiIdleAccountingTimer.Processor = 0;
    PpmWmiIdleAccountingDpc = 275;
    qword_140C20B40 = 0LL;
    qword_140C20B58 = 0LL;
    qword_140C20B30 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_140CF4648 = 0LL;
    dword_140CF466C = 0;
    word_140CF4668 = 0;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140C24AA8 = 1;
    byte_140C24AAA = 6;
    dword_140C24AAC = 1;
    PoFxInitPowerManagement();
    dword_140C23EAC = 0;
    qword_140C23EB0 = 100LL;
    qword_140C23EB8 = 100LL;
    dword_140C23EC0 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v14 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v14 + 3408);
    if ( *(_BYTE *)(v14 + 3408) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v14 + 3416);
      xmmword_140C54350 = *(_OWORD *)(v14 + 3424);
      xmmword_140C54360 = *(_OWORD *)(v14 + 3440);
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
          TimebrokerServiceSid = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 2u, &v48);
          if ( TimebrokerServiceSid >= 0 )
          {
            v51 = 1;
            PopErrataDisablePrimaryDeviceFastResume = 0;
            EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v51);
            if ( v51 != 2 )
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
              LOBYTE(v15) = 1;
              PopInitializeHeteroProcessors(v15, v16);
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
            v17 = 2;
            v18 = 1;
            if ( PopSkipTickPolicy )
            {
              if ( PopSkipTickPolicy == 1 )
              {
                v18 = 0;
                if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v49) >= 0 )
                {
                  PopApicMode = HIDWORD(v50);
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
                    if ( byte_140C24074 )
                      PopLogSleepDisabled(17, 7, 0LL, 0LL);
                    v19 = 0;
                    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2616LL) & 8) != 0 )
                    {
                      PopSecureLaunched = 1;
                      v19 = 4;
                    }
                    if ( (HvlpFlags & 2) == 0 && VslVsmEnabled )
                      v19 = 31;
                    if ( v19 )
                      PopLogSleepDisabled(21, v19, 0LL, 0LL);
                    PopDeepSleepInitialize(3LL);
                    PopInitializePowerPolicySimulate();
                    if ( (PopSimulate & 1) != 0 )
                    {
                      byte_140C2407E = 1;
                      *(_QWORD *)&xmmword_140C24080 = 0x19000000064LL;
                      *((_QWORD *)&xmmword_140C24080 + 1) = 0xFFFF0000000ALL;
                      LODWORD(qword_140C240A0) = 4;
                      dword_140C240A8 = 2;
                    }
                    if ( (PopSimulate & 2) != 0 )
                    {
                      LODWORD(PopCapabilities) = 16843009;
                      WORD2(PopCapabilities) = 257;
                      BYTE6(PopCapabilities) = 1;
                      unk_140C24071 = 257;
                    }
                    PopResetCurrentPolicies();
                    PopInitializeAdpm();
                    PopEsInit(3LL);
                    PopInitilizeAcDcSettings();
                    v46 = 1;
                    PopUpdateConsoleDisplayState(1u);
                    ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v46);
                    PopNetInitialize(3);
                    PopReleasePolicyLock();
                    PopIdleInitAoAcDozeS4Timer();
                    PopCreateIdlePhaseWatchdog(v21, v20, v22);
                    PopInitializeSystemIdleDetection(v24, v23, v25);
                    PopInitializePreSleepNotifications();
                    v26 = *(_QWORD *)(a2 + 240);
                    PopHiberLoaderScratchPages = *(_DWORD *)(v26 + 272);
                    PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v26 + 132) & 0x10000000) != 0;
                    PopSetupHighPerfPowerRequest();
                    PpmEnableWmiInterface();
                    PopAcquirePolicyLock();
                    PopCoalescingInitialize();
                    PopReleasePolicyLock();
                    PopInitializeDirectedDrips(3LL);
                    ExInitializeResourceLite(&PopDripsWatchdogContext);
                    if ( PopPlatformAoAc )
                    {
                      if ( (int)PopDripsWatchdogInitializeActions(v28, v27, v29) < 0
                        || (int)PopDripsWatchdogInitializeCallbackTimer(v41, v40, v42) < 0
                        || (int)PopDripsWatchdogInitializeDiagnosticTimer(v44, v43, v45) < 0 )
                      {
                        goto LABEL_56;
                      }
                      dword_140C21428 |= 2u;
                    }
                    dword_140C21428 |= 1u;
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
                      v52 = 1;
                      EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v52);
                      if ( v52 == 2 )
                        PopErrataReportingIncorrectLidState = 1;
                      if ( PopPlatformAoAc )
                      {
                        if ( PopLidStateForInputSuppressionOverride != -1 )
                          PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
                        v53 = 1;
                        EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v53);
                        PopEnableInputSuppression = v53 == 2;
                        if ( v53 != 2 && PopEnableInputSuppressionOverride != -1 )
                          PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
                      }
                    }
                    PopBatteryQueueWork(1u);
                    PopSetupKsrCallbacks(v31, v30, v32);
                    PopHiberEvaluateSkippingMemoryMapValidation(v34, v33, v35);
                    PopReadErrataSkipMemoryOverwriteRequestControlLockAction(v37, v36, v38);
                    goto LABEL_5;
                  }
                  v17 = 1;
                }
              }
              else
              {
                v17 = 0;
              }
            }
            PoSkipTickMode = v17;
            v39 = v17 == 2;
            if ( v17 != 2 )
            {
              if ( !v18 )
                goto LABEL_37;
              v39 = v17 == 2;
            }
            PopDiagTraceSkipTick(v39, v18);
            goto LABEL_37;
          }
        }
      }
    }
  }
  return TimebrokerServiceSid >= 0;
}
