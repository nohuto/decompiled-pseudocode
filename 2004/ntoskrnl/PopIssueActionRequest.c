/*
 * XREFs of PopIssueActionRequest @ 0x140763448
 * Callers:
 *     PopPolicyWorkerAction @ 0x1407632B0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140767040 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     PopSetPowerActionWatchdogState @ 0x1403807F8 (PopSetPowerActionWatchdogState.c)
 *     PopPrepareSleep @ 0x1403809B4 (PopPrepareSleep.c)
 *     PopSetSystemState @ 0x1403A3240 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x1403A3F74 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A4D10 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x1403F6B20 (ZwSetSystemPowerState.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PoBlockConsoleSwitch @ 0x140712794 (PoBlockConsoleSwitch.c)
 *     PopReadSystemAwayModePolicy @ 0x1407618C4 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTracePowerTransitionStart @ 0x1407619A4 (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x140761A54 (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x140761AE0 (EtwShutdown.c)
 *     PoUnblockConsoleSwitch @ 0x140761C7C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140761CA4 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140761CC4 (PoStartPowerStateTasks.c)
 *     PopDiagTracePowerTransitionTime @ 0x140761CE4 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x140761E34 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140761F6C (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140762418 (PopDiagTracePowerTransitionEnd.c)
 *     PopEnableSystemSleepCheckpoint @ 0x1407624E4 (PopEnableSystemSleepCheckpoint.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140763768 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopSuspendApps @ 0x140763E50 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140763EA4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140763F04 (PopResumeApps.c)
 *     PopResumeServices @ 0x140763F7C (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140764024 (PopDispatchSuperfetchNotification.c)
 *     PopSetSystemAwayMode @ 0x1408E43C0 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x1408ECEB8 (PopScreenOff.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FB5A0 (TtmNotifyLowPowerStateExited.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 *     PopAcquireAwaymodeLock @ 0x14098D540 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x14098D580 (PopReleaseAwaymodeLock.c)
 *     PfPowerActionNotify @ 0x14098D9C4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r14d
  int v19; // eax
  int started; // eax
  NTSTATUS v21; // esi
  __int64 v22; // rcx
  int v23; // ecx
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ebx
  int v29; // ecx
  int v31; // ecx
  __int64 v32; // rdx
  int v33; // ecx
  char v34; // bl
  __int64 v35; // rdx
  __int64 v36; // rcx
  bool v37; // zf
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-58h] BYREF
  bool v42; // [rsp+20h] [rbp-38h]
  char v43; // [rsp+21h] [rbp-37h]
  ULONG v44; // [rsp+24h] [rbp-34h]
  int v45; // [rsp+28h] [rbp-30h]
  __int128 v46; // [rsp+30h] [rbp-28h] BYREF
  __int64 v47; // [rsp+40h] [rbp-18h]

  v45 = a4;
  v5 = 0;
  v47 = 0LL;
  v46 = 0LL;
  v44 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v11 = 1;
  if ( !byte_140C238B0 && !byte_140C238B1
    || a2 != PowerActionSleep
    || a3 >= PowerSystemHibernate
    || (dword_140C22E54 & 0xFFFFFFFA) != 0
    || dword_140C22E54 == 1 )
  {
    PopReleaseAwaymodeLock();
    if ( dword_140C22E54 )
    {
      if ( dword_140C22E54 > 5 && (dword_140C22E54 <= 7 || dword_140C22E54 == 11) )
        v14 = 21;
      else
        v14 = 20;
    }
    else
    {
      v14 = 1;
    }
    if ( a2 == PowerActionDisplayOff )
    {
      if ( !PopConsoleDisplayState )
        return 3221266435LL;
      PopReleasePolicyLock(v13, v12);
      PopScreenOff(v14, v32);
      PopAcquirePolicyLock(v33);
      return 0LL;
    }
    PopSetPowerActionWatchdogState(1u);
    v42 = (unsigned int)(a2 - 4) <= 2;
    if ( PsWin32CalloutsEstablished && (unsigned int)(a2 - 4) > 2 )
      v11 = 0;
    v17 = a4;
    v18 = a4 & 0xFFFFFFFE;
    v19 = v17 | 1;
    if ( v45 >= 0 )
      v18 = v19;
    if ( v11 )
      LOBYTE(PopAction) = PopAction & 0xFD;
    v43 = byte_140C22EF0;
    PopReleasePolicyLock(v16, v15);
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !a1 )
    {
      if ( v42 )
        goto LABEL_19;
      memset(&PopSleepStats, 0, 0x278uLL);
      PopDiagTracePowerTransitionStart(dword_140C22E54, dword_140C22E58);
      qword_140C23328 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopEnableSystemSleepCheckpoint();
      PopCheckpointSystemSleep(1LL);
    }
    if ( !v42 )
      PopSetSleepMarker(1);
LABEL_19:
    if ( v11 )
    {
      v21 = ZwSetSystemPowerState(a2, a3, v18);
      goto LABEL_38;
    }
    LOBYTE(v46) = a1;
    *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(a3, a2);
    HIDWORD(v46) = v18;
    HIDWORD(v47) = v14;
    started = PoStartPowerStateTasks(&v46);
    v21 = started;
    if ( !a1 )
    {
      if ( started >= 0 && !v43 )
        PopPrepareSleep((__int64)&v46);
      v44 = PoBlockConsoleSwitch((__int64)&v46);
    }
    if ( v21 >= 0 && !a1 )
    {
      PfPowerActionNotify(0LL);
      PopNoMoreInput = 1;
      _InterlockedOr(v41, 0);
      if ( !v43 )
      {
        LOBYTE(v22) = 1;
        PopPowerAggregatorNotifySuspendResume(v22);
        PopSuspendApps(&v46);
        PopSuspendServices(&v46);
      }
      if ( (v18 & 8) != 0 )
        EtwShutdown(1);
      PopDispatchSuperfetchNotification(v18, (unsigned int)a3);
      v21 = ZwSetSystemPowerState(a2, a3, v18);
      PopAcquirePolicyLock(v23);
      v24 = byte_140C22EF0;
      PopReleasePolicyLock(v26, v25);
      PopNoMoreInput = 0;
      _InterlockedOr(v41, 0);
      if ( !v24 )
      {
        PopResumeServices(&v46);
        PopPowerAggregatorNotifySuspendResume(0LL);
        PopResumeApps(&v46);
      }
      PfPowerActionNotify(7LL);
    }
    PoEndPowerStateTasks(&v46);
    if ( TtmpEnabled == 1 )
    {
      if ( a1 )
        goto LABEL_43;
      PopAcquirePolicyLock(v27);
      v34 = PopTtmIsSxCompleteNotificationPending;
      PopTtmIsSxTransitionInProgress = 0;
      PopReleasePolicyLock(v36, v35);
      v37 = v34 == 0;
      v28 = v44;
      if ( v37 )
        goto LABEL_37;
      TtmNotifyLowPowerStateExited(v44);
      PopAcquirePolicyLock(v38);
      PopTtmIsSxCompleteNotificationPending = 0;
      PopReleasePolicyLock(v40, v39);
    }
    else
    {
      v28 = v44;
    }
    if ( !a1 )
    {
LABEL_37:
      PoUnblockConsoleSwitch(&v46, v28);
LABEL_38:
      if ( !a1 && !v42 )
      {
        if ( v21 >= 0 )
        {
          qword_140C23350 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDiagTraceHiberStats();
          PopDiagTracePowerTransitionTime();
          PopDiagTracePerfTrackData(v18);
          PopShutdownButtonPressTime = 0LL;
          SystemAction = a2;
          LightestSystemState = a3;
          PopSleepStats = 1;
        }
        PopDiagTracePowerTransitionEnd(v21);
        PopCheckpointSystemSleep(41LL);
      }
    }
LABEL_43:
    PpmEndHighPerfRequest(2);
    PopAcquirePolicyLock(v29);
    PopSetPowerActionWatchdogState(0);
    return (unsigned int)v21;
  }
  if ( !dword_140C238B8 )
  {
    if ( byte_140C238B1 )
    {
      if ( (PopSimulate & 0x4000000) != 0 )
        PopSetSystemState(dword_140C238B8 + 4, dword_140C238B8 + 7);
    }
    else
    {
      PopReleasePolicyLock(v10, v9);
      v5 = PopSetSystemAwayMode(1LL);
      PopAcquirePolicyLock(v31);
    }
  }
  PopReleaseAwaymodeLock();
  return v5;
}
