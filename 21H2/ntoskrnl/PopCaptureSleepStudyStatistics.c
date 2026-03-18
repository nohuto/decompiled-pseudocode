/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x14039A210
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140809614 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopGetPowerSettingValue @ 0x140255D5C (PopGetPowerSettingValue.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceFxRundown @ 0x140395A18 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x140395BDC (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x140398B2C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140399184 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140399210 (PpmSnapDripsAccountingSnapshot.c)
 *     PopGetModernStandbyTransitionReason @ 0x14039A88C (PopGetModernStandbyTransitionReason.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x14039A994 (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopFxStartDeviceAccounting @ 0x14039AAB0 (PopFxStartDeviceAccounting.c)
 *     PopDiagGetPowerSchemeInfo @ 0x14039AC54 (PopDiagGetPowerSchemeInfo.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x14039AD24 (PpmGetPlatformSelectionVetoCounts.c)
 *     PopCalculateIdleInformation @ 0x14039AD4C (PopCalculateIdleInformation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1405C7F88 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopQueryInputSuppressionCount @ 0x1406EBB94 (PopQueryInputSuppressionCount.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     PopDiagTraceCsExitReason @ 0x140805320 (PopDiagTraceCsExitReason.c)
 *     PopDiagTraceCsConsumption @ 0x140807750 (PopDiagTraceCsConsumption.c)
 *     PopClearConnectedStandbyMarker @ 0x140808700 (PopClearConnectedStandbyMarker.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140808CFC (ExStopRecordingIRTimerExpiries.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14080A01C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopSetConnectedStandbyMarker @ 0x14080A09C (PopSetConnectedStandbyMarker.c)
 *     PopDiagTraceCsEnterReason @ 0x14080A124 (PopDiagTraceCsEnterReason.c)
 *     ExStartRecordingIRTimerExpiries @ 0x14080A2DC (ExStartRecordingIRTimerExpiries.c)
 *     PopQueryRemainingSystemIdleTime @ 0x14080A360 (PopQueryRemainingSystemIdleTime.c)
 *     PopNetIsCompliantNicPresent @ 0x14080A3E4 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x14080A3F8 (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x14080A454 (PopIsLockConsoleTimeoutActive.c)
 *     PopIsHibernateSupported @ 0x1408111A0 (PopIsHibernateSupported.c)
 *     PopDirectedDripsNotify @ 0x140811764 (PopDirectedDripsNotify.c)
 *     PopGetEnergyCounter @ 0x140811A68 (PopGetEnergyCounter.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098D49C (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14098D650 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14098E0AC (PopFxResetSocSubsystemAccounting.c)
 *     PopNetCheckOpportunisticDs @ 0x140998544 (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x140998578 (PopNetCheckUserConnectivityPolicy.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  char IsHibernateSupported; // r13
  char IsLockConsoleTimeoutActive; // r12
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int ModernStandbyTransitionReason; // eax
  KIRQL v33; // al
  unsigned __int64 v34; // rsi
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  KIRQL v39; // al
  __int64 v40; // r8
  unsigned __int64 v41; // r14
  unsigned int i; // esi
  __int64 v43; // rcx
  __int64 j; // rdx
  __int64 v45; // rax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  int v48; // eax
  _DWORD *v49; // r8
  __int64 v50; // r8
  __int64 *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v57; // eax
  unsigned int v58; // [rsp+30h] [rbp-D0h] BYREF
  int v59; // [rsp+34h] [rbp-CCh] BYREF
  int v60; // [rsp+38h] [rbp-C8h] BYREF
  int v61; // [rsp+3Ch] [rbp-C4h] BYREF
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+4Ch] [rbp-B4h] BYREF
  int v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h] BYREF
  __int128 v71; // [rsp+70h] [rbp-90h] BYREF
  __int128 v72; // [rsp+80h] [rbp-80h]
  __int128 v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+A0h] [rbp-60h]
  _BYTE v75[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v76; // [rsp+100h] [rbp+0h] BYREF
  __int128 v77; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  v67 = 0;
  v69 = 0LL;
  v60 = 0;
  v58 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v77 = 0LL;
  v76 = 0LL;
  memset(v75, 0, 0x4CuLL);
  v61 = 0;
  v74 = 0LL;
  IsHibernateSupported = 0;
  v59 = *(_DWORD *)(a3 + 12);
  IsLockConsoleTimeoutActive = 0;
  LODWORD(v68) = *(_DWORD *)(a3 + 8);
  v12 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v11 = *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v66 = 0;
  v65 = 0;
  v63 = 0;
  v64 = 0;
  v62 = 0;
  v73 = 0LL;
  if ( v11 )
    v12 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v12 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140C5ADF8 )
  {
    qword_140C5ADF8(a4 + 152);
    *(_QWORD *)(a4 + 152) /= 0xAuLL;
  }
  PopAcquirePolicyLock();
  v13 = MEMORY[0xFFFFF78000000008];
  v14 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v14 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v14 )
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopDiagTraceFxRundown((__int64)&PopWnfCsEnterScenarioId);
    PopCalculateCsSummary(a4, PopSleepstudyStopReason);
    v68 = a4;
    PopDirectedDripsNotify(1LL, &v68);
    PpmIdleCaptureCsVetoAccounting(v29, dword_140C542C0);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v30, 10 * *(_QWORD *)(a4 + 32), 10 * *(_DWORD *)(a4 + 40));
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C542C0) )
    {
      PopFxLogSocSubsystemBlockingTimes(v31, (unsigned int)dword_140C542C0);
      v4 = PopFxLogSocSubsystemMetadata(v53, (unsigned int)dword_140C542C0);
    }
    ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0LL);
    PopClearConnectedStandbyMarker(ModernStandbyTransitionReason);
    qword_140C54148 = 0LL;
    v33 = KeAcquireSpinLockRaiseToDpc(&qword_140C22378);
    dword_140C22380 = 0;
    v34 = v33;
    KxReleaseSpinLock(&qword_140C22378);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
          v11 = (v57 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v57;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v34);
  }
  else
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation(&v71);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140C542C0, &v69, &v70);
    PopCsConsumption = v59;
    qword_140C54150 = *((_QWORD *)&v71 + 1);
    dword_140C54160 = DWORD2(v72);
    qword_140C54158 = v71;
    qword_140C541D8 = v72;
    qword_140C541E0 = v69;
    qword_140C541E8 = v70;
    dword_140C54218 = v68;
    qword_140C54148 = v13;
    qword_140C54180 = 0LL;
    qword_140C54168 = 0LL;
    qword_140C54170 = 0LL;
    qword_140C54190 = 0LL;
    qword_140C541C8 = 0LL;
    qword_140C541D0 = 0LL;
    qword_140C541A0 = 0LL;
    qword_140C541B0 = 0LL;
    qword_140C541C0 = 0LL;
    qword_140C54228 = 0LL;
    qword_140C54230 = 0LL;
    qword_140C54238 = 0LL;
    byte_140C54214 = 0;
    PopNetIsDisconnectStandbyActive(&v60);
    v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C22378);
    qword_140C22368 = 0LL;
    qword_140C22370 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C22380 = 1;
    KxReleaseSpinLock(&qword_140C22378);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v11 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(v15);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140C54208 = (dword_140C232CC == 0) | byte_140C54208 & 0xFE;
    byte_140C54209 ^= (byte_140C54209 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v60 - 1) & 0xFFFFFFFC) != 0 || v60 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      byte_140C54209 &= ~2u;
    }
    else
    {
      byte_140C54209 |= 2u;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v16, 3, &v61, 4u, &v58);
    byte_140C54209 ^= (byte_140C54209 ^ (4 * v61)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v17, 3, &v62, 4u, &v58);
    dword_140C541F0 = v62;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v18, 3, &v63, 4u, &v58);
    dword_140C541F4 = v63;
    byte_140C541F8 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v19, 3, &v64, 4u, &v58);
    dword_140C541FC = v64;
    PopQueryRemainingSystemIdleTime(&dword_140C54200, &dword_140C54204);
    byte_140C5421D = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&PopCapabilities, v75);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v75);
    byte_140C5421C = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v20, 3, &v65, 4u, &v58);
    dword_140C54220 = v65;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v21, 3, &v66, 4u, &v58);
    dword_140C54224 = v66;
    PopGetPowerSettingValue((__int64)&GUID_ACTIVE_POWERSCHEME, v22, 3, &v77, 0x10u, &v58);
    PopGetPowerSettingValue((__int64)&GUID_POWERSCHEME_PERSONALITY, v23, 3, &v76, 0x10u, &v58);
    PopDiagGetPowerSchemeInfo(&v77, &v76, &v67);
    dword_140C54244 = v67;
    _InterlockedExchange64(&qword_140C54280, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C542C0) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140C542C0);
    PopFxStartDeviceAccounting();
    if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
    {
      v39 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v40 = PpmPlatformStates;
      v41 = v39;
      for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
      {
        v43 = 448LL * i + v40 + 80;
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v43 + 28); *(_QWORD *)(*(_QWORD *)(v43 + 32) + (v45 << 6) + 56) = 0LL )
        {
          v45 = (unsigned int)j;
          j = (unsigned int)(j + 1);
        }
        LOBYTE(v40) = 1;
        LOBYTE(j) = 4;
        PpmIdleCsVetoAccountingUpdateBlock(v43, j, v40);
        v40 = PpmPlatformStates;
      }
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
            v49 = v47->SchedulerAssist;
            v11 = (v48 & v49[5]) == 0;
            v49[5] &= v48;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      __writecr8(v41);
    }
    dword_140C5420C = PopAggressiveStandbyEnabledActions;
    dword_140C54210 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    if ( PpmPlatformStates && dword_140C542C0 != -1 )
    {
      v50 = 26LL;
      v51 = (__int64 *)(1008LL * (unsigned int)dword_140C542C0 + 200 + *(_QWORD *)(PpmPlatformStates + 48));
      v24 = &PpmDripsAccountingSnapshot;
      do
      {
        v52 = *v51;
        v51 += 4;
        *v24++ = v52;
        --v50;
      }
      while ( v50 );
    }
    LOBYTE(v24) = 1;
    v25 = (unsigned int)PopGetModernStandbyTransitionReason(v24);
    PopDiagTraceCsEnterReason(v25);
    PopSetConnectedStandbyMarker(v26, (unsigned int)v25);
    v68 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v68);
    PopIdleWakeNotifyModernStandbyEnter();
    v59 = 0;
    PopQueryInputSuppressionCount(&v59, v27);
    dword_140C54240 = v59;
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
