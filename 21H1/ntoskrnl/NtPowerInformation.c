/*
 * XREFs of NtPowerInformation @ 0x14070B1B0
 * Callers:
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x14057996C (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140579B78 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140579E70 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14070B114 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140732C68 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140756FAC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B48F8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1408F822C (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1408F82D0 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1408F8330 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1408F83B0 (TtmpCalloutWatchdogCallback.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryActiveGroupCount @ 0x1402C9F20 (KeQueryActiveGroupCount.c)
 *     RtlStringCbLengthW @ 0x1402E535C (RtlStringCbLengthW.c)
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 *     PsGetProcessSessionIdEx @ 0x14030B480 (PsGetProcessSessionIdEx.c)
 *     PopDisksRegisteredForIdle @ 0x140320B74 (PopDisksRegisteredForIdle.c)
 *     PopPrintEx @ 0x14033C680 (PopPrintEx.c)
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PoPowerOffMonitor @ 0x14037FC20 (PoPowerOffMonitor.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038A8E0 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopEventCalloutDispatch @ 0x1403A433C (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x1403AB100 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x1403C9804 (PpmHeteroHgsBackupInit.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14055FD04 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x14055FD4C (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140561BC4 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x140561CA4 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x140563168 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140565524 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopUpdatePowerButtonHoldState @ 0x1405730C4 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x140577F84 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x1405B0498 (ExGetWakeTimerList.c)
 *     PopSessionWinlogonNotification @ 0x1405CE5A4 (PopSessionWinlogonNotification.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PopEtEnergyTrackerQuery @ 0x1406BDE14 (PopEtEnergyTrackerQuery.c)
 *     PopGetSettingValue @ 0x1406CFA30 (PopGetSettingValue.c)
 *     PspIsContextAdmin @ 0x1406E20D8 (PspIsContextAdmin.c)
 *     PopLoggingInformation @ 0x1406FDF44 (PopLoggingInformation.c)
 *     PopSessionInputChange @ 0x1406FE594 (PopSessionInputChange.c)
 *     PopDiagTraceSessionStates @ 0x1406FE880 (PopDiagTraceSessionStates.c)
 *     PopPowerRequestCreateInfo @ 0x1406FF504 (PopPowerRequestCreateInfo.c)
 *     PopPowerRequestActionInfo @ 0x1407000C0 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407001B0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopCurrentPowerState @ 0x14070C77C (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopCapturePlatformRole @ 0x14070CE30 (PopCapturePlatformRole.c)
 *     PopBlackBoxUpdate @ 0x14070CE48 (PopBlackBoxUpdate.c)
 *     ExCheckFullProcessInformationAccess @ 0x14070DFA4 (ExCheckFullProcessInformationAccess.c)
 *     PopGetSettingNotificationName @ 0x14070E014 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopFilterCapabilities @ 0x14070FBC4 (PopFilterCapabilities.c)
 *     PopPdcInvocation @ 0x14075EF14 (PopPdcInvocation.c)
 *     PopUmpoSendLegacyEvent @ 0x140760FF8 (PopUmpoSendLegacyEvent.c)
 *     PopDiagTraceServiceNotification @ 0x140763CC8 (PopDiagTraceServiceNotification.c)
 *     PopGetWakeSource @ 0x140763DB8 (PopGetWakeSource.c)
 *     PopDiagTraceAppPowerMessage @ 0x140763F74 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140764198 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopFreeSessionState @ 0x140764360 (PopFreeSessionState.c)
 *     PopSuspendResumeInvocation @ 0x140764CDC (PopSuspendResumeInvocation.c)
 *     PopReadHiberbootPolicy @ 0x140764D14 (PopReadHiberbootPolicy.c)
 *     PopEnforceResiliencyScenarios @ 0x14076525C (PopEnforceResiliencyScenarios.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140765B04 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSuspendResumePdc @ 0x140765C38 (PopSuspendResumePdc.c)
 *     PopSetDisplayStatus @ 0x140765EDC (PopSetDisplayStatus.c)
 *     PopProcessorInformation @ 0x14076BECC (PopProcessorInformation.c)
 *     PopUpdateConsoleDisplayState @ 0x14076D0B4 (PopUpdateConsoleDisplayState.c)
 *     PopSessionConnectionChange @ 0x14077913C (PopSessionConnectionChange.c)
 *     PopAcquireTransitionLock @ 0x140779288 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x1407792E4 (PopReleaseTransitionLock.c)
 *     PopCurrentPowerStatePrecise @ 0x140779C64 (PopCurrentPowerStatePrecise.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x14077C5D4 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14077CB0C (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x14077CDD4 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B5D58 (PopEtEnergyTrackerCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140884720 (DbgkWerCaptureLiveKernelDump.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408DD0C4 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopApplyAdminPolicy @ 0x1408DF49C (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1408DF574 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x1408E1824 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1408E1BB0 (PpmSetSimulatedLoad.c)
 *     PopSetHiberFileSize @ 0x1408E2C0C (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408E2D1C (PopSetHiberFileType.c)
 *     PopThermalProcessUsermodeEvent @ 0x1408E3508 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x1408E57BC (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x1408E63D4 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x1408E7EAC (PopTraceMonitorOnRequestUserInput.c)
 *     PopBatteryDeviceState @ 0x1408E8888 (PopBatteryDeviceState.c)
 *     PopIsInputSuppressionEngaged @ 0x1408EA6A8 (PopIsInputSuppressionEngaged.c)
 *     PopPdcCsDeviceNotification @ 0x1408EB794 (PopPdcCsDeviceNotification.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408EBB98 (PopProcessSessionDisplayStateChange.c)
 *     PopScreenOff @ 0x1408EBC38 (PopScreenOff.c)
 *     PopUserPresentOverride @ 0x1408F0CA0 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x1408F4BF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F4CF4 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x1408F9E2C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408F9F94 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FA324 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1408FBFC4 (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140A6D5EC (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  POWER_INFORMATION_LEVEL v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  _PROCESSOR_NUMBER *v11; // r14
  __int64 v12; // rdx
  KPROCESSOR_MODE v13; // r14
  ULONG v14; // r13d
  void *v15; // r15
  _DWORD *v16; // r12
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  size_t v28; // rax
  LUID v29; // rcx
  NTSTATUS inited; // ebx
  char v31; // r13
  unsigned __int64 v32; // rax
  ULONG v33; // r13d
  PVOID v34; // rcx
  int v36; // eax
  int v37; // ebx
  NTSTATUS v38; // eax
  bool v39; // sf
  NTSTATUS SettingNotificationName; // eax
  int v41; // eax
  int Info; // eax
  char IsDevicePotentialDripsConstraint; // al
  __int64 *v44; // rax
  unsigned int v45; // eax
  unsigned __int8 Number; // al
  unsigned int v47; // r12d
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // ebx
  int v52; // ecx
  char v53; // al
  int ProcessSessionId; // ebx
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // eax
  USHORT Group; // bx
  unsigned int v59; // eax
  _QWORD *PoolWithTag; // rax
  unsigned int v61; // ebx
  int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned int *p_Group; // rdx
  __int64 v70; // rcx
  unsigned int v71; // edx
  __int64 v72; // rcx
  int PowerRequestListInfo; // eax
  GUID *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  char v78; // r13
  unsigned int v79; // eax
  bool v80; // bl
  char v81; // [rsp+50h] [rbp-6F8h]
  ULONG Length; // [rsp+54h] [rbp-6F4h]
  unsigned int Length_4; // [rsp+58h] [rbp-6F0h] BYREF
  char v84; // [rsp+5Ch] [rbp-6ECh] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+5Dh] [rbp-6EBh]
  char v86; // [rsp+5Eh] [rbp-6EAh]
  void *Src; // [rsp+60h] [rbp-6E8h] BYREF
  char v88[8]; // [rsp+68h] [rbp-6E0h] BYREF
  PVOID P; // [rsp+70h] [rbp-6D8h]
  int v90; // [rsp+78h] [rbp-6D0h]
  POWER_INFORMATION_LEVEL v92; // [rsp+80h] [rbp-6C8h]
  int v93; // [rsp+88h] [rbp-6C0h]
  __int64 v94; // [rsp+90h] [rbp-6B8h] BYREF
  BOOL v95; // [rsp+98h] [rbp-6B0h]
  PVOID v96; // [rsp+A0h] [rbp-6A8h]
  unsigned __int64 v97; // [rsp+A8h] [rbp-6A0h]
  void *v98; // [rsp+B0h] [rbp-698h]
  LUID v99; // [rsp+B8h] [rbp-690h]
  __int64 v100[192]; // [rsp+C0h] [rbp-688h] BYREF
  _BYTE v101[64]; // [rsp+6C0h] [rbp-88h] BYREF

  v97 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v92 = InformationLevel;
  v88[0] = 0;
  memset(v100, 0, sizeof(v100));
  v93 = 0;
  v94 = 0LL;
  Src = 0LL;
  Length_4 = 0;
  v11 = 0LL;
  P = 0LL;
  v96 = 0LL;
  LOBYTE(v12) = 0;
  v81 = 0;
  v86 = 0;
  v84 = 0;
  if ( (unsigned int)v8 > SessionAllowExternalDmaDevices )
  {
    inited = -1073741811;
    goto LABEL_381;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v13;
  v14 = InputBuffer != 0LL ? InputBufferLength : 0;
  v15 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  v98 = v15;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (_DWORD *)(v97 & -(__int64)(Length != 0));
  if ( !v13 )
  {
    v11 = (_PROCESSOR_NUMBER *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
    P = v11;
LABEL_56:
    v32 = (unsigned int)(v8 - 38);
    if ( (unsigned int)v32 > 0x39 || (v9 = 0x3FFE3BE75BE26EDLL, !_bittest64(&v9, v32)) )
    {
LABEL_75:
      if ( (unsigned int)v8 > TraceApplicationPowerMessageEnd || (v36 = -234812256, !_bittest(&v36, v8)) )
      {
        PopAcquirePolicyLock(v9);
        LOBYTE(v12) = 1;
        v81 = 1;
        v86 = 1;
      }
    }
    switch ( v8 )
    {
      case SystemPowerPolicyAc:
        if ( !v11 || v16 )
          goto LABEL_216;
        if ( v14 == 8 )
        {
          v38 = PpmSetSimulatedLoad(v11);
          goto LABEL_90;
        }
        if ( v14 != 4 )
          goto LABEL_264;
        v38 = PpmClearSimulatedLoad(v11);
        goto LABEL_90;
      case SystemPowerPolicyDc:
        if ( !v11 || v16 || v14 != 24 )
          goto LABEL_216;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
        if ( PoolWithTag )
        {
          *(_OWORD *)PoolWithTag = *(_OWORD *)&v11->Group;
          PoolWithTag[2] = *(_QWORD *)&v11[4].Group;
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)&PopShutdownNotificationCallback,
                  (signed __int64)PoolWithTag,
                  0LL) )
            goto LABEL_120;
          ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
          inited = -1073741823;
          v11 = (_PROCESSOR_NUMBER *)P;
        }
        else
        {
          inited = -1073741670;
        }
        goto LABEL_65;
      case VerifySystemPolicyAc:
        if ( !v11 || v14 != 4 || v16 )
          goto LABEL_216;
        v95 = *v11 != 0;
        PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE);
        goto LABEL_59;
      case VerifySystemPolicyDc:
        if ( v11 || !v16 || Length != 64 )
          goto LABEL_216;
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        v51 = PopEsState;
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
        v53 = v100[6];
        if ( v51 == 1 )
          v53 = 1;
        LOBYTE(v100[6]) = v53;
        LOBYTE(v100[7]) = TtmpEnabled == 1;
        if ( TtmpEnabled != 1 )
          goto LABEL_188;
        inited = TtmInitCurrentSession();
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_66;
        PopNotifySessionUserPowerRequestsPresent();
LABEL_188:
        PopAcquirePolicyLock(v52);
        LODWORD(v100[2]) = 0;
        v100[0] = (__int64)&PopNoMoreInput;
        v100[1] = (__int64)&PopHiberBootForceMonitorOff;
        LODWORD(v100[3]) = byte_140C23ED1 != 0;
        HIDWORD(v100[3]) = dword_140C23ECC;
        HIDWORD(v100[2]) = dword_140C23EEC;
        v100[4] = qword_140C23EF0;
        HIDWORD(v100[6]) = HIDWORD(qword_140C23EF8);
        v100[5] = __PAIR64__(dword_140C23F00, qword_140C23EF8);
        BYTE1(v100[6]) = PopLidOpened;
        Src = v100;
        Length_4 = 64;
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is started\n", ProcessSessionId);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, ProcessSessionId, 0);
        PopReleasePolicyLock(v56, v55);
        goto LABEL_120;
      case SystemPowerCapabilities:
        if ( !v11 || v14 != 16 || v16 )
          goto LABEL_216;
        if ( HIBYTE(v11[3].Group) && LOBYTE(v11[3].Group) )
        {
          if ( PopPlatformAoAc )
          {
            if ( !PopConsoleDisplayState && *(_DWORD *)&v11[1] == 2 )
              DbgkWerCaptureLiveKernelDump(L"InvalidDisplayStateTransition", *(_DWORD *)v11, 0LL, 0LL, 0LL, 0);
            if ( PopPlatformAoAc && *(_DWORD *)&v11[1] != 2 )
            {
              LOBYTE(v9) = v11[3].Reserved;
              PopProcessSessionDisplayStateChange(v9, *(_DWORD *)&v11[2]);
            }
          }
          PopSetDisplayStatus(*(_DWORD *)&v11[1], v12);
          PopUpdateConsoleDisplayState(*(_DWORD *)&v11[1]);
          if ( *(_DWORD *)&v11[1] == 1 )
            PopPowerAggregatorNotifyDisplayPoweredOn();
        }
        Number = v11[3].Number;
        if ( Number )
        {
          if ( LOBYTE(v11[3].Group) )
          {
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &v11[1], 4u, 0LL, 0LL, 0, 0);
            Number = v11[3].Number;
          }
          if ( Number )
            PopDiagTraceSessionDisplayStateChange(
              *(_DWORD *)&v11[1] == 0,
              (int)*v11,
              LOBYTE(v11[3].Group),
              *(_DWORD *)&v11[2]);
        }
        goto LABEL_59;
      case SystemBatteryState:
      case ProcessorCap:
        if ( !v11 || !v16 )
          goto LABEL_216;
        if ( v14 != 40 )
          goto LABEL_237;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_237;
        LOBYTE(v12) = v8 == PlmPowerRequestCreate;
        Info = PopPowerRequestCreateInfo((unsigned __int64)v11, v12, v100);
        goto LABEL_131;
      case SystemPowerStateHandler:
        if ( !v11 || v16 )
          goto LABEL_216;
        if ( v14 != 24 )
          goto LABEL_237;
        v41 = PopPowerRequestActionInfo((__int64)v11);
        goto LABEL_119;
      case ProcessorStateHandler:
        if ( v11 || !v16 )
          goto LABEL_216;
        PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Length_4);
        goto LABEL_299;
      case SystemPowerPolicyCurrent:
        if ( !v11 )
          goto LABEL_216;
        if ( v14 < 2 )
          goto LABEL_216;
        if ( !v16 )
          goto LABEL_216;
        Group = v11->Group;
        if ( Group >= KeQueryActiveGroupCount() )
          goto LABEL_216;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        inited = PopProcessorInformation(v100, v12, Group, &Length_4);
        if ( inited < 0 )
          goto LABEL_66;
        Src = v100;
        goto LABEL_59;
      case AdministratorPowerPolicy:
        if ( !v11 || v14 != 16 )
          goto LABEL_216;
        v57 = PopUmpoSendLegacyEvent(v11, v12);
        inited = v57;
        if ( v57 >= 0 )
          goto LABEL_59;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( v57 == -1073741536 )
          goto LABEL_59;
        goto LABEL_66;
      case SystemReserveHiberFile:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_256;
        if ( !v11 || v16 )
          goto LABEL_216;
        switch ( v14 )
        {
          case 0x10u:
            p_Group = 0LL;
LABEL_272:
            v38 = PpmParkApplyForcedMask(v11, p_Group);
            goto LABEL_90;
          case 0x18u:
            p_Group = (unsigned int *)&v11[4].Group;
            goto LABEL_272;
          case 2u:
            v38 = PpmParkClearForcedMask(v11, v12);
LABEL_90:
            inited = v38;
            break;
          default:
LABEL_264:
            inited = -1073741811;
            break;
        }
        v39 = inited < 0;
LABEL_92:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( v39 )
          goto LABEL_66;
LABEL_59:
        v33 = Length;
LABEL_60:
        if ( !Src || !v16 )
          goto LABEL_64;
        if ( v33 < Length_4 )
        {
LABEL_237:
          inited = -1073741789;
        }
        else
        {
          memmove(v16, Src, Length_4);
LABEL_64:
          inited = 0;
        }
LABEL_65:
        InputBuffer = v15;
LABEL_66:
        v31 = v81;
        goto LABEL_67;
      case ProcessorInformation:
      case LastWakeTime:
      case LastSleepTime:
      case SystemExecutionState:
      case SessionPowerInit:
      case SessionDisplayState:
      case PowerRequestCreate:
      case PowerRequestAction:
        goto LABEL_240;
      case SystemPowerInformation:
        if ( v11 || !v16 )
          goto LABEL_216;
        PowerRequestListInfo = ExGetWakeTimerList((ULONG_PTR *)&Src, &Length_4);
LABEL_299:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        inited = PowerRequestListInfo;
        if ( PowerRequestListInfo < 0 )
          goto LABEL_66;
        v84 = 1;
        goto LABEL_59;
      case ProcessorStateHandler2:
        if ( !v11 || !v16 )
          goto LABEL_216;
        if ( v14 < 4 )
          goto LABEL_237;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v62);
        inited = PopSetHiberFileSize(*(_DWORD *)v11, &v94);
        PopReleasePolicyLock(v64, v63);
        v65 = 5LL;
        goto LABEL_250;
      case SystemPowerStateNotifyHandler:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_256;
        if ( !v11 || v16 )
          goto LABEL_216;
        if ( v14 == 8 )
        {
          v38 = PpmSetSimulatedIdle((__int64)v11);
          goto LABEL_90;
        }
        if ( v14 != 4 )
          goto LABEL_264;
        v38 = PpmClearSimulatedIdle(v11);
        goto LABEL_90;
      case ProcessorPowerPolicyAc:
        if ( !v11 || !v16 )
          goto LABEL_216;
        if ( v14 != 8 )
          goto LABEL_237;
        v33 = Length;
        if ( Length != 4 )
          goto LABEL_237;
        inited = PpmParkSetLpiCap((int)*v11, *(_DWORD *)&v11[1], (unsigned int *)v100);
        if ( inited < 0 )
          goto LABEL_65;
        Src = v100;
        Length_4 = 4;
        goto LABEL_60;
      case ProcessorPowerPolicyDc:
        if ( !ExVerifySuite(PhoneNT) )
        {
LABEL_240:
          inited = -1073741822;
          goto LABEL_65;
        }
        if ( !v11 || v14 != 1 || v16 )
          goto LABEL_216;
        LOBYTE(v70) = v11->Group;
        inited = PopUserPresentOverride(v70);
        if ( inited >= 0 )
          goto LABEL_59;
        goto LABEL_65;
      case VerifyProcessorPowerPolicyAc:
        if ( !v16 )
          goto LABEL_216;
        if ( v15 && v14 != 20 || Length != 8 )
          goto LABEL_237;
        SettingNotificationName = PopGetSettingNotificationName(v11, v16);
        goto LABEL_108;
      case VerifyProcessorPowerPolicyDc:
        if ( !v11 || !v16 )
          goto LABEL_216;
        if ( v14 != 16 || Length < 4 )
          goto LABEL_237;
        SettingNotificationName = PopGetSettingValue((__int64)v11, (__int64)v16, Length);
        goto LABEL_108;
      case ProcessorPowerPolicyCurrent:
        if ( !v11 || v16 )
          goto LABEL_216;
        if ( v14 < 8 )
          goto LABEL_237;
        PopEnforceResiliencyScenarios(v11, v12);
        goto LABEL_59;
      case SystemPowerStateLogging:
        if ( !v11 )
          goto LABEL_216;
        if ( v14 != 8 )
          goto LABEL_216;
        if ( !v16 )
          goto LABEL_216;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_216;
        v45 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (_PROCESSOR_NUMBER *)P;
        PopSessionInputChange(v45, (char *)P, v16);
        goto LABEL_60;
      case SystemPowerLoggingEntry:
        if ( !v11 )
          goto LABEL_216;
        if ( v14 != 2 )
          goto LABEL_216;
        if ( !v16 )
          goto LABEL_216;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_216;
        v48 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopSessionConnectionChange(v48, P, v16);
        v49 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (_PROCESSOR_NUMBER *)P;
        LOBYTE(v12) = *((_BYTE *)P + 1);
        if ( qword_140C542D8 )
        {
          LOBYTE(v50) = *(_BYTE *)P;
          qword_140C542D8(v49, v12, v50);
        }
        goto LABEL_60;
      case SetPowerSettingValue:
        if ( v11 || v16 )
          goto LABEL_216;
        v61 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", v61);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, v61, 0);
        PopFreeSessionState(v61);
        if ( TtmpEnabled == 1 )
          TtmCleanupCurrentSession();
        goto LABEL_120;
      case NotifyUserPowerSetting:
        if ( !v11 || v14 != 8 || v16 )
          goto LABEL_216;
        v59 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (_PROCESSOR_NUMBER *)P;
        PopSessionWinlogonNotification(v59, (__int64)P);
        goto LABEL_59;
      case PowerInformationLevelUnused0:
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_139;
        if ( v11 || !v16 )
          goto LABEL_216;
        PopFilterCapabilities(&PopCapabilities, v100);
        if ( BYTE2(v100[2]) )
          PopReadHiberbootPolicy((char *)&v100[2] + 2);
        v44 = (__int64 *)((char *)&v100[2] + 2);
        goto LABEL_137;
      case SystemMonitorHiberBootPowerOff:
        if ( v11 || !v16 )
          goto LABEL_216;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
        goto LABEL_136;
      case SystemVideoState:
        if ( !v11 || v14 != 184 || v16 && Length != 160 )
          goto LABEL_216;
        SettingNotificationName = PopPdcInvocation(v11, v16);
        goto LABEL_108;
      case TraceApplicationPowerMessage:
        if ( !v11 || v14 != 8 || v16 || Length )
          goto LABEL_216;
        inited = 0;
        v47 = (unsigned int)v11[1];
        if ( PopPlatformAoAc && LOBYTE(v11->Group) )
        {
          PopAcquirePolicyLock(v9);
          if ( (unsigned __int8)PopIsInputSuppressionEngaged(v47) )
          {
            v74 = &NullGuid;
            if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
              PopTraceMonitorOnRequestUserInput(v47);
          }
          LOBYTE(v74) = 1;
          inited = PopProcessSessionDisplayStateChange(v74, v47);
          PopReleasePolicyLock(v76, v75);
          if ( !inited || inited == 259 )
          {
            v12 = PopLastStandbyExitScenarioId;
            if ( PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId && !PopConsoleDisplayState )
            {
              PopDiagTraceMonitorOnWithLidClosed(v47);
              PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
              ZwUpdateWnfStateData(
                &WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
                &PopWdiCurrentScenarioInstanceId,
                8u,
                0LL,
                0LL,
                0,
                0);
            }
          }
        }
        goto LABEL_65;
      case TraceApplicationPowerMessageEnd:
        if ( v11 || v16 )
          goto LABEL_216;
        inited = PopInitPlatformSettings(v9, v12);
        byte_140C24014 = PopPlatformAoAc;
        goto LABEL_65;
      case ProcessorPerfStates:
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_59;
      case ProcessorIdleStates:
        if ( !v11 || v14 != 8 || v16 && Length )
          goto LABEL_216;
        SettingNotificationName = PopSuspendResumeInvocation(v11, v12);
        goto LABEL_108;
      case SystemWakeSource:
      case WakeTimerList:
        if ( v11 || v16 )
          goto LABEL_216;
        v77 = 23LL;
        if ( v8 != ThermalStandby )
          v77 = 11LL;
        PopScreenOff(v77, v12);
        goto LABEL_64;
      case SystemHiberFileInformation:
        if ( PreviousMode )
          goto LABEL_256;
        if ( !v11 || v14 != 16 || v16 || Length )
          goto LABEL_216;
        SettingNotificationName = PopPdcCsDeviceNotification(v11, v12);
LABEL_108:
        inited = SettingNotificationName;
        goto LABEL_65;
      case TraceServicePowerMessage:
        if ( v11 || !v16 )
          goto LABEL_216;
        LODWORD(v100[0]) = PopCapturePlatformRole(v9, v12);
        Src = v100;
        Length_4 = 4;
        goto LABEL_59;
      case ProcessorLoad:
        if ( v11 || !v16 )
          goto LABEL_216;
        LODWORD(v100[0]) = qword_140C239A8;
        v100[1] = qword_140C23B40;
        v100[2] = qword_140C23B48;
        if ( PopSleepStats )
        {
          Src = v100;
          Length_4 = 24;
          goto LABEL_59;
        }
        inited = -1073741823;
        goto LABEL_65;
      case PowerShutdownNotification:
        if ( v11 || v16 )
          goto LABEL_216;
        v78 = PopErrataReportingIncorrectLidState;
        if ( TtmpEnabled == 1 )
        {
          v79 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          TtmNotifySessionDisplayBurst(v79, 6LL);
LABEL_120:
          v11 = (_PROCESSOR_NUMBER *)P;
        }
        else
        {
          v80 = 0;
          if ( !PopLidOpened )
            v80 = PopConsoleExternalDisplayConnected == 0;
          if ( !v80 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v78 )
          {
            LOBYTE(v10) = v80;
            PopDiagTraceDisplayBurstWin32kCallout(v9, v12, v10);
          }
        }
        goto LABEL_59;
      case MonitorCapabilities:
        if ( PreviousMode != 1 )
        {
LABEL_256:
          inited = -1073741790;
          goto LABEL_65;
        }
        if ( v16 || Length )
          goto LABEL_216;
        if ( v11 )
        {
          if ( v14 != 4 )
            goto LABEL_216;
          PpmSetExitLatencySamplingPercentage((int *)v11);
        }
        else
        {
          PpmClearExitLatencySamplingPercentage();
        }
        goto LABEL_59;
      case GetPowerRequestList:
        if ( v11 || !v16 )
          goto LABEL_216;
        PopCurrentPowerStatePrecise(v100, 0LL);
        Src = v100;
        Length_4 = 32;
        goto LABEL_59;
      case ProcessorInformationEx:
        if ( !v11 || v16 )
          goto LABEL_216;
        if ( v14 < 0x10 || v14 < 2 * (unsigned int)v11[3].Group + 14 )
          goto LABEL_237;
        v41 = PopThermalProcessUsermodeEvent(v11, v12);
LABEL_119:
        inited = v41;
        v39 = v41 < 0;
        goto LABEL_92;
      case NotifyUserModeLegacyPowerEvent:
        v71 = (unsigned int)v11[2];
        v72 = *(_QWORD *)&v11->Group;
        if ( LOBYTE(v11[3].Group) )
          PoSetPowerRequestInternal(v72, v71);
        else
          PoClearPowerRequestInternal(v72, v71);
        goto LABEL_59;
      case GroupPark:
        if ( !v11 || !v16 )
          goto LABEL_216;
        inited = RtlStringCbLengthW(&v11->Group, v14, 0LL);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_66;
        inited = PopBatteryDeviceState(v11, v100);
        if ( inited < 0 )
          goto LABEL_66;
        Src = v100;
        Length_4 = 52;
        goto LABEL_59;
      case ProcessorIdleDomains:
        if ( !v11 )
          goto LABEL_216;
        if ( v14 < 8 )
          goto LABEL_216;
        v37 = (int)*v11;
        if ( (unsigned int)(*(_DWORD *)v11 - 68) <= 0xFBB || v37 >= 4107 )
          goto LABEL_216;
        if ( (unsigned int)(v37 - 4096) > 0xA )
        {
          v38 = PopPowerInformationInternal(
                  v37,
                  (_DWORD)v11,
                  v14,
                  (_DWORD)v16,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v84);
          goto LABEL_90;
        }
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
          && !PopCapabilityCheck(L"terminalPowerManagement") )
        {
          inited = -1073741727;
          goto LABEL_65;
        }
        v38 = TtmDispatchApi(
                v37,
                (_DWORD)v11,
                v14,
                (_DWORD)v16,
                Length,
                (__int64)&Src,
                (__int64)&Length_4,
                (__int64)&v84);
        goto LABEL_90;
      case SystemHiberFileSize:
        if ( !v11 || !v16 )
          goto LABEL_216;
        if ( v14 < 4 )
          goto LABEL_237;
        PopAcquireTransitionLock(6LL);
        PopAcquirePolicyLock(v66);
        inited = PopSetHiberFileType(*(_DWORD *)v11, &v94);
        PopReleasePolicyLock(v68, v67);
        v65 = 6LL;
LABEL_250:
        PopReleaseTransitionLock(v65);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_66;
        Src = &v94;
        Length_4 = 8;
        goto LABEL_59;
      case ProcessorIdleStatesHv:
        if ( !v11 || v14 < 4 || v16 )
          goto LABEL_216;
        PopUpdatePowerButtonHoldState(*v11 != 0);
        goto LABEL_59;
      case ProcessorPerfStatesHv:
        if ( !PopPlatformAoAc )
        {
LABEL_139:
          inited = -1073741637;
          goto LABEL_65;
        }
        if ( !v11 || v14 != 336 || !v16 )
        {
LABEL_216:
          inited = -1073741811;
          goto LABEL_65;
        }
        IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(v11);
LABEL_136:
        LOBYTE(v100[0]) = IsDevicePotentialDripsConstraint;
        v44 = v100;
LABEL_137:
        Src = v44;
        Length_4 = 1;
        goto LABEL_59;
      case ProcessorPerfCapHv:
        if ( !v11 || !v16 )
          goto LABEL_216;
        if ( v14 != 12 )
          goto LABEL_237;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_237;
        Info = PopEtEnergyTrackerCreate(v11, v100);
LABEL_131:
        InputBuffer = v15;
        inited = Info;
        if ( Info < 0 )
          goto LABEL_66;
        Src = v100;
        Length_4 = 8;
        goto LABEL_60;
      case ProcessorSetIdle:
        if ( !v11 || !v16 )
          goto LABEL_216;
        if ( v14 != 8 )
          goto LABEL_237;
        v33 = Length;
        if ( Length < 0xC )
          goto LABEL_237;
        inited = PopEtEnergyTrackerQuery(*(void **)&v11->Group, (__int64)v16, Length);
        InputBuffer = v15;
        if ( inited >= 0 )
          goto LABEL_60;
        goto LABEL_66;
      case LogicalProcessorIdling:
        if ( !v11 || v16 || Length )
          goto LABEL_216;
        if ( v14 != 32 )
          goto LABEL_237;
        LOBYTE(v12) = PreviousMode;
        inited = PopBlackBoxUpdate(v11, v12);
        InputBuffer = v15;
        if ( inited < 0 )
          goto LABEL_66;
        goto LABEL_59;
      case UserPresence:
        if ( !v11 || v14 != 1 || v16 )
          goto LABEL_216;
        ExNotifyCallback(PipCslCallbackObject, v11, 0LL);
        goto LABEL_59;
      default:
        goto LABEL_75;
    }
  }
  if ( (unsigned int)v8 > SetPowerSettingValue || (v17 = 50462912, !_bittest(&v17, v8)) )
  {
    v18 = (unsigned int)(v8 - 30);
    if ( (unsigned int)v18 > 0x3D || (v9 = 0x209E02E385CA1E1FLL, !_bittest64(&v9, v18)) )
    {
      v19 = (unsigned int)(v8 - 37);
      if ( (unsigned int)v19 <= 0x3A && (v9 = 0x608801808940903LL, _bittest64(&v9, v19)) || (unsigned int)(v8 - 2) <= 1 )
      {
        inited = SeIsAppContainerOrIdentifyLevelContext(0LL, v88);
        v90 = inited;
        if ( inited < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
          v11 = (_PROCESSOR_NUMBER *)P;
          v31 = 0;
          goto LABEL_67;
        }
        v8 = v92;
        if ( v88[0] )
        {
          if ( v92 != ScreenOff && v92 != ThermalStandby )
          {
            inited = -1073741790;
            v90 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (_PROCESSOR_NUMBER *)P;
            v31 = 0;
            goto LABEL_67;
          }
          if ( !PopCapabilityCheck(L"ID_CAP_SCREENOFF") )
          {
            inited = -1073741790;
            v90 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (_PROCESSOR_NUMBER *)P;
            v31 = 0;
            goto LABEL_67;
          }
        }
      }
      if ( (unsigned int)(v8 - 92) <= 1 )
      {
        LOBYTE(v9) = v13;
        inited = ExCheckFullProcessInformationAccess(v9);
        v90 = inited;
        if ( inited < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
          v11 = (_PROCESSOR_NUMBER *)P;
          v31 = 0;
          goto LABEL_67;
        }
        v8 = v92;
      }
      v20 = (unsigned int)(v8 - 28);
      if ( (unsigned int)v20 <= 0x32 )
      {
        v9 = 0x4000000420001LL;
        if ( _bittest64(&v9, v20) )
        {
          if ( !PspIsContextAdmin() )
          {
            inited = -1073741790;
            v90 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (_PROCESSOR_NUMBER *)P;
            v31 = 0;
            goto LABEL_67;
          }
        }
      }
      if ( v15 )
      {
        v21 = (unsigned int)(v8 - 11);
        if ( (unsigned int)v21 > 0x3D || (v22 = 0x2001800900000001LL, !_bittest64(&v22, v21)) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
          {
            inited = -1073741637;
            v90 = -1073741637;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (_PROCESSOR_NUMBER *)P;
            v31 = 0;
            goto LABEL_67;
          }
        }
        v23 = (unsigned int)(v8 - 38);
        if ( (unsigned int)v23 <= 0x39 && (v24 = 0x218000004422401LL, _bittest64(&v24, v23))
          || v8 == AdministratorPowerPolicy )
        {
          if ( !PspIsContextAdmin() )
          {
            inited = -1073741790;
            v90 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (_PROCESSOR_NUMBER *)P;
            v31 = 0;
            goto LABEL_67;
          }
        }
        v25 = (unsigned int)(v8 - 37);
        if ( (unsigned int)v25 > 0x3A || (v26 = 0x7AE005828F40BC3LL, !_bittest64(&v26, v25)) )
        {
          if ( (unsigned int)(v8 - 2) > 1 && v8 != ProcessorInformation )
          {
            v29 = SeShutdownPrivilege;
            if ( v8 == SystemReserveHiberFile )
              v29 = SeCreatePagefilePrivilege;
            v99 = v29;
            if ( !SeSinglePrivilegeCheck(v29, v13) )
            {
              inited = -1073741727;
              v90 = -1073741727;
              InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
              v11 = (_PROCESSOR_NUMBER *)P;
              v31 = 0;
              goto LABEL_67;
            }
          }
        }
        if ( v14 )
        {
          v27 = (unsigned __int64)v15 + v14;
          if ( v27 > 0x7FFFFFFF0000LL || v27 < (unsigned __int64)v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v28 = v14;
        if ( v14 > 0x40 )
        {
          v11 = (_PROCESSOR_NUMBER *)ExAllocatePoolWithTag(PagedPool, v14, 0x206D654Du);
          P = v11;
          v28 = v14;
          if ( !v11 )
          {
            inited = -1073741670;
            v90 = -1073741670;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v31 = 0;
            goto LABEL_67;
          }
        }
        else
        {
          v11 = (_PROCESSOR_NUMBER *)v101;
          P = v101;
        }
        memmove(v11, v15, v28);
      }
      else
      {
        v11 = (_PROCESSOR_NUMBER *)P;
      }
      if ( v16 )
        ProbeForWrite(v16, Length, 1u);
      LOBYTE(v12) = 0;
      goto LABEL_56;
    }
  }
  inited = -1073741790;
  InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  v11 = (_PROCESSOR_NUMBER *)P;
LABEL_381:
  v31 = 0;
LABEL_67:
  v34 = v96;
  if ( v96 )
    ExFreePoolWithTag(v96, 0);
  if ( v84 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v31 )
    PopReleasePolicyLock(v34, v12);
  if ( v11 && v11 != InputBuffer && v11 != (_PROCESSOR_NUMBER *)v101 )
    ExFreePoolWithTag(v11, 0x206D654Du);
  return inited;
}
