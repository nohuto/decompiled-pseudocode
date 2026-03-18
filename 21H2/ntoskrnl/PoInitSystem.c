/*
 * XREFs of PoInitSystem @ 0x140B026CC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140224C34 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     PopBatteryQueueWork @ 0x14036972C (PopBatteryQueueWork.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403B80CC (PpmInitIllegalThrottleLogging.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     PopLidReliabilityInit @ 0x1403C0B80 (PopLidReliabilityInit.c)
 *     PopComputeCounterShifts @ 0x1403C0EE4 (PopComputeCounterShifts.c)
 *     PopInitilizeAcDcSettings @ 0x1403C0FF4 (PopInitilizeAcDcSettings.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403D6AC8 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     HalGetInterruptTargetInformation @ 0x1403D8950 (HalGetInterruptTargetInformation.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403DCA14 (PpmHeteroInitializeHgsSupport.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x1405D0D30 (PopDiagTraceAbnormalReset.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     PopUpdateConsoleDisplayState @ 0x14080D028 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x140810E2C (PopLogSleepDisabled.c)
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 *     PopInitializePowerPolicySimulate @ 0x14081C69C (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x14081CEF8 (PopResetActionDefaults.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140822D70 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopInitializeWorkItem @ 0x140829740 (PopInitializeWorkItem.c)
 *     PpmIdleRegisterDefaultStates @ 0x14082975C (PpmIdleRegisterDefaultStates.c)
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 *     PopIdleWakeInitialize @ 0x140855C88 (PopIdleWakeInitialize.c)
 *     PpmEnableWmiInterface @ 0x1408565CC (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x140858460 (KeRegisterProcessorChangeCallback.c)
 *     PopThermalHandlePreviousShutdown @ 0x1408604BC (PopThermalHandlePreviousShutdown.c)
 *     PopUpdateUpgradeInProgress @ 0x1408620D0 (PopUpdateUpgradeInProgress.c)
 *     PopDefaultPolicy @ 0x1408626B8 (PopDefaultPolicy.c)
 *     TtmInit @ 0x1408633F0 (TtmInit.c)
 *     PopSendFanNoiseChangeWnf @ 0x140863B40 (PopSendFanNoiseChangeWnf.c)
 *     PopSetupMixedRealitytNotification @ 0x140863F58 (PopSetupMixedRealitytNotification.c)
 *     PopInitializePreSleepNotifications @ 0x1408641EC (PopInitializePreSleepNotifications.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140864810 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupHighPerfPowerRequest @ 0x140864980 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMobileHotspotNotification @ 0x140864DD4 (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140864E10 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x140864E4C (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140864E88 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140864EC4 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140864F00 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupAudioEventNotification @ 0x140864F3C (PopSetupAudioEventNotification.c)
 *     PopCheckSkipTick @ 0x140865194 (PopCheckSkipTick.c)
 *     PopDiagTraceSkipTick @ 0x140993114 (PopDiagTraceSkipTick.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     PopInitializeAdpm @ 0x140AF33B0 (PopInitializeAdpm.c)
 *     PoFxRegisterDebugger @ 0x140AF86C4 (PoFxRegisterDebugger.c)
 *     HalReportResourceUsage @ 0x140AFC970 (HalReportResourceUsage.c)
 *     PopBatteryInitPhaseTwo @ 0x140B01A8C (PopBatteryInitPhaseTwo.c)
 *     PopSleepstudyInitialize @ 0x140B02344 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140B02408 (PopPowerAggregatorInitialize.c)
 *     PopNetInitialize @ 0x140B02560 (PopNetInitialize.c)
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 *     PopEsInit @ 0x140B03434 (PopEsInit.c)
 *     PopInitializeDirectedDrips @ 0x140B0348C (PopInitializeDirectedDrips.c)
 *     PopInitializePowerButtonHold @ 0x140B034C0 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x140B03688 (PopDeepSleepInitialize.c)
 *     PpmInitPolicyConfiguration @ 0x140B151EC (PpmInitPolicyConfiguration.c)
 *     PopCoalescingInitialize @ 0x140B15390 (PopCoalescingInitialize.c)
 *     PopDiagInitialize @ 0x140B1BC34 (PopDiagInitialize.c)
 *     PopThermalInit @ 0x140B246C0 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140B247B0 (PpmPerfInitialize.c)
 *     PopPowerRequestInitialize @ 0x140B248EC (PopPowerRequestInitialize.c)
 *     PpmInitIdlePolicy @ 0x140B25110 (PpmInitIdlePolicy.c)
 *     PopInitializePowerSettingCallbacks @ 0x140B25464 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitHeteroPolicy @ 0x140B25B70 (PpmInitHeteroPolicy.c)
 *     PopEtInit @ 0x140B27E7C (PopEtInit.c)
 *     PoFxInitPowerManagement @ 0x140B28250 (PoFxInitPowerManagement.c)
 *     PopRecorderInit @ 0x140B28664 (PopRecorderInit.c)
 *     PopInitDripsWakeAccounting @ 0x140B29B34 (PopInitDripsWakeAccounting.c)
 *     PopUmpoInitializeChannel @ 0x140B2B9FC (PopUmpoInitializeChannel.c)
 *     PopProcessBootstat @ 0x140B2C0C0 (PopProcessBootstat.c)
 *     PopBatteryInit @ 0x140B2C334 (PopBatteryInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B2CD08 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140B2D120 (PopInitializeIrpWorkers.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B2D588 (PopInitializeHighPerfPowerRequest.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B2DB68 (PopCreateTimebrokerServiceSid.c)
 *     PpmInitHeteroEngine @ 0x140B2E208 (PpmInitHeteroEngine.c)
 *     PopInitializePowerSettings @ 0x140B2EA50 (PopInitializePowerSettings.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140B2F0F0 (PpmUpdateArchitecturalEfficiencyClass.c)
 *     PpmInitCoreParkingPolicy @ 0x140B2F90C (PpmInitCoreParkingPolicy.c)
 *     PpmCheckInit @ 0x140B2FD20 (PpmCheckInit.c)
 *     PopWatchdogInit @ 0x140B2FDC0 (PopWatchdogInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140B2FF24 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitVideoWnfState @ 0x140B301A8 (PopInitVideoWnfState.c)
 *     PopInitializeSystemIdleDetection @ 0x140B302E4 (PopInitializeSystemIdleDetection.c)
 *     PopFanReportBootStartDevices @ 0x140B30800 (PopFanReportBootStartDevices.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140B30A10 (PopCreateIdlePhaseWatchdog.c)
 *     PopInitShutdownList @ 0x140B30B14 (PopInitShutdownList.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140B30E08 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140B30FEC (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopPowerButtonSuppressionInit @ 0x140B310D4 (PopPowerButtonSuppressionInit.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B3116C (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopSetupKsrCallbacks @ 0x140B3129C (PopSetupKsrCallbacks.c)
 *     PopDripsWatchdogInitializeActions @ 0x140B53104 (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140B53164 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140B531EC (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int inited; // eax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // di
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int128 v48; // [rsp+40h] [rbp-20h] BYREF
  __int64 v49; // [rsp+50h] [rbp-10h]
  int v50; // [rsp+A0h] [rbp+40h] BYREF
  int v51; // [rsp+B0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        PoFxRegisterDebugger();
        HalReportResourceUsage(1);
        PopBatteryInitPhaseTwo();
        inited = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle);
        if ( inited < 0 )
          return inited >= 0;
        PpmEtwRegistered = 1;
        KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        PopInitializeHeteroProcessors(1, v11);
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
        goto LABEL_5;
      }
      if ( a1 != 3 )
      {
LABEL_5:
        inited = 0;
        return inited >= 0;
      }
      inited = PopDiagInitialize();
      if ( inited < 0 )
        return inited >= 0;
      SshInitialize(3LL);
      PopSleepstudyInitialize(3);
      PopTriggerDiagTraceAoAcCapability();
      PopFanReportBootStartDevices();
      v12 = 1;
      if ( PopSkipTickPolicy )
      {
        if ( PopSkipTickPolicy != 1 )
        {
          v40 = 0;
          v41 = 0;
LABEL_64:
          PoSkipTickMode = v41;
          PopDiagTraceSkipTick(v40 == 2, v12);
          goto LABEL_38;
        }
        v12 = 0;
        if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v48) >= 0 )
        {
          PopApicMode = HIDWORD(v49);
          PoSkipTickMode = !PopCheckSkipTick();
LABEL_38:
          PpmInitIllegalThrottleLogging();
          PopProcessBootstat(a2);
          if ( (unsigned __int8)off_140C01F20[0]()
            || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
          {
            PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
          }
          PopIdleWakeInitialize();
          PopAcquirePolicyLock();
          PopUpdateUpgradeInProgress(0LL);
          if ( InitIsWinPEMode )
            PopLogSleepDisabled(16, 15, 0LL, 0LL);
          if ( byte_140C23414 )
            PopLogSleepDisabled(17, 7, 0LL, 0LL);
          v13 = 0;
          if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
          {
            PopSecureLaunched = 1;
            v13 = 4;
          }
          if ( (HvlpFlags & 2) == 0 && VslVsmEnabled )
          {
            LOBYTE(v13) = 31;
          }
          else if ( !v13 )
          {
            goto LABEL_49;
          }
          PopLogSleepDisabled(21, v13, 0LL, 0LL);
LABEL_49:
          PopDeepSleepInitialize(3LL);
          PopInitializePowerPolicySimulate();
          if ( (PopSimulate & 1) != 0 )
          {
            byte_140C2341E = 1;
            *(_QWORD *)&xmmword_140C23420 = 0x19000000064LL;
            *((_QWORD *)&xmmword_140C23420 + 1) = 0xFFFF0000000ALL;
            LODWORD(qword_140C23440) = 4;
            dword_140C23448 = 2;
          }
          if ( (PopSimulate & 2) != 0 )
          {
            LODWORD(PopCapabilities) = 16843009;
            WORD2(PopCapabilities) = 257;
            BYTE6(PopCapabilities) = 1;
            unk_140C23411 = 257;
          }
          PopResetCurrentPolicies();
          PopInitializeAdpm();
          PopEsInit(3LL);
          PopInitilizeAcDcSettings();
          v51 = 1;
          PopUpdateConsoleDisplayState(1u);
          ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v51);
          PopNetInitialize(3);
          PopReleasePolicyLock();
          PopIdleInitAoAcDozeS4Timer();
          PopCreateIdlePhaseWatchdog(v15, v14, v16);
          PopInitializeSystemIdleDetection(v18, v17, v19);
          PopInitializePreSleepNotifications();
          v20 = *(_QWORD *)(a2 + 240);
          PopHiberLoaderScratchPages = *(_DWORD *)(v20 + 272);
          PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v20 + 132) & 0x10000000) != 0;
          PopSetupHighPerfPowerRequest();
          PpmEnableWmiInterface();
          if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 2648LL) & 0x8000LL) != 0 )
            PopFasr = 1;
          PopAcquirePolicyLock();
          PopCoalescingInitialize(v22, v21, v23);
          PopReleasePolicyLock();
          PopInitializeDirectedDrips(3LL);
          ExInitializeResourceLite(&PopDripsWatchdogContext);
          if ( PopPlatformAoAc )
          {
            if ( (int)PopDripsWatchdogInitializeActions(v25, v24, v26) < 0
              || (int)PopDripsWatchdogInitializeCallbackTimer(v43, v42, v44) < 0
              || (int)PopDripsWatchdogInitializeDiagnosticTimer(v46, v45, v47) < 0 )
            {
              goto LABEL_57;
            }
            dword_140C20808 |= 2u;
          }
          dword_140C20808 |= 1u;
LABEL_57:
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
            v50 = 1;
            EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v50);
            if ( v50 == 2 )
              PopErrataReportingIncorrectLidState = 1;
          }
          PopLidReliabilityInit(v27);
          if ( PopPlatformAoAc )
          {
            if ( PopLidStateForInputSuppressionOverride != -1 )
              PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
            v50 = 1;
            EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v50);
            if ( v50 == 2 )
            {
              PopEnableInputSuppression = 1;
            }
            else
            {
              PopEnableInputSuppression = 0;
              if ( PopEnableInputSuppressionOverride != -1 )
                PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
            }
          }
          PopPowerButtonSuppressionInit(v29, v28, v30);
          PopBatteryQueueWork(1u);
          PopSetupKsrCallbacks(v32, v31, v33);
          PopHiberEvaluateSkippingMemoryMapValidation(v35, v34, v36);
          PopReadErrataSkipMemoryOverwriteRequestControlLockAction(v38, v37, v39);
          goto LABEL_5;
        }
      }
      v40 = 2;
      v41 = 2;
      goto LABEL_64;
    }
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    qword_140C222C8 = 0LL;
    PopFanLock = 0LL;
    dword_140C2230C = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 4 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    qword_140C235F0 = 0LL;
    qword_140C235F8 = 0LL;
    qword_140C235E8 = 0LL;
    PopSuspendResumeNotification = 0LL;
    SshInitialize(1LL);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    PopEsInit(1LL);
    PopInitializePowerSettingCallbacks();
    inited = PopEtInit();
    if ( inited >= 0 )
    {
      inited = PopPowerRequestInitialize();
      if ( inited >= 0 )
      {
        inited = PopPowerAggregatorInitialize(1);
        if ( inited >= 0 )
        {
          inited = PopInitializeHighPerfPowerRequest();
          if ( inited >= 0 )
          {
            PopCheckPowerSourceAfterRtcWakeInitialize();
            PopWatchdogInit();
            PpmHeteroInitializeHgsSupport();
            PopInitializePowerButtonHold(1LL);
            inited = PpmInitHeteroEngine();
            if ( inited >= 0 )
            {
              PpmUpdateArchitecturalEfficiencyClass();
              PopInitDripsWakeAccounting();
              inited = EmpProviderRegister(
                         0LL,
                         (__int64)&PopEmEntry,
                         1u,
                         (__int64)&PopEmCallback,
                         2u,
                         (__int64 *)&PerformanceFrequency);
              if ( inited >= 0 )
              {
                v50 = 1;
                PopErrataDisablePrimaryDeviceFastResume = 0;
                EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v50);
                if ( v50 == 2 )
                  PopErrataDisablePrimaryDeviceFastResume = 1;
                goto LABEL_5;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopCsResiliencyStatsLock = 0LL;
    PopSleepstudyInitialize(0);
    inited = PopPowerAggregatorInitialize(0);
    if ( inited >= 0 )
    {
      PopIdleLoopExecuted.Header.WaitListHead.Blink = &PopIdleLoopExecuted.Header.WaitListHead;
      PopIdleLoopExecuted.Header.WaitListHead.Flink = &PopIdleLoopExecuted.Header.WaitListHead;
      qword_140C22FB8 = (__int64)&PopIrpList;
      PopIrpList = (__int64)&PopIrpList;
      qword_140C1FF58 = 0LL;
      qword_140C22FA8 = (__int64)&PopInrushIrpList;
      PopInrushIrpList = (__int64)&PopInrushIrpList;
      PopPowerEventLock = 0LL;
      qword_140C1FC38 = 0LL;
      PopSystemIdleLock = 0LL;
      qword_140C23918 = 0LL;
      PopCoalRegistrationListLock = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopDeepSleepDisengageReasonLock = 0LL;
      PopIrpLock = 0LL;
      ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0x120uLL, 0x72496F50u, 0);
      BootStatFileHandle = 0LL;
      BootStatDisableFlush = (qword_140C15C78 & 4) != 0;
      BootStatFileHandleAcquired = 0;
      BootStatKeepHandleOpen = 0;
      BootStatDataCache = 0LL;
      PopBsdSkipLogging = 0;
      qword_140C24608 = 0LL;
      PopBsdUpdateLock = 0LL;
      PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
      PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v5);
      PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v6);
      PopWdiCurrentScenarioInstanceId = 0LL;
      PopWdiCurrentScenario = (__int64)&NullGuid;
      PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v7);
      PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v8);
      qword_140C20B78 = 0LL;
      qword_140C24578 = (__int64)&PopTransitionCheckpoints;
      PopTransitionCheckpoints = &PopTransitionCheckpoints;
      PopInputSuppressionLock = 0LL;
      qword_140C24588 = 0LL;
      PopTransitionCheckpointLock = 0LL;
      PopMonitorOffDueToSleep = 0;
      PpmCheckInit();
      inited = PopInitializeIrpWorkers();
      if ( inited >= 0 )
      {
        PopIrpSerialLock = 0LL;
        qword_140C22FF8 = (__int64)&qword_140C22FF0;
        qword_140C22FF0 = (__int64)&qword_140C22FF0;
        qword_140C22FD8 = (__int64)&PopIrpSerialList;
        PopIrpSerialList = (__int64)&PopIrpSerialList;
        qword_140C23048 = (__int64)&PopRequestedIrps;
        PopRequestedIrps = (__int64)&PopRequestedIrps;
        PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
        PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
        qword_140C23038 = (__int64)&PowerStateDisableReasonListHead;
        PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        qword_140C23FF8 = (__int64)&PopDisableSleepList;
        PopDisableSleepList = (__int64)&PopDisableSleepList;
        qword_140C23018 = 0LL;
        PpmIdlePolicyLock = 0LL;
        PpmIdleVetoLock = 0LL;
        PpmParkStateLock = 0LL;
        qword_140C542C8 = 0LL;
        word_140C22FE8 = 1;
        byte_140C22FEA = 6;
        dword_140C22FEC = 1;
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
        v9 = PopIdleScanInterval;
        qword_140C23058 = (__int64)&PopIdleDetectList;
        PopIdleDetectList = (__int64)&PopIdleDetectList;
        PopDopeGlobalLock = 0LL;
        if ( PopIdleScanInterval )
        {
          if ( PopIdleScanInterval == -1 )
          {
            v9 = 30;
            PopIdleScanInterval = 30;
          }
          else if ( (unsigned int)PopIdleScanInterval > 0x12C )
          {
            v9 = 300;
            PopIdleScanInterval = 300;
          }
          PopIdleBackgroundIgnoreCount = (v9 + 59) / v9;
          PopBackgroundTaskIgnoreCount = (v9 + 179) / v9;
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
        qword_140C231A8 = (__int64)&PopVolumeDevices;
        PopVolumeDevices = (__int64)&PopVolumeDevices;
        qword_140C23128 = (__int64)&PopSwitches;
        PopSwitches = (__int64)&PopSwitches;
        qword_140C23118 = (__int64)&PopFans;
        PopFans = (__int64)&PopFans;
        PopVolumeLock.Owner = 0LL;
        PopVolumeLock.Contention = 0;
        LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
        PopVolumeLock.Event.Header.Size = 6;
        PopVolumeLock.Event.Header.SignalState = 0;
        LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
        PopPowerSettingCallbackReturned.Header.Size = 6;
        PopPowerSettingCallbackReturned.Header.SignalState = 0;
        qword_140C23148 = (__int64)&PopThermal;
        PopThermal = &PopThermal;
        IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
        qword_140C23138 = (__int64)&PopActionWaiters;
        PopActionWaiters = (__int64)&PopActionWaiters;
        PopResetActionDefaults();
        PopPolicy = dword_140C231E4;
        PopDefaultPolicy(dword_140C231E4);
        *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
        LODWORD(PopAdminPolicy) = 2;
        HIDWORD(PopAdminPolicy) = -1;
        qword_140C231D0 = 0xFFFFFFFF00000000uLL;
        PopFullWake = 1;
        PopCoolingMode = 0;
        dword_140C542C0 = -1;
        dword_140C542C4 = 2;
        PpmInitPolicyConfiguration();
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0LL);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        qword_140C222D8 = 0LL;
        PopPolicyDeviceLock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        qword_140C225E8 = 0LL;
        qword_140C225F8 = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
        qword_140C233A8 = (__int64)PopShutdownHandler;
        PopCoolingExtensionLock = 0LL;
        dword_140C233A0 = 4;
        byte_140C233A4 = 0;
        PopWakeInfoCount = 0;
        qword_140C23758 = (__int64)&PopWakeInfoList;
        PopWakeInfoList = (__int64)&PopWakeInfoList;
        PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
        PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
        qword_140C237A8 = (__int64)&PopWakeSourceWorkList;
        PopWakeSourceWorkList = &PopWakeSourceWorkList;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140C1FA58 = (__int64)PpmWmiIdleAccountingProcedure;
        qword_140D00B90 = (__int64)&qword_140D00B88;
        qword_140D00B88 = (__int64)&qword_140D00B88;
        PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        PopAwayModeUserPresenceTimer = 8LL;
        qword_140C23EF8 = (__int64)&qword_140C23EF0;
        qword_140C23EF0 = (__int64)&qword_140C23EF0;
        PopCurrentWakeInfo = 0LL;
        PopWakeSourceLock = 0LL;
        LOWORD(PopWakeSourceAvailable.Header.Lock) = 0;
        PopWakeSourceAvailable.Header.Size = 6;
        PopWakeSourceAvailable.Header.SignalState = 1;
        PopWakeSourceWorkState = 0;
        PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
        PpmWmiIdleAccountingTimer.Period = 0;
        PpmWmiIdleAccountingTimer.Processor = 0;
        PpmWmiIdleAccountingDpc = 275;
        qword_140C1FA60 = 0LL;
        qword_140C1FA78 = 0LL;
        qword_140C1FA50 = 0LL;
        PopUserPresentSetStatus = 0;
        qword_140D00B98 = 0LL;
        dword_140D00BBC = 0;
        word_140D00BB8 = 0;
        LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
        PopUserPresentCompletedEvent.Header.Size = 6;
        PopUserPresentCompletedEvent.Header.SignalState = 0;
        word_140C23EE8 = 1;
        byte_140C23EEA = 6;
        dword_140C23EEC = 1;
        PoFxInitPowerManagement();
        dword_140C232EC = 0;
        qword_140C232F0 = 100LL;
        *(_QWORD *)&dword_140C232F8 = 100LL;
        dword_140C23300 = 100;
        PopNetInitialize(0);
        PopInitializePowerButtonHold(0LL);
        qword_140C1F628 = 0LL;
        PopSleepReliabilityDiagLock = 0LL;
        PopRecorderInit();
        v10 = *(_QWORD *)(a2 + 240);
        LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v10 + 3440);
        if ( *(_BYTE *)(v10 + 3440) )
        {
          *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v10 + 3448);
          xmmword_140C5AD10 = *(_OWORD *)(v10 + 3456);
          xmmword_140C5AD20 = *(_OWORD *)(v10 + 3472);
        }
        inited = PopCreateTimebrokerServiceSid();
        if ( inited >= 0 )
        {
          PopInitializeDirectedDrips(0LL);
          SshInitialize(0LL);
          goto LABEL_5;
        }
      }
    }
  }
  return inited >= 0;
}
