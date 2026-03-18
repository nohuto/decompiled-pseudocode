/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x14098E104
 * Callers:
 *     NtSetSystemPowerState @ 0x140995E20 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PsGetCurrentProcess @ 0x14023A4B0 (PsGetCurrentProcess.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     PopCheckForWork @ 0x1402DEAA0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1402DF330 (PopGetPolicyWorker.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KeSuspendThread @ 0x1402FAD18 (KeSuspendThread.c)
 *     ExFreePoolEx @ 0x14034AE00 (ExFreePoolEx.c)
 *     StringCchPrintfW @ 0x140358D18 (StringCchPrintfW.c)
 *     PopSetPowerActionState @ 0x1403807C4 (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x1403807F8 (PopSetPowerActionWatchdogState.c)
 *     PopThermalSxEntry @ 0x140387948 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140387A3C (PopThermalSxExit.c)
 *     PopRunMaximumIrpWorkers @ 0x1403899F0 (PopRunMaximumIrpWorkers.c)
 *     ExWakeTimersPause @ 0x14038A834 (ExWakeTimersPause.c)
 *     PopActionRetrieveInitialState @ 0x14038A998 (PopActionRetrieveInitialState.c)
 *     ExWakeTimersResume @ 0x14038AA54 (ExWakeTimersResume.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038AD9C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038B138 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14038B250 (PpmCheckResumeStatisticsCollection.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038B288 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038B2E0 (PpmCheckPausePpmEngineForSx.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038B30C (PopIgnoreBatteryStatusChange.c)
 *     PsIumResumeAfterHibernate @ 0x14038B39C (PsIumResumeAfterHibernate.c)
 *     PoSetUserPresent @ 0x1403A31D0 (PoSetUserPresent.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A4D40 (RtlBootStatusDisableFlushing.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     ZwSetSystemPowerState @ 0x1403F6B20 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140500AE0 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x14055FDD0 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1405666CC (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140571574 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     PopFilterCapabilities @ 0x1406A528C (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x1406A611C (PopIsDozeSupported.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406ABD00 (ExReleaseTimeRefreshLock.c)
 *     MmLockPagableSectionByHandle @ 0x1406F6300 (MmLockPagableSectionByHandle.c)
 *     RtlSetSystemBootStatusEx @ 0x140711260 (RtlSetSystemBootStatusEx.c)
 *     PopSetSleepMarker @ 0x140761A54 (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1407631B8 (PopTransitionCheckpoint.c)
 *     PopNotifyTelemetryOsState @ 0x1407633F4 (PopNotifyTelemetryOsState.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076407C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PoClearBroadcast @ 0x140765200 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x140765258 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x1407661FC (PopEsEnterSleepShutdown.c)
 *     PopInitSystemSleeperThread @ 0x1407669F8 (PopInitSystemSleeperThread.c)
 *     PopFastS4Check @ 0x140766AE0 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x140766B84 (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x140766C1C (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x140766CBC (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x14076709C (PopDiagTraceKernelQueriesAllowed.c)
 *     PopBootLoaderTraceProcess @ 0x1407671AC (PopBootLoaderTraceProcess.c)
 *     PopAdvanceSystemPowerState @ 0x14076723C (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x140767370 (PpmPerfReApplyStates.c)
 *     PopEsExitSleep @ 0x1407675C8 (PopEsExitSleep.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14076801C (CmSetLazyFlushState.c)
 *     PopInitSIdle @ 0x14077A6C8 (PopInitSIdle.c)
 *     PopAcquireTransitionLock @ 0x14077B698 (PopAcquireTransitionLock.c)
 *     PopInitializePowerPolicySimulate @ 0x14077BC18 (PopInitializePowerPolicySimulate.c)
 *     PopCurrentPowerStatePrecise @ 0x14077C074 (PopCurrentPowerStatePrecise.c)
 *     PopResetActionDefaults @ 0x14077C5F8 (PopResetActionDefaults.c)
 *     PopQueueBatteryStatusTimeout @ 0x14077C84C (PopQueueBatteryStatusTimeout.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C15F4 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x1408DDC38 (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x1408DE170 (PopSetShutdownMarker.c)
 *     PopZeroHiberFile @ 0x1408E40B0 (PopZeroHiberFile.c)
 *     PopDeferDoze @ 0x1408ED038 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x140902940 (PsTerminateServerSilo.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098CDE4 (ExUpdateSystemTimeFromCmos.c)
 *     PopDiagComputeEarlyHiberStats @ 0x14098D5C8 (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x14098D644 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x14098D698 (PopCaptureTimeOnProcZero.c)
 *     PfPowerActionNotify @ 0x14098D9C4 (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x14098DC04 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x1409946AC (IoFreePoDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099499C (PopFlushVolumes.c)
 *     PopNewWakeInfo @ 0x1409951DC (PopNewWakeInfo.c)
 *     PopDiagTracePostSleepNotification @ 0x140995778 (PopDiagTracePostSleepNotification.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409AF2C4 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x1409AF544 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x1409AF5D4 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x1409AFF78 (ExGetNextWakeTime.c)
 */

__int64 __fastcall PopTransitionSystemPowerStateEx(unsigned int *a1)
{
  unsigned int v1; // edi
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  int v5; // eax
  int v6; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  int v15; // ecx
  unsigned __int8 *v16; // rsi
  unsigned int v17; // eax
  int *v18; // r14
  int v19; // eax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char v24; // cl
  unsigned int v25; // eax
  char NextSystemPowerState; // al
  int HiberContext; // eax
  __int64 v28; // rcx
  LONG v29; // ecx
  int inited; // eax
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rsi
  int v41; // r8d
  _DWORD *v42; // rdx
  _DWORD *v43; // r14
  __int64 *v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 *v46; // rsi
  __int64 *v47; // r12
  char NextWakeTime; // al
  char v49; // al
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  int v53; // r8d
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  __int64 v59; // rcx
  ULONG_PTR v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  _DWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v68; // [rsp+50h] [rbp-30h] BYREF
  char *v69; // [rsp+58h] [rbp-28h]
  int v70; // [rsp+60h] [rbp-20h]
  int v71; // [rsp+68h] [rbp-18h]
  unsigned __int64 v72; // [rsp+70h] [rbp-10h]
  int v73; // [rsp+78h] [rbp-8h]
  char v74; // [rsp+C0h] [rbp+40h] BYREF
  int v75; // [rsp+C8h] [rbp+48h]

  v1 = 0;
  v2 = a1 + 58;
  *((_BYTE *)a1 + 24) = 0;
  v4 = a1 + 59;
  *((_BYTE *)a1 + 36) = 0;
  a1[10] = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  a1[37] = 1;
  a1[38] = 1;
  *((_BYTE *)a1 + 256) = 1;
  *((_QWORD *)a1 + 47) = 1LL;
  *((_QWORD *)a1 + 7) = 0LL;
  a1[29] = 0;
  *((_QWORD *)a1 + 30) = 0LL;
  *((_QWORD *)a1 + 27) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 43) = 0LL;
  *((_BYTE *)a1 + 384) = 0;
  *((_QWORD *)a1 + 45) = 0LL;
  *((_QWORD *)a1 + 46) = 0LL;
  a1[58] = 0;
  a1[59] = 0;
  v5 = PopSimulate & 0x10000;
  a1[26] = 0;
  a1[97] = v5 != 0 ? 300000000 : 600000000;
  PopTransitionCheckpoint(8, 1);
  if ( a1[1] - 1 > 5 )
    return 3221225485LL;
  v6 = *a1;
  v75 = 6;
  if ( (unsigned int)(v6 - 1) > 6 || (a1[2] & 0xCFFFFC0) != 0 || v6 < 4 && dword_140C22E54 >= 16 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *((_BYTE *)a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*a1, a1[1]);
    else
      return 3221225569LL;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *a1;
  *((_QWORD *)a1 + 12) = CurrentServerSilo;
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(v10 - 4) > 2 )
    {
      v1 = -1073741637;
    }
    else
    {
      v11 = -2147483599;
      if ( v10 != 5 )
        v11 = -1073741077;
      a1[8] = v11;
      PsTerminateServerSilo(*((_QWORD *)a1 + 12));
    }
    a1[26] = v1;
    return v1;
  }
  if ( v10 == 4 )
    PopReadShutdownPolicy();
  a1[5] = 0;
  a1[3] = *a1;
  a1[4] = a1[2];
  *(_OWORD *)(a1 + 30) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  v12 = dword_140C22E54;
  v13 = dword_140C22E54 < 16;
  a1[31] = 128;
  if ( !v13 )
    v12 = 5;
  a1[30] = v12;
  PopAcquireTransitionLock(1);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0);
  v14 = PoInitializeBroadcast();
  a1[26] = v14;
  if ( v14 >= 0 )
  {
    PopCheckPowerSourceAfterRtcWakeCancel();
    PopAcquirePolicyLock();
    *((_BYTE *)a1 + 64) = 1;
    PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C22F08);
    if ( byte_140C22E41 )
    {
      if ( byte_140C22E41 != 2 )
      {
        PopReleasePolicyLock();
        PoClearBroadcast();
        ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
        return 3221225505LL;
      }
    }
    else
    {
      PopResetActionDefaults();
    }
    PopSetPowerActionState(3);
    *(_QWORD *)&qword_140C22E78 = qword_140C22DF0;
    PopExecutePowerAction((__int64)(a1 + 30), 0, (__int64 *)(a1 + 3), a1[1], 1u);
    PopIgnoreBatteryStatusChange();
    PopCheckResiliencyScenarios();
    PopEnforceResiliencyScenarios((int *)a1 + 62);
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
    v15 = *a1;
    if ( *a1 == 6 )
    {
      LODWORD(qword_140C22E44) = 6;
      v15 = *a1;
    }
    if ( (unsigned int)(v15 - 4) <= 2 )
    {
      PoPowerDownActionInProgress = 1;
      if ( v15 == 5 )
        PoPowerResetActionInProgress = 1;
      if ( *(_QWORD *)&PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
        PopZeroHiberFile(*(HANDLE *)&PopHiberInfo, (__int64)FileObject);
    }
    v16 = (unsigned __int8 *)(a1 + 22);
    v17 = *a1 - 2;
    *((_BYTE *)a1 + 88) = 0;
    v18 = (int *)(a1 + 7);
    a1[7] = 0;
    if ( v17 <= 1 )
      PoPowerDownActionInProgress = 1;
    *((_BYTE *)a1 + 112) = 0;
LABEL_40:
    a1[26] = -1073741536;
    while ( 1 )
    {
      if ( !*((_BYTE *)a1 + 64) )
      {
        PopAcquirePolicyLock();
        *((_BYTE *)a1 + 64) = 1;
      }
      if ( !(_DWORD)qword_140C22E44 )
      {
        a1[26] = 0;
        goto LABEL_177;
      }
      *((_BYTE *)a1 + 144) = PopAction;
      LOBYTE(PopAction) = 0;
      v19 = a1[26];
      if ( v19 == -1073741536 )
      {
        if ( (a1[36] & 2) != 0 && (dword_140C22E4C & 0x80000000) == 0 && (dword_140C22E4C & 3) != 0 )
        {
          PopGetPolicyWorker(2);
          goto LABEL_177;
        }
        PopActionRetrieveInitialState((_DWORD *)&qword_140C22E44 + 1, a1 + 7, &dword_140C22E60, (_BYTE *)a1 + 88);
        if ( (unsigned int)(qword_140C22E44 - 4) <= 2 )
        {
          byte_140C22E42 = 1;
          dword_140C22E4C = a1[2];
        }
        a1[26] = 0;
        v19 = 0;
      }
      if ( v19 < 0 )
        goto LABEL_177;
      PopReleasePolicyLock();
      *((_BYTE *)a1 + 64) = 0;
      a1[94] = 1;
      a1[95] = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 94, a1 + 95);
      v20 = a1 + 95;
      if ( (dword_140C22E4C & 0x40000000) != 0 )
      {
        a1[94] = 0;
        *v20 = 0;
      }
      if ( !byte_140C22F26 && !byte_140C22F14 && !byte_140C22F1B )
        *v20 = 0;
      PopInitializePowerPolicySimulate();
      dword_140C22E64 = dword_140C22E60;
      v21 = ((unsigned int)dword_140C22E4C >> 27) & 2;
      a1[27] = v21;
      PopAdvanceSystemPowerState(&dword_140C22E64, v21, SHIDWORD(qword_140C22E44), *v18);
      if ( (a1[2] & 8) != 0 )
        break;
      if ( !PopFastS4Check() )
      {
        dword_140C22E68 = dword_140C22E60;
        a1[11] = dword_140C22E60;
        v22 = dword_140C22E60;
        *((_BYTE *)a1 + 36) = 0;
        goto LABEL_63;
      }
      a1[11] = dword_140C22E60;
      v23 = 6;
      dword_140C22E68 = 5;
      *((_BYTE *)a1 + 36) = 1;
LABEL_64:
      a1[17] = v23;
      if ( v23 > 6 || !qword_140C239A8[3 * (int)v23] )
        goto LABEL_77;
      if ( (a1[2] & 8) != 0 )
      {
        v24 = 6;
      }
      else
      {
        if ( byte_140C22E42 )
        {
          PopSetShutdownMarker();
          goto LABEL_72;
        }
        v24 = dword_140C22E60;
      }
      PopSetSleepMarker(v24);
LABEL_72:
      PopAcquirePolicyLock();
      if ( (PopAction & 6) != 0 )
      {
        *((_BYTE *)a1 + 64) = 1;
        goto LABEL_40;
      }
      PopReleasePolicyLock();
      PopCheckpointSystemSleep(10LL);
      byte_140C22E5C = 3;
      PopDiagTraceKernelQueriesAllowed(*v16);
      if ( !*v16 || (v25 = PopSetDevicesSystemState(), a1[26] = v25, (int)(v25 + 0x80000000) < 0) || v25 == -1073741536 )
      {
        if ( (a1[26] & 0x80000000) == 0 )
        {
          PopCheckpointSystemSleep(13LL);
          HiberContext = PopAllocateHiberContext();
          a1[26] = HiberContext;
          if ( HiberContext >= 0 )
          {
            a1[29] = PopNotifyTelemetryOsState(
                       (unsigned int)qword_140C22E44,
                       dword_140C22E60,
                       dword_140C22E68,
                       a1[2],
                       1);
            PopTransitionCheckpoint(9, 0);
            if ( !byte_140C22E42 )
            {
              PopDiagTracePreSleepNotification(a1[11], dword_140C22E68, dword_140C22E54, dword_140C22E58, a1[29]);
              PopCheckpointSystemSleep(16LL);
              PopUmpoSendFlushSleepStudyLoggerNotification();
            }
            PopEsEnterSleepShutdown();
            PopThermalSxEntry();
            if ( !*((_BYTE *)a1 + 24) )
            {
              if ( byte_140C22E42 )
              {
                v74 = 1;
                v68 = 5;
                v70 = 1;
                v69 = &v74;
                v71 = 11;
                v72 = 0xFFFFF780000002C4uLL;
                v73 = 4;
                RtlSetSystemBootStatusEx((__int64)&v68, 2u, 0LL);
              }
              *((_BYTE *)a1 + 24) = 1;
            }
            v28 = 5LL;
            if ( !*((_BYTE *)a1 + 36) )
              v28 = (unsigned int)dword_140C22E60;
            PopFlushVolumes(v28);
            if ( dword_140C22E68 < dword_140C22E60 )
              dword_140C22E68 = dword_140C22E60;
            byte_140C22E5C = 2;
            if ( byte_140C22E42 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList(*(_QWORD *)&qword_140C22E78 + 48LL);
              if ( dword_140C22E54 == 2 )
                PopCriticalShutdownInProgress = 1;
              PopTransitionCheckpoint(8, 2);
              if ( PsGetCurrentProcess() == PsInitialSystemProcess )
                PopGracefulShutdown(0LL);
              PopShutdownWorkItem.Parameter = 0LL;
              PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
              PopShutdownWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
              KeSuspendThread((__int64)KeGetCurrentThread(), v56, v57, v58);
              return 3221226219LL;
            }
            v29 = a1[17];
            KeMtrrComparisonFailed = 0;
            inited = PopInitSystemSleeperThread(v29, (struct _KEVENT *)a1 + 11);
            a1[26] = inited;
            if ( inited >= 0 )
            {
              if ( !byte_140C22EF0 )
              {
                ExWakeTimersPause();
                byte_140C22EF0 = 1;
              }
              *((_QWORD *)a1 + 24) = MEMORY[0xFFFFF78000000008];
              v31 = MEMORY[0xFFFFF78000000014];
              v32 = PopWakeAlarmTimeOverride;
              *((_QWORD *)a1 + 25) = MEMORY[0xFFFFF78000000014];
              *((_QWORD *)a1 + 28) = 0LL;
              if ( v32 )
              {
                *((_QWORD *)a1 + 27) = v32;
                *((_QWORD *)a1 + 28) = -3LL;
              }
              else if ( !*((_DWORD *)PopPolicy + 22)
                     || dword_140C22E60 == 5
                     || !PopIsDozeSupported((__int64)&PopCapabilities)
                     || (dword_140C22E4C & 0x40000000) != 0 )
              {
                if ( byte_140C23A74
                  && dword_140C22E60 == 5
                  && !byte_140C23060
                  && qword_140C22DA8
                  && dword_140C22E54 == 11 )
                {
                  v36 = qword_140C22DA8 - v31;
                  *((_QWORD *)a1 + 44) = qword_140C22DA8 - v31;
                  v37 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                  *((_QWORD *)a1 + 28) = -2LL;
                  v38 = v37 + v36;
                  v39 = *((_QWORD *)a1 + 24);
                  *((_QWORD *)a1 + 44) = v38;
                  *((_QWORD *)a1 + 27) = v38 + v39;
                }
              }
              else
              {
                v34 = *((_QWORD *)a1 + 24);
                *((_QWORD *)a1 + 27) = v34;
                v35 = *(unsigned int *)(v33 + 88);
                *((_QWORD *)a1 + 28) = -1LL;
                *((_QWORD *)a1 + 27) = v34 + 10000000 * v35;
                if ( !qword_140C22F00 )
                  qword_140C22F00 = v34;
              }
              v40 = &qword_140C22EA8;
              memset(&qword_140C22EA8, 0, 0x48uLL);
              dword_140C22EA0 = 3;
              if ( *((_QWORD *)a1 + 28) == -3LL )
              {
                do
                {
                  v40[2] = *((_QWORD *)a1 + 28);
                  *v40 = *((_QWORD *)a1 + 27);
                  v40 += 3;
                }
                while ( (__int64)v40 < (__int64)&unk_140C22ED8 );
              }
              else if ( !byte_140C23060 && dword_140C22E54 != 14 )
              {
                v42 = a1 + 94;
                v43 = a1 + 95;
                if ( dword_140C22E60 == 5 && *v42 != 1 && *v43 != 1 )
                {
                  PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, v2, v4);
                  if ( *v2 || *v4 )
                  {
                    v42 = a1 + 94;
                    *v43 = 0;
                    a1[94] = 0;
                  }
                  else
                  {
                    v42 = a1 + 94;
                  }
                }
                if ( *((_QWORD *)a1 + 27) )
                {
                  if ( *((_QWORD *)a1 + 28) == -2LL )
                  {
                    if ( *v42 )
                    {
                      qword_140C22EA8 = *((_QWORD *)a1 + 27);
                      qword_140C22EB8[0] = *((_QWORD *)a1 + 28);
                    }
                    if ( *v43 )
                    {
                      qword_140C22EC0 = *((_QWORD *)a1 + 27);
                      qword_140C22ED0 = *((_QWORD *)a1 + 28);
                    }
                  }
                  else
                  {
                    do
                    {
                      *v40 = *((_QWORD *)a1 + 27);
                      v40 += 3;
                    }
                    while ( (__int64)v40 < (__int64)&unk_140C22ED8 );
                    v44 = qword_140C22EB8;
                    do
                    {
                      *v44 = *((_QWORD *)a1 + 28);
                      v44 += 3;
                    }
                    while ( (__int64)v44 < (__int64)&qword_140C22EE8 );
                  }
                }
                v45 = qword_140C22EF8;
                *((_QWORD *)a1 + 10) = qword_140C22EF8;
                if ( v45 )
                {
                  if ( v45 < *((_QWORD *)a1 + 24) + 20000000LL )
                    v45 = *((_QWORD *)a1 + 24) + 20000000LL;
                  *((_QWORD *)a1 + 10) = v45;
                }
                if ( *v42 )
                {
                  if ( *v42 != 2 || (LOBYTE(v41) = 1, PopSimulate < 0) )
                    LOBYTE(v41) = 0;
                  *((_BYTE *)a1 + 209) = v41;
                  v46 = (__int64 *)(a1 + 14);
                  v47 = (__int64 *)(a1 + 60);
                  NextWakeTime = ExGetNextWakeTime(
                                   (unsigned int)*((_QWORD *)a1 + 10) + 1,
                                   *((_QWORD *)a1 + 27),
                                   v41,
                                   (int)a1 + 56,
                                   (__int64)(a1 + 60));
                  *((_BYTE *)a1 + 384) = NextWakeTime;
                  if ( NextWakeTime )
                  {
                    qword_140C22EA8 = *v46;
                    qword_140C22EB8[0] = *v47;
                  }
                }
                else
                {
                  v46 = (__int64 *)(a1 + 14);
                  v47 = (__int64 *)(a1 + 60);
                }
                if ( *v43 )
                {
                  if ( *v43 != 2 || (LOBYTE(v41) = 1, PopSimulate < 0) )
                    LOBYTE(v41) = 0;
                  *((_BYTE *)a1 + 209) = v41;
                  v49 = ExGetNextWakeTime(
                          (unsigned int)*((_QWORD *)a1 + 10) + 1,
                          *((_QWORD *)a1 + 27),
                          v41,
                          (_DWORD)v46,
                          (__int64)v47);
                  *((_BYTE *)a1 + 384) = v49;
                  if ( v49 )
                  {
                    qword_140C22EC0 = *v46;
                    qword_140C22ED0 = *v47;
                  }
                }
              }
              qword_140C22EB0[0] = qword_140C22EA8;
              if ( qword_140C22EA8 && qword_140C22EA8 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[97] )
                qword_140C22EB0[0] = *((_QWORD *)a1 + 24) + a1[97];
              qword_140C22EC8 = qword_140C22EC0;
              if ( qword_140C22EC0 && qword_140C22EC0 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[97] )
                qword_140C22EC8 = *((_QWORD *)a1 + 24) + a1[97];
              v50 = qword_140C22EB8[0];
              if ( (unsigned __int64)(qword_140C22EB8[0] - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                v50 = *(int *)(qword_140C22EB8[0] + 8);
              *((_QWORD *)a1 + 45) = v50;
              v51 = qword_140C22ED0;
              if ( (unsigned __int64)(qword_140C22ED0 - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                v51 = *(int *)(qword_140C22ED0 + 8);
              *((_QWORD *)a1 + 46) = v51;
              qword_140C23330 = KeQueryPerformanceCounter(0LL).QuadPart;
              if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
                ExAcquireTimeRefreshLock(1u);
              ExUpdateSystemTimeFromCmos(1, 1u);
              if ( (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() )
                ExReleaseTimeRefreshLock();
              ((void (__fastcall *)(__int64, __int64))off_140C005C0)(qword_140C22EB0[0], qword_140C22EC8);
              PopBootStatCheckpointAvailable = 0;
              PopSetDevicesSystemState();
              *((_BYTE *)a1 + 112) = 1;
              PopNewWakeInfo();
              *((_QWORD *)a1 + 43) = MEMORY[0xFFFFF78000000008];
              a1[37] = dword_140C238AC;
              PpmCheckPausePpmEngineForSx();
              KeSetEvent((PRKEVENT)a1 + 12, 0, 1u);
              KeWaitForSingleObject(a1 + 78, Executive, 0, 0, 0LL);
              BugCheckParameter4 = 0LL;
              a1[26] = a1[85];
              PopSetPowerActionWatchdogState(2u);
              PpmCheckResumePpmEngineFromSx();
              v52 = dword_140C22E60;
              if ( PoResumeFromHibernate )
                v52 = dword_140C22E68;
              dword_140C22E6C = v52;
              if ( (a1[2] & 8) != 0 )
              {
                a1[11] = 6;
              }
              else
              {
                a1[11] = dword_140C22E60;
                v75 = dword_140C22E60;
              }
              v53 = dword_140C22E6C;
              v54 = v75;
              v66 = *((_QWORD *)a1 + 46);
              v55 = *((_QWORD *)a1 + 45);
              a1[10] = dword_140C22E6C;
              PopDiagTracePostSleepNotification(
                v54,
                dword_140C22E68,
                v53,
                qword_140C22EB0[0],
                qword_140C22EC8,
                v55,
                v66);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( (a1[26] & 0x80000000) != 0 && dword_140C22E60 == 5 )
              {
                DestinationString = 0LL;
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus(a1[26]);
              }
LABEL_177:
              if ( byte_140C23060 )
              {
                qword_140C23520 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_140C23044 = PopQpcTimeInMs(&qword_140C23518, &qword_140C23520);
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                qword_140C22E90 = *((_QWORD *)a1 + 43);
                ExUpdateSystemTimeFromCmos(1, 1u);
                LOBYTE(v59) = 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C00948[0])(v59) )
                  *((_BYTE *)a1 + 208) = 1;
                qword_140C23348 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2, 0LL, 0);
                qword_140C22E88 = MEMORY[0xFFFFF78000000008];
                PopDiagComputeEarlyHiberStats();
                if ( a1[10] == 4 )
                  PopDiagTraceFirmwareS3Stats();
              }
              byte_140C22E5D = 1;
              PoPowerDownActionInProgress = 0;
              PoPowerResetActionInProgress = 0;
              PpmCheckResumeStatisticsCollection();
              PsIumResumeAfterHibernate();
              if ( *((_BYTE *)a1 + 112) )
              {
                PfPowerActionNotify(3, 0LL, 0);
                PopSetDevicesSystemState();
                PfPowerActionNotify(3, 1LL, 0);
              }
              if ( *((_BYTE *)a1 + 208) )
                ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
              if ( !PopSleepReliabilityDetailedDiagEnabled )
                RtlBootStatusDisableFlushing(1);
              PopBootStatCheckpointAvailable = 1;
              PopCheckpointSystemSleep(56LL);
              v60 = *((_QWORD *)a1 + 30);
              if ( v60 )
              {
                ExFreePoolEx(v60);
                *((_QWORD *)a1 + 30) = 0LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD))off_140C005C0)(0LL, 0LL);
              a1[29] = PopNotifyTelemetryOsState(
                         (unsigned int)qword_140C22E44,
                         dword_140C22E60,
                         dword_140C22E68,
                         a1[2],
                         0);
              PopQueueBatteryStatusTimeout();
              PopExecuteOnTargetProcessors(
                (__int64)KeActiveProcessors,
                (__int64)PpmStartIllegalProcessorThrottleLogging,
                0LL,
                0LL);
              if ( *((_BYTE *)a1 + 64) )
              {
                PopReleasePolicyLock();
                *((_BYTE *)a1 + 64) = 0;
              }
              PoClearBroadcast();
              *(_QWORD *)&qword_140C22E78 = 0LL;
              PopEsExitSleep();
              PopCurrentPowerStatePrecise(a1 + 39, 0LL);
              a1[38] = dword_140C238AC;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              PopThermalSxExit(v62, v61);
              if ( !*((_BYTE *)a1 + 64) )
              {
                PopAcquirePolicyLock();
                *((_BYTE *)a1 + 64) = 1;
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                PopInitSIdle(1u);
                LOBYTE(PopAction) = 0;
                if ( (unsigned __int64)dword_140C22EA0 < 3 )
                {
                  qword_140C22EF8 = qword_140C22EB0[3 * dword_140C22EA0];
                  v63 = qword_140C22EB8[3 * dword_140C22EA0];
                  PopFullWake = 0;
                  PopPendingUserPresenceDuringSystemSleep = 0;
                  PopPendingUserPresenceMonitorOnReason = 0;
                  switch ( v63 )
                  {
                    case -1LL:
                      if ( PopDeferDoze(a1[94], a1[95], (_BYTE *)a1 + 156) )
                        qword_140C22E44 = *(_QWORD *)a1;
                      else
                        qword_140C22E44 = 0x500000002LL;
                      LOBYTE(PopAction) = PopAction | 2;
LABEL_211:
                      *((_BYTE *)a1 + 256) = 0;
                      break;
                    case -2LL:
                      if ( !qword_140C22E98 )
                        qword_140C22E98 = qword_140C22E88;
                      break;
                    case -3LL:
                      PopWakeAlarmTimeOverride = 0LL;
                      break;
                    default:
                      v64 = a1 + 95;
                      if ( dword_140C238AC == 1 )
                      {
                        if ( !*v64 )
                        {
                          qword_140C22E44 = *(_QWORD *)a1;
                          LOBYTE(PopAction) = 2;
                          goto LABEL_211;
                        }
                      }
                      else if ( !*v64 && a1[37] == a1[38] )
                      {
                        PopCheckPowerSourceAfterRtcWakeSet();
                      }
                      break;
                  }
                }
              }
              if ( byte_140C22EF0 && *((_BYTE *)a1 + 256) )
              {
                ExWakeTimersResume();
                byte_140C22EF0 = 0;
                qword_140C22EF8 = 0LL;
              }
              if ( PoResumeFromHibernate )
              {
                PopBootLoaderTraceProcess();
                PoResumeFromHibernate = 0;
              }
              byte_140C23060 = 0;
              PopResetActionDefaults();
              PopSetPowerActionState(2);
              PopReleasePolicyLock();
              if ( PopPendingUserPresenceDuringSystemSleep )
                PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason, v65);
              ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
              PopCheckForWork();
              if ( (a1[26] & 0x80000000) == 0 )
                PpmPerfReApplyStates();
              dword_140C22E54 = 16;
              qword_140C234B0 = PopCaptureTimeOnProcZero();
              return a1[26];
            }
          }
        }
      }
      else
      {
LABEL_77:
        NextSystemPowerState = PopFindNextSystemPowerState(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
        *((_BYTE *)a1 + 48) = NextSystemPowerState;
        if ( !NextSystemPowerState )
          goto LABEL_177;
        a1[26] = 0;
      }
    }
    byte_140C23060 = 1;
    *((_BYTE *)a1 + 36) = 0;
    dword_140C22E68 = 5;
    a1[11] = 6;
    v22 = dword_140C22E60;
LABEL_63:
    v23 = PopPowerStateHandlerLookup[v22];
    goto LABEL_64;
  }
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  return a1[26];
}
