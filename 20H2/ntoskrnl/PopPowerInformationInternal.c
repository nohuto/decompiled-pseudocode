/*
 * XREFs of PopPowerInformationInternal @ 0x1406F9724
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14023FDE8 (RtlStringCbCopyW.c)
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     RtlStringCbLengthW @ 0x140312FE0 (RtlStringCbLengthW.c)
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x14033F820 (PopSetWatchdog.c)
 *     PopDeepSleepSetDisengageReason @ 0x14033FD68 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14033FDF0 (PopDeepSleepClearDisengageReason.c)
 *     RtlCheckTokenMembership @ 0x140340910 (RtlCheckTokenMembership.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PoLatencySensitivityHint @ 0x14037D8D0 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14038D8C0 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1403C92A0 (PoDirectedDripsSetDeviceFlags.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     PpmInternalPlatformIdleVeto @ 0x140565808 (PpmInternalPlatformIdleVeto.c)
 *     PpmInternalProcessorIdleVeto @ 0x14056585C (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x140566CF0 (PoDirectedDripsClearDeviceFlags.c)
 *     PopIsRunningInVm @ 0x140567230 (PopIsRunningInVm.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1405672A8 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopFxClearDeviceConstraints @ 0x1405682F4 (PopFxClearDeviceConstraints.c)
 *     PopPlRegisterPowerPlane @ 0x14057D014 (PopPlRegisterPowerPlane.c)
 *     PspIsContextAdmin @ 0x1405E249C (PspIsContextAdmin.c)
 *     RtlIsMultiSessionSku @ 0x1406C1D10 (RtlIsMultiSessionSku.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407200D8 (PopSetPowerSettingValueAcDc.c)
 *     PoUserShutdownInitiated @ 0x140771690 (PoUserShutdownInitiated.c)
 *     PopTransitionCheckpoint @ 0x1407717C8 (PopTransitionCheckpoint.c)
 *     PoUserShutdownCancelled @ 0x140775EA0 (PoUserShutdownCancelled.c)
 *     PopIsRunningAsLocalSystem @ 0x140776438 (PopIsRunningAsLocalSystem.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1407764F4 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSetDisplayStatus @ 0x1407768CC (PopSetDisplayStatus.c)
 *     PopBootStatSet @ 0x14077B488 (PopBootStatSet.c)
 *     PopEsQueueStateEvaluation @ 0x14077C1DC (PopEsQueueStateEvaluation.c)
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407877FC (PpmPerfUpdateDomainPolicy.c)
 *     PopAcquireTransitionLock @ 0x140789C98 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140789CF4 (PopReleaseTransitionLock.c)
 *     PopBootStatGet @ 0x1407BCD30 (PopBootStatGet.c)
 *     PopBroadcastSessionInfo @ 0x1407C5B80 (PopBroadcastSessionInfo.c)
 *     PopUpdateExternalDisplayState @ 0x1407CEA28 (PopUpdateExternalDisplayState.c)
 *     PopFxPlatformRegisterInterface @ 0x1407CF91C (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407D0584 (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x1408E38DC (PopCheckTestsigningEnabled.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408E4150 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopS0LowPowerIdleInfo @ 0x1408E686C (PopS0LowPowerIdleInfo.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E8A0C (PpmPerfGetBrandedFrequency.c)
 *     PopReadPagesFromHiberFile @ 0x1408E96EC (PopReadPagesFromHiberFile.c)
 *     PopReadResumeContext @ 0x1408E9948 (PopReadResumeContext.c)
 *     PopScreenOff @ 0x1408F2AC8 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408F2B14 (PopScreenOn.c)
 *     PopNetUpdateStandbyRequest @ 0x1408F482C (PopNetUpdateStandbyRequest.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408F4A60 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x1408F4B18 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408F4D5C (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408F4E44 (PopBootStatUnlock.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F7F2C (PopUpdateSmartUserPresencePredictions.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1408FB13C (PopDirectedDripsUmPowerInformationInternal.c)
 *     TtmNotifySessionPowerStateChange @ 0x140901640 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409016CC (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140915F80 (RtlCapabilityCheckForSingleSessionSku.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  _QWORD *v18; // rdi
  char *v19; // rax
  int PagesFromHiberFile; // ebx
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
  __int64 *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  _OWORD *v48; // rax
  __int128 v49; // xmm1
  const wchar_t *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int BrandedFrequency; // eax
  struct _PROCESSOR_NUMBER *v55; // rcx
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
  _BYTE *PoolWithTag; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  char v78; // al
  int v79; // edi
  int v80; // edi
  int v81; // edi
  int v82; // edi
  int v83; // edi
  _BYTE *v84; // rcx
  char v85; // al
  _DWORD *v86; // rax
  __int64 v87; // rcx
  char v88; // [rsp+42h] [rbp-5Fh] BYREF
  _BYTE *v89; // [rsp+48h] [rbp-59h]
  PVOID P; // [rsp+50h] [rbp-51h]
  _DWORD v91[2]; // [rsp+58h] [rbp-49h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-41h]
  __int64 v93; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v95[8]; // [rsp+80h] [rbp-21h] BYREF

  v8 = a2;
  v9 = a1;
  v10 = 0LL;
  v11 = (unsigned int)a3;
  *a5 = 0LL;
  *a6 = 0;
  *a7 = 0;
  v89 = a7;
  pcbLength = 0LL;
  v91[0] = 0;
  v93 = 0LL;
  P = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (_DWORD)v9 == 36 )
    {
      if ( (unsigned __int8)PopIsRunningAsLocalSystem() )
        goto LABEL_238;
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
    switch ( (_DWORD)v9 )
    {
      case 0x3D:
        if ( !(unsigned __int8)PopCheckTestsigningEnabled() || !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
        goto LABEL_73;
      case 0x2D:
        PagesFromHiberFile = 0;
        if ( (unsigned __int8)PopIsRunningAsLocalSystem()
          || (unsigned __int8)PopCheckTestsigningEnabled() && PspIsContextAdmin() )
        {
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          if ( *(_BYTE *)(v8 + 8) )
            PoUserShutdownInitiated();
          else
            PoUserShutdownCancelled();
          return (unsigned int)PagesFromHiberFile;
        }
        return (unsigned int)-1073741790;
      case 0x19:
        v50 = L"systemManagement";
        SourceString = 0LL;
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
          SourceString.Buffer = L"systemManagement";
          SourceString.Length = 2 * v52;
          SourceString.MaximumLength = 2 * v52 + 2;
        }
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &SourceString);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        return (unsigned int)-1073741790;
    }
  }
  else
  {
    v12 = (unsigned int)(v9 - 5);
    if ( (unsigned int)v12 <= 0x3B )
    {
      a2 = 0x88B4F8410080005LL;
      if ( _bittest64(&a2, v12) )
      {
        PagesFromHiberFile = -1073741637;
        goto LABEL_69;
      }
    }
  }
  if ( (int)v9 > 38 )
  {
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
            v44 = &v88;
            v88 = *(_BYTE *)(v8 + 8);
            v45 = &WNF_PO_WAKE_ON_VOICE_STATE;
            return (unsigned int)ZwUpdateWnfStateData((__int64)v45, (__int64)v44);
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            if ( (_DWORD)v11 != 16 || *(_DWORD *)(v8 + 8) )
              return (unsigned int)-1073741811;
            if ( *(_BYTE *)(v8 + 12) )
              PopDeepSleepSetDisengageReason(7u);
            else
              PopDeepSleepClearDisengageReason(7u);
            return 0;
          }
          v25 = v24 - 1;
          if ( !v25 )
          {
            if ( (_DWORD)v11 != 16 )
              return (unsigned int)-1073741811;
            if ( a4 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !PoolWithTag )
                return (unsigned int)-1073741670;
              v75 = *(_QWORD *)(v8 + 8);
              if ( v75 )
                v76 = *(_QWORD *)(*(_QWORD *)(v75 + 312) + 40LL);
              else
                v76 = 0LL;
              if ( !v76 || (v77 = *(_QWORD *)(v76 + 80)) == 0 || (v67 = *(_QWORD *)(v77 + 64) == 0LL, v78 = 1, v67) )
                v78 = 0;
              *PoolWithTag = v78;
              *a5 = PoolWithTag;
              *a6 = 1;
              *a7 = 1;
              return 0;
            }
            return (unsigned int)-1073741789;
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
            v49 = xmmword_140C541C0;
LABEL_126:
            v48[1] = v49;
            *a5 = v48;
            *a6 = 32;
LABEL_50:
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
            v55 = (struct _PROCESSOR_NUMBER *)(v8 + 8);
            *v47 = 0LL;
            if ( (_DWORD)v11 != 12 )
              v55 = 0LL;
            BrandedFrequency = PpmPerfGetBrandedFrequency(v55);
            goto LABEL_165;
          }
          if ( v27 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x90 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          PagesFromHiberFile = RtlCheckTokenMembership(0LL, (void *)PopTimeBrokerServiceSid);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          return (unsigned int)-1073741790;
        }
        v79 = v9 - 46;
        if ( !v79 )
        {
          if ( (_DWORD)v11 != 32 || a4 )
            return (unsigned int)-1073741811;
          PopNotifySessionUserPowerRequestAttributed(
            *(unsigned int *)(v8 + 24),
            *(_QWORD *)(v8 + 8),
            *(_QWORD *)(v8 + 16));
          return 0;
        }
        v80 = v79 - 1;
        if ( v80 )
        {
          v81 = v80 - 1;
          if ( v81 )
          {
            v82 = v81 - 1;
            if ( !v82 )
            {
              if ( !a4 )
                return (unsigned int)-1073741789;
              v41 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !v41 )
                return (unsigned int)-1073741670;
              PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
              goto LABEL_101;
            }
            v83 = v82 - 1;
            if ( v83 )
            {
              if ( v83 == 1 )
              {
                if ( (unsigned int)v11 >= 0x10 )
                {
                  PagesFromHiberFile = 0;
                  PopWakeAlarmTimeOverride = *(_QWORD *)(v8 + 8);
                  return (unsigned int)PagesFromHiberFile;
                }
                return (unsigned int)-1073741789;
              }
              return (unsigned int)-1073741811;
            }
            if ( !a4 )
              return (unsigned int)-1073741789;
            v84 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
            if ( !v84 )
              return (unsigned int)-1073741670;
            v85 = PopAutoChkCausedReboot;
            goto LABEL_297;
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
LABEL_342:
      PagesFromHiberFile = PopDirectedDripsUmPowerInformationInternal(v9, v11, v8, (_DWORD)a6, (__int64)a5);
      if ( PagesFromHiberFile < 0 || !*a5 )
        return (unsigned int)PagesFromHiberFile;
LABEL_121:
      *v89 = 1;
      return (unsigned int)PagesFromHiberFile;
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
        goto LABEL_106;
      }
      if ( (_DWORD)v9 != 64 )
      {
        if ( (_DWORD)v9 == 65 )
        {
          if ( (_DWORD)v11 != 16 )
            return (unsigned int)-1073741811;
          v87 = *(_QWORD *)(v8 + 8);
          if ( !v87 )
            return (unsigned int)-1073741811;
          PagesFromHiberFile = PopFxClearDeviceConstraints(v87);
          v31 = 0;
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          return v31;
        }
        if ( (_DWORD)v9 == 66 )
          return (unsigned int)-1073741637;
        if ( (_DWORD)v9 != 67 )
          return (unsigned int)-1073741811;
        *a6 = 0;
        *a5 = 0LL;
        v86 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        if ( !v86 )
          return (unsigned int)-1073741670;
        *v86 = 0;
        *v86 = PopDisableInboxPepGeneratedConstraintsOverride;
        *a5 = v86;
        *a6 = 4;
        return 0;
      }
      goto LABEL_342;
    }
    if ( (_DWORD)v9 == 62 )
    {
      if ( !a4 )
        return (unsigned int)-1073741789;
      v84 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
      if ( !v84 )
        return (unsigned int)-1073741670;
      v85 = PopLastBootSucceeded;
LABEL_297:
      *v84 = v85;
      *a5 = v84;
      *a6 = 1;
      goto LABEL_106;
    }
LABEL_73:
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
            PagesFromHiberFile = PopReadResumeContext(v91, &v93);
            PopReleaseTransitionLock(8LL);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a5 = v93;
            *a6 = v91[0];
          }
          else
          {
            if ( (_DWORD)v9 != 61 || (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741811;
            if ( !a4 )
              return (unsigned int)-1073741789;
            PopAcquireTransitionLock(8LL);
            PagesFromHiberFile = PopReadPagesFromHiberFile(*(unsigned int *)(v8 + 8), 1LL, a5);
            PopReleaseTransitionLock(8LL);
            if ( PagesFromHiberFile < 0 )
            {
              *a5 = 0LL;
              return (unsigned int)PagesFromHiberFile;
            }
            *a6 = 4096;
          }
          *v89 = 1;
          return 0;
        }
        if ( (unsigned int)v11 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsClearDeviceFlags(*(_QWORD *)(v8 + 8), *(_DWORD *)(v8 + 16));
      }
    }
    goto LABEL_342;
  }
  if ( (_DWORD)v9 == 38 )
    goto LABEL_58;
  if ( (int)v9 > 22 )
  {
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
              *v69 = qword_140C23304;
              *a5 = v69;
              *a6 = 4;
              goto LABEL_106;
            }
LABEL_238:
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
LABEL_58:
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
              goto LABEL_251;
            v30 = PopBootStatGet(v8, v28);
            break;
          case 0x20:
            if ( *(_DWORD *)(v8 + 8) )
            {
              v30 = PopBootStatSet(v8, v28);
              break;
            }
LABEL_251:
            PagesFromHiberFile = -1073741811;
LABEL_114:
            v10 = (unsigned __int64)P;
LABEL_69:
            if ( !v10 )
              return (unsigned int)PagesFromHiberFile;
            v56 = 0;
LABEL_168:
            ExFreePoolWithTag((PVOID)v10, v56);
            return (unsigned int)PagesFromHiberFile;
          case 0x22:
            if ( !*(_DWORD *)(v8 + 8) )
              goto LABEL_251;
            v30 = PopBootStatCheckIntegrity(v8);
            break;
          case 0x23:
            v30 = PopBootStatRestoreDefaults();
            break;
          default:
            v30 = PopBootStatUnlock();
            break;
        }
        PagesFromHiberFile = v30;
        if ( v30 >= 0 )
        {
          if ( v28 )
          {
            v73 = v89;
            v10 = 0LL;
            *a5 = v28;
            *a6 = v29;
            *v73 = 1;
          }
          else
          {
            v10 = (unsigned __int64)P;
          }
          PagesFromHiberFile = 0;
          goto LABEL_69;
        }
        goto LABEL_114;
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
LABEL_106:
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
      v64[1] = xmmword_140C54200;
      v65 = xmmword_140C54210;
LABEL_197:
      v64[2] = v65;
      *a5 = v64;
      *a6 = 48;
      goto LABEL_50;
    }
    v32 = v9 - 23;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 == 1 && (_DWORD)v11 == 12 )
              {
                v91[1] = *(_DWORD *)(v8 + 8);
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
          }
          else if ( (unsigned int)v11 >= 0xC )
          {
            if ( a4 )
              return (unsigned int)-1073741811;
            PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
            v66 = PpmPerfQosDisableRefcount;
            if ( *(_BYTE *)(v8 + 8) )
            {
              if ( PpmPerfQosDisableRefcount == -1 )
              {
                PagesFromHiberFile = -1073741675;
              }
              else
              {
                v66 = PpmPerfQosDisableRefcount + 1;
                PagesFromHiberFile = 0;
                ++PpmPerfQosDisableRefcount;
              }
              v67 = v66 == 1;
            }
            else
            {
              if ( PpmPerfQosDisableRefcount )
              {
                v66 = PpmPerfQosDisableRefcount - 1;
                PagesFromHiberFile = 0;
                --PpmPerfQosDisableRefcount;
              }
              else
              {
                PagesFromHiberFile = -1073741637;
              }
              v67 = v66 == 0;
            }
            if ( v67 )
              PpmPerfUpdateDomainPolicy();
            else
              PpmReleaseLock(&PpmPerfPolicyLock);
            return (unsigned int)PagesFromHiberFile;
          }
        }
        else if ( (unsigned int)v11 >= 0xC )
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
      if ( (unsigned int)v11 < 0x28 )
        return (unsigned int)-1073741789;
      if ( a4 )
        return (unsigned int)-1073741811;
      v68 = *(_DWORD *)(v8 + 12);
      if ( PopVideoHighPrecisionBrightnessEnabled
        || v68 != -1
        && (PopVideoHighPrecisionBrightnessEnabled = 1,
            ZwUpdateWnfStateData(
              (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
              (__int64)&PopVideoHighPrecisionBrightnessEnabled),
            PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF),
            PopVideoHighPrecisionBrightnessEnabled) )
      {
        if ( v68 == -1 )
          return (unsigned int)-1073741637;
      }
      v95[0] = *(_DWORD *)(v8 + 8);
      v95[1] = *(_DWORD *)(v8 + 12);
      v95[2] = *(_DWORD *)(v8 + 16);
      v95[3] = *(_DWORD *)(v8 + 20);
      v95[4] = *(_DWORD *)(v8 + 24);
      v95[5] = *(_DWORD *)(v8 + 28);
      v95[6] = *(_DWORD *)(v8 + 32);
      v95[7] = *(_DWORD *)(v8 + 36);
      PopBroadcastSessionInfo(4LL, 32LL, v95);
    }
    else
    {
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LOBYTE(v10) = *(_BYTE *)(v8 + 8);
      PopUpdateExternalDisplayState(v10);
    }
    return 0;
  }
  if ( (_DWORD)v9 == 22 )
  {
    if ( (unsigned int)v11 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v64 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
    if ( !v64 )
      return (unsigned int)-1073741670;
    *v64 = 0LL;
    v64[1] = 0LL;
    v64[2] = 0LL;
    *v64 = PopBsdPhysicalPowerButtonInfoAtBoot;
    v64[1] = xmmword_140C54190;
    v65 = xmmword_140C541A0;
    goto LABEL_197;
  }
  if ( (int)v9 <= 6 )
  {
    if ( (_DWORD)v9 != 6 )
    {
      if ( !(_DWORD)v9 )
      {
        if ( (unsigned int)v11 < 0x20 || !a4 )
          return (unsigned int)-1073741789;
        v46 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
        v47 = v46;
        if ( !v46 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopFxPlatformRegisterInterface(v8, v46);
        if ( PagesFromHiberFile >= 0 )
        {
          *a5 = v47;
          *a6 = 16;
          goto LABEL_121;
        }
        goto LABEL_167;
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
LABEL_101:
          *v41 = PowerButtonBugcheckEnabled;
          *a5 = v41;
          *a6 = 1;
          *a7 = 1;
          return 0;
        }
        PopVideoInitialized = 1;
        v44 = &PopVideoInitialized;
        v45 = &WNF_PO_VIDEO_INITIALIALIZED;
        return (unsigned int)ZwUpdateWnfStateData((__int64)v45, (__int64)v44);
      }
      if ( !a4 )
        return (unsigned int)-1073741789;
      v53 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
      v47 = v53;
      if ( !v53 )
        return (unsigned int)-1073741670;
      BrandedFrequency = PopS0LowPowerIdleInfo(v53);
LABEL_165:
      PagesFromHiberFile = BrandedFrequency;
      if ( BrandedFrequency >= 0 )
      {
        *a5 = v47;
        *a6 = 8;
        goto LABEL_121;
      }
LABEL_167:
      v56 = 544040269;
      v10 = (unsigned __int64)v47;
      goto LABEL_168;
    }
    if ( (unsigned int)v11 < 0xC )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    LOBYTE(v10) = *(_BYTE *)(v8 + 8);
    return (unsigned int)PopNetUpdateStandbyRequest(v10);
  }
  v13 = v9 - 7;
  if ( !v13 )
  {
    if ( (unsigned int)v11 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v48 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
    if ( !v48 )
      return (unsigned int)-1073741670;
    *v48 = 0LL;
    v48[1] = 0LL;
    *v48 = PopBsdPowerTransitionAtBoot;
    v49 = xmmword_140C541E0;
    goto LABEL_126;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (unsigned int)v11 < 8 )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    LOBYTE(v10) = *(_BYTE *)(v8 + 8);
    return (unsigned int)PopUpdateBackgroundCoolingStatus(v10);
  }
  v15 = v14 - 10;
  if ( !v15 )
  {
    if ( PopPlatformAoAc )
    {
      if ( a4 )
      {
        v62 = ExAllocatePoolWithTag(PagedPool, 0x3B0uLL, 0x206D654Du);
        v63 = v62;
        if ( !v62 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopQueryBootSessionStandbyActivationInfo((__int64)v62);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        *a5 = v63;
        *a6 = 944;
        goto LABEL_121;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741637;
  }
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
        v18 = 0LL;
        if ( a4 )
        {
          v18 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
          if ( !v18 )
            return (unsigned int)-1073741670;
        }
        v19 = PopSetWatchdog(*(char **)(v8 + 8), (unsigned int *)(v8 + 16), *(_BYTE *)(v8 + 88));
        if ( !a4 )
          return 0;
        *v18 = v19;
        *a5 = v18;
        *a6 = 8;
        goto LABEL_50;
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
  PagesFromHiberFile = 0;
  PopReleasePolicyLock(v61, v60);
  return (unsigned int)PagesFromHiberFile;
}
