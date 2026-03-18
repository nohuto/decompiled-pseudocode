/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x14056AAC8
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x1408F5B18 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402E7EE0 (KeReleaseSpinLock.c)
 *     PopGetPowerSettingValue @ 0x14031D2BC (PopGetPowerSettingValue.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x140560270 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1405602B0 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x14056139C (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140561AD8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140561E40 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x1405672EC (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1405675AC (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14056A410 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14056A980 (PopCalculateIdleInformation.c)
 *     PopGetModernStandbyTransitionReason @ 0x140570A70 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x140575E4C (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x140575F80 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIsHibernateSupported @ 0x14070FAA8 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x14070FBC4 (PopFilterCapabilities.c)
 *     PopDirectedDripsNotify @ 0x140779328 (PopDirectedDripsNotify.c)
 *     PopNetCheckOpportunisticDs @ 0x140779C2C (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x140779C50 (PopNetCheckUserConnectivityPolicy.c)
 *     PopCurrentPowerStatePrecise @ 0x140779C64 (PopCurrentPowerStatePrecise.c)
 *     PopClearConnectedStandbyMarker @ 0x1408DC774 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408DCD88 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408E0250 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408E0400 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408E07FC (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408E0EE8 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x1408E44E8 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408E462C (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408E48A4 (PopDiagTraceCsExitReason.c)
 *     PopGetEnergyCounter @ 0x1408E95E0 (PopGetEnergyCounter.c)
 *     PopQueryInputSuppressionCount @ 0x1408EA70C (PopQueryInputSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x1408ED768 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408ED77C (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F0AAC (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F1FB0 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x14094A6F4 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x14094A780 (ExStopRecordingIRTimerExpiries.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  char IsHibernateSupported; // r14
  char IsLockConsoleTimeoutActive; // r15
  int v9; // ecx
  __int64 v10; // r13
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 ModernStandbyTransitionReason; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // eax
  KIRQL v31; // al
  __int64 v33; // [rsp+28h] [rbp-A9h]
  __int64 v34; // [rsp+28h] [rbp-A9h]
  __int64 v35; // [rsp+28h] [rbp-A9h]
  __int64 v36; // [rsp+28h] [rbp-A9h]
  __int64 v37; // [rsp+28h] [rbp-A9h]
  __int64 v38; // [rsp+28h] [rbp-A9h]
  int v39; // [rsp+38h] [rbp-99h] BYREF
  int v40; // [rsp+3Ch] [rbp-95h] BYREF
  int v41; // [rsp+40h] [rbp-91h] BYREF
  int v42; // [rsp+44h] [rbp-8Dh] BYREF
  int v43; // [rsp+48h] [rbp-89h] BYREF
  int v44; // [rsp+4Ch] [rbp-85h] BYREF
  int v45; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-7Dh] BYREF
  __int64 v47; // [rsp+58h] [rbp-79h] BYREF
  __int64 v48; // [rsp+60h] [rbp-71h] BYREF
  __int64 v49; // [rsp+68h] [rbp-69h] BYREF
  __int128 v50; // [rsp+70h] [rbp-61h] BYREF
  __int128 v51; // [rsp+80h] [rbp-51h]
  _OWORD v52[2]; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v53[80]; // [rsp+B8h] [rbp-19h] BYREF
  unsigned int v54; // [rsp+150h] [rbp+7Fh] BYREF

  v3 = 0;
  v48 = 0LL;
  v39 = 0;
  v54 = 0;
  v49 = 0LL;
  memset(v52, 0, sizeof(v52));
  v50 = 0LL;
  v51 = 0LL;
  memset(v53, 0, 0x4CuLL);
  v40 = 0;
  v45 = 0;
  v44 = 0;
  IsHibernateSupported = 0;
  IsLockConsoleTimeoutActive = 0;
  v42 = 0;
  v43 = 0;
  v41 = 0;
  PopCurrentPowerStatePrecise(v52, 0LL);
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 && a1[1] == *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  PopAcquirePolicyLock(v9);
  v10 = MEMORY[0xFFFFF78000000008];
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 && a1[1] == *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4 )
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation((__int64)&v50);
    PpmGetPlatformSelectionVetoCounts(dword_140C4FFC0, &v48, &v49);
    PopCsConsumption = HIDWORD(v52[0]);
    qword_140C4FE50 = *((_QWORD *)&v50 + 1);
    dword_140C4FE60 = DWORD2(v51);
    qword_140C4FE58 = v50;
    qword_140C4FED8 = v51;
    qword_140C4FEE0 = v48;
    qword_140C4FEE8 = v49;
    dword_140C4FF10 = DWORD2(v52[0]);
    qword_140C4FE48 = v10;
    qword_140C4FE80 = 0LL;
    qword_140C4FE68 = 0LL;
    qword_140C4FE70 = 0LL;
    qword_140C4FE90 = 0LL;
    qword_140C4FEC8 = 0LL;
    qword_140C4FED0 = 0LL;
    qword_140C4FEA0 = 0LL;
    qword_140C4FEB0 = 0LL;
    qword_140C4FEC0 = 0LL;
    qword_140C4FF20 = 0LL;
    qword_140C4FF28 = 0LL;
    qword_140C4FF30 = 0LL;
    byte_140C4FF0C = 0;
    PopNetIsDisconnectStandbyActive(&v39);
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C22FB8);
    qword_140C22FA8 = 0LL;
    qword_140C22FB0 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C22FC0 = 1;
    KeReleaseSpinLock(&qword_140C22FB8, v11);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140C4FF00 = (dword_140C23ECC == 0) | byte_140C4FF00 & 0xFE;
    byte_140C4FF01 ^= (byte_140C4FF01 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v39 - 1) & 0xFFFFFFFC) != 0 || v39 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      byte_140C4FF01 &= ~2u;
    }
    else
    {
      byte_140C4FF01 |= 2u;
    }
    if ( PopDiagCachedAggregatorIntent )
    {
      dword_140C4FF3C = PopDiagCachedAggregatorIntent;
      dword_140C4FF40 = 6;
      PopDiagCachedAggregatorAction = 6;
      PopDiagCachedAggregatorIntent = 0;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3, &v40, v33, &v54);
    byte_140C4FF01 ^= (byte_140C4FF01 ^ (4 * v40)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v13, 3, &v41, v34, &v54);
    dword_140C4FEF0 = v41;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v14, 3, &v42, v35, &v54);
    dword_140C4FEF4 = v42;
    byte_140C4FEF8 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v15, 3, &v43, v36, &v54);
    dword_140C4FEFC = v43;
    byte_140C4FF15 = (char)KdDebuggerEnabled;
    v3 = PopFilterCapabilities(&PopCapabilities, v53);
    if ( v3 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v53);
    byte_140C4FF14 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v16, 3, &v44, v37, &v54);
    dword_140C4FF18 = v44;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v17, 3, &v45, v38, &v54);
    dword_140C4FF1C = v45;
    _InterlockedExchange64(&qword_140C4FF80, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C4FFC0) )
      v3 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140C4FFC0);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140C4FF04 = PopAggressiveStandbyEnabledActions;
    dword_140C4FF08 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    LOBYTE(v18) = 1;
    ModernStandbyTransitionReason = (unsigned int)PopGetModernStandbyTransitionReason(v18, 0LL);
    PopDiagTraceCsEnterReason(ModernStandbyTransitionReason);
    PopSetConnectedStandbyMarker(v20, (unsigned int)ModernStandbyTransitionReason);
    LOBYTE(v21) = 1;
    PopStatsNotifyPowerRequestCsState(v22, v21);
    v47 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v47);
    PopIdleWakeNotifyModernStandbyEnter();
    v46 = 0;
    PopQueryInputSuppressionCount(&v46, v23);
    v25 = v46;
    dword_140C4FF38 = v46;
  }
  else
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v47 = a3;
    PopDirectedDripsNotify(1LL, &v47);
    PpmIdleCaptureCsVetoAccounting(v26, dword_140C4FFC0);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v27, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    PopDiagTraceCsExitReason(a3, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C4FFC0) )
    {
      PopFxLogSocSubsystemBlockingTimes(v28, (unsigned int)dword_140C4FFC0);
      v3 = PopFxLogSocSubsystemMetadata(v29, (unsigned int)dword_140C4FFC0);
    }
    PopStatsNotifyPowerRequestCsState(v28, 0LL);
    v30 = PopGetModernStandbyTransitionReason(0LL, 0LL);
    PopClearConnectedStandbyMarker(v30);
    qword_140C4FE48 = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&qword_140C22FB8);
    dword_140C22FC0 = 0;
    KeReleaseSpinLock(&qword_140C22FB8, v31);
  }
  PopReleasePolicyLock(v25, v24);
  return (unsigned int)v3;
}
