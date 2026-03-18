/*
 * XREFs of NtPowerInformation @ 0x14074F950
 * Callers:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405DF34C (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405DF54C (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405DF828 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14074D3C8 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14074F8BC (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140765A28 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14095E318 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1409A233C (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1409A23E0 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1409A2440 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A24C0 (TtmpCalloutWatchdogCallback.c)
 *     VslRegisterIumPowerCallbacks @ 0x140B31688 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     PopDisksRegisteredForIdle @ 0x140259728 (PopDisksRegisteredForIdle.c)
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140369ECC (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerRequestReferenceRelease @ 0x140369FDC (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14036A2C8 (PopPowerRequestReferenceAcquire.c)
 *     PoPowerOffMonitor @ 0x14038B628 (PoPowerOffMonitor.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14039A0B4 (PopDiagTraceSessionDisplayStateChange.c)
 *     PpmHeteroHgsBackupInit @ 0x1403DC9D4 (PpmHeteroHgsBackupInit.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1405C70B4 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x1405C70FC (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405C8AFC (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1405C8BDC (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x1405C9FA8 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1405CC6C4 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopUpdatePowerButtonHoldState @ 0x1405D8DC8 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x1405DD354 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x14063DABC (ExGetWakeTimerList.c)
 *     PspIsContextAdmin @ 0x1406950FC (PspIsContextAdmin.c)
 *     PopEtEnergyTrackerQuery @ 0x1406A7BF4 (PopEtEnergyTrackerQuery.c)
 *     PopGetSettingValue @ 0x1406C0510 (PopGetSettingValue.c)
 *     PopProcessorInformation @ 0x1406C800C (PopProcessorInformation.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406D75F4 (ExCheckFullProcessInformationAccess.c)
 *     PopCapturePlatformRole @ 0x1406E66AC (PopCapturePlatformRole.c)
 *     PopIsRunningAsLocalSystem @ 0x1406EBAD8 (PopIsRunningAsLocalSystem.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     PopCurrentPowerState @ 0x140750EC4 (PopCurrentPowerState.c)
 *     PopBlackBoxUpdate @ 0x140750F1C (PopBlackBoxUpdate.c)
 *     PopGetSettingNotificationName @ 0x140751120 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14075140C (PopSetPowerSettingValue.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     PopFreeSessionState @ 0x1407EC100 (PopFreeSessionState.c)
 *     PopDiagTraceSessionStates @ 0x1407ED774 (PopDiagTraceSessionStates.c)
 *     PopCurrentPowerStatePrecise @ 0x1407ED930 (PopCurrentPowerStatePrecise.c)
 *     PopPowerRequestActionInfo @ 0x1407EF750 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407EF848 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407F2028 (PopProcessSessionDisplayStateChange.c)
 *     PopMonitorInvocation @ 0x1407F2930 (PopMonitorInvocation.c)
 *     PopPdcInvocation @ 0x1407FCAFC (PopPdcInvocation.c)
 *     PopUmpoSendLegacyEvent @ 0x1407FE938 (PopUmpoSendLegacyEvent.c)
 *     PopDiagTraceServiceNotification @ 0x140804C08 (PopDiagTraceServiceNotification.c)
 *     PopReadHiberbootPolicy @ 0x140805E9C (PopReadHiberbootPolicy.c)
 *     PopGetWakeSource @ 0x140806788 (PopGetWakeSource.c)
 *     PopDiagTraceAppPowerMessage @ 0x140806904 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140807124 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopSuspendResumeInvocation @ 0x140807718 (PopSuspendResumeInvocation.c)
 *     PopSetHiberPersistedRegValue @ 0x1408082AC (PopSetHiberPersistedRegValue.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140808A40 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSetDisplayStatus @ 0x140809408 (PopSetDisplayStatus.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopUpdateConsoleDisplayState @ 0x14080D028 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x140810E2C (PopLogSleepDisabled.c)
 *     PopHibernateEvaluation @ 0x140818DF4 (PopHibernateEvaluation.c)
 *     PopResetCurrentPolicies @ 0x1408193F4 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1408194D8 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x1408197A0 (PopVerifySystemPowerPolicy.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopEtEnergyTrackerCreate @ 0x140857300 (PopEtEnergyTrackerCreate.c)
 *     PopLoggingInformation @ 0x1409898D8 (PopLoggingInformation.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140989F5C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopApplyAdminPolicy @ 0x14098C71C (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x14098C7F4 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x14098E9D8 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14098ED44 (PpmSetSimulatedLoad.c)
 *     PopSetHiberFileSize @ 0x14098F9D0 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14098FA74 (PopSetHiberFileType.c)
 *     PopSendSuspendResumeNotifications @ 0x14098FEF4 (PopSendSuspendResumeNotifications.c)
 *     PopBatteryDeviceState @ 0x1409949AC (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x140996FDC (PopPdcCsDeviceNotification.c)
 *     PopScreenOff @ 0x140997374 (PopScreenOff.c)
 *     PpmParkApplyForcedMask @ 0x14099E10C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099E20C (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x1409A40F8 (TtmCleanupCurrentSession.c)
 *     TtmDispatchApi @ 0x1409A6270 (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     PopInitPlatformSettings @ 0x140B2D708 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  POWER_INFORMATION_LEVEL v8; // ebx
  __int64 v9; // rdx
  __int128 *Pool2; // r14
  __int64 v11; // rcx
  KPROCESSOR_MODE v12; // r14
  ULONG v13; // r13d
  void *v14; // r15
  volatile void *v15; // r12
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  LUID v28; // rcx
  int v29; // eax
  PVOID v30; // rcx
  unsigned __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // r8
  _BYTE *v35; // rcx
  int v36; // r13d
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  __int64 *v41; // rax
  bool v42; // zf
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // ecx
  ULONG Length; // [rsp+50h] [rbp-6E8h]
  unsigned int Length_4; // [rsp+54h] [rbp-6E4h] BYREF
  char v55; // [rsp+58h] [rbp-6E0h]
  KPROCESSOR_MODE PreviousMode; // [rsp+59h] [rbp-6DFh]
  char v57; // [rsp+5Ah] [rbp-6DEh]
  void *Src; // [rsp+60h] [rbp-6D8h]
  char v59; // [rsp+68h] [rbp-6D0h]
  PVOID P; // [rsp+70h] [rbp-6C8h]
  int v61; // [rsp+78h] [rbp-6C0h]
  POWER_INFORMATION_LEVEL v62; // [rsp+80h] [rbp-6B8h]
  _QWORD v63[2]; // [rsp+88h] [rbp-6B0h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-6A0h]
  PVOID v65[2]; // [rsp+A0h] [rbp-698h] BYREF
  _QWORD v66[192]; // [rsp+B0h] [rbp-688h] BYREF
  _BYTE v67[64]; // [rsp+6B0h] [rbp-88h] BYREF

  v64 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v62 = InformationLevel;
  v59 = 0;
  memset(v66, 0, sizeof(v66));
  LODWORD(v63[0]) = 0;
  v63[1] = 0LL;
  Src = 0LL;
  Length_4 = 0;
  Pool2 = 0LL;
  P = 0LL;
  v65[0] = 0LL;
  LOBYTE(v11) = 0;
  v57 = 0;
  v55 = 0;
  if ( (unsigned int)v8 > (SessionLockState|ProcessorPerfStates) )
    goto LABEL_217;
  v12 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v12;
  v13 = InputBuffer != 0LL ? InputBufferLength : 0;
  v14 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
  v65[1] = v14;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v15 = (volatile void *)(v64 & -(__int64)(Length != 0));
  if ( v12 )
  {
    if ( (unsigned int)v8 <= SetPowerSettingValue && (v16 = 50462912, _bittest(&v16, v8))
      || (v17 = (unsigned int)(v8 - 30), (unsigned int)v17 <= 0x3D)
      && (v11 = 0x209E00E385CA1E1FLL, _bittest64(&v11, v17)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      Pool2 = (__int128 *)P;
      goto LABEL_66;
    }
    v18 = (unsigned int)(v8 - 37);
    if ( (unsigned int)v18 <= 0x3A && (v11 = 0x608801808940903LL, _bittest64(&v11, v18)) || (unsigned int)(v8 - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      v61 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        Pool2 = (__int128 *)P;
        goto LABEL_66;
      }
      v8 = v62;
    }
    if ( (unsigned int)(v8 - 92) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(v12);
      v61 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        Pool2 = (__int128 *)P;
        goto LABEL_66;
      }
      v8 = v62;
    }
    v19 = (unsigned int)(v8 - 28);
    if ( (unsigned int)v19 <= 0x32 )
    {
      v11 = 0x4000000420001LL;
      if ( _bittest64(&v11, v19) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v61 = -1073741790;
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          Pool2 = (__int128 *)P;
          goto LABEL_66;
        }
      }
    }
    if ( v8 == SuspendResumeInvocation && !PopIsRunningAsLocalSystem() )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      v61 = -1073741790;
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      Pool2 = (__int128 *)P;
      goto LABEL_66;
    }
    if ( v14 )
    {
      v20 = (unsigned int)(v8 - 11);
      if ( (unsigned int)v20 > 0x3D || (v21 = 0x2001800900000001LL, !_bittest64(&v21, v20)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          v61 = -1073741637;
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          Pool2 = (__int128 *)P;
          goto LABEL_66;
        }
      }
      v22 = (unsigned int)(v8 - 38);
      if ( (unsigned int)v22 <= 0x39 && (v23 = 0x218000004422401LL, _bittest64(&v23, v22))
        || v8 == AdministratorPowerPolicy )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v61 = -1073741790;
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          Pool2 = (__int128 *)P;
          goto LABEL_66;
        }
      }
      v24 = (unsigned int)(v8 - 37);
      if ( (unsigned int)v24 > 0x3B || (v25 = 0xFAE005C28F40BC3LL, !_bittest64(&v25, v24)) )
      {
        if ( (unsigned int)(v8 - 2) > 1 && v8 != ProcessorInformation )
        {
          v28 = SeShutdownPrivilege;
          if ( v8 == SystemReserveHiberFile )
            v28 = SeCreatePagefilePrivilege;
          v64 = (unsigned __int64)v28;
          if ( !SeSinglePrivilegeCheck(v28, v12) )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741727;
            v61 = -1073741727;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
            Pool2 = (__int128 *)P;
            goto LABEL_66;
          }
        }
      }
      if ( v13 )
      {
        v26 = (unsigned __int64)v14 + v13;
        if ( v26 > 0x7FFFFFFF0000LL || v26 < (unsigned __int64)v14 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( v13 > 0x40 )
      {
        Pool2 = (__int128 *)ExAllocatePool2(256LL, v13, 544040269LL);
        P = Pool2;
        if ( !Pool2 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          v61 = -1073741670;
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
          goto LABEL_66;
        }
      }
      else
      {
        Pool2 = (__int128 *)v67;
        P = v67;
      }
      memmove(Pool2, v14, v13);
    }
    else
    {
      Pool2 = (__int128 *)P;
    }
    if ( v15 )
      ProbeForWrite(v15, Length, 1u);
    LOBYTE(v11) = v57;
  }
  else
  {
    Pool2 = (__int128 *)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
    P = Pool2;
  }
  if ( (unsigned int)v8 > TraceApplicationPowerMessageEnd || (v29 = -234812256, !_bittest(&v29, v8)) )
  {
LABEL_76:
    v32 = (unsigned int)(v8 - 38);
    if ( (unsigned int)v32 > 0x3A || (v9 = 0x7FFE3BE75BE26EDLL, !_bittest64(&v9, v32)) )
    {
      PopAcquirePolicyLock(v11);
      LOBYTE(v11) = 1;
      v57 = 1;
    }
  }
  switch ( v8 )
  {
    case SystemPowerPolicyAc:
    case SystemPowerPolicyDc:
      if ( !Pool2 )
      {
        if ( !v15 )
          goto LABEL_140;
LABEL_172:
        v48 = &unk_140C231E4;
LABEL_174:
        Src = v48;
        Length_4 = 232;
        goto LABEL_60;
      }
      if ( v13 < 0xE8 )
        goto LABEL_173;
      IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0LL, 0LL, Pool2, v13);
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        goto LABEL_172;
      goto LABEL_66;
    case VerifySystemPolicyAc:
    case VerifySystemPolicyDc:
      if ( !Pool2 || !v15 )
        goto LABEL_140;
      if ( v13 < 0xE8 )
        goto LABEL_173;
      IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, v66);
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_66;
      v48 = v66;
      goto LABEL_174;
    case SystemPowerCapabilities:
      if ( !Pool2 )
      {
        if ( !v15 )
          goto LABEL_140;
        goto LABEL_94;
      }
      if ( (PopSimulate & 1) == 0 )
      {
LABEL_140:
        InputBuffer = v14;
LABEL_217:
        IsAppContainerOrIdentifyLevelContext = -1073741811;
        goto LABEL_66;
      }
      if ( v13 < 0x4C )
        goto LABEL_173;
      PopCapabilities = *Pool2;
      unk_140C23410 = Pool2[1];
      xmmword_140C23420 = Pool2[2];
      xmmword_140C23430 = Pool2[3];
      qword_140C23440 = *((_QWORD *)Pool2 + 8);
      dword_140C23448 = *((_DWORD *)Pool2 + 18);
      IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(v11);
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
LABEL_94:
        BYTE9(PopCapabilities) = PopFullWake & 1;
        byte_140C23415 = PopDisksRegisteredForIdle();
        PopFilterCapabilities(&PopCapabilities, v66);
        Src = v66;
        Length_4 = 76;
        Pool2 = (__int128 *)P;
        goto LABEL_60;
      }
LABEL_66:
      v30 = v65[0];
      if ( v65[0] )
        ExFreePoolWithTag(v65[0], 0);
      if ( v55 )
        ExFreePoolWithTag(Src, 0x206D654Du);
      if ( v57 )
        PopReleasePolicyLock(v30, v9);
      if ( Pool2 && Pool2 != InputBuffer && Pool2 != (__int128 *)v67 )
        ExFreePoolWithTag(Pool2, 0x206D654Du);
      return IsAppContainerOrIdentifyLevelContext;
    case SystemBatteryState:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      PopCurrentPowerState(v66);
      Src = v66;
      Length_4 = 32;
      goto LABEL_60;
    case SystemPowerStateHandler:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 0x18 )
        goto LABEL_173;
      v9 = *(unsigned int *)Pool2;
      if ( (unsigned int)v9 >= 7 )
        goto LABEL_140;
      v34 = 3 * v9;
      if ( qword_140C23348[3 * v9] )
      {
        if ( (_DWORD)v9 != 5
          && ((_DWORD)v9 != 4 || (void (__fastcall __noreturn *)())qword_140C233A8 != PopShutdownHandler) )
        {
          goto LABEL_140;
        }
      }
      *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v9) = *Pool2;
      qword_140C23350[3 * v9] = *((_QWORD *)Pool2 + 2);
      word_140C23345[12 * v9] = 0;
      byte_140C23347[24 * v9] = 0;
      v35 = 0LL;
      v36 = 0;
      if ( (_DWORD)v9 )
      {
        v37 = v9 - 1;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( !v40 )
              {
                v35 = (char *)&PopCapabilities + 7;
                goto LABEL_132;
              }
              if ( v40 != 2 )
              {
LABEL_132:
                v9 = v36 & (unsigned int)-(byte_140C23344[8 * v34] != 0);
                if ( (int)v9 > (int)qword_140C23440 )
                  LODWORD(qword_140C23440) = byte_140C23344[8 * v34] != 0 ? v36 : 0;
                if ( v35 && *v35 != 1 )
                {
                  *v35 = 1;
                  PopResetCurrentPolicies(v35);
                }
LABEL_60:
                if ( Src && v15 )
                {
                  if ( Length < Length_4 )
                  {
LABEL_173:
                    IsAppContainerOrIdentifyLevelContext = -1073741789;
                    goto LABEL_65;
                  }
                  memmove((void *)v15, Src, Length_4);
                }
                IsAppContainerOrIdentifyLevelContext = 0;
LABEL_65:
                InputBuffer = v14;
                goto LABEL_66;
              }
              v36 = 4;
              v42 = (PopSimulate & 0x2000) == 0;
              v35 = &unk_140C23411;
            }
            else
            {
              v36 = 5;
              v42 = (PopSimulate & 0x2000) == 0;
              v35 = (char *)&PopCapabilities + 6;
            }
          }
          else
          {
            v36 = 4;
            v42 = (PopSimulate & 0x20) == 0;
            v35 = (char *)&PopCapabilities + 5;
          }
        }
        else
        {
          v36 = 3;
          v42 = (PopSimulate & 0x40) == 0;
          v35 = (char *)&PopCapabilities + 4;
        }
      }
      else
      {
        v36 = 2;
        v42 = (PopSimulate & 8) == 0;
        v35 = (char *)&PopCapabilities + 3;
      }
      if ( !v42 )
        v35 = 0LL;
      goto LABEL_132;
    case ProcessorStateHandler:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      PpmHeteroHgsBackupInit();
      Src = &PpmProcessorDriverDispatchTable;
      Length_4 = 272;
      goto LABEL_60;
    case SystemPowerPolicyCurrent:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v48 = PopPolicy;
      goto LABEL_174;
    case AdministratorPowerPolicy:
      if ( Pool2 )
      {
        if ( v13 < 0x18 )
          goto LABEL_173;
        IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(v11, Pool2);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_66;
        IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(v49);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_66;
      }
      else if ( !v15 )
      {
        goto LABEL_140;
      }
      Src = &PopAdminPolicy;
      Length_4 = 24;
      goto LABEL_60;
    case SystemReserveHiberFile:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( !v13 )
        goto LABEL_173;
      PopAcquireTransitionLock(3LL);
      PopAcquirePolicyLock(v43);
      PopHiberEnabledReg = *(_BYTE *)Pool2 != 0;
      PopSetHiberPersistedRegValue(0LL);
      IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0LL, 0LL, 0LL);
      PopReleasePolicyLock(v45, v44);
      PopReleaseTransitionLock(3LL);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_65;
      goto LABEL_60;
    case ProcessorInformation:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v46 = PopProcessorInformation((__int64)v66, v9, KeGetCurrentPrcb()->Group, &Length_4);
      Pool2 = (__int128 *)P;
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      IsAppContainerOrIdentifyLevelContext = v46;
      if ( v46 < 0 )
        goto LABEL_66;
      Src = v66;
      goto LABEL_60;
    case SystemPowerInformation:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      HIDWORD(v66[0]) = dword_140C226E4;
      LODWORD(v66[1]) = dword_140C226EC - dword_140C226E8;
      BYTE4(v66[1]) = PopCoolingMode;
      Src = v66;
      Length_4 = 16;
      goto LABEL_60;
    case ProcessorStateHandler2:
    case ProcessorPowerPolicyAc:
    case ProcessorPowerPolicyDc:
    case VerifyProcessorPowerPolicyAc:
    case VerifyProcessorPowerPolicyDc:
    case ProcessorPowerPolicyCurrent:
      IsAppContainerOrIdentifyLevelContext = -1073741822;
      goto LABEL_65;
    case LastWakeTime:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v41 = &qword_140C22808;
      goto LABEL_124;
    case LastSleepTime:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      v41 = &qword_140C22810;
LABEL_124:
      Src = v41;
      Length_4 = 8;
      goto LABEL_60;
    case SystemExecutionState:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      if ( dword_140C036B8 )
        LODWORD(v66[0]) |= 1u;
      if ( dword_140C03688 )
        LODWORD(v66[0]) |= 2u;
      Src = v66;
      Length_4 = 4;
      goto LABEL_60;
    case SystemPowerStateNotifyHandler:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 0x10 )
        goto LABEL_173;
      if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)Pool2 )
        goto LABEL_140;
      PopPowerStateNotifyHandler = *Pool2;
      goto LABEL_60;
    case SystemPowerStateLogging:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(v65, v63);
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_66;
      Src = v65[0];
      Length_4 = v63[0];
      goto LABEL_60;
    case SystemPowerLoggingEntry:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 8 )
        goto LABEL_173;
      v47 = PopLogSleepDisabled(*(unsigned int *)Pool2, *((unsigned int *)Pool2 + 1), 0LL, 0LL);
      goto LABEL_83;
    case SetPowerSettingValue:
      if ( !Pool2 )
        goto LABEL_140;
      if ( v15 )
        goto LABEL_140;
      if ( Length )
        goto LABEL_140;
      if ( v13 < 0x1C )
        goto LABEL_140;
      v64 = (unsigned __int64)Pool2 + 24;
      v50 = *((_DWORD *)Pool2 + 6);
      if ( !v50 )
        goto LABEL_140;
      v63[0] = (char *)Pool2 + 20;
      if ( *((_DWORD *)Pool2 + 5) > 2u )
        goto LABEL_140;
      InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v13 != 0));
      if ( *(_DWORD *)Pool2 != 1 )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741736;
        goto LABEL_66;
      }
      v51 = v50 + 28;
      v52 = -1;
      if ( v51 >= 0x1C )
        v52 = v51;
      Length_4 = v52;
      IsAppContainerOrIdentifyLevelContext = v51 < 0x1C ? 0xC0000095 : 0;
      if ( v51 < 0x1C )
        goto LABEL_66;
      if ( v13 < v52 )
        goto LABEL_140;
      PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      Pool2 = (__int128 *)P;
      v47 = PopSetPowerSettingValue((LPCGUID)((char *)P + 4), (char *)P + 28);
LABEL_83:
      IsAppContainerOrIdentifyLevelContext = v47;
      InputBuffer = v14;
      if ( v47 < 0 )
        goto LABEL_66;
      goto LABEL_60;
    case NotifyUserPowerSetting:
    case PowerInformationLevelUnused0:
      goto LABEL_140;
    case SystemMonitorHiberBootPowerOff:
      if ( qword_140C5AD70 )
        qword_140C5AD70(1LL);
      PopHiberBootForceMonitorOff = 1;
      IsAppContainerOrIdentifyLevelContext = PoPowerOffMonitor();
      goto LABEL_65;
    case SystemVideoState:
      if ( Pool2 || !v15 )
        goto LABEL_140;
      Length_4 = 4;
      v33 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
      Src = v33;
      if ( v33 )
      {
        v55 = 1;
        *v33 = PopConsoleDisplayState;
        goto LABEL_60;
      }
      IsAppContainerOrIdentifyLevelContext = -1073741670;
      goto LABEL_65;
    case TraceApplicationPowerMessage:
    case TraceApplicationPowerMessageEnd:
      if ( !Pool2 || v15 )
        goto LABEL_140;
      if ( v13 < 8 )
        goto LABEL_173;
      if ( v8 == TraceApplicationPowerMessage )
        PopDiagTraceAppPowerMessage(Pool2);
      else
        PopDiagTraceAppPowerMessageEnd(Pool2);
      goto LABEL_60;
    default:
      goto LABEL_76;
  }
}
