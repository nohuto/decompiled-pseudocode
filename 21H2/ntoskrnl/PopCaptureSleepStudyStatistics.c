/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x140570798
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x1408FA328 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140270104 (PopGetPowerSettingValue.c)
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x140565FB0 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140565FF0 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1405670DC (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140567818 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140567B80 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x14056CFBC (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x14056D27C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1405700E0 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140570650 (PopCalculateIdleInformation.c)
 *     PopGetModernStandbyTransitionReason @ 0x140576740 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x14057BB1C (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057BC50 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIsHibernateSupported @ 0x14066EAA8 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x14066EBC4 (PopFilterCapabilities.c)
 *     PopDirectedDripsNotify @ 0x14078DCD8 (PopDirectedDripsNotify.c)
 *     PopNetCheckOpportunisticDs @ 0x14078E5CC (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x14078E5F0 (PopNetCheckUserConnectivityPolicy.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E604 (PopCurrentPowerStatePrecise.c)
 *     PopClearConnectedStandbyMarker @ 0x1408E1244 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408E1858 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408E4C70 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408E4E20 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408E521C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408E5908 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x1408E8CD8 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408E8E1C (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408E9094 (PopDiagTraceCsExitReason.c)
 *     PopGetEnergyCounter @ 0x1408EDDD0 (PopGetEnergyCounter.c)
 *     PopQueryInputSuppressionCount @ 0x1408EEEFC (PopQueryInputSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x1408F1FC8 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408F1FDC (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F52EC (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F67F0 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x14094F1F4 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x14094F280 (ExStopRecordingIRTimerExpiries.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
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
    PpmGetPlatformSelectionVetoCounts(dword_140C500C0, &v48, &v49);
    PopCsConsumption = HIDWORD(v52[0]);
    qword_140C4FF50 = *((_QWORD *)&v50 + 1);
    dword_140C4FF60 = DWORD2(v51);
    qword_140C4FF58 = v50;
    qword_140C4FFD8 = v51;
    qword_140C4FFE0 = v48;
    qword_140C4FFE8 = v49;
    dword_140C50010 = DWORD2(v52[0]);
    qword_140C4FF48 = v10;
    qword_140C4FF80 = 0LL;
    qword_140C4FF68 = 0LL;
    qword_140C4FF70 = 0LL;
    qword_140C4FF90 = 0LL;
    qword_140C4FFC8 = 0LL;
    qword_140C4FFD0 = 0LL;
    qword_140C4FFA0 = 0LL;
    qword_140C4FFB0 = 0LL;
    qword_140C4FFC0 = 0LL;
    qword_140C50020 = 0LL;
    qword_140C50028 = 0LL;
    qword_140C50030 = 0LL;
    byte_140C5000C = 0;
    PopNetIsDisconnectStandbyActive(&v39);
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C23598);
    qword_140C23588 = 0LL;
    qword_140C23590 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C235A0 = 1;
    KeReleaseSpinLock(&qword_140C23598, v11);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140C50000 = (dword_140C2332C == 0) | byte_140C50000 & 0xFE;
    byte_140C50001 ^= (byte_140C50001 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v39 - 1) & 0xFFFFFFFC) != 0 || v39 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      byte_140C50001 &= ~2u;
    }
    else
    {
      byte_140C50001 |= 2u;
    }
    if ( PopDiagCachedAggregatorIntent )
    {
      dword_140C5003C = PopDiagCachedAggregatorIntent;
      dword_140C50040 = 6;
      PopDiagCachedAggregatorAction = 6;
      PopDiagCachedAggregatorIntent = 0;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3, &v40, v33, &v54);
    byte_140C50001 ^= (byte_140C50001 ^ (4 * v40)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v13, 3, &v41, v34, &v54);
    dword_140C4FFF0 = v41;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v14, 3, &v42, v35, &v54);
    dword_140C4FFF4 = v42;
    byte_140C4FFF8 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v15, 3, &v43, v36, &v54);
    dword_140C4FFFC = v43;
    byte_140C50015 = (char)KdDebuggerEnabled;
    v3 = PopFilterCapabilities(&PopCapabilities, v53);
    if ( v3 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v53);
    byte_140C50014 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v16, 3, &v44, v37, &v54);
    dword_140C50018 = v44;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v17, 3, &v45, v38, &v54);
    dword_140C5001C = v45;
    _InterlockedExchange64(&qword_140C50080, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C500C0) )
      v3 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140C500C0);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140C50004 = PopAggressiveStandbyEnabledActions;
    dword_140C50008 = PopAggressiveStandbyAppliedActions;
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
    dword_140C50038 = v46;
  }
  else
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v47 = a3;
    PopDirectedDripsNotify(1LL, &v47);
    PpmIdleCaptureCsVetoAccounting(v26, dword_140C500C0);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v27, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    PopDiagTraceCsExitReason(a3, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C500C0) )
    {
      PopFxLogSocSubsystemBlockingTimes(v28, (unsigned int)dword_140C500C0);
      v3 = PopFxLogSocSubsystemMetadata(v29, (unsigned int)dword_140C500C0);
    }
    PopStatsNotifyPowerRequestCsState(v28, 0LL);
    v30 = PopGetModernStandbyTransitionReason(0LL, 0LL);
    PopClearConnectedStandbyMarker(v30);
    qword_140C4FF48 = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&qword_140C23598);
    dword_140C235A0 = 0;
    KeReleaseSpinLock(&qword_140C23598, v31);
  }
  PopReleasePolicyLock(v25, v24);
  return (unsigned int)v3;
}
