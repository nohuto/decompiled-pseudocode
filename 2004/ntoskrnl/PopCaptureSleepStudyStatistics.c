/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x14056B118
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x1408F6E08 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x1402DF490 (PopGetPowerSettingValue.c)
 *     KeReleaseSpinLock @ 0x140322B60 (KeReleaseSpinLock.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1405608C0 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140560900 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1405619EC (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140562128 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140562490 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x14056793C (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140567BFC (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14056AA60 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14056AFD0 (PopCalculateIdleInformation.c)
 *     PopGetModernStandbyTransitionReason @ 0x1405710C0 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x14057649C (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1405765D0 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopFilterCapabilities @ 0x1406A528C (PopFilterCapabilities.c)
 *     PopIsHibernateSupported @ 0x1406A615C (PopIsHibernateSupported.c)
 *     PopDirectedDripsNotify @ 0x14077B738 (PopDirectedDripsNotify.c)
 *     PopNetCheckOpportunisticDs @ 0x14077C03C (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x14077C060 (PopNetCheckUserConnectivityPolicy.c)
 *     PopCurrentPowerStatePrecise @ 0x14077C074 (PopCurrentPowerStatePrecise.c)
 *     PopClearConnectedStandbyMarker @ 0x1408DDAE4 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408DE0F8 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408E14D0 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408E1680 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408E1A7C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408E2168 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x1408E5768 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408E58AC (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408E5B24 (PopDiagTraceCsExitReason.c)
 *     PopGetEnergyCounter @ 0x1408EA860 (PopGetEnergyCounter.c)
 *     PopQueryInputSuppressionCount @ 0x1408EB98C (PopQueryInputSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x1408EEA58 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408EEA6C (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F1D9C (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F32A0 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x14094BA94 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x14094BB20 (ExStopRecordingIRTimerExpiries.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
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
    PpmGetPlatformSelectionVetoCounts(dword_140C4FE80, &v48, &v49);
    PopCsConsumption = HIDWORD(v52[0]);
    qword_140C4FD10 = *((_QWORD *)&v50 + 1);
    dword_140C4FD20 = DWORD2(v51);
    qword_140C4FD18 = v50;
    qword_140C4FD98 = v51;
    qword_140C4FDA0 = v48;
    qword_140C4FDA8 = v49;
    dword_140C4FDD0 = DWORD2(v52[0]);
    qword_140C4FD08 = v10;
    qword_140C4FD40 = 0LL;
    qword_140C4FD28 = 0LL;
    qword_140C4FD30 = 0LL;
    qword_140C4FD50 = 0LL;
    qword_140C4FD88 = 0LL;
    qword_140C4FD90 = 0LL;
    qword_140C4FD60 = 0LL;
    qword_140C4FD70 = 0LL;
    qword_140C4FD80 = 0LL;
    qword_140C4FDE0 = 0LL;
    qword_140C4FDE8 = 0LL;
    qword_140C4FDF0 = 0LL;
    byte_140C4FDCC = 0;
    PopNetIsDisconnectStandbyActive(&v39);
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C23C58);
    qword_140C23C48 = 0LL;
    qword_140C23C50 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C23C60 = 1;
    KeReleaseSpinLock(&qword_140C23C58, v11);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140C4FDC0 = (dword_140C238AC == 0) | byte_140C4FDC0 & 0xFE;
    byte_140C4FDC1 ^= (byte_140C4FDC1 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v39 - 1) & 0xFFFFFFFC) != 0 || v39 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      byte_140C4FDC1 &= ~2u;
    }
    else
    {
      byte_140C4FDC1 |= 2u;
    }
    if ( PopDiagCachedAggregatorIntent )
    {
      dword_140C4FDFC = PopDiagCachedAggregatorIntent;
      dword_140C4FE00 = 6;
      PopDiagCachedAggregatorAction = 6;
      PopDiagCachedAggregatorIntent = 0;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3, &v40, v33, &v54);
    byte_140C4FDC1 ^= (byte_140C4FDC1 ^ (4 * v40)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v13, 3, &v41, v34, &v54);
    dword_140C4FDB0 = v41;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v14, 3, &v42, v35, &v54);
    dword_140C4FDB4 = v42;
    byte_140C4FDB8 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v15, 3, &v43, v36, &v54);
    dword_140C4FDBC = v43;
    byte_140C4FDD5 = (char)KdDebuggerEnabled;
    v3 = PopFilterCapabilities(&PopCapabilities, v53);
    if ( v3 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v53);
    byte_140C4FDD4 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v16, 3, &v44, v37, &v54);
    dword_140C4FDD8 = v44;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v17, 3, &v45, v38, &v54);
    dword_140C4FDDC = v45;
    _InterlockedExchange64(&qword_140C4FE40, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C4FE80) )
      v3 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140C4FE80);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140C4FDC4 = PopAggressiveStandbyEnabledActions;
    dword_140C4FDC8 = PopAggressiveStandbyAppliedActions;
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
    dword_140C4FDF8 = v46;
  }
  else
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v47 = a3;
    PopDirectedDripsNotify(1LL, &v47);
    PpmIdleCaptureCsVetoAccounting(v26, dword_140C4FE80);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v27, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    PopDiagTraceCsExitReason(a3, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C4FE80) )
    {
      PopFxLogSocSubsystemBlockingTimes(v28, (unsigned int)dword_140C4FE80);
      v3 = PopFxLogSocSubsystemMetadata(v29, (unsigned int)dword_140C4FE80);
    }
    PopStatsNotifyPowerRequestCsState(v28, 0LL);
    v30 = PopGetModernStandbyTransitionReason(0LL, 0LL);
    PopClearConnectedStandbyMarker(v30);
    qword_140C4FD08 = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&qword_140C23C58);
    dword_140C23C60 = 0;
    KeReleaseSpinLock(&qword_140C23C58, v31);
  }
  PopReleasePolicyLock(v25, v24);
  return (unsigned int)v3;
}
