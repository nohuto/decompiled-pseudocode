/*
 * XREFs of NtPowerInformation @ 0x140649BC0
 * Callers:
 *     WheaLogInternalEvent @ 0x1403B78B0 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x140579FAC (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x14057A1B8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x14057A4B0 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140649B24 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140730890 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140758C2C (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B5C18 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1408F951C (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1408F95C0 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1408F9620 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1408F96A0 (TtmpCalloutWatchdogCallback.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140201A8C (RtlStringCbLengthW.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PoClearPowerRequestInternal @ 0x140275FBC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140276180 (PoSetPowerRequestInternal.c)
 *     PopDisksRegisteredForIdle @ 0x140276774 (PopDisksRegisteredForIdle.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KeQueryActiveGroupCount @ 0x14030B900 (KeQueryActiveGroupCount.c)
 *     ExNotifyCallback @ 0x14033CED0 (ExNotifyCallback.c)
 *     PsGetProcessSessionIdEx @ 0x140347CD0 (PsGetProcessSessionIdEx.c)
 *     PopPrintEx @ 0x1403612F8 (PopPrintEx.c)
 *     PoPowerOffMonitor @ 0x140380460 (PoPowerOffMonitor.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038B454 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopEventCalloutDispatch @ 0x1403A4ABC (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x1403B0D80 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CA5E4 (PpmHeteroHgsBackupInit.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140560354 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x14056039C (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140562214 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1405622F4 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x1405637B8 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140565B74 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopUpdatePowerButtonHoldState @ 0x140573714 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x1405785D4 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x1405B0BB8 (ExGetWakeTimerList.c)
 *     PopSessionWinlogonNotification @ 0x1405CF974 (PopSessionWinlogonNotification.c)
 *     PopCurrentPowerState @ 0x14064B18C (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopCapturePlatformRole @ 0x14064B840 (PopCapturePlatformRole.c)
 *     PopBlackBoxUpdate @ 0x14064B858 (PopBlackBoxUpdate.c)
 *     PopGetSettingNotificationName @ 0x14064BA50 (PopGetSettingNotificationName.c)
 *     PopEtEnergyTrackerQuery @ 0x14064BCCC (PopEtEnergyTrackerQuery.c)
 *     PopPowerRequestActionInfo @ 0x14064C9F0 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14064CDF0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestCreateInfo @ 0x14064E220 (PopPowerRequestCreateInfo.c)
 *     PopLoggingInformation @ 0x14064F5EC (PopLoggingInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     PopFilterCapabilities @ 0x1406A528C (PopFilterCapabilities.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A7304 (PopSetPowerSettingValueAcDc.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BC87C (ExCheckFullProcessInformationAccess.c)
 *     PopGetSettingValue @ 0x1406F0D30 (PopGetSettingValue.c)
 *     PspIsContextAdmin @ 0x140704A58 (PspIsContextAdmin.c)
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 *     PopDiagTraceSessionStates @ 0x1407120CC (PopDiagTraceSessionStates.c)
 *     PopPdcInvocation @ 0x140761314 (PopPdcInvocation.c)
 *     PopUmpoSendLegacyEvent @ 0x1407628D8 (PopUmpoSendLegacyEvent.c)
 *     PopDiagTraceServiceNotification @ 0x1407656E8 (PopDiagTraceServiceNotification.c)
 *     PopGetWakeSource @ 0x1407657D8 (PopGetWakeSource.c)
 *     PopDiagTraceAppPowerMessage @ 0x140765994 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140765BB8 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopFreeSessionState @ 0x140765D80 (PopFreeSessionState.c)
 *     PopSuspendResumeInvocation @ 0x14076669C (PopSuspendResumeInvocation.c)
 *     PopReadHiberbootPolicy @ 0x1407666D4 (PopReadHiberbootPolicy.c)
 *     PopEnforceResiliencyScenarios @ 0x140766C1C (PopEnforceResiliencyScenarios.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1407674C4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSuspendResumePdc @ 0x1407675F8 (PopSuspendResumePdc.c)
 *     PopSetDisplayStatus @ 0x1407682C0 (PopSetDisplayStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x14076BFE8 (PopUpdateConsoleDisplayState.c)
 *     PopProcessorInformation @ 0x14076E66C (PopProcessorInformation.c)
 *     PopSessionConnectionChange @ 0x14077B54C (PopSessionConnectionChange.c)
 *     PopAcquireTransitionLock @ 0x14077B698 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14077B6F4 (PopReleaseTransitionLock.c)
 *     PopCurrentPowerStatePrecise @ 0x14077C074 (PopCurrentPowerStatePrecise.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x140784FD4 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14078550C (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x1407857D4 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B8EC8 (PopEtEnergyTrackerCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140885A40 (DbgkWerCaptureLiveKernelDump.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408DE3D4 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopApplyAdminPolicy @ 0x1408E06FC (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1408E07D4 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x1408E2AA4 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1408E2E30 (PpmSetSimulatedLoad.c)
 *     PopSetHiberFileSize @ 0x1408E3E8C (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408E3F9C (PopSetHiberFileType.c)
 *     PopThermalProcessUsermodeEvent @ 0x1408E4788 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x1408E6A3C (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x1408E7654 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x1408E912C (PopTraceMonitorOnRequestUserInput.c)
 *     PopBatteryDeviceState @ 0x1408E9B08 (PopBatteryDeviceState.c)
 *     PopIsInputSuppressionEngaged @ 0x1408EB928 (PopIsInputSuppressionEngaged.c)
 *     PopPdcCsDeviceNotification @ 0x1408ECA14 (PopPdcCsDeviceNotification.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408ECE18 (PopProcessSessionDisplayStateChange.c)
 *     PopScreenOff @ 0x1408ECEB8 (PopScreenOff.c)
 *     PopUserPresentOverride @ 0x1408F1F90 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x1408F5EE4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F5FE4 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x1408FB11C (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408FB284 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FB614 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1408FD2B4 (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140A6DC94 (PopInitPlatformSettings.c)
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
  _QWORD *v11; // r14
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
  char *v44; // rax
  unsigned int v45; // eax
  char v46; // al
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
  USHORT v58; // bx
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
  _QWORD *v69; // rdx
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
    v11 = (_QWORD *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
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
          v38 = PpmSetSimulatedLoad((PPROCESSOR_NUMBER)v11);
          goto LABEL_85;
        }
        if ( v14 != 4 )
          goto LABEL_259;
        v38 = PpmClearSimulatedLoad((PPROCESSOR_NUMBER)v11);
        goto LABEL_85;
      case SystemPowerPolicyDc:
        if ( !v11 || v16 || v14 != 24 )
          goto LABEL_211;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
        if ( PoolWithTag )
        {
          *(_OWORD *)PoolWithTag = *(_OWORD *)v11;
          PoolWithTag[2] = v11[2];
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)&PopShutdownNotificationCallback,
                  (signed __int64)PoolWithTag,
                  0LL) )
            goto LABEL_115;
          ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
          inited = -1073741823;
          v11 = P;
        }
        else
        {
          inited = -1073741670;
        }
        goto LABEL_60;
      case VerifySystemPolicyAc:
        if ( !v11 || v14 != 4 || v16 )
          goto LABEL_211;
        v94 = *(_DWORD *)v11 != 0;
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
        LODWORD(v99[3]) = byte_140C238B1 != 0;
        HIDWORD(v99[3]) = dword_140C238AC;
        HIDWORD(v99[2]) = dword_140C238CC;
        v99[4] = qword_140C238D0;
        HIDWORD(v99[6]) = HIDWORD(qword_140C238D8);
        v99[5] = __PAIR64__(dword_140C238E0, qword_140C238D8);
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
        if ( *((_BYTE *)v11 + 13) && *((_BYTE *)v11 + 12) )
        {
          if ( PopPlatformAoAc )
          {
            if ( !PopConsoleDisplayState && *((_DWORD *)v11 + 1) == 2 )
              DbgkWerCaptureLiveKernelDump(L"InvalidDisplayStateTransition", *(unsigned int *)v11, 0LL, 0LL, 0LL, 0);
            if ( PopPlatformAoAc && *((_DWORD *)v11 + 1) != 2 )
            {
              LOBYTE(v9) = *((_BYTE *)v11 + 15);
              PopProcessSessionDisplayStateChange(v9, *((unsigned int *)v11 + 2));
            }
          }
          PopSetDisplayStatus(*((unsigned int *)v11 + 1), v12);
          PopUpdateConsoleDisplayState(*((unsigned int *)v11 + 1));
          if ( *((_DWORD *)v11 + 1) == 1 )
            PopPowerAggregatorNotifyDisplayPoweredOn();
        }
        v46 = *((_BYTE *)v11 + 14);
        if ( v46 )
        {
          if ( *((_BYTE *)v11 + 12) )
          {
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (char *)v11 + 4, 4u, 0LL, 0LL, 0, 0);
            v46 = *((_BYTE *)v11 + 14);
          }
          if ( v46 )
            PopDiagTraceSessionDisplayStateChange(
              *((_DWORD *)v11 + 1) == 0,
              *(_DWORD *)v11,
              *((unsigned __int8 *)v11 + 12),
              *((_DWORD *)v11 + 2));
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
        v58 = *(_WORD *)v11;
        if ( v58 >= KeQueryActiveGroupCount() )
          goto LABEL_211;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        inited = PopProcessorInformation(v99, v12, v58, &Length_4);
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
            v69 = 0LL;
LABEL_267:
            v38 = PpmParkApplyForcedMask(v11, v69);
            goto LABEL_85;
          case 0x18u:
            v69 = v11 + 2;
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
        inited = PopSetHiberFileSize(*(unsigned int *)v11, &v93);
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
        v38 = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)v11);
        goto LABEL_85;
      case ProcessorPowerPolicyAc:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 8 )
          goto LABEL_232;
        v33 = Length;
        if ( Length != 4 )
          goto LABEL_232;
        inited = PpmParkSetLpiCap(*(_DWORD *)v11, *((_DWORD *)v11 + 1), (unsigned int *)v99);
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
        LOBYTE(v70) = *(_BYTE *)v11;
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
        v11 = P;
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
        v11 = P;
        LOBYTE(v12) = *((_BYTE *)P + 1);
        if ( qword_140C541D8 )
        {
          LOBYTE(v50) = *(_BYTE *)P;
          qword_140C541D8(v49, v12, v50);
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
        v11 = P;
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
        v47 = *((_DWORD *)v11 + 1);
        if ( PopPlatformAoAc && *(_BYTE *)v11 )
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
        byte_140C23A74 = PopPlatformAoAc;
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
        LODWORD(v99[0]) = PopCapturePlatformRole(v9, v12);
        Src = v99;
        Length_4 = 4;
        goto LABEL_54;
      case ProcessorLoad:
        if ( v11 || !v16 )
          goto LABEL_211;
        LODWORD(v99[0]) = qword_140C233E8;
        v99[1] = qword_140C23580;
        v99[2] = qword_140C23588;
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
          v11 = P;
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
        if ( v14 < 0x10 || v14 < 2 * (unsigned int)*((unsigned __int16 *)v11 + 6) + 14 )
          goto LABEL_232;
        v41 = PopThermalProcessUsermodeEvent(v11, v12);
LABEL_114:
        inited = v41;
        v39 = v41 < 0;
        goto LABEL_87;
      case NotifyUserModeLegacyPowerEvent:
        v71 = *((_DWORD *)v11 + 2);
        v72 = *v11;
        if ( *((_BYTE *)v11 + 12) )
          PoSetPowerRequestInternal(v72, v71);
        else
          PoClearPowerRequestInternal(v72, v71);
        goto LABEL_54;
      case GroupPark:
        if ( !v11 || !v16 )
          goto LABEL_211;
        inited = RtlStringCbLengthW((STRSAFE_PCNZWCH)v11, v14, 0LL);
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
        v37 = *(_DWORD *)v11;
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
        inited = PopSetHiberFileType(*(unsigned int *)v11, &v93);
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
        PopUpdatePowerButtonHoldState(*(_DWORD *)v11 != 0);
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
        inited = PopEtEnergyTrackerQuery(*v11, v16, Length);
        InputBuffer = v15;
        if ( inited >= 0 )
          goto LABEL_55;
        goto LABEL_61;
      case LogicalProcessorIdling:
        if ( !v11 || v16 || Length )
          goto LABEL_211;
        if ( v14 != 32 )
          goto LABEL_232;
        LOBYTE(v12) = PreviousMode;
        inited = PopBlackBoxUpdate(v11, v12);
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
          v11 = P;
          v31 = 0;
          goto LABEL_62;
        }
        v8 = v91;
      }
      if ( (unsigned int)(v8 - 92) <= 1 )
      {
        LOBYTE(v9) = v13;
        inited = ExCheckFullProcessInformationAccess(v9);
        v90 = inited;
        if ( inited < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
          v11 = P;
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
          if ( !(unsigned __int8)PspIsContextAdmin() )
          {
            inited = -1073741790;
            v90 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = P;
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
            v11 = P;
            v31 = 0;
            goto LABEL_62;
          }
        }
        v23 = (unsigned int)(v8 - 38);
        if ( (unsigned int)v23 <= 0x39 && (v24 = 0x218000004422401LL, _bittest64(&v24, v23))
          || v8 == AdministratorPowerPolicy )
        {
          if ( !(unsigned __int8)PspIsContextAdmin() )
          {
            inited = -1073741790;
            v90 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = P;
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
              v11 = P;
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
          v11 = ExAllocatePoolWithTag(PagedPool, v14, 0x206D654Du);
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
          v11 = v100;
          P = v100;
        }
        memmove(v11, v15, v28);
      }
      else
      {
        v11 = P;
      }
      if ( v16 )
        ProbeForWrite(v16, Length, 1u);
      LOBYTE(v12) = 0;
      goto LABEL_51;
    }
  }
  inited = -1073741790;
  InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  v11 = P;
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
  if ( v11 && v11 != InputBuffer && v11 != (_QWORD *)v100 )
    ExFreePoolWithTag(v11, 0x206D654Du);
  return inited;
}
