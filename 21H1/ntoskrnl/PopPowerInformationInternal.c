/*
 * XREFs of PopPowerInformationInternal @ 0x14070C7D4
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     RtlStringCbCopyW @ 0x1402DF118 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x1402E535C (RtlStringCbLengthW.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     PopSetWatchdog @ 0x14035BDF8 (PopSetWatchdog.c)
 *     RtlCheckTokenMembership @ 0x14035C110 (RtlCheckTokenMembership.c)
 *     PopDeepSleepSetDisengageReason @ 0x14035CE78 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14035CF00 (PopDeepSleepClearDisengageReason.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PoLatencySensitivityHint @ 0x14037AE20 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038A8E0 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1403C58A0 (PoDirectedDripsSetDeviceFlags.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     PpmInternalPlatformIdleVeto @ 0x1405617D8 (PpmInternalPlatformIdleVeto.c)
 *     PpmInternalProcessorIdleVeto @ 0x14056182C (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x140562CC0 (PoDirectedDripsClearDeviceFlags.c)
 *     PopIsRunningInVm @ 0x140563200 (PopIsRunningInVm.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140563278 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopFxClearDeviceConstraints @ 0x1405642C4 (PopFxClearDeviceConstraints.c)
 *     PopPlRegisterPowerPlane @ 0x140578FA4 (PopPlRegisterPowerPlane.c)
 *     RtlIsMultiSessionSku @ 0x1406CCA90 (RtlIsMultiSessionSku.c)
 *     PspIsContextAdmin @ 0x1406E20D8 (PspIsContextAdmin.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     PopTransitionCheckpoint @ 0x1407618D8 (PopTransitionCheckpoint.c)
 *     PoUserShutdownCancelled @ 0x1407654B0 (PoUserShutdownCancelled.c)
 *     PopIsRunningAsLocalSystem @ 0x140765A48 (PopIsRunningAsLocalSystem.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140765B04 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSetDisplayStatus @ 0x140765EDC (PopSetDisplayStatus.c)
 *     PopBootStatSet @ 0x14076A2B4 (PopBootStatSet.c)
 *     PopEsQueueStateEvaluation @ 0x14076B00C (PopEsQueueStateEvaluation.c)
 *     PopUpdateConsoleDisplayState @ 0x14076D0B4 (PopUpdateConsoleDisplayState.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140776DEC (PpmPerfUpdateDomainPolicy.c)
 *     PopAcquireTransitionLock @ 0x140779288 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x1407792E4 (PopReleaseTransitionLock.c)
 *     PopBroadcastSessionInfo @ 0x14077F4F4 (PopBroadcastSessionInfo.c)
 *     PopBootStatGet @ 0x1407ABC90 (PopBootStatGet.c)
 *     PopUpdateExternalDisplayState @ 0x1407BD028 (PopUpdateExternalDisplayState.c)
 *     PopFxPlatformRegisterInterface @ 0x1407BDE6C (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407BEA94 (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x1408DC72C (PopCheckTestsigningEnabled.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408DD000 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopS0LowPowerIdleInfo @ 0x1408DF7CC (PopS0LowPowerIdleInfo.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E194C (PpmPerfGetBrandedFrequency.c)
 *     PopReadPagesFromHiberFile @ 0x1408E2858 (PopReadPagesFromHiberFile.c)
 *     PopReadResumeContext @ 0x1408E2AB4 (PopReadResumeContext.c)
 *     PopScreenOff @ 0x1408EBC38 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408EBC84 (PopScreenOn.c)
 *     PopNetUpdateStandbyRequest @ 0x1408ED92C (PopNetUpdateStandbyRequest.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408EDB60 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x1408EDC18 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408EDE5C (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408EDF44 (PopBootStatUnlock.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F102C (PopUpdateSmartUserPresencePredictions.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1408F423C (PopDirectedDripsUmPowerInformationInternal.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FA728 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FA7B4 (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x14090F0A0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  _QWORD *PoolWithTag; // rdi
  char *v19; // rax
  int BootSessionStandbyActivationInfo; // ebx
  unsigned __int64 v22; // rax
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  PVOID v28; // r14
  unsigned __int64 v29; // r15
  int v30; // eax
  unsigned int v31; // eax
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  int v39; // edi
  int v40; // edi
  _BYTE *v41; // rdi
  char PowerButtonBugcheckEnabled; // al
  _QWORD *v43; // rax
  char *v44; // rdx
  const WNF_STATE_NAME *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  _OWORD *v48; // rax
  __int128 v49; // xmm1
  const wchar_t *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int BrandedFrequency; // eax
  _PROCESSOR_NUMBER *v55; // rcx
  ULONG v56; // edx
  char v57; // di
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  PVOID v62; // rax
  PVOID v63; // rdi
  _OWORD *v64; // rax
  __int128 v65; // xmm0
  int v66; // eax
  bool v67; // zf
  int v68; // edi
  _DWORD *v69; // rcx
  char v70; // bl
  _BYTE *v71; // rax
  unsigned int v72; // eax
  _BYTE *v73; // rax
  int v74; // ecx
  __int64 v75; // rax
  _BYTE *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  char v80; // al
  int v81; // edi
  int v82; // edi
  int v83; // edi
  int v84; // edi
  int v85; // edi
  _BYTE *v86; // rcx
  char v87; // al
  _DWORD *v88; // rax
  __int64 v89; // rcx
  BOOLEAN HasCapability; // [rsp+40h] [rbp-61h] BYREF
  BOOLEAN IsMember; // [rsp+41h] [rbp-60h] BYREF
  char v92; // [rsp+42h] [rbp-5Fh] BYREF
  _BYTE *v93; // [rsp+48h] [rbp-59h]
  PVOID P; // [rsp+50h] [rbp-51h]
  _DWORD v95[2]; // [rsp+58h] [rbp-49h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-41h] BYREF
  __int64 v97; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v99[8]; // [rsp+80h] [rbp-21h] BYREF

  v8 = a2;
  v9 = a1;
  v10 = 0LL;
  v11 = (unsigned int)a3;
  *a5 = 0LL;
  *a6 = 0;
  *a7 = 0;
  v93 = a7;
  HasCapability = 0;
  IsMember = 0;
  pcbLength = 0LL;
  v95[0] = 0;
  v97 = 0LL;
  P = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    v12 = (unsigned int)(v9 - 5);
    if ( (unsigned int)v12 <= 0x3B )
    {
      a2 = 0x88B4F8410080005LL;
      if ( _bittest64(&a2, v12) )
      {
        BootSessionStandbyActivationInfo = -1073741637;
        goto LABEL_70;
      }
    }
    goto LABEL_4;
  }
  if ( (_DWORD)v9 == 36 )
  {
    if ( (unsigned __int8)PopIsRunningAsLocalSystem() )
      goto LABEL_242;
    return (unsigned int)-1073741790;
  }
  if ( (_DWORD)v9 == 65 )
    return (unsigned int)-1073741790;
  if ( (unsigned int)v9 <= 0x3F )
  {
    v10 = 0x8E00030014B80105uLL;
    if ( _bittest64((const __int64 *)&v10, v9) )
      return (unsigned int)-1073741790;
  }
  if ( (_DWORD)v9 == 67 )
    return (unsigned int)-1073741790;
  v22 = (unsigned int)(v9 - 29);
  if ( (unsigned int)v22 <= 0x23 )
  {
    v10 = 0x88B4C0001LL;
    if ( _bittest64((const __int64 *)&v10, v22) )
    {
      if ( !PspIsContextAdmin() )
        return (unsigned int)-1073741790;
    }
  }
  if ( ((_DWORD)v9 == 35 || (_DWORD)v9 == 24) && !(unsigned __int8)PopIsRunningAsLocalSystem() )
    return (unsigned int)-1073741790;
  if ( (_DWORD)v9 == 61 )
  {
    if ( !(unsigned __int8)PopCheckTestsigningEnabled() || !PspIsContextAdmin() )
      return (unsigned int)-1073741790;
    goto LABEL_74;
  }
  if ( (_DWORD)v9 == 45 )
  {
    BootSessionStandbyActivationInfo = 0;
    if ( (unsigned __int8)PopIsRunningAsLocalSystem()
      || (unsigned __int8)PopCheckTestsigningEnabled() && PspIsContextAdmin() )
    {
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      if ( *(_BYTE *)(v8 + 8) )
        PoUserShutdownInitiated();
      else
        PoUserShutdownCancelled();
      return (unsigned int)BootSessionStandbyActivationInfo;
    }
    return (unsigned int)-1073741790;
  }
  if ( (_DWORD)v9 != 25 )
  {
LABEL_4:
    if ( (int)v9 <= 38 )
    {
      if ( (_DWORD)v9 == 38 )
        goto LABEL_59;
      if ( (int)v9 <= 22 )
      {
        if ( (_DWORD)v9 != 22 )
        {
          if ( (int)v9 > 6 )
          {
            v13 = v9 - 7;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 10;
                if ( v15 )
                {
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    v17 = v16 - 1;
                    if ( v17 )
                    {
                      if ( v17 == 1 )
                      {
                        if ( (unsigned int)v11 < 0x60 || !*(_QWORD *)(v8 + 8) && !a4 )
                          return (unsigned int)-1073741789;
                        if ( *(_DWORD *)(v8 + 24) == 412 )
                        {
                          if ( *(_BYTE *)(v8 + 88) || !*(_DWORD *)(v8 + 16) )
                          {
                            PopBsdPowerWatchdogArmed = 0;
                          }
                          else
                          {
                            PopBsdLastPowerWatchdogStage = *(_DWORD *)(v8 + 32);
                            PopBsdPowerWatchdogArmed = 1;
                          }
                        }
                        PoolWithTag = 0LL;
                        if ( a4 )
                        {
                          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
                          if ( !PoolWithTag )
                            return (unsigned int)-1073741670;
                        }
                        v19 = PopSetWatchdog(*(char **)(v8 + 8), (unsigned int *)(v8 + 16), *(_BYTE *)(v8 + 88));
                        if ( !a4 )
                          return 0;
                        *PoolWithTag = v19;
                        *a5 = PoolWithTag;
                        *a6 = 8;
                        goto LABEL_51;
                      }
                    }
                    else if ( (_DWORD)v11 == 20 && !a4 )
                    {
                      LOBYTE(a3) = *(_BYTE *)(v8 + 16);
                      TtmNotifySessionTerminalInput(*(unsigned int *)(v8 + 8), *(unsigned int *)(v8 + 12), a3);
                      return 0;
                    }
                    return (unsigned int)-1073741811;
                  }
                  if ( (_DWORD)v11 != 20 || a4 )
                    return (unsigned int)-1073741811;
                  LOBYTE(a2) = *(_BYTE *)(v8 + 12);
                  TtmNotifySessionPowerStateChange(*(unsigned int *)(v8 + 8), a2);
                  v57 = *(_BYTE *)(v8 + 12);
                  PopAcquirePolicyLock(v58);
                  if ( *(_BYTE *)(v8 + 13) )
                  {
                    PopSetDisplayStatus(v57 != 0, v59);
                    PopUpdateConsoleDisplayState(v57 != 0);
                    if ( v57 )
                      PopPowerAggregatorNotifyDisplayPoweredOn();
                  }
                  PopDiagTraceSessionDisplayStateChange(
                    *(_BYTE *)(v8 + 12) == 0,
                    *(_DWORD *)(v8 + 8),
                    *(unsigned __int8 *)(v8 + 13),
                    *(_DWORD *)(v8 + 16));
                  BootSessionStandbyActivationInfo = 0;
LABEL_188:
                  PopReleasePolicyLock(v61, v60);
                  return (unsigned int)BootSessionStandbyActivationInfo;
                }
                if ( PopPlatformAoAc )
                {
                  if ( a4 )
                  {
                    v62 = ExAllocatePoolWithTag(PagedPool, 0x3B0uLL, 0x206D654Du);
                    v63 = v62;
                    if ( !v62 )
                      return (unsigned int)-1073741670;
                    BootSessionStandbyActivationInfo = PopQueryBootSessionStandbyActivationInfo((__int64)v62);
                    if ( BootSessionStandbyActivationInfo < 0 )
                      return (unsigned int)BootSessionStandbyActivationInfo;
                    *a5 = v63;
                    *a6 = 944;
LABEL_122:
                    *v93 = 1;
                    return (unsigned int)BootSessionStandbyActivationInfo;
                  }
                  return (unsigned int)-1073741789;
                }
                return (unsigned int)-1073741637;
              }
              if ( (unsigned int)v11 < 8 )
                return (unsigned int)-1073741789;
              if ( a4 )
                return (unsigned int)-1073741811;
              LOBYTE(v10) = *(_BYTE *)(v8 + 8);
              return (unsigned int)PopUpdateBackgroundCoolingStatus(v10);
            }
            if ( (unsigned int)v11 < 8 || !a4 )
              return (unsigned int)-1073741789;
            v48 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
            if ( !v48 )
              return (unsigned int)-1073741670;
            *v48 = 0LL;
            v48[1] = 0LL;
            *v48 = PopBsdPowerTransitionAtBoot;
            v49 = xmmword_140C54260;
            goto LABEL_127;
          }
          if ( (_DWORD)v9 == 6 )
          {
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( a4 )
              return (unsigned int)-1073741811;
            LOBYTE(v10) = *(_BYTE *)(v8 + 8);
            return (unsigned int)PopNetUpdateStandbyRequest(v10);
          }
          if ( !(_DWORD)v9 )
          {
            if ( (unsigned int)v11 < 0x20 || !a4 )
              return (unsigned int)-1073741789;
            v46 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
            v47 = v46;
            if ( !v46 )
              return (unsigned int)-1073741670;
            BootSessionStandbyActivationInfo = PopFxPlatformRegisterInterface(v8, v46);
            if ( BootSessionStandbyActivationInfo >= 0 )
            {
              *a5 = v47;
              *a6 = 16;
              goto LABEL_122;
            }
            goto LABEL_169;
          }
          v37 = v9 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( !v39 )
              {
                if ( (unsigned int)v11 >= 0x10 )
                {
                  if ( !a4 && (PopSimulate & 1) != 0 )
                  {
                    PopUpdateSmartUserPresencePredictions(*(_QWORD *)(v8 + 8), 0LL);
                    return 0;
                  }
                  return (unsigned int)-1073741811;
                }
                return (unsigned int)-1073741789;
              }
              v40 = v39 - 1;
              if ( v40 )
              {
                if ( v40 != 1 )
                  return (unsigned int)-1073741811;
                if ( (unsigned int)v11 >= 0xC )
                {
                  if ( !a4 )
                  {
                    PoLatencySensitivityHint(*(_DWORD *)(v8 + 8));
                    return 0;
                  }
                  return (unsigned int)-1073741811;
                }
                return (unsigned int)-1073741789;
              }
              if ( (unsigned int)v11 < 8 || !a4 )
                return (unsigned int)-1073741789;
              v41 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !v41 )
                return (unsigned int)-1073741670;
              if ( !PopPlatformAoAc || (v67 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v67) )
                PowerButtonBugcheckEnabled = 0;
LABEL_102:
              *v41 = PowerButtonBugcheckEnabled;
              *a5 = v41;
              *a6 = 1;
              *a7 = 1;
              return 0;
            }
            PopVideoInitialized = 1;
            v44 = &PopVideoInitialized;
            v45 = &WNF_PO_VIDEO_INITIALIALIZED;
            return (unsigned int)ZwUpdateWnfStateData(v45, v44, 1u, 0LL, 0LL, 0, 0);
          }
          if ( !a4 )
            return (unsigned int)-1073741789;
          v53 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
          v47 = v53;
          if ( !v53 )
            return (unsigned int)-1073741670;
          BrandedFrequency = PopS0LowPowerIdleInfo(v53);
LABEL_167:
          BootSessionStandbyActivationInfo = BrandedFrequency;
          if ( BrandedFrequency >= 0 )
          {
            *a5 = v47;
            *a6 = 8;
            goto LABEL_122;
          }
LABEL_169:
          v56 = 544040269;
          v10 = (unsigned __int64)v47;
          goto LABEL_170;
        }
        if ( (unsigned int)v11 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v64 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
        if ( !v64 )
          return (unsigned int)-1073741670;
        *v64 = 0LL;
        v64[1] = 0LL;
        v64[2] = 0LL;
        *v64 = PopBsdPhysicalPowerButtonInfoAtBoot;
        v64[1] = xmmword_140C54210;
        v65 = xmmword_140C54220;
LABEL_201:
        v64[2] = v65;
        *a5 = v64;
        *a6 = 48;
        goto LABEL_51;
      }
      if ( (int)v9 > 29 )
      {
        if ( (_DWORD)v9 != 30 )
        {
          if ( (int)v9 > 32 )
          {
            if ( (_DWORD)v9 == 33 )
              return (unsigned int)-1073741637;
            if ( (int)v9 > 35 )
            {
              if ( (_DWORD)v9 != 36 )
              {
                if ( (unsigned int)v11 < 8 || !a4 )
                  return (unsigned int)-1073741789;
                v69 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
                if ( !v69 )
                  return (unsigned int)-1073741670;
                *v69 = qword_140C23404;
                *a5 = v69;
                *a6 = 4;
                goto LABEL_107;
              }
LABEL_242:
              if ( PopIsRunningInVm() )
              {
                if ( (unsigned int)v11 >= 0xC )
                {
                  if ( !a4 )
                  {
                    v70 = *(_BYTE *)(v8 + 8);
                    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
                    PopEsEnabledOnHost = v70;
                    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
                    PopEsQueueStateEvaluation(0LL);
                    return 0;
                  }
                  return (unsigned int)-1073741811;
                }
                return (unsigned int)-1073741789;
              }
              return (unsigned int)-1073741637;
            }
          }
LABEL_59:
          if ( (_DWORD)v11 != 24 )
            return (unsigned int)-1073741811;
          if ( a4 )
          {
            v72 = *(_DWORD *)(v8 + 8);
            if ( !v72 )
              return (unsigned int)-1073741811;
            v29 = 4LL * v72;
            if ( v29 > 0xFFFFFFFF )
              return (unsigned int)-1073741675;
            P = ExAllocatePoolWithTag(PagedPool, (unsigned int)v29, 0x206D654Du);
            v28 = P;
            if ( !P )
              return (unsigned int)-1073741670;
          }
          else
          {
            v28 = P;
            LODWORD(v29) = 0;
          }
          switch ( (_DWORD)v9 )
          {
            case 0x1F:
              if ( !*(_DWORD *)(v8 + 8) )
                goto LABEL_255;
              v30 = PopBootStatGet(v8, v28);
              break;
            case 0x20:
              if ( *(_DWORD *)(v8 + 8) )
              {
                v30 = PopBootStatSet(v8, v28);
                break;
              }
LABEL_255:
              BootSessionStandbyActivationInfo = -1073741811;
LABEL_115:
              v10 = (unsigned __int64)P;
LABEL_70:
              if ( !v10 )
                return (unsigned int)BootSessionStandbyActivationInfo;
              v56 = 0;
LABEL_170:
              ExFreePoolWithTag((PVOID)v10, v56);
              return (unsigned int)BootSessionStandbyActivationInfo;
            case 0x22:
              if ( !*(_DWORD *)(v8 + 8) )
                goto LABEL_255;
              v30 = PopBootStatCheckIntegrity(v8);
              break;
            case 0x23:
              v30 = PopBootStatRestoreDefaults();
              break;
            default:
              v30 = PopBootStatUnlock();
              break;
          }
          BootSessionStandbyActivationInfo = v30;
          if ( v30 >= 0 )
          {
            if ( v28 )
            {
              v73 = v93;
              v10 = 0LL;
              *a5 = v28;
              *a6 = v29;
              *v73 = 1;
            }
            else
            {
              v10 = (unsigned __int64)P;
            }
            BootSessionStandbyActivationInfo = 0;
            goto LABEL_70;
          }
          goto LABEL_115;
        }
        if ( (unsigned int)v11 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v71 = ExAllocatePoolWithTag(PagedPool, 3uLL, 0x206D654Du);
        if ( !v71 )
          return (unsigned int)-1073741670;
        v71[2] = 0;
        *v71 = PpmPerfQosSupportedAndConfigured;
        v71[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
        v71[2] = PpmPerfQosGroupPolicyDisable != 0;
        *a5 = v71;
        *a6 = 3;
LABEL_107:
        *a7 = 1;
        return 0;
      }
      if ( (_DWORD)v9 == 29 )
      {
        if ( (unsigned int)v11 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v64 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
        if ( !v64 )
          return (unsigned int)-1073741670;
        *v64 = 0LL;
        v64[1] = 0LL;
        v64[2] = 0LL;
        *v64 = PopFirmwareResetReason;
        v64[1] = xmmword_140C54280;
        v65 = xmmword_140C54290;
        goto LABEL_201;
      }
      goto LABEL_81;
    }
    if ( (int)v9 <= 54 )
    {
      if ( (int)v9 < 53 )
      {
        if ( (int)v9 <= 45 )
        {
          v23 = v9 - 39;
          if ( !v23 )
          {
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            v44 = &v92;
            v92 = *(_BYTE *)(v8 + 8);
            v45 = (const WNF_STATE_NAME *)&WNF_PO_WAKE_ON_VOICE_STATE;
            return (unsigned int)ZwUpdateWnfStateData(v45, v44, 1u, 0LL, 0LL, 0, 0);
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
            {
              if ( (_DWORD)v11 != 16 )
                return (unsigned int)-1073741811;
              if ( !a4 )
                return (unsigned int)-1073741789;
              v76 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !v76 )
                return (unsigned int)-1073741670;
              v77 = *(_QWORD *)(v8 + 8);
              if ( v77 )
                v78 = *(_QWORD *)(*(_QWORD *)(v77 + 312) + 40LL);
              else
                v78 = 0LL;
              if ( !v78 || (v79 = *(_QWORD *)(v78 + 80)) == 0 || (v67 = *(_QWORD *)(v79 + 64) == 0LL, v80 = 1, v67) )
                v80 = 0;
              *v76 = v80;
              *a5 = v76;
              *a6 = 1;
              *a7 = 1;
              return 0;
            }
            v26 = v25 - 1;
            if ( !v26 )
            {
              if ( (unsigned int)v11 < 8 || !a4 )
                return (unsigned int)-1073741789;
              v48 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
              if ( !v48 )
                return (unsigned int)-1073741670;
              *v48 = 0LL;
              v48[1] = 0LL;
              *v48 = PopBsdPowerTransitionExtensionAtBoot;
              v49 = xmmword_140C54240;
LABEL_127:
              v48[1] = v49;
              *a5 = v48;
              *a6 = 32;
LABEL_51:
              *a7 = 1;
              return 0;
            }
            v27 = v26 - 1;
            if ( !v27 )
            {
              if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
                return (unsigned int)-1073741811;
              if ( !a4 )
                return (unsigned int)-1073741789;
              v47 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
              if ( !v47 )
                return (unsigned int)-1073741670;
              v55 = (_PROCESSOR_NUMBER *)(v8 + 8);
              *v47 = 0LL;
              if ( (_DWORD)v11 != 12 )
                v55 = 0LL;
              BrandedFrequency = PpmPerfGetBrandedFrequency(v55);
              goto LABEL_167;
            }
            if ( v27 != 1 )
              return (unsigned int)-1073741811;
            if ( (unsigned int)v11 < 0x90 )
              return (unsigned int)-1073741789;
            if ( a4 )
              return (unsigned int)-1073741811;
            BootSessionStandbyActivationInfo = RtlCheckTokenMembership(0LL, PopTimeBrokerServiceSid, &IsMember);
            if ( BootSessionStandbyActivationInfo < 0 )
              return (unsigned int)BootSessionStandbyActivationInfo;
            if ( IsMember )
            {
              if ( PopPlatformAoAc )
              {
                BootSessionStandbyActivationInfo = RtlStringCbLengthW((STRSAFE_PCNZWCH)(v8 + 8), 0x80uLL, &pcbLength);
                if ( BootSessionStandbyActivationInfo < 0 )
                  return (unsigned int)BootSessionStandbyActivationInfo;
                v75 = *(_QWORD *)(v8 + 136);
                if ( pcbLength )
                {
                  if ( !v75 )
                    return (unsigned int)-1073741811;
                }
                else if ( v75 )
                {
                  return (unsigned int)-1073741811;
                }
                PopAcquirePolicyLock(v74);
                PopTimeBrokerExpirationReason = 0;
                BootSessionStandbyActivationInfo = RtlStringCbCopyW(
                                                     &PopTimeBrokerExpirationReason,
                                                     0x80uLL,
                                                     (NTSTRSAFE_PCWSTR)(v8 + 8));
                PopTimeBrokerExpirationDueTime = *(_QWORD *)(v8 + 136);
                goto LABEL_188;
              }
              return (unsigned int)-1073741637;
            }
            return (unsigned int)-1073741790;
          }
          if ( (_DWORD)v11 != 16 || *(_DWORD *)(v8 + 8) )
            return (unsigned int)-1073741811;
          if ( *(_BYTE *)(v8 + 12) )
            PopDeepSleepSetDisengageReason(7u);
          else
            PopDeepSleepClearDisengageReason(7u);
          return 0;
        }
        v81 = v9 - 46;
        if ( !v81 )
        {
          if ( (_DWORD)v11 != 32 || a4 )
            return (unsigned int)-1073741811;
          PopNotifySessionUserPowerRequestAttributed(
            *(unsigned int *)(v8 + 24),
            *(_QWORD *)(v8 + 8),
            *(_QWORD *)(v8 + 16));
          return 0;
        }
        v82 = v81 - 1;
        if ( v82 )
        {
          v83 = v82 - 1;
          if ( v83 )
          {
            v84 = v83 - 1;
            if ( !v84 )
            {
              if ( !a4 )
                return (unsigned int)-1073741789;
              v41 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !v41 )
                return (unsigned int)-1073741670;
              PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
              goto LABEL_102;
            }
            v85 = v84 - 1;
            if ( v85 )
            {
              if ( v85 == 1 )
              {
                if ( (unsigned int)v11 >= 0x10 )
                {
                  BootSessionStandbyActivationInfo = 0;
                  PopWakeAlarmTimeOverride = *(_QWORD *)(v8 + 8);
                  return (unsigned int)BootSessionStandbyActivationInfo;
                }
                return (unsigned int)-1073741789;
              }
              return (unsigned int)-1073741811;
            }
            if ( !a4 )
              return (unsigned int)-1073741789;
            v86 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
            if ( !v86 )
              return (unsigned int)-1073741670;
            v87 = PopAutoChkCausedReboot;
            goto LABEL_306;
          }
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          if ( !*(_DWORD *)(v8 + 4) )
            return (unsigned int)PpmInternalPlatformIdleVeto(*(_DWORD *)(v8 + 8), *(_BYTE *)(v8 + 12));
        }
        else
        {
          if ( (unsigned int)v11 < 0x14 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          if ( !*(_DWORD *)(v8 + 4) )
            return (unsigned int)PpmInternalProcessorIdleVeto(
                                   *(_DWORD *)(v8 + 8),
                                   *(_DWORD *)(v8 + 12),
                                   *(_BYTE *)(v8 + 16));
        }
        return (unsigned int)-1073741735;
      }
LABEL_351:
      BootSessionStandbyActivationInfo = PopDirectedDripsUmPowerInformationInternal(
                                           v9,
                                           v11,
                                           v8,
                                           (_DWORD)a6,
                                           (__int64)a5);
      if ( BootSessionStandbyActivationInfo >= 0 && *a5 )
        goto LABEL_122;
      return (unsigned int)BootSessionStandbyActivationInfo;
    }
    if ( (int)v9 > 62 )
    {
      if ( (_DWORD)v9 == 63 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        v43 = ExAllocatePoolWithTag((POOL_TYPE)(v9 - 63 + 1), (unsigned int)(v9 - 63 + 8), 0x206D654Du);
        if ( !v43 )
          return (unsigned int)-1073741670;
        *v43 = &SshpRoutineBlock;
        *a5 = v43;
        *a6 = 8;
        goto LABEL_107;
      }
      if ( (_DWORD)v9 != 64 )
      {
        if ( (_DWORD)v9 == 65 )
        {
          if ( (_DWORD)v11 != 16 )
            return (unsigned int)-1073741811;
          v89 = *(_QWORD *)(v8 + 8);
          if ( !v89 )
            return (unsigned int)-1073741811;
          BootSessionStandbyActivationInfo = PopFxClearDeviceConstraints(v89);
          v31 = 0;
          if ( BootSessionStandbyActivationInfo < 0 )
            return (unsigned int)BootSessionStandbyActivationInfo;
          return v31;
        }
        if ( (_DWORD)v9 == 66 )
          return (unsigned int)-1073741637;
        if ( (_DWORD)v9 != 67 )
          return (unsigned int)-1073741811;
        *a6 = 0;
        *a5 = 0LL;
        v88 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        if ( !v88 )
          return (unsigned int)-1073741670;
        *v88 = 0;
        *v88 = PopDisableInboxPepGeneratedConstraintsOverride;
        *a5 = v88;
        *a6 = 4;
        return 0;
      }
      goto LABEL_351;
    }
    if ( (_DWORD)v9 == 62 )
    {
      if ( !a4 )
        return (unsigned int)-1073741789;
      v86 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
      if ( !v86 )
        return (unsigned int)-1073741670;
      v87 = PopLastBootSucceeded;
LABEL_306:
      *v86 = v87;
      *a5 = v86;
      *a6 = 1;
      goto LABEL_107;
    }
LABEL_74:
    if ( (_DWORD)v9 != 56 )
    {
      if ( (_DWORD)v9 == 57 )
      {
        if ( a4 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopPlRegisterPowerPlane(v8, v11, a3);
      }
      else if ( (_DWORD)v9 == 58 )
      {
        if ( (unsigned int)v11 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsSetDeviceFlags(*(_QWORD *)(v8 + 8), *(_DWORD *)(v8 + 16));
      }
      else
      {
        if ( (_DWORD)v9 != 59 )
        {
          if ( (_DWORD)v9 == 60 )
          {
            if ( !a4 )
              return (unsigned int)-1073741789;
            PopAcquireTransitionLock(8LL);
            BootSessionStandbyActivationInfo = PopReadResumeContext(v95, &v97);
            PopReleaseTransitionLock(8LL);
            if ( BootSessionStandbyActivationInfo < 0 )
              return (unsigned int)BootSessionStandbyActivationInfo;
            *a5 = v97;
            *a6 = v95[0];
          }
          else
          {
            if ( (_DWORD)v9 != 61 || (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741811;
            if ( !a4 )
              return (unsigned int)-1073741789;
            PopAcquireTransitionLock(8LL);
            BootSessionStandbyActivationInfo = PopReadPagesFromHiberFile(*(unsigned int *)(v8 + 8), 1LL, a5);
            PopReleaseTransitionLock(8LL);
            if ( BootSessionStandbyActivationInfo < 0 )
            {
              *a5 = 0LL;
              return (unsigned int)BootSessionStandbyActivationInfo;
            }
            *a6 = 4096;
          }
          *v93 = 1;
          return 0;
        }
        if ( (unsigned int)v11 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsClearDeviceFlags(*(_QWORD *)(v8 + 8), *(_DWORD *)(v8 + 16));
      }
    }
    goto LABEL_351;
  }
  v50 = L"systemManagement";
  CapabilityName = 0LL;
  v51 = 0x7FFFLL;
  do
  {
    if ( !*v50 )
      break;
    ++v50;
    --v51;
  }
  while ( v51 );
  v52 = (0x7FFF - v51) & -(__int64)(v51 != 0);
  if ( v51 )
  {
    CapabilityName.Buffer = L"systemManagement";
    CapabilityName.Length = 2 * v52;
    CapabilityName.MaximumLength = 2 * v52 + 2;
  }
  BootSessionStandbyActivationInfo = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
  if ( BootSessionStandbyActivationInfo < 0 )
    return (unsigned int)BootSessionStandbyActivationInfo;
  if ( !HasCapability )
    return (unsigned int)-1073741790;
LABEL_81:
  v32 = v9 - 23;
  if ( !v32 )
  {
    if ( (_DWORD)v11 != 12 )
      return (unsigned int)-1073741811;
    LOBYTE(v10) = *(_BYTE *)(v8 + 8);
    PopUpdateExternalDisplayState(v10);
    return 0;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    if ( (unsigned int)v11 < 0x28 )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    v68 = *(_DWORD *)(v8 + 12);
    if ( PopVideoHighPrecisionBrightnessEnabled
      || v68 != -1
      && (PopVideoHighPrecisionBrightnessEnabled = 1,
          ZwUpdateWnfStateData(
            &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
            &PopVideoHighPrecisionBrightnessEnabled,
            1u,
            0LL,
            0LL,
            0,
            0),
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF),
          PopVideoHighPrecisionBrightnessEnabled) )
    {
      if ( v68 == -1 )
        return (unsigned int)-1073741637;
    }
    v99[0] = *(_DWORD *)(v8 + 8);
    v99[1] = *(_DWORD *)(v8 + 12);
    v99[2] = *(_DWORD *)(v8 + 16);
    v99[3] = *(_DWORD *)(v8 + 20);
    v99[4] = *(_DWORD *)(v8 + 24);
    v99[5] = *(_DWORD *)(v8 + 28);
    v99[6] = *(_DWORD *)(v8 + 32);
    v99[7] = *(_DWORD *)(v8 + 36);
    PopBroadcastSessionInfo(4LL, 32LL, v99);
    return 0;
  }
  v34 = v33 - 1;
  if ( !v34 )
  {
    if ( (unsigned int)v11 >= 0xC )
    {
      if ( !a4 )
      {
        if ( *(_BYTE *)(v8 + 8) )
          PopScreenOn();
        else
          PopScreenOff(30LL, a2);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741789;
  }
  v35 = v34 - 1;
  if ( v35 )
  {
    v36 = v35 - 1;
    if ( v36 )
    {
      if ( v36 == 1 && (_DWORD)v11 == 12 )
      {
        v95[1] = *(_DWORD *)(v8 + 8);
        PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    if ( (unsigned int)v11 >= 0x10 )
    {
      if ( !a4 )
      {
        PopTransitionCheckpoint(*(unsigned int *)(v8 + 8), *(unsigned int *)(v8 + 12));
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741789;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a4 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v66 = PpmPerfQosDisableRefcount;
  if ( *(_BYTE *)(v8 + 8) )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      BootSessionStandbyActivationInfo = -1073741675;
    }
    else
    {
      v66 = PpmPerfQosDisableRefcount + 1;
      BootSessionStandbyActivationInfo = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v67 = v66 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      v66 = PpmPerfQosDisableRefcount - 1;
      BootSessionStandbyActivationInfo = 0;
      --PpmPerfQosDisableRefcount;
    }
    else
    {
      BootSessionStandbyActivationInfo = -1073741637;
    }
    v67 = v66 == 0;
  }
  if ( v67 )
    PpmPerfUpdateDomainPolicy();
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)BootSessionStandbyActivationInfo;
}
