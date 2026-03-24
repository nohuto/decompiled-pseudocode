/*
 * XREFs of NtPowerInformation @ 0x1406777D0
 * Callers:
 *     WheaLogInternalEvent @ 0x1403BAD50 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x14057F3EC (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x14057F5F8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x14057F8F0 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140677734 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140736DE0 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14076B9FC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B8D18 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1408FC8DC (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1408FC980 (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1408FC9E0 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1408FCA60 (TtmpCalloutWatchdogCallback.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A74328 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     RtlStringCbLengthW @ 0x140265368 (RtlStringCbLengthW.c)
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PoClearPowerRequestInternal @ 0x140281F9C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140282160 (PoSetPowerRequestInternal.c)
 *     PsGetProcessSessionIdEx @ 0x1402830D0 (PsGetProcessSessionIdEx.c)
 *     PopPrintEx @ 0x14028411C (PopPrintEx.c)
 *     ExNotifyCallback @ 0x1402B0640 (ExNotifyCallback.c)
 *     PopDisksRegisteredForIdle @ 0x1402D1074 (PopDisksRegisteredForIdle.c)
 *     KeQueryActiveGroupCount @ 0x1402E2F50 (KeQueryActiveGroupCount.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PoPowerOffMonitor @ 0x140382864 (PoPowerOffMonitor.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038DE38 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopEventCalloutDispatch @ 0x1403A777C (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x1403AF740 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDC04 (PpmHeteroHgsBackupInit.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140565804 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x14056584C (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405676C4 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1405677A4 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x140568C68 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056AFC0 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopUpdatePowerButtonHoldState @ 0x140578B54 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x14057DA14 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x1405B6148 (ExGetWakeTimerList.c)
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     PopCurrentPowerState @ 0x140678D9C (PopCurrentPowerState.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PopCapturePlatformRole @ 0x140679450 (PopCapturePlatformRole.c)
 *     PopBlackBoxUpdate @ 0x140679468 (PopBlackBoxUpdate.c)
 *     PopGetSettingNotificationName @ 0x140679824 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValueAcDc @ 0x140679E68 (PopSetPowerSettingValueAcDc.c)
 *     PopFilterCapabilities @ 0x14067B484 (PopFilterCapabilities.c)
 *     PopPowerRequestActionInfo @ 0x14067C148 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067C238 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopGetSettingValue @ 0x14067CA24 (PopGetSettingValue.c)
 *     PopPowerRequestCreateInfo @ 0x14067CFCC (PopPowerRequestCreateInfo.c)
 *     PopDiagTraceSessionStates @ 0x14067DB94 (PopDiagTraceSessionStates.c)
 *     PopSessionInputChange @ 0x14067DE74 (PopSessionInputChange.c)
 *     PopLoggingInformation @ 0x14067E6B8 (PopLoggingInformation.c)
 *     PopEtEnergyTrackerQuery @ 0x14068E738 (PopEtEnergyTrackerQuery.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BAC8C (ExCheckFullProcessInformationAccess.c)
 *     PspIsContextAdmin @ 0x140715EE0 (PspIsContextAdmin.c)
 *     PopPdcInvocation @ 0x140773834 (PopPdcInvocation.c)
 *     PopUmpoSendLegacyEvent @ 0x140774E88 (PopUmpoSendLegacyEvent.c)
 *     PopDiagTraceServiceNotification @ 0x1407786C8 (PopDiagTraceServiceNotification.c)
 *     PopGetWakeSource @ 0x1407787B8 (PopGetWakeSource.c)
 *     PopDiagTraceAppPowerMessage @ 0x140778974 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140778B98 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopFreeSessionState @ 0x140778D60 (PopFreeSessionState.c)
 *     PopSuspendResumeInvocation @ 0x14077967C (PopSuspendResumeInvocation.c)
 *     PopReadHiberbootPolicy @ 0x1407796B4 (PopReadHiberbootPolicy.c)
 *     PopEnforceResiliencyScenarios @ 0x140779BFC (PopEnforceResiliencyScenarios.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x14077A4A4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSuspendResumePdc @ 0x14077A5D8 (PopSuspendResumePdc.c)
 *     PopSetDisplayStatus @ 0x14077A87C (PopSetDisplayStatus.c)
 *     PopProcessorInformation @ 0x140780E7C (PopProcessorInformation.c)
 *     PopUpdateConsoleDisplayState @ 0x1407814E4 (PopUpdateConsoleDisplayState.c)
 *     PopSessionConnectionChange @ 0x14078D92C (PopSessionConnectionChange.c)
 *     PopAcquireTransitionLock @ 0x14078DA78 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14078DAD4 (PopReleaseTransitionLock.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E444 (PopCurrentPowerStatePrecise.c)
 *     PopEnableHiberFile @ 0x1407910F0 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x140792494 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x1407928E8 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1407929CC (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x140792C94 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CBA48 (PopEtEnergyTrackerCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888B30 (DbgkWerCaptureLiveKernelDump.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408E19F4 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopApplyAdminPolicy @ 0x1408E3D3C (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1408E3E14 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x1408E60E4 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1408E6470 (PpmSetSimulatedLoad.c)
 *     PopSetHiberFileSize @ 0x1408E72A0 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408E73B0 (PopSetHiberFileType.c)
 *     PopThermalProcessUsermodeEvent @ 0x1408E7B98 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x1408E9E4C (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x1408EAA64 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x1408EC53C (PopTraceMonitorOnRequestUserInput.c)
 *     PopBatteryDeviceState @ 0x1408ECF18 (PopBatteryDeviceState.c)
 *     PopIsInputSuppressionEngaged @ 0x1408EED38 (PopIsInputSuppressionEngaged.c)
 *     PopPdcCsDeviceNotification @ 0x1408EFE24 (PopPdcCsDeviceNotification.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408F0228 (PopProcessSessionDisplayStateChange.c)
 *     PopScreenOff @ 0x1408F02C8 (PopScreenOff.c)
 *     PopUserPresentOverride @ 0x1408F5380 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x1408F92A4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F93A4 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x1408FE4EC (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1408FE65C (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FE9EC (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x140900694 (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140A71334 (PopInitPlatformSettings.c)
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
  struct _PROCESSOR_NUMBER *v11; // r14
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
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  size_t v27; // rax
  LUID v28; // rcx
  NTSTATUS inited; // ebx
  char v30; // r13
  unsigned __int64 v31; // rax
  ULONG v32; // r13d
  PVOID v33; // rcx
  int v35; // eax
  int v36; // ebx
  NTSTATUS v37; // eax
  bool v38; // sf
  NTSTATUS SettingNotificationName; // eax
  int v40; // eax
  int Info; // eax
  char IsDevicePotentialDripsConstraint; // al
  char *v43; // rax
  unsigned int v44; // eax
  unsigned __int8 Number; // al
  unsigned int v46; // r12d
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // ebx
  int v51; // ecx
  char v52; // al
  int ProcessSessionId; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  USHORT Group; // bx
  unsigned int v58; // eax
  _QWORD *PoolWithTag; // rax
  unsigned int v60; // ebx
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int *p_Group; // rdx
  __int64 v69; // rcx
  unsigned int v70; // edx
  __int64 v71; // rcx
  int PowerRequestListInfo; // eax
  GUID *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  char v77; // r13
  unsigned int v78; // eax
  bool v79; // bl
  char v80; // [rsp+50h] [rbp-6F8h]
  ULONG Length; // [rsp+54h] [rbp-6F4h]
  unsigned int Length_4; // [rsp+58h] [rbp-6F0h] BYREF
  char v83; // [rsp+5Ch] [rbp-6ECh] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+5Dh] [rbp-6EBh]
  char v85; // [rsp+5Eh] [rbp-6EAh]
  void *Src; // [rsp+60h] [rbp-6E8h] BYREF
  char v87; // [rsp+68h] [rbp-6E0h]
  PVOID P; // [rsp+70h] [rbp-6D8h]
  int v89; // [rsp+78h] [rbp-6D0h]
  POWER_INFORMATION_LEVEL v90; // [rsp+80h] [rbp-6C8h]
  int v91; // [rsp+88h] [rbp-6C0h]
  __int64 v92; // [rsp+90h] [rbp-6B8h] BYREF
  BOOL v93; // [rsp+98h] [rbp-6B0h]
  PVOID v94; // [rsp+A0h] [rbp-6A8h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-6A0h]
  void *v96; // [rsp+B0h] [rbp-698h]
  LUID v97; // [rsp+B8h] [rbp-690h]
  _QWORD v98[192]; // [rsp+C0h] [rbp-688h] BYREF
  _BYTE v99[64]; // [rsp+6C0h] [rbp-88h] BYREF

  v95 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v90 = InformationLevel;
  v87 = 0;
  memset(v98, 0, sizeof(v98));
  v91 = 0;
  v92 = 0LL;
  Src = 0LL;
  Length_4 = 0;
  v11 = 0LL;
  P = 0LL;
  v94 = 0LL;
  LOBYTE(v12) = 0;
  v80 = 0;
  v85 = 0;
  v83 = 0;
  if ( (unsigned int)v8 > PowerInformationLevelMaximum )
  {
    inited = -1073741811;
    goto LABEL_376;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v13;
  v14 = InputBuffer != 0LL ? InputBufferLength : 0;
  v15 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  v96 = v15;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (void *)(v95 & -(__int64)(Length != 0));
  if ( !v13 )
  {
    v11 = (struct _PROCESSOR_NUMBER *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
    P = v11;
LABEL_51:
    v31 = (unsigned int)(v8 - 38);
    if ( (unsigned int)v31 > 0x39 || (v9 = 0x3FFE3BE75BE26EDLL, !_bittest64(&v9, v31)) )
    {
LABEL_70:
      if ( (unsigned int)v8 > TraceApplicationPowerMessageEnd || (v35 = -234812256, !_bittest(&v35, v8)) )
      {
        PopAcquirePolicyLock(v9);
        LOBYTE(v12) = 1;
        v80 = 1;
        v85 = 1;
      }
    }
    switch ( v8 )
    {
      case SystemPowerPolicyAc:
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 == 8 )
        {
          v37 = PpmSetSimulatedLoad(v11);
          goto LABEL_85;
        }
        if ( v14 != 4 )
          goto LABEL_259;
        v37 = PpmClearSimulatedLoad(v11);
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
          v11 = (struct _PROCESSOR_NUMBER *)P;
        }
        else
        {
          inited = -1073741670;
        }
        goto LABEL_60;
      case VerifySystemPolicyAc:
        if ( !v11 || v14 != 4 || v16 )
          goto LABEL_211;
        v93 = *v11 != 0;
        PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE);
        goto LABEL_54;
      case VerifySystemPolicyDc:
        if ( v11 || !v16 || Length != 64 )
          goto LABEL_211;
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        v50 = PopEsState;
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
        v52 = v98[6];
        if ( v50 == 1 )
          v52 = 1;
        LOBYTE(v98[6]) = v52;
        LOBYTE(v98[7]) = TtmpEnabled == 1;
        if ( TtmpEnabled != 1 )
          goto LABEL_183;
        inited = TtmInitCurrentSession();
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_61;
        PopNotifySessionUserPowerRequestsPresent();
LABEL_183:
        PopAcquirePolicyLock(v51);
        LODWORD(v98[2]) = 0;
        v98[0] = &PopNoMoreInput;
        v98[1] = &PopHiberBootForceMonitorOff;
        LODWORD(v98[3]) = byte_140C23E91 != 0;
        HIDWORD(v98[3]) = dword_140C23E8C;
        HIDWORD(v98[2]) = dword_140C23EAC;
        v98[4] = qword_140C23EB0;
        HIDWORD(v98[6]) = HIDWORD(qword_140C23EB8);
        v98[5] = __PAIR64__(dword_140C23EC0, qword_140C23EB8);
        BYTE1(v98[6]) = PopLidOpened;
        Src = v98;
        Length_4 = 64;
        ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u is started\n", ProcessSessionId);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
        PopReleasePolicyLock(v55, v54);
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
            ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v11[1]);
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
        v32 = Length;
        if ( Length != 8 )
          goto LABEL_232;
        LOBYTE(v12) = v8 == PlmPowerRequestCreate;
        Info = PopPowerRequestCreateInfo(v11, v12, v98);
        goto LABEL_126;
      case SystemPowerStateHandler:
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 != 24 )
          goto LABEL_232;
        v40 = PopPowerRequestActionInfo(v11, v12);
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
        inited = PopProcessorInformation(v98, v12, Group, &Length_4);
        if ( inited < 0 )
          goto LABEL_61;
        Src = v98;
        goto LABEL_54;
      case AdministratorPowerPolicy:
        if ( !v11 || v14 != 16 )
          goto LABEL_211;
        v56 = PopUmpoSendLegacyEvent(v11, v12);
        inited = v56;
        if ( v56 >= 0 )
          goto LABEL_54;
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( v56 == -1073741536 )
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
            v37 = PpmParkApplyForcedMask(v11, p_Group);
            goto LABEL_85;
          case 0x18u:
            p_Group = (unsigned int *)&v11[4].Group;
            goto LABEL_267;
          case 2u:
            v37 = PpmParkClearForcedMask(v11, v12);
LABEL_85:
            inited = v37;
            break;
          default:
LABEL_259:
            inited = -1073741811;
            break;
        }
        v38 = inited < 0;
LABEL_87:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( v38 )
          goto LABEL_61;
LABEL_54:
        v32 = Length;
LABEL_55:
        if ( !Src || !v16 )
          goto LABEL_59;
        if ( v32 < Length_4 )
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
        v30 = v80;
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
        PowerRequestListInfo = ExGetWakeTimerList((ULONG_PTR *)&Src, &Length_4, v10, (_DWORD *)0x140000000LL);
LABEL_294:
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        inited = PowerRequestListInfo;
        if ( PowerRequestListInfo < 0 )
          goto LABEL_61;
        v83 = 1;
        goto LABEL_54;
      case ProcessorStateHandler2:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 < 4 )
          goto LABEL_232;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v61);
        inited = PopSetHiberFileSize(*(_DWORD *)v11, &v92);
        PopReleasePolicyLock(v63, v62);
        v64 = 5LL;
        goto LABEL_245;
      case SystemPowerStateNotifyHandler:
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_251;
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 == 8 )
        {
          v37 = PpmSetSimulatedIdle((__int64)v11);
          goto LABEL_85;
        }
        if ( v14 != 4 )
          goto LABEL_259;
        v37 = PpmClearSimulatedIdle(v11);
        goto LABEL_85;
      case ProcessorPowerPolicyAc:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 8 )
          goto LABEL_232;
        v32 = Length;
        if ( Length != 4 )
          goto LABEL_232;
        inited = PpmParkSetLpiCap((int)*v11, *(_DWORD *)&v11[1], (unsigned int *)v98);
        if ( inited < 0 )
          goto LABEL_60;
        Src = v98;
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
        LOBYTE(v69) = v11->Group;
        inited = PopUserPresentOverride(v69);
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
        v32 = Length;
        if ( Length != 8 )
          goto LABEL_211;
        v44 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (struct _PROCESSOR_NUMBER *)P;
        PopSessionInputChange(v44, P, v16);
        goto LABEL_55;
      case SystemPowerLoggingEntry:
        if ( !v11 )
          goto LABEL_211;
        if ( v14 != 2 )
          goto LABEL_211;
        if ( !v16 )
          goto LABEL_211;
        v32 = Length;
        if ( Length != 8 )
          goto LABEL_211;
        v47 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopSessionConnectionChange(v47, P, v16);
        v48 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (struct _PROCESSOR_NUMBER *)P;
        LOBYTE(v12) = *((_BYTE *)P + 1);
        if ( qword_140C543D8 )
        {
          LOBYTE(v49) = *(_BYTE *)P;
          qword_140C543D8(v48, v12, v49);
        }
        goto LABEL_55;
      case SetPowerSettingValue:
        if ( v11 || v16 )
          goto LABEL_211;
        v60 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u is closed\n", v60);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
        PopFreeSessionState(v60);
        if ( TtmpEnabled == 1 )
          TtmCleanupCurrentSession();
        goto LABEL_115;
      case NotifyUserPowerSetting:
        if ( !v11 || v14 != 8 || v16 )
          goto LABEL_211;
        v58 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v11 = (struct _PROCESSOR_NUMBER *)P;
        PopSessionWinlogonNotification(v58, (__int64)P);
        goto LABEL_54;
      case PowerInformationLevelUnused0:
        if ( PsIsCurrentThreadInServerSilo(v9, v12) )
          goto LABEL_134;
        if ( v11 || !v16 )
          goto LABEL_211;
        PopFilterCapabilities(&PopCapabilities, v98);
        if ( BYTE2(v98[2]) )
          PopReadHiberbootPolicy((char *)&v98[2] + 2);
        v43 = (char *)&v98[2] + 2;
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
        v46 = (unsigned int)v11[1];
        if ( PopPlatformAoAc && LOBYTE(v11->Group) )
        {
          PopAcquirePolicyLock(v9);
          if ( (unsigned __int8)PopIsInputSuppressionEngaged(v46) )
          {
            v73 = &NullGuid;
            if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
              PopTraceMonitorOnRequestUserInput(v46);
          }
          LOBYTE(v73) = 1;
          inited = PopProcessSessionDisplayStateChange(v73, v46);
          PopReleasePolicyLock(v75, v74);
          if ( !inited || inited == 259 )
          {
            v12 = PopLastStandbyExitScenarioId;
            if ( PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId && !PopConsoleDisplayState )
            {
              PopDiagTraceMonitorOnWithLidClosed(v46);
              PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
              ZwUpdateWnfStateData(
                (__int64)&WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
                (__int64)&PopWdiCurrentScenarioInstanceId);
            }
          }
        }
        goto LABEL_60;
      case TraceApplicationPowerMessageEnd:
        if ( v11 || v16 )
          goto LABEL_211;
        inited = PopInitPlatformSettings(v9, v12);
        byte_140C24074 = PopPlatformAoAc;
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
        v76 = 23LL;
        if ( v8 != ThermalStandby )
          v76 = 11LL;
        PopScreenOff(v76, v12);
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
        LODWORD(v98[0]) = PopCapturePlatformRole(v9, v12);
        Src = v98;
        Length_4 = 4;
        goto LABEL_54;
      case ProcessorLoad:
        if ( v11 || !v16 )
          goto LABEL_211;
        LODWORD(v98[0]) = qword_140C239E8;
        v98[1] = qword_140C23B80;
        v98[2] = qword_140C23B88;
        if ( PopSleepStats )
        {
          Src = v98;
          Length_4 = 24;
          goto LABEL_54;
        }
        inited = -1073741823;
        goto LABEL_60;
      case PowerShutdownNotification:
        if ( v11 || v16 )
          goto LABEL_211;
        v77 = PopErrataReportingIncorrectLidState;
        if ( TtmpEnabled == 1 )
        {
          v78 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          TtmNotifySessionDisplayBurst(v78, 6LL);
LABEL_115:
          v11 = (struct _PROCESSOR_NUMBER *)P;
        }
        else
        {
          v79 = 0;
          if ( !PopLidOpened )
            v79 = PopConsoleExternalDisplayConnected == 0;
          if ( !v79 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v77 )
          {
            LOBYTE(v10) = v79;
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
        PopCurrentPowerStatePrecise(v98, 0LL);
        Src = v98;
        Length_4 = 32;
        goto LABEL_54;
      case ProcessorInformationEx:
        if ( !v11 || v16 )
          goto LABEL_211;
        if ( v14 < 0x10 || v14 < 2 * (unsigned int)v11[3].Group + 14 )
          goto LABEL_232;
        v40 = PopThermalProcessUsermodeEvent(v11, v12);
LABEL_114:
        inited = v40;
        v38 = v40 < 0;
        goto LABEL_87;
      case NotifyUserModeLegacyPowerEvent:
        v70 = (unsigned int)v11[2];
        v71 = *(_QWORD *)&v11->Group;
        if ( LOBYTE(v11[3].Group) )
          PoSetPowerRequestInternal(v71, v70);
        else
          PoClearPowerRequestInternal(v71, v70);
        goto LABEL_54;
      case GroupPark:
        if ( !v11 || !v16 )
          goto LABEL_211;
        inited = RtlStringCbLengthW(&v11->Group, v14, 0LL);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_61;
        inited = PopBatteryDeviceState(v11, v98);
        if ( inited < 0 )
          goto LABEL_61;
        Src = v98;
        Length_4 = 52;
        goto LABEL_54;
      case ProcessorIdleDomains:
        if ( !v11 )
          goto LABEL_211;
        if ( v14 < 8 )
          goto LABEL_211;
        v36 = (int)*v11;
        if ( (unsigned int)(*(_DWORD *)v11 - 68) <= 0xFBB || v36 >= 4107 )
          goto LABEL_211;
        if ( (unsigned int)(v36 - 4096) > 0xA )
        {
          v37 = PopPowerInformationInternal(
                  v36,
                  (_DWORD)v11,
                  v14,
                  (_DWORD)v16,
                  (__int64)&Src,
                  (__int64)&Length_4,
                  (__int64)&v83);
          goto LABEL_85;
        }
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
          && !PopCapabilityCheck(L"terminalPowerManagement") )
        {
          inited = -1073741727;
          goto LABEL_60;
        }
        v37 = TtmDispatchApi(
                v36,
                (_DWORD)v11,
                v14,
                (_DWORD)v16,
                Length,
                (__int64)&Src,
                (__int64)&Length_4,
                (__int64)&v83);
        goto LABEL_85;
      case SystemHiberFileSize:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 < 4 )
          goto LABEL_232;
        PopAcquireTransitionLock(6LL);
        PopAcquirePolicyLock(v65);
        inited = PopSetHiberFileType(*(_DWORD *)v11, &v92);
        PopReleasePolicyLock(v67, v66);
        v64 = 6LL;
LABEL_245:
        PopReleaseTransitionLock(v64);
        InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
        if ( inited < 0 )
          goto LABEL_61;
        Src = &v92;
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
        LOBYTE(v98[0]) = IsDevicePotentialDripsConstraint;
        v43 = (char *)v98;
LABEL_132:
        Src = v43;
        Length_4 = 1;
        goto LABEL_54;
      case ProcessorPerfCapHv:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 12 )
          goto LABEL_232;
        v32 = Length;
        if ( Length != 8 )
          goto LABEL_232;
        Info = PopEtEnergyTrackerCreate(v11, v98);
LABEL_126:
        InputBuffer = v15;
        inited = Info;
        if ( Info < 0 )
          goto LABEL_61;
        Src = v98;
        Length_4 = 8;
        goto LABEL_55;
      case ProcessorSetIdle:
        if ( !v11 || !v16 )
          goto LABEL_211;
        if ( v14 != 8 )
          goto LABEL_232;
        v32 = Length;
        if ( Length < 0xC )
          goto LABEL_232;
        inited = PopEtEnergyTrackerQuery(*(_QWORD *)&v11->Group, v16, Length);
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
        v89 = inited;
        if ( inited < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
          v11 = (struct _PROCESSOR_NUMBER *)P;
          v30 = 0;
          goto LABEL_62;
        }
        v8 = v90;
      }
      if ( (unsigned int)(v8 - 92) <= 1 )
      {
        LOBYTE(v9) = v13;
        inited = ExCheckFullProcessInformationAccess(v9);
        v89 = inited;
        if ( inited < 0 )
        {
          InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
          v11 = (struct _PROCESSOR_NUMBER *)P;
          v30 = 0;
          goto LABEL_62;
        }
        v8 = v90;
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
            v89 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (struct _PROCESSOR_NUMBER *)P;
            v30 = 0;
            goto LABEL_62;
          }
        }
      }
      if ( v15 )
      {
        v21 = (unsigned int)(v8 - 11);
        if ( (unsigned int)v21 > 0x3D || (v9 = 0x2001800900000001LL, !_bittest64(&v9, v21)) )
        {
          if ( PsIsCurrentThreadInServerSilo(v9, v12) )
          {
            inited = -1073741637;
            v89 = -1073741637;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (struct _PROCESSOR_NUMBER *)P;
            v30 = 0;
            goto LABEL_62;
          }
        }
        v22 = (unsigned int)(v8 - 38);
        if ( (unsigned int)v22 <= 0x39 && (v23 = 0x218000004422401LL, _bittest64(&v23, v22))
          || v8 == AdministratorPowerPolicy )
        {
          if ( !(unsigned __int8)PspIsContextAdmin() )
          {
            inited = -1073741790;
            v89 = -1073741790;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v11 = (struct _PROCESSOR_NUMBER *)P;
            v30 = 0;
            goto LABEL_62;
          }
        }
        v24 = (unsigned int)(v8 - 37);
        if ( (unsigned int)v24 > 0x3A || (v25 = 0x7AE005828F40BC3LL, !_bittest64(&v25, v24)) )
        {
          if ( (unsigned int)(v8 - 2) > 1 && v8 != ProcessorInformation )
          {
            v28 = SeShutdownPrivilege;
            if ( v8 == SystemReserveHiberFile )
              v28 = SeCreatePagefilePrivilege;
            v97 = v28;
            if ( !SeSinglePrivilegeCheck(v28, v13) )
            {
              inited = -1073741727;
              v89 = -1073741727;
              InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
              v11 = (struct _PROCESSOR_NUMBER *)P;
              v30 = 0;
              goto LABEL_62;
            }
          }
        }
        if ( v14 )
        {
          v26 = (unsigned __int64)v15 + v14;
          if ( v26 > 0x7FFFFFFF0000LL || v26 < (unsigned __int64)v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v27 = v14;
        if ( v14 > 0x40 )
        {
          v11 = (struct _PROCESSOR_NUMBER *)ExAllocatePoolWithTag(PagedPool, v14, 0x206D654Du);
          P = v11;
          v27 = v14;
          if ( !v11 )
          {
            inited = -1073741670;
            v89 = -1073741670;
            InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
            v30 = 0;
            goto LABEL_62;
          }
        }
        else
        {
          v11 = (struct _PROCESSOR_NUMBER *)v99;
          P = v99;
        }
        memmove(v11, v15, v27);
      }
      else
      {
        v11 = (struct _PROCESSOR_NUMBER *)P;
      }
      if ( v16 )
        ProbeForWrite(v16, Length, 1u);
      LOBYTE(v12) = 0;
      goto LABEL_51;
    }
  }
  inited = -1073741790;
  InputBuffer = (PVOID)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  v11 = (struct _PROCESSOR_NUMBER *)P;
LABEL_376:
  v30 = 0;
LABEL_62:
  v33 = v94;
  if ( v94 )
    ExFreePoolWithTag(v94, 0);
  if ( v83 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v30 )
    PopReleasePolicyLock(v33, v12);
  if ( v11 && v11 != InputBuffer && v11 != (struct _PROCESSOR_NUMBER *)v99 )
    ExFreePoolWithTag(v11, 0x206D654Du);
  return inited;
}
