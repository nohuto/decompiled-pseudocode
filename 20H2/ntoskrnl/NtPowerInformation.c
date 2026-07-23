/*
 * XREFs of NtPowerInformation @ 0x1406F7470
 * Callers:
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x14057D9DC (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x14057DBE8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x14057DEE0 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1406F4DA4 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x14073FC34 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14076786C (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408BB838 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1408FF12C (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1408FF1D0 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1408FF230 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1408FF2B0 (TtmpCalloutWatchdogCallback.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A77428 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 *     RtlStringCbLengthW @ 0x140312FE0 (RtlStringCbLengthW.c)
 *     PopDisksRegisteredForIdle @ 0x14032F0C4 (PopDisksRegisteredForIdle.c)
 *     KeQueryActiveGroupCount @ 0x1403379E0 (KeQueryActiveGroupCount.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     PoClearPowerRequestInternal @ 0x14036237C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140362540 (PoSetPowerRequestInternal.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopPrintEx @ 0x140364760 (PopPrintEx.c)
 *     PoPowerOffMonitor @ 0x140382220 (PoPowerOffMonitor.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038D8C0 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopEventCalloutDispatch @ 0x1403A6EBC (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x1403B36F0 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CD224 (PpmHeteroHgsBackupInit.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140563D34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x140563D7C (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140565BF4 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x140565CD4 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x140567198 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1405695A8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopUpdatePowerButtonHoldState @ 0x140577144 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x14057C004 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x1405B4718 (ExGetWakeTimerList.c)
 *     PopSessionWinlogonNotification @ 0x1405D5E24 (PopSessionWinlogonNotification.c)
 *     PspIsContextAdmin @ 0x1405E249C (PspIsContextAdmin.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     PopEtEnergyTrackerQuery @ 0x1406B5E14 (PopEtEnergyTrackerQuery.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406DB3E8 (ExCheckFullProcessInformationAccess.c)
 *     PopLoggingInformation @ 0x1406E2940 (PopLoggingInformation.c)
 *     PopBlackBoxUpdate @ 0x1406F4E3C (PopBlackBoxUpdate.c)
 *     PopCapturePlatformRole @ 0x1406F7414 (PopCapturePlatformRole.c)
 *     PopCurrentPowerState @ 0x1406F8A3C (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopGetSettingNotificationName @ 0x14071C434 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x14071C950 (PopGetSettingValue.c)
 *     PopPowerRequestActionInfo @ 0x14071DF18 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14071E008 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopFilterCapabilities @ 0x14071EF54 (PopFilterCapabilities.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407200D8 (PopSetPowerSettingValueAcDc.c)
 *     PopPowerRequestCreateInfo @ 0x14072030C (PopPowerRequestCreateInfo.c)
 *     PopDiagTraceSessionStates @ 0x140720C64 (PopDiagTraceSessionStates.c)
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 *     PopPdcInvocation @ 0x14076F924 (PopPdcInvocation.c)
 *     PopUmpoSendLegacyEvent @ 0x140770EE8 (PopUmpoSendLegacyEvent.c)
 *     PopDiagTraceServiceNotification @ 0x140774718 (PopDiagTraceServiceNotification.c)
 *     PopGetWakeSource @ 0x140774808 (PopGetWakeSource.c)
 *     PopDiagTraceAppPowerMessage @ 0x1407749C4 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140774BE8 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopFreeSessionState @ 0x140774DB0 (PopFreeSessionState.c)
 *     PopSuspendResumeInvocation @ 0x1407756CC (PopSuspendResumeInvocation.c)
 *     PopReadHiberbootPolicy @ 0x140775704 (PopReadHiberbootPolicy.c)
 *     PopEnforceResiliencyScenarios @ 0x140775C4C (PopEnforceResiliencyScenarios.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1407764F4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSuspendResumePdc @ 0x140776628 (PopSuspendResumePdc.c)
 *     PopSetDisplayStatus @ 0x1407768CC (PopSetDisplayStatus.c)
 *     PopProcessorInformation @ 0x14077D09C (PopProcessorInformation.c)
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 *     PopSessionConnectionChange @ 0x140789B4C (PopSessionConnectionChange.c)
 *     PopAcquireTransitionLock @ 0x140789C98 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140789CF4 (PopReleaseTransitionLock.c)
 *     PopCurrentPowerStatePrecise @ 0x14078A674 (PopCurrentPowerStatePrecise.c)
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x140792D24 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x140793178 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14079325C (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x140793524 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x1407C7758 (PopEtEnergyTrackerCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408E4214 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopApplyAdminPolicy @ 0x1408E653C (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1408E6614 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x1408E88E4 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1408E8C70 (PpmSetSimulatedLoad.c)
 *     PopSetHiberFileSize @ 0x1408E9AA0 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408E9BB0 (PopSetHiberFileType.c)
 *     PopThermalProcessUsermodeEvent @ 0x1408EA398 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x1408EC64C (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x1408ED264 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x1408EED3C (PopTraceMonitorOnRequestUserInput.c)
 *     PopBatteryDeviceState @ 0x1408EF718 (PopBatteryDeviceState.c)
 *     PopIsInputSuppressionEngaged @ 0x1408F1538 (PopIsInputSuppressionEngaged.c)
 *     PopPdcCsDeviceNotification @ 0x1408F2624 (PopPdcCsDeviceNotification.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408F2A28 (PopProcessSessionDisplayStateChange.c)
 *     PopScreenOff @ 0x1408F2AC8 (PopScreenOff.c)
 *     PopUserPresentOverride @ 0x1408F7BA0 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x1408FBAF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408FBBF4 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x140900D3C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140900EAC (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x14090123C (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x140902EE4 (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140A743B4 (PopInitPlatformSettings.c)
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
  void *v16; // r12
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
  unsigned int v33; // r13d
  PVOID v34; // rcx
  int v36; // eax
  int v37; // ebx
  NTSTATUS v38; // eax
  bool v39; // sf
  NTSTATUS SettingNotificationName; // eax
  int v41; // eax
  int Info; // eax
  char IsDevicePotentialDripsConstraint; // al
  char *v44; // rax
  unsigned int v45; // eax
  unsigned __int8 Number; // al
  unsigned int v47; // r12d
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // ebx
  int v52; // ecx
  char v53; // al
  int ProcessSessionId; // eax
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
  char v88; // [rsp+68h] [rbp-6E0h]
  PVOID P; // [rsp+70h] [rbp-6D8h]
  int v90; // [rsp+78h] [rbp-6D0h]
  POWER_INFORMATION_LEVEL v91; // [rsp+80h] [rbp-6C8h]
  int v92; // [rsp+88h] [rbp-6C0h]
  __int64 v93; // [rsp+90h] [rbp-6B8h] BYREF
  BOOL v94; // [rsp+98h] [rbp-6B0h]
  PVOID v95; // [rsp+A0h] [rbp-6A8h]
  unsigned __int64 v96; // [rsp+A8h] [rbp-6A0h]
  void *v97; // [rsp+B0h] [rbp-698h]
  LUID v98; // [rsp+B8h] [rbp-690h]
  _QWORD v99[192]; // [rsp+C0h] [rbp-688h] BYREF
  _BYTE v100[64]; // [rsp+6C0h] [rbp-88h] BYREF

  v96 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v91 = InformationLevel;
  v88 = 0;
  memset(v99, 0, sizeof(v99));
  v92 = 0;
  v93 = 0LL;
  Src = 0LL;
  Length_4 = 0;
  v11 = 0LL;
  P = 0LL;
  v95 = 0LL;
  LOBYTE(v12) = 0;
  v81 = 0;
  v86 = 0;
  v84 = 0;
  if ( (unsigned int)v8 > SessionAllowExternalDmaDevices )
  {
    inited = -1073741811;
    goto LABEL_376;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v13;
  v14 = InputBuffer != 0LL ? InputBufferLength : 0;
  v15 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  v97 = v15;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (void *)(v96 & -(__int64)(Length != 0));
  if ( !v13 )
  {
    v11 = (_PROCESSOR_NUMBER *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
    P = v11;
LABEL_51:
    v32 = (unsigned int)(v8 - 38);
    if ( (unsigned int)v32 > 0x39 || (v9 = 0x3FFE3BE75BE26EDLL, !_bittest64(&v9, v32)) )
    {
LABEL_70:
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
          goto LABEL_211;
        if ( v14 == 8 )
        {
          v38 = PpmSetSimulatedLoad(v11);
          goto LABEL_85;
        }
        if ( v14 != 4 )
          goto LABEL_259;
        v38 = PpmClearSimulatedLoad(v11);
        goto LABEL_85;
      case SystemPowerPolicyDc:
        if ( !v11 || v16 || v14 != 24 )
          goto LABEL_211;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
        if ( PoolWithTag )
        {
          *(_OWORD *)PoolWithTag = *(_OWORD *)&v11->Group;
          PoolWithTag[2] = *(_QWORD *)&v11[4].Group;
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)&PopShutdownNotificationCallback,
                  (signed __int64)PoolWithTag,
                  0LL) )
            goto LABEL_115;
          ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
          inited = -1073741823;
          v11 = (_PROCESSOR_NUMBER *)P;
        }
        else
        {
          inited = -1073741670;
        }
        goto LABEL_60;
      case VerifySystemPolicyAc:
        if ( !v11 || v14 != 4 || v16 )
          goto LABEL_211;
        v94 = *v11 != 0;
        PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE);
        goto LABEL_54;
      case VerifySystemPolicyDc:
        if ( v11 || !v16 || Length != 64 )
          goto LABEL_211;
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        v51 = PopEsState;
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
        v53 = v99[6];
        if ( v51 == 1 )
          v53 = 1;
        LOBYTE(v99[6]) = v53;
        LOBYTE(v99[7]) = TtmpEnabled == 1;
        if ( TtmpEnabled != 1 )
          goto LABEL_183;
        inited = TtmInitCurrentSession();
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_61;
        PopNotifySessionUserPowerRequestsPresent();
LABEL_183:
        PopAcquirePolicyLock(v52);
        LODWORD(v99[2]) = 0;
        v99[0] = &PopNoMoreInput;
        v99[1] = &PopHiberBootForceMonitorOff;
        LODWORD(v99[3]) = byte_140C23D51 != 0;
        HIDWORD(v99[3]) = dword_140C23D4C;
        HIDWORD(v99[2]) = dword_140C23D6C;
        v99[4] = qword_140C23D70;
        HIDWORD(v99[6]) = HIDWORD(qword_140C23D78);
        v99[5] = __PAIR64__(dword_140C23D80, qword_140C23D78);
        BYTE1(v99[6]) = PopLidOpened;
        Src = v99;
        Length_4 = 64;
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is started\n", ProcessSessionId);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
        PopReleasePolicyLock(v56, v55);
        goto LABEL_115;
      case SystemPowerCapabilities:
        if ( !v11 || v14 != 16 || v16 )
          goto LABEL_211;
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
        goto LABEL_54;
      case SystemBatteryState:
      case ProcessorCap:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 40 )
          goto LABEL_232;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_232;
        LOBYTE(v12) = v8 == PlmPowerRequestCreate;
        Info = PopPowerRequestCreateInfo(v11, v12, v99);
        goto LABEL_126;
      case SystemPowerStateHandler:
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 != 24 )
          goto LABEL_232;
        v41 = PopPowerRequestActionInfo(v11, v12);
        goto LABEL_114;
      case ProcessorStateHandler:
        if ( v11 || !v16 )
          goto LABEL_211;
        PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Length_4);
        goto LABEL_294;
      case SystemPowerPolicyCurrent:
        if ( !v11 )
          goto LABEL_211;
        if ( v14 < 2 )
          goto LABEL_211;
        if ( !v16 )
          goto LABEL_211;
        Group = v11->Group;
        if ( Group >= KeQueryActiveGroupCount() )
          goto LABEL_211;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        inited = PopProcessorInformation(v99, v12, Group, &Length_4);
        if ( inited < 0 )
          goto LABEL_61;
        Src = v99;
        goto LABEL_54;
      case AdministratorPowerPolicy:
        if ( !v11 || v14 != 16 )
          goto LABEL_211;
        v57 = PopUmpoSendLegacyEvent(v11, v12);
        inited = v57;
        if ( v57 >= 0 )
          goto LABEL_54;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( v57 == -1073741536 )
          goto LABEL_54;
        goto LABEL_61;
      case SystemReserveHiberFile:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_251;
        if ( !v11 || v16 )
          goto LABEL_211;
        switch ( v14 )
        {
          case 0x10u:
            p_Group = 0LL;
LABEL_267:
            v38 = PpmParkApplyForcedMask(v11, p_Group);
            goto LABEL_85;
          case 0x18u:
            p_Group = (unsigned int *)&v11[4].Group;
            goto LABEL_267;
          case 2u:
            v38 = PpmParkClearForcedMask(v11, v12);
LABEL_85:
            inited = v38;
            break;
          default:
LABEL_259:
            inited = -1073741811;
            break;
        }
        v39 = inited < 0;
LABEL_87:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( v39 )
          goto LABEL_61;
LABEL_54:
        v33 = Length;
LABEL_55:
        if ( !Src || !v16 )
          goto LABEL_59;
        if ( v33 < Length_4 )
        {
LABEL_232:
          inited = -1073741789;
        }
        else
        {
          memmove(v16, Src, Length_4);
LABEL_59:
          inited = 0;
        }
LABEL_60:
        InputBuffer = v15;
LABEL_61:
        v31 = v81;
        goto LABEL_62;
      case ProcessorInformation:
      case LastWakeTime:
      case LastSleepTime:
      case SystemExecutionState:
      case SessionPowerInit:
      case SessionDisplayState:
      case PowerRequestCreate:
      case PowerRequestAction:
        goto LABEL_235;
      case SystemPowerInformation:
        if ( v11 || !v16 )
          goto LABEL_211;
        PowerRequestListInfo = ExGetWakeTimerList((ULONG_PTR *)&Src, &Length_4);
LABEL_294:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        inited = PowerRequestListInfo;
        if ( PowerRequestListInfo < 0 )
          goto LABEL_61;
        v84 = 1;
        goto LABEL_54;
      case ProcessorStateHandler2:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 < 4 )
          goto LABEL_232;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v62);
        inited = PopSetHiberFileSize(*(_DWORD *)v11, &v93);
        PopReleasePolicyLock(v64, v63);
        v65 = 5LL;
        goto LABEL_245;
      case SystemPowerStateNotifyHandler:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_251;
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 == 8 )
        {
          v38 = PpmSetSimulatedIdle((__int64)v11);
          goto LABEL_85;
        }
        if ( v14 != 4 )
          goto LABEL_259;
        v38 = PpmClearSimulatedIdle(v11);
        goto LABEL_85;
      case ProcessorPowerPolicyAc:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 8 )
          goto LABEL_232;
        v33 = Length;
        if ( Length != 4 )
          goto LABEL_232;
        inited = PpmParkSetLpiCap((int)*v11, *(_DWORD *)&v11[1], (unsigned int *)v99);
        if ( inited < 0 )
          goto LABEL_60;
        Src = v99;
        Length_4 = 4;
        goto LABEL_55;
      case ProcessorPowerPolicyDc:
        if ( !ExVerifySuite(PhoneNT) )
        {
LABEL_235:
          inited = -1073741822;
          goto LABEL_60;
        }
        if ( !v11 || v14 != 1 || v16 )
          goto LABEL_211;
        LOBYTE(v70) = v11->Group;
        inited = PopUserPresentOverride(v70);
        if ( inited >= 0 )
          goto LABEL_54;
        goto LABEL_60;
      case VerifyProcessorPowerPolicyAc:
        if ( !v16 )
          goto LABEL_211;
        if ( v15 && v14 != 20 || Length != 8 )
          goto LABEL_232;
        SettingNotificationName = PopGetSettingNotificationName(v11, v16);
        goto LABEL_103;
      case VerifyProcessorPowerPolicyDc:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 16 || Length < 4 )
          goto LABEL_232;
        SettingNotificationName = PopGetSettingValue(v11, v16, Length);
        goto LABEL_103;
      case ProcessorPowerPolicyCurrent:
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 < 8 )
          goto LABEL_232;
        PopEnforceResiliencyScenarios(v11, v12);
        goto LABEL_54;
      case SystemPowerStateLogging:
        if ( !v11 )
          goto LABEL_211;
        if ( v14 != 8 )
          goto LABEL_211;
        if ( !v16 )
          goto LABEL_211;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_211;
        v45 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (_PROCESSOR_NUMBER *)P;
        PopSessionInputChange(v45, P, v16);
        goto LABEL_55;
      case SystemPowerLoggingEntry:
        if ( !v11 )
          goto LABEL_211;
        if ( v14 != 2 )
          goto LABEL_211;
        if ( !v16 )
          goto LABEL_211;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_211;
        v48 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopSessionConnectionChange(v48, P, v16);
        v49 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (_PROCESSOR_NUMBER *)P;
        LOBYTE(v12) = *((_BYTE *)P + 1);
        if ( qword_140C54258 )
        {
          LOBYTE(v50) = *(_BYTE *)P;
          qword_140C54258(v49, v12, v50);
        }
        goto LABEL_55;
      case SetPowerSettingValue:
        if ( v11 || v16 )
          goto LABEL_211;
        v61 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", v61);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
        PopFreeSessionState(v61);
        if ( TtmpEnabled == 1 )
          TtmCleanupCurrentSession();
        goto LABEL_115;
      case NotifyUserPowerSetting:
        if ( !v11 || v14 != 8 || v16 )
          goto LABEL_211;
        v59 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (_PROCESSOR_NUMBER *)P;
        PopSessionWinlogonNotification(v59, (__int64)P);
        goto LABEL_54;
      case PowerInformationLevelUnused0:
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_134;
        if ( v11 || !v16 )
          goto LABEL_211;
        PopFilterCapabilities(&PopCapabilities, v99);
        if ( BYTE2(v99[2]) )
          PopReadHiberbootPolicy((char *)&v99[2] + 2);
        v44 = (char *)&v99[2] + 2;
        goto LABEL_132;
      case SystemMonitorHiberBootPowerOff:
        if ( v11 || !v16 )
          goto LABEL_211;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
        goto LABEL_131;
      case SystemVideoState:
        if ( !v11 || v14 != 184 || v16 && Length != 160 )
          goto LABEL_211;
        SettingNotificationName = PopPdcInvocation(v11, v16);
        goto LABEL_103;
      case TraceApplicationPowerMessage:
        if ( !v11 || v14 != 8 || v16 || Length )
          goto LABEL_211;
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
        goto LABEL_60;
      case TraceApplicationPowerMessageEnd:
        if ( v11 || v16 )
          goto LABEL_211;
        inited = PopInitPlatformSettings(v9, v12);
        byte_140C23EF4 = PopPlatformAoAc;
        goto LABEL_60;
      case ProcessorPerfStates:
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_54;
      case ProcessorIdleStates:
        if ( !v11 || v14 != 8 || v16 && Length )
          goto LABEL_211;
        SettingNotificationName = PopSuspendResumeInvocation(v11, v12);
        goto LABEL_103;
      case SystemWakeSource:
      case WakeTimerList:
        if ( v11 || v16 )
          goto LABEL_211;
        v77 = 23LL;
        if ( v8 != ThermalStandby )
          v77 = 11LL;
        PopScreenOff(v77, v12);
        goto LABEL_59;
      case SystemHiberFileInformation:
        if ( PreviousMode )
          goto LABEL_251;
        if ( !v11 || v14 != 16 || v16 || Length )
          goto LABEL_211;
        SettingNotificationName = PopPdcCsDeviceNotification(v11, v12);
LABEL_103:
        inited = SettingNotificationName;
        goto LABEL_60;
      case TraceServicePowerMessage:
        if ( v11 || !v16 )
          goto LABEL_211;
        LODWORD(v99[0]) = PopCapturePlatformRole();
        Src = v99;
        Length_4 = 4;
        goto LABEL_54;
      case ProcessorLoad:
        if ( v11 || !v16 )
          goto LABEL_211;
        LODWORD(v99[0]) = qword_140C238A8;
        v99[1] = qword_140C23A40;
        v99[2] = qword_140C23A48;
        if ( PopSleepStats )
        {
          Src = v99;
          Length_4 = 24;
          goto LABEL_54;
        }
        inited = -1073741823;
        goto LABEL_60;
      case PowerShutdownNotification:
        if ( v11 || v16 )
          goto LABEL_211;
        v78 = PopErrataReportingIncorrectLidState;
        if ( TtmpEnabled == 1 )
        {
          v79 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          TtmNotifySessionDisplayBurst(v79, 6LL);
LABEL_115:
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
        goto LABEL_54;
      case MonitorCapabilities:
        if ( PreviousMode != 1 )
        {
LABEL_251:
          inited = -1073741790;
          goto LABEL_60;
        }
        if ( v16 || Length )
          goto LABEL_211;
        if ( v11 )
        {
          if ( v14 != 4 )
            goto LABEL_211;
          PpmSetExitLatencySamplingPercentage((int *)v11);
        }
        else
        {
          PpmClearExitLatencySamplingPercentage();
        }
        goto LABEL_54;
      case GetPowerRequestList:
        if ( v11 || !v16 )
          goto LABEL_211;
        PopCurrentPowerStatePrecise(v99, 0LL);
        Src = v99;
        Length_4 = 32;
        goto LABEL_54;
      case ProcessorInformationEx:
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 < 0x10 || v14 < 2 * (unsigned int)v11[3].Group + 14 )
          goto LABEL_232;
        v41 = PopThermalProcessUsermodeEvent(v11, v12);
LABEL_114:
        inited = v41;
        v39 = v41 < 0;
        goto LABEL_87;
      case NotifyUserModeLegacyPowerEvent:
        v71 = (unsigned int)v11[2];
        v72 = *(_QWORD *)&v11->Group;
        if ( LOBYTE(v11[3].Group) )
          PoSetPowerRequestInternal(v72, v71);
        else
          PoClearPowerRequestInternal(v72, v71);
        goto LABEL_54;
      case GroupPark:
        if ( !v11 || !v16 )
          goto LABEL_211;
        inited = RtlStringCbLengthW(&v11->Group, v14, 0LL);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_61;
        inited = PopBatteryDeviceState(v11, v99);
        if ( inited < 0 )
          goto LABEL_61;
        Src = v99;
        Length_4 = 52;
        goto LABEL_54;
      case ProcessorIdleDomains:
        if ( !v11 )
          goto LABEL_211;
        if ( v14 < 8 )
          goto LABEL_211;
        v37 = (int)*v11;
        if ( (unsigned int)(*(_DWORD *)v11 - 68) <= 0xFBB || v37 >= 4107 )
          goto LABEL_211;
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
          goto LABEL_85;
        }
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
          && !PopCapabilityCheck(L"terminalPowerManagement") )
        {
          inited = -1073741727;
          goto LABEL_60;
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
        goto LABEL_85;
      case SystemHiberFileSize:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 < 4 )
          goto LABEL_232;
        PopAcquireTransitionLock(6LL);
        PopAcquirePolicyLock(v66);
        inited = PopSetHiberFileType(*(_DWORD *)v11, &v93);
        PopReleasePolicyLock(v68, v67);
        v65 = 6LL;
LABEL_245:
        PopReleaseTransitionLock(v65);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_61;
        Src = &v93;
        Length_4 = 8;
        goto LABEL_54;
      case ProcessorIdleStatesHv:
        if ( !v11 || v14 < 4 || v16 )
          goto LABEL_211;
        PopUpdatePowerButtonHoldState(*v11 != 0);
        goto LABEL_54;
      case ProcessorPerfStatesHv:
        if ( !PopPlatformAoAc )
        {
LABEL_134:
          inited = -1073741637;
          goto LABEL_60;
        }
        if ( !v11 || v14 != 336 || !v16 )
        {
LABEL_211:
          inited = -1073741811;
          goto LABEL_60;
        }
        IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(v11);
LABEL_131:
        LOBYTE(v99[0]) = IsDevicePotentialDripsConstraint;
        v44 = (char *)v99;
LABEL_132:
        Src = v44;
        Length_4 = 1;
        goto LABEL_54;
      case ProcessorPerfCapHv:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 12 )
          goto LABEL_232;
        v33 = Length;
        if ( Length != 8 )
          goto LABEL_232;
        Info = PopEtEnergyTrackerCreate(v11, v99);
LABEL_126:
        InputBuffer = v15;
        inited = Info;
        if ( Info < 0 )
          goto LABEL_61;
        Src = v99;
        Length_4 = 8;
        goto LABEL_55;
      case ProcessorSetIdle:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 8 )
          goto LABEL_232;
        v33 = Length;
        if ( Length < 0xC )
          goto LABEL_232;
        inited = PopEtEnergyTrackerQuery(*(void **)&v11->Group, (__int64)v16, Length);
        InputBuffer = v15;
        if ( inited >= 0 )
          goto LABEL_55;
        goto LABEL_61;
      case LogicalProcessorIdling:
        if ( !v11 || v16 || Length )
          goto LABEL_211;
        if ( v14 != 32 )
          goto LABEL_232;
        inited = PopBlackBoxUpdate((char **)v11, PreviousMode);
        InputBuffer = v15;
        if ( inited < 0 )
          goto LABEL_61;
        goto LABEL_54;
      case UserPresence:
        if ( !v11 || v14 != 1 || v16 )
          goto LABEL_211;
        ExNotifyCallback(PipCslCallbackObject, v11, 0LL);
        goto LABEL_54;
      default:
        goto LABEL_70;
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
        inited = SeIsAppContainerOrIdentifyLevelContext(0LL);
        v90 = inited;
        if ( inited < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
          v11 = (_PROCESSOR_NUMBER *)P;
          v31 = 0;
          goto LABEL_62;
        }
        v8 = v91;
      }
      if ( (unsigned int)(v8 - 92) <= 1 )
      {
        inited = ExCheckFullProcessInformationAccess(v13);
        v90 = inited;
        if ( inited < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
          v11 = (_PROCESSOR_NUMBER *)P;
          v31 = 0;
          goto LABEL_62;
        }
        v8 = v91;
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
            goto LABEL_62;
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
            goto LABEL_62;
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
            goto LABEL_62;
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
            v98 = v29;
            if ( !SeSinglePrivilegeCheck(v29, v13) )
            {
              inited = -1073741727;
              v90 = -1073741727;
              InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
              v11 = (_PROCESSOR_NUMBER *)P;
              v31 = 0;
              goto LABEL_62;
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
            goto LABEL_62;
          }
        }
        else
        {
          v11 = (_PROCESSOR_NUMBER *)v100;
          P = v100;
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
      goto LABEL_51;
    }
  }
  inited = -1073741790;
  InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  v11 = (_PROCESSOR_NUMBER *)P;
LABEL_376:
  v31 = 0;
LABEL_62:
  v34 = v95;
  if ( v95 )
    ExFreePoolWithTag(v95, 0);
  if ( v84 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v31 )
    PopReleasePolicyLock(v34, v12);
  if ( v11 && v11 != InputBuffer && v11 != (_PROCESSOR_NUMBER *)v100 )
    ExFreePoolWithTag(v11, 0x206D654Du);
  return inited;
}
