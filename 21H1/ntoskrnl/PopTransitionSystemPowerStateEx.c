/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x14098DAE8
 * Callers:
 *     NtSetSystemPowerState @ 0x1409947A0 (NtSetSystemPowerState.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExFreePoolEx @ 0x14030D920 (ExFreePoolEx.c)
 *     StringCchPrintfW @ 0x14031B268 (StringCchPrintfW.c)
 *     KeSuspendThread @ 0x140356CF8 (KeSuspendThread.c)
 *     PopCheckForWork @ 0x14035CBB4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14037FF84 (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x14037FFB8 (PopSetPowerActionWatchdogState.c)
 *     PopThermalSxEntry @ 0x1403869D8 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140386ACC (PopThermalSxExit.c)
 *     PopRunMaximumIrpWorkers @ 0x140388A80 (PopRunMaximumIrpWorkers.c)
 *     ExWakeTimersPause @ 0x1403897C4 (ExWakeTimersPause.c)
 *     PopActionRetrieveInitialState @ 0x140389928 (PopActionRetrieveInitialState.c)
 *     ExWakeTimersResume @ 0x1403899E4 (ExWakeTimersResume.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140389D2C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038A0C8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14038A1E0 (PpmCheckResumeStatisticsCollection.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038A218 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038A270 (PpmCheckPausePpmEngineForSx.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038A29C (PopIgnoreBatteryStatusChange.c)
 *     PsIumResumeAfterHibernate @ 0x14038A32C (PsIumResumeAfterHibernate.c)
 *     PoSetUserPresent @ 0x1403A2A40 (PoSetUserPresent.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A45C0 (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x1403F5890 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140500490 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x14055F780 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14056607C (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140570F24 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     RtlSetSystemBootStatusEx @ 0x1406ED730 (RtlSetSystemBootStatusEx.c)
 *     MmLockPagableSectionByHandle @ 0x140704530 (MmLockPagableSectionByHandle.c)
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PopIsDozeSupported @ 0x14070FA68 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x14070FBC4 (PopFilterCapabilities.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14075FF1C (CmSetLazyFlushState.c)
 *     PopSetSleepMarker @ 0x140760174 (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1407618D8 (PopTransitionCheckpoint.c)
 *     PopNotifyTelemetryOsState @ 0x140761B14 (PopNotifyTelemetryOsState.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076279C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     PoClearBroadcast @ 0x1407637E0 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x140763838 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x140764848 (PopEsEnterSleepShutdown.c)
 *     PopInitSystemSleeperThread @ 0x140765038 (PopInitSystemSleeperThread.c)
 *     PopFastS4Check @ 0x140765120 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x1407651C4 (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x14076525C (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x1407652FC (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x1407656DC (PopDiagTraceKernelQueriesAllowed.c)
 *     PopBootLoaderTraceProcess @ 0x1407657EC (PopBootLoaderTraceProcess.c)
 *     PopAdvanceSystemPowerState @ 0x14076587C (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x1407659B0 (PpmPerfReApplyStates.c)
 *     PopEsExitSleep @ 0x140765C08 (PopEsExitSleep.c)
 *     PopInitSIdle @ 0x1407782B8 (PopInitSIdle.c)
 *     PopAcquireTransitionLock @ 0x140779288 (PopAcquireTransitionLock.c)
 *     PopInitializePowerPolicySimulate @ 0x140779808 (PopInitializePowerPolicySimulate.c)
 *     PopCurrentPowerStatePrecise @ 0x140779C64 (PopCurrentPowerStatePrecise.c)
 *     PopResetActionDefaults @ 0x14077A1E8 (PopResetActionDefaults.c)
 *     PopQueueBatteryStatusTimeout @ 0x14077A43C (PopQueueBatteryStatusTimeout.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C02A4 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x1408DC8C8 (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x1408DCE00 (PopSetShutdownMarker.c)
 *     PopZeroHiberFile @ 0x1408E2E30 (PopZeroHiberFile.c)
 *     PopDeferDoze @ 0x1408EBDB8 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x140901AE0 (PsTerminateServerSilo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098B2E0 (ExUpdateSystemTimeFromCmos.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     PopDiagComputeEarlyHiberStats @ 0x14098CDB0 (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x14098CE2C (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x14098CE80 (PopCaptureTimeOnProcZero.c)
 *     PfPowerActionNotify @ 0x14098D1AC (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x14098D3EC (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x14098F6C4 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x14099306C (IoFreePoDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x14099335C (PopFlushVolumes.c)
 *     PopNewWakeInfo @ 0x140993B9C (PopNewWakeInfo.c)
 *     PopDiagTracePostSleepNotification @ 0x140994138 (PopDiagTracePostSleepNotification.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409AE464 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x1409AE6E4 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x1409AE774 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x1409AF118 (ExGetNextWakeTime.c)
 */

NTSTATUS __fastcall PopTransitionSystemPowerStateEx(__int64 a1)
{
  int v1; // edi
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  int v5; // eax
  POWER_ACTION v6; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  POWER_ACTION v9; // esi
  int v10; // eax
  bool v11; // cc
  int v12; // eax
  POWER_ACTION v13; // ecx
  unsigned __int8 *v14; // rsi
  unsigned int v15; // eax
  int *v16; // r14
  int v17; // eax
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ecx
  char v22; // cl
  int v23; // eax
  int HiberContext; // eax
  __int64 v25; // rcx
  LONG v26; // ecx
  int inited; // eax
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 *v30; // rsi
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // r8d
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rcx
  ULONG_PTR v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v44; // edx
  char NextSystemPowerState; // al
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  _DWORD *v53; // rdx
  _DWORD *v54; // r14
  __int64 *v55; // rcx
  unsigned __int64 v56; // rcx
  __int64 *v57; // rsi
  __int64 *v58; // r12
  char NextWakeTime; // al
  char v60; // al
  __int64 v61; // rdx
  __int64 v62; // r8
  _DWORD *v63; // r9
  __int64 v64; // rax
  _DWORD *v65; // rax
  __int64 CheckStamp; // [rsp+30h] [rbp-50h]
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
  v2 = (_DWORD *)(a1 + 232);
  *(_BYTE *)(a1 + 24) = 0;
  v4 = (_DWORD *)(a1 + 236);
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 148) = 1;
  *(_DWORD *)(a1 + 152) = 1;
  *(_BYTE *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 376) = 1LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_BYTE *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  v5 = PopSimulate & 0x10000;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 388) = v5 != 0 ? 300000000 : 600000000;
  PopTransitionCheckpoint(8, 1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - 1) > 5 )
    return -1073741811;
  v6 = *(_DWORD *)a1;
  v75 = 6;
  if ( (unsigned int)(v6 - 1) > 6
    || (*(_DWORD *)(a1 + 8) & 0xCFFFFC0) != 0
    || dword_140C23414 >= 16 && v6 < PowerActionShutdown )
  {
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_BYTE *)(a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*(POWER_ACTION *)a1, *(SYSTEM_POWER_STATE *)(a1 + 4), *(_DWORD *)(a1 + 8));
    else
      return -1073741727;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v9 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 96) = CurrentServerSilo;
  if ( PsIsHostSilo((__int64)CurrentServerSilo) )
  {
    if ( v9 == PowerActionShutdown )
      PopReadShutdownPolicy();
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 8);
    *(_OWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    v10 = dword_140C23414;
    v11 = dword_140C23414 < 16;
    *(_DWORD *)(a1 + 124) = 128;
    if ( !v11 )
      v10 = 5;
    *(_DWORD *)(a1 + 120) = v10;
    PopAcquireTransitionLock(1);
    MmLockPagableSectionByHandle(ExPageLockHandle);
    PopRunMaximumIrpWorkers();
    PopUnlockAfterSleepWorkItem.Parameter = 0LL;
    PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
    PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
    CmSetLazyFlushState(0);
    PopNotifyCallbacksPreSleep();
    ExSwapinWorkerThreads(0);
    v12 = PoInitializeBroadcast();
    *(_DWORD *)(a1 + 104) = v12;
    if ( v12 >= 0 )
    {
      PopCheckPowerSourceAfterRtcWakeCancel();
      PopAcquirePolicyLock();
      *(_BYTE *)(a1 + 64) = 1;
      PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C234C8);
      if ( byte_140C23401 )
      {
        if ( byte_140C23401 != 2 )
        {
          PopReleasePolicyLock();
          PoClearBroadcast();
          ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
          return -1073741791;
        }
      }
      else
      {
        PopResetActionDefaults();
      }
      PopSetPowerActionState(3);
      *(_QWORD *)&qword_140C23438 = qword_140C233B0;
      PopExecutePowerAction(a1 + 120, 0, (__int64 *)(a1 + 12), *(_DWORD *)(a1 + 4), 1u);
      PopIgnoreBatteryStatusChange();
      PopCheckResiliencyScenarios();
      PopEnforceResiliencyScenarios((int *)(a1 + 248));
      PopExecuteOnTargetProcessors(
        (__int64)KeActiveProcessors,
        (__int64)PpmStopIllegalProcessorThrottleLogging,
        0LL,
        0LL);
      v13 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 6 )
      {
        LODWORD(qword_140C23404) = 6;
        v13 = *(_DWORD *)a1;
      }
      if ( (unsigned int)(v13 - 4) <= 2 )
      {
        PoPowerDownActionInProgress = 1;
        if ( v13 == PowerActionShutdownReset )
          PoPowerResetActionInProgress = 1;
        if ( *(_QWORD *)&PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
          PopZeroHiberFile(*(HANDLE *)&PopHiberInfo, (__int64)FileObject);
      }
      v14 = (unsigned __int8 *)(a1 + 88);
      v15 = *(_DWORD *)a1 - 2;
      *(_BYTE *)(a1 + 88) = 0;
      v16 = (int *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
      if ( v15 <= 1 )
        PoPowerDownActionInProgress = 1;
      *(_BYTE *)(a1 + 112) = 0;
LABEL_20:
      *(_DWORD *)(a1 + 104) = -1073741536;
      while ( 1 )
      {
        if ( !*(_BYTE *)(a1 + 64) )
        {
          PopAcquirePolicyLock();
          *(_BYTE *)(a1 + 64) = 1;
        }
        if ( !(_DWORD)qword_140C23404 )
        {
          *(_DWORD *)(a1 + 104) = 0;
          goto LABEL_81;
        }
        *(_BYTE *)(a1 + 144) = PopAction;
        LOBYTE(PopAction) = 0;
        v17 = *(_DWORD *)(a1 + 104);
        if ( v17 == -1073741536 )
        {
          if ( (*(_BYTE *)(a1 + 144) & 2) != 0 && (dword_140C2340C & 0x80000000) == 0 && (dword_140C2340C & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            goto LABEL_81;
          }
          PopActionRetrieveInitialState(
            (_DWORD *)&qword_140C23404 + 1,
            (_DWORD *)(a1 + 28),
            &dword_140C23420,
            (_BYTE *)(a1 + 88));
          if ( (unsigned int)(qword_140C23404 - 4) <= 2 )
          {
            byte_140C23402 = 1;
            dword_140C2340C = *(_DWORD *)(a1 + 8);
          }
          *(_DWORD *)(a1 + 104) = 0;
          v17 = 0;
        }
        if ( v17 < 0 )
          goto LABEL_81;
        PopReleasePolicyLock();
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 376) = 1;
        *(_DWORD *)(a1 + 380) = 0;
        PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, (_DWORD *)(a1 + 376), (_DWORD *)(a1 + 380));
        v18 = (_DWORD *)(a1 + 380);
        if ( (dword_140C2340C & 0x40000000) != 0 )
        {
          *(_DWORD *)(a1 + 376) = 0;
          *v18 = 0;
        }
        if ( !byte_140C234E6 && !byte_140C234D4 && !byte_140C234DB )
          *v18 = 0;
        PopInitializePowerPolicySimulate();
        dword_140C23424 = dword_140C23420;
        v19 = ((unsigned int)dword_140C2340C >> 27) & 2;
        *(_DWORD *)(a1 + 108) = v19;
        PopAdvanceSystemPowerState(&dword_140C23424, v19, SHIDWORD(qword_140C23404), *v16);
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          byte_140C23620 = 1;
          *(_BYTE *)(a1 + 36) = 0;
          dword_140C23428 = 5;
          *(_DWORD *)(a1 + 44) = 6;
          v20 = dword_140C23420;
        }
        else
        {
          if ( PopFastS4Check() )
          {
            *(_DWORD *)(a1 + 44) = dword_140C23420;
            v21 = 6;
            dword_140C23428 = 5;
            *(_BYTE *)(a1 + 36) = 1;
            goto LABEL_39;
          }
          dword_140C23428 = dword_140C23420;
          *(_DWORD *)(a1 + 44) = dword_140C23420;
          v20 = dword_140C23420;
          *(_BYTE *)(a1 + 36) = 0;
        }
        v21 = PopPowerStateHandlerLookup[v20];
LABEL_39:
        *(_DWORD *)(a1 + 68) = v21;
        if ( v21 > 6 || !qword_140C23F48[3 * (int)v21] )
          goto LABEL_144;
        if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        {
          v22 = 6;
        }
        else
        {
          if ( byte_140C23402 )
          {
            PopSetShutdownMarker();
            goto LABEL_44;
          }
          v22 = dword_140C23420;
        }
        PopSetSleepMarker(v22);
LABEL_44:
        PopAcquirePolicyLock();
        if ( (PopAction & 6) != 0 )
        {
          *(_BYTE *)(a1 + 64) = 1;
          goto LABEL_20;
        }
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL);
        byte_140C2341C = 3;
        PopDiagTraceKernelQueriesAllowed(*v14);
        if ( !*v14
          || (v23 = PopSetDevicesSystemState(), *(_DWORD *)(a1 + 104) = v23, (int)(v23 + 0x80000000) < 0)
          || v23 == -1073741536 )
        {
          if ( *(int *)(a1 + 104) >= 0 )
          {
            PopCheckpointSystemSleep(13LL);
            HiberContext = PopAllocateHiberContext();
            *(_DWORD *)(a1 + 104) = HiberContext;
            if ( HiberContext >= 0 )
            {
              *(_DWORD *)(a1 + 116) = PopNotifyTelemetryOsState(
                                        (unsigned int)qword_140C23404,
                                        dword_140C23420,
                                        dword_140C23428,
                                        *(unsigned int *)(a1 + 8),
                                        1);
              PopTransitionCheckpoint(9, 0);
              if ( !byte_140C23402 )
              {
                PopDiagTracePreSleepNotification(
                  *(_DWORD *)(a1 + 44),
                  dword_140C23428,
                  dword_140C23414,
                  dword_140C23418,
                  *(_DWORD *)(a1 + 116));
                PopCheckpointSystemSleep(16LL);
                PopUmpoSendFlushSleepStudyLoggerNotification();
              }
              PopEsEnterSleepShutdown();
              PopThermalSxEntry();
              if ( !*(_BYTE *)(a1 + 24) )
              {
                if ( byte_140C23402 )
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
                *(_BYTE *)(a1 + 24) = 1;
              }
              v25 = 5LL;
              if ( !*(_BYTE *)(a1 + 36) )
                v25 = (unsigned int)dword_140C23420;
              PopFlushVolumes(v25);
              if ( dword_140C23428 < dword_140C23420 )
                dword_140C23428 = dword_140C23420;
              byte_140C2341C = 2;
              if ( byte_140C23402 )
              {
                PopFxPrepareDevicesForShutdown();
                IoFreePoDeviceNotifyList(*(_QWORD *)&qword_140C23438 + 48LL);
                if ( dword_140C23414 == 2 )
                  PopCriticalShutdownInProgress = 1;
                PopTransitionCheckpoint(8, 2);
                if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                  PopGracefulShutdown(0LL);
                PopShutdownWorkItem.Parameter = 0LL;
                PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
                PopShutdownWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
                KeSuspendThread((__int64)KeGetCurrentThread(), v61, v62, v63);
                return -1073741077;
              }
              v26 = *(_DWORD *)(a1 + 68);
              KeMtrrComparisonFailed = 0;
              inited = PopInitSystemSleeperThread(v26, (struct _KEVENT *)(a1 + 264));
              *(_DWORD *)(a1 + 104) = inited;
              if ( inited >= 0 )
              {
                if ( !byte_140C234B0 )
                {
                  ExWakeTimersPause();
                  byte_140C234B0 = 1;
                }
                *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000008];
                v28 = MEMORY[0xFFFFF78000000014];
                v29 = PopWakeAlarmTimeOverride;
                *(_QWORD *)(a1 + 200) = MEMORY[0xFFFFF78000000014];
                *(_QWORD *)(a1 + 224) = 0LL;
                if ( v29 )
                {
                  *(_QWORD *)(a1 + 216) = v29;
                  *(_QWORD *)(a1 + 224) = -3LL;
                }
                else if ( !*((_DWORD *)PopPolicy + 22)
                       || dword_140C23420 == 5
                       || !PopIsDozeSupported((__int64)&PopCapabilities)
                       || (dword_140C2340C & 0x40000000) != 0 )
                {
                  if ( byte_140C24014
                    && dword_140C23420 == 5
                    && !byte_140C23620
                    && qword_140C23368
                    && dword_140C23414 == 11 )
                  {
                    v49 = qword_140C23368 - v28;
                    *(_QWORD *)(a1 + 352) = qword_140C23368 - v28;
                    v50 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                    *(_QWORD *)(a1 + 224) = -2LL;
                    v51 = v50 + v49;
                    v52 = *(_QWORD *)(a1 + 192);
                    *(_QWORD *)(a1 + 352) = v51;
                    *(_QWORD *)(a1 + 216) = v51 + v52;
                  }
                }
                else
                {
                  v47 = *(_QWORD *)(a1 + 192);
                  *(_QWORD *)(a1 + 216) = v47;
                  v48 = *(unsigned int *)(v46 + 88);
                  *(_QWORD *)(a1 + 224) = -1LL;
                  *(_QWORD *)(a1 + 216) = v47 + 10000000 * v48;
                  if ( !qword_140C234C0 )
                    qword_140C234C0 = v47;
                }
                v30 = &qword_140C23468;
                memset(&qword_140C23468, 0, 0x48uLL);
                dword_140C23460 = 3;
                if ( *(_QWORD *)(a1 + 224) == -3LL )
                {
                  do
                  {
                    v30[2] = *(_QWORD *)(a1 + 224);
                    *v30 = *(_QWORD *)(a1 + 216);
                    v30 += 3;
                  }
                  while ( (__int64)v30 < (__int64)&unk_140C23498 );
                }
                else if ( !byte_140C23620 && dword_140C23414 != 14 )
                {
                  v53 = (_DWORD *)(a1 + 376);
                  v54 = (_DWORD *)(a1 + 380);
                  if ( dword_140C23420 == 5 && *v53 != 1 && *v54 != 1 )
                  {
                    PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, v2, v4);
                    if ( *v2 || *v4 )
                    {
                      v53 = (_DWORD *)(a1 + 376);
                      *v54 = 0;
                      *(_DWORD *)(a1 + 376) = 0;
                    }
                    else
                    {
                      v53 = (_DWORD *)(a1 + 376);
                    }
                  }
                  if ( *(_QWORD *)(a1 + 216) )
                  {
                    if ( *(_QWORD *)(a1 + 224) == -2LL )
                    {
                      if ( *v53 )
                      {
                        qword_140C23468 = *(_QWORD *)(a1 + 216);
                        qword_140C23478[0] = *(_QWORD *)(a1 + 224);
                      }
                      if ( *v54 )
                      {
                        qword_140C23480 = *(_QWORD *)(a1 + 216);
                        qword_140C23490 = *(_QWORD *)(a1 + 224);
                      }
                    }
                    else
                    {
                      do
                      {
                        *v30 = *(_QWORD *)(a1 + 216);
                        v30 += 3;
                      }
                      while ( (__int64)v30 < (__int64)&unk_140C23498 );
                      v55 = qword_140C23478;
                      do
                      {
                        *v55 = *(_QWORD *)(a1 + 224);
                        v55 += 3;
                      }
                      while ( (__int64)v55 < (__int64)&qword_140C234A8 );
                    }
                  }
                  v56 = qword_140C234B8;
                  *(_QWORD *)(a1 + 80) = qword_140C234B8;
                  if ( v56 )
                  {
                    if ( v56 < *(_QWORD *)(a1 + 192) + 20000000LL )
                      v56 = *(_QWORD *)(a1 + 192) + 20000000LL;
                    *(_QWORD *)(a1 + 80) = v56;
                  }
                  if ( *v53 )
                  {
                    if ( *v53 != 2 || (LOBYTE(v31) = 1, PopSimulate < 0) )
                      LOBYTE(v31) = 0;
                    *(_BYTE *)(a1 + 209) = v31;
                    v57 = (__int64 *)(a1 + 56);
                    v58 = (__int64 *)(a1 + 240);
                    NextWakeTime = ExGetNextWakeTime(
                                     (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                                     *(_QWORD *)(a1 + 216),
                                     v31,
                                     (int)a1 + 56,
                                     a1 + 240);
                    *(_BYTE *)(a1 + 384) = NextWakeTime;
                    if ( NextWakeTime )
                    {
                      qword_140C23468 = *v57;
                      qword_140C23478[0] = *v58;
                    }
                  }
                  else
                  {
                    v57 = (__int64 *)(a1 + 56);
                    v58 = (__int64 *)(a1 + 240);
                  }
                  if ( *v54 )
                  {
                    if ( *v54 != 2 || (LOBYTE(v31) = 1, PopSimulate < 0) )
                      LOBYTE(v31) = 0;
                    *(_BYTE *)(a1 + 209) = v31;
                    v60 = ExGetNextWakeTime(
                            (unsigned int)*(_QWORD *)(a1 + 80) + 1,
                            *(_QWORD *)(a1 + 216),
                            v31,
                            (_DWORD)v57,
                            (__int64)v58);
                    *(_BYTE *)(a1 + 384) = v60;
                    if ( v60 )
                    {
                      qword_140C23480 = *v57;
                      qword_140C23490 = *v58;
                    }
                  }
                }
                qword_140C23470[0] = qword_140C23468;
                if ( qword_140C23468
                  && qword_140C23468 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
                {
                  qword_140C23470[0] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
                }
                qword_140C23488 = qword_140C23480;
                if ( qword_140C23480
                  && qword_140C23480 < *(_QWORD *)(a1 + 192) + (unsigned __int64)*(unsigned int *)(a1 + 388) )
                {
                  qword_140C23488 = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 388);
                }
                v32 = qword_140C23478[0];
                if ( (unsigned __int64)(qword_140C23478[0] - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                  v32 = *(int *)(qword_140C23478[0] + 8);
                *(_QWORD *)(a1 + 360) = v32;
                v33 = qword_140C23490;
                if ( (unsigned __int64)(qword_140C23490 - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                  v33 = *(int *)(qword_140C23490 + 8);
                *(_QWORD *)(a1 + 368) = v33;
                qword_140C238F0 = KeQueryPerformanceCounter(0LL).QuadPart;
                ExUpdateSystemTimeFromCmos(1, 1u);
                ((void (__fastcall *)(__int64, __int64))off_140C005C0)(qword_140C23470[0], qword_140C23488);
                PopBootStatCheckpointAvailable = 0;
                PopSetDevicesSystemState();
                *(_BYTE *)(a1 + 112) = 1;
                PopNewWakeInfo();
                *(_QWORD *)(a1 + 344) = MEMORY[0xFFFFF78000000008];
                *(_DWORD *)(a1 + 148) = dword_140C23ECC;
                PpmCheckPausePpmEngineForSx();
                KeSetEvent((PRKEVENT)(a1 + 288), 0, 1u);
                KeWaitForSingleObject((PVOID)(a1 + 312), Executive, 0, 0, 0LL);
                BugCheckParameter4 = 0LL;
                *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 340);
                PopSetPowerActionWatchdogState(2u);
                PpmCheckResumePpmEngineFromSx();
                v34 = dword_140C23420;
                if ( PoResumeFromHibernate )
                  v34 = dword_140C23428;
                dword_140C2342C = v34;
                if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
                {
                  *(_DWORD *)(a1 + 44) = 6;
                }
                else
                {
                  *(_DWORD *)(a1 + 44) = dword_140C23420;
                  v75 = dword_140C23420;
                }
                v35 = dword_140C2342C;
                v36 = v75;
                CheckStamp = *(_QWORD *)(a1 + 368);
                v37 = *(_QWORD *)(a1 + 360);
                *(_DWORD *)(a1 + 40) = dword_140C2342C;
                PopDiagTracePostSleepNotification(
                  v36,
                  dword_140C23428,
                  v35,
                  qword_140C23470[0],
                  qword_140C23488,
                  v37,
                  CheckStamp);
                if ( KeMtrrComparisonFailed )
                  PopDiagTraceMtrrError();
                if ( *(int *)(a1 + 104) < 0 && dword_140C23420 == 5 )
                {
                  DestinationString = 0LL;
                  StringCchPrintfW(&PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                  RtlInitUnicodeString(&DestinationString, &PopHibernationErrorSubstitutionString);
                  IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                  PopDiagTraceHibernateErrorStatus(*(unsigned int *)(a1 + 104));
                }
LABEL_81:
                if ( byte_140C23620 )
                {
                  qword_140C23AE0 = KeQueryPerformanceCounter(0LL).QuadPart;
                  dword_140C23604 = PopQpcTimeInMs(&qword_140C23AD8, &qword_140C23AE0);
                }
                if ( *(int *)(a1 + 104) >= 0 )
                {
                  qword_140C23450 = *(_QWORD *)(a1 + 344);
                  ExUpdateSystemTimeFromCmos(1, 1u);
                  LOBYTE(v38) = 1;
                  if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C00948[0])(v38) )
                    *(_BYTE *)(a1 + 208) = 1;
                  qword_140C23908 = KeQueryPerformanceCounter(0LL).QuadPart;
                  PfPowerActionNotify(2, 0LL, 0);
                  qword_140C23448 = MEMORY[0xFFFFF78000000008];
                  PopDiagComputeEarlyHiberStats();
                  if ( *(_DWORD *)(a1 + 40) == 4 )
                    PopDiagTraceFirmwareS3Stats();
                }
                byte_140C2341D = 1;
                PoPowerDownActionInProgress = 0;
                PoPowerResetActionInProgress = 0;
                PpmCheckResumeStatisticsCollection();
                PsIumResumeAfterHibernate();
                if ( *(_BYTE *)(a1 + 112) )
                {
                  PfPowerActionNotify(3, 0LL, 0);
                  PopSetDevicesSystemState();
                  PfPowerActionNotify(3, 1LL, 0);
                }
                if ( *(_BYTE *)(a1 + 208) )
                  ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
                if ( !PopSleepReliabilityDetailedDiagEnabled )
                  RtlBootStatusDisableFlushing(1);
                PopBootStatCheckpointAvailable = 1;
                PopCheckpointSystemSleep(56LL);
                v39 = *(_QWORD *)(a1 + 240);
                if ( v39 )
                {
                  ExFreePoolEx(v39);
                  *(_QWORD *)(a1 + 240) = 0LL;
                }
                ((void (__fastcall *)(_QWORD, _QWORD))off_140C005C0)(0LL, 0LL);
                *(_DWORD *)(a1 + 116) = PopNotifyTelemetryOsState(
                                          (unsigned int)qword_140C23404,
                                          dword_140C23420,
                                          dword_140C23428,
                                          *(unsigned int *)(a1 + 8),
                                          0);
                PopQueueBatteryStatusTimeout();
                PopExecuteOnTargetProcessors(
                  (__int64)KeActiveProcessors,
                  (__int64)PpmStartIllegalProcessorThrottleLogging,
                  0LL,
                  0LL);
                if ( *(_BYTE *)(a1 + 64) )
                {
                  PopReleasePolicyLock();
                  *(_BYTE *)(a1 + 64) = 0;
                }
                PoClearBroadcast();
                *(_QWORD *)&qword_140C23438 = 0LL;
                PopEsExitSleep();
                PopCurrentPowerStatePrecise((_OWORD *)(a1 + 156), 0LL);
                *(_DWORD *)(a1 + 152) = dword_140C23ECC;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
                PopThermalSxExit(v41, v40);
                if ( !*(_BYTE *)(a1 + 64) )
                {
                  PopAcquirePolicyLock();
                  *(_BYTE *)(a1 + 64) = 1;
                }
                if ( *(int *)(a1 + 104) < 0 )
                  goto LABEL_102;
                PopInitSIdle(1u);
                LOBYTE(PopAction) = 0;
                if ( (unsigned __int64)dword_140C23460 >= 3 )
                  goto LABEL_102;
                qword_140C234B8 = qword_140C23470[3 * dword_140C23460];
                v64 = qword_140C23478[3 * dword_140C23460];
                PopFullWake = 0;
                PopPendingUserPresenceDuringSystemSleep = 0;
                PopPendingUserPresenceMonitorOnReason = 0;
                switch ( v64 )
                {
                  case -1LL:
                    if ( PopDeferDoze(*(_DWORD *)(a1 + 376), *(_DWORD *)(a1 + 380), (_BYTE *)(a1 + 156)) )
                      qword_140C23404 = *(_QWORD *)a1;
                    else
                      qword_140C23404 = 0x500000002LL;
                    LOBYTE(PopAction) = PopAction | 2;
                    break;
                  case -2LL:
                    if ( !qword_140C23458 )
                      qword_140C23458 = qword_140C23448;
                    goto LABEL_102;
                  case -3LL:
                    PopWakeAlarmTimeOverride = 0LL;
                    goto LABEL_102;
                  default:
                    v65 = (_DWORD *)(a1 + 380);
                    if ( dword_140C23ECC != 1 )
                    {
                      if ( !*v65 && *(_DWORD *)(a1 + 148) == *(_DWORD *)(a1 + 152) )
                        PopCheckPowerSourceAfterRtcWakeSet();
                      goto LABEL_102;
                    }
                    if ( *v65 )
                    {
LABEL_102:
                      if ( byte_140C234B0 && *(_BYTE *)(a1 + 256) )
                      {
                        ExWakeTimersResume();
                        byte_140C234B0 = 0;
                        qword_140C234B8 = 0LL;
                      }
                      if ( PoResumeFromHibernate )
                      {
                        PopBootLoaderTraceProcess();
                        PoResumeFromHibernate = 0;
                      }
                      byte_140C23620 = 0;
                      PopResetActionDefaults();
                      PopSetPowerActionState(2);
                      PopReleasePolicyLock();
                      if ( PopPendingUserPresenceDuringSystemSleep )
                        PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason, v42);
                      ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
                      PopCheckForWork();
                      if ( *(int *)(a1 + 104) >= 0 )
                        PpmPerfReApplyStates();
                      dword_140C23414 = 16;
                      qword_140C23A70 = PopCaptureTimeOnProcZero();
                      return *(_DWORD *)(a1 + 104);
                    }
                    qword_140C23404 = *(_QWORD *)a1;
                    LOBYTE(PopAction) = 2;
                    break;
                }
                *(_BYTE *)(a1 + 256) = 0;
                goto LABEL_102;
              }
            }
          }
        }
        else
        {
LABEL_144:
          NextSystemPowerState = PopFindNextSystemPowerState(*v16, *(_BYTE *)(a1 + 36), (_BYTE *)(a1 + 88));
          *(_BYTE *)(a1 + 48) = NextSystemPowerState;
          if ( !NextSystemPowerState )
            goto LABEL_81;
          *(_DWORD *)(a1 + 104) = 0;
        }
      }
    }
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    return *(_DWORD *)(a1 + 104);
  }
  else
  {
    if ( (unsigned int)(v9 - 4) > 2 )
    {
      v1 = -1073741637;
    }
    else
    {
      v44 = -2147483599;
      if ( v9 != PowerActionShutdownReset )
        v44 = -1073741077;
      *(_DWORD *)(a1 + 32) = v44;
      PsTerminateServerSilo(*(_QWORD *)(a1 + 96));
    }
    *(_DWORD *)(a1 + 104) = v1;
    return v1;
  }
}
