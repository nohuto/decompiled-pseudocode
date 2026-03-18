/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x14056EB48
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x1408FCA18 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x14021E6F0 (KeReleaseSpinLock.c)
 *     PopGetPowerSettingValue @ 0x140363854 (PopGetPowerSettingValue.c)
 *     memset @ 0x140411300 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1405642A0 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1405642E0 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1405653CC (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140565B08 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140565E70 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x14056B36C (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x14056B62C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14056E490 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14056EA00 (PopCalculateIdleInformation.c)
 *     PopGetModernStandbyTransitionReason @ 0x140574AF0 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x140579ECC (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057A000 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIsHibernateSupported @ 0x14071EE38 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x14071EF54 (PopFilterCapabilities.c)
 *     PopDirectedDripsNotify @ 0x140789D38 (PopDirectedDripsNotify.c)
 *     PopNetCheckOpportunisticDs @ 0x14078A63C (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x14078A660 (PopNetCheckUserConnectivityPolicy.c)
 *     PopCurrentPowerStatePrecise @ 0x14078A674 (PopCurrentPowerStatePrecise.c)
 *     PopClearConnectedStandbyMarker @ 0x1408E3924 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408E3F38 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408E7310 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408E74C0 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408E78BC (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408E7FA8 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x1408EB378 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408EB4BC (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408EB734 (PopDiagTraceCsExitReason.c)
 *     PopGetEnergyCounter @ 0x1408F0470 (PopGetEnergyCounter.c)
 *     PopQueryInputSuppressionCount @ 0x1408F159C (PopQueryInputSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x1408F4668 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408F467C (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F79AC (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140951854 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1409518E0 (ExStopRecordingIRTimerExpiries.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
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
    PpmGetPlatformSelectionVetoCounts(dword_140C4FF00, &v48, &v49);
    PopCsConsumption = HIDWORD(v52[0]);
    qword_140C4FD90 = *((_QWORD *)&v50 + 1);
    dword_140C4FDA0 = DWORD2(v51);
    qword_140C4FD98 = v50;
    qword_140C4FE18 = v51;
    qword_140C4FE20 = v48;
    qword_140C4FE28 = v49;
    dword_140C4FE50 = DWORD2(v52[0]);
    qword_140C4FD88 = v10;
    qword_140C4FDC0 = 0LL;
    qword_140C4FDA8 = 0LL;
    qword_140C4FDB0 = 0LL;
    qword_140C4FDD0 = 0LL;
    qword_140C4FE08 = 0LL;
    qword_140C4FE10 = 0LL;
    qword_140C4FDE0 = 0LL;
    qword_140C4FDF0 = 0LL;
    qword_140C4FE00 = 0LL;
    qword_140C4FE60 = 0LL;
    qword_140C4FE68 = 0LL;
    qword_140C4FE70 = 0LL;
    byte_140C4FE4C = 0;
    PopNetIsDisconnectStandbyActive(&v39);
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C22EB8);
    qword_140C22EA8 = 0LL;
    qword_140C22EB0 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C22EC0 = 1;
    KeReleaseSpinLock(&qword_140C22EB8, v11);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140C4FE40 = (dword_140C23D4C == 0) | byte_140C4FE40 & 0xFE;
    byte_140C4FE41 ^= (byte_140C4FE41 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v39 - 1) & 0xFFFFFFFC) != 0 || v39 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      byte_140C4FE41 &= ~2u;
    }
    else
    {
      byte_140C4FE41 |= 2u;
    }
    if ( PopDiagCachedAggregatorIntent )
    {
      dword_140C4FE7C = PopDiagCachedAggregatorIntent;
      dword_140C4FE80 = 6;
      PopDiagCachedAggregatorAction = 6;
      PopDiagCachedAggregatorIntent = 0;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3, &v40, v33, &v54);
    byte_140C4FE41 ^= (byte_140C4FE41 ^ (4 * v40)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v13, 3, &v41, v34, &v54);
    dword_140C4FE30 = v41;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v14, 3, &v42, v35, &v54);
    dword_140C4FE34 = v42;
    byte_140C4FE38 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v15, 3, &v43, v36, &v54);
    dword_140C4FE3C = v43;
    byte_140C4FE55 = (char)KdDebuggerEnabled;
    v3 = PopFilterCapabilities(&PopCapabilities, v53);
    if ( v3 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v53);
    byte_140C4FE54 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v16, 3, &v44, v37, &v54);
    dword_140C4FE58 = v44;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v17, 3, &v45, v38, &v54);
    dword_140C4FE5C = v45;
    _InterlockedExchange64(&qword_140C4FEC0, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C4FF00) )
      v3 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140C4FF00);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140C4FE44 = PopAggressiveStandbyEnabledActions;
    dword_140C4FE48 = PopAggressiveStandbyAppliedActions;
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
    dword_140C4FE78 = v46;
  }
  else
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v47 = a3;
    PopDirectedDripsNotify(1LL, &v47);
    PpmIdleCaptureCsVetoAccounting(v26, dword_140C4FF00);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v27, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    PopDiagTraceCsExitReason(a3, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C4FF00) )
    {
      PopFxLogSocSubsystemBlockingTimes(v28, (unsigned int)dword_140C4FF00);
      v3 = PopFxLogSocSubsystemMetadata(v29, (unsigned int)dword_140C4FF00);
    }
    PopStatsNotifyPowerRequestCsState(v28, 0LL);
    v30 = PopGetModernStandbyTransitionReason(0LL, 0LL);
    PopClearConnectedStandbyMarker(v30);
    qword_140C4FD88 = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&qword_140C22EB8);
    dword_140C22EC0 = 0;
    KeReleaseSpinLock(&qword_140C22EB8, v31);
  }
  PopReleasePolicyLock(v25, v24);
  return (unsigned int)v3;
}
