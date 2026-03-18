/*
 * XREFs of KeInitializeClock @ 0x140B27884
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KiSetPendingTick @ 0x14022F96C (KiSetPendingTick.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiSetupTimeIncrement @ 0x1403D94C0 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PoTraceDynamicTickDisabled @ 0x1405D0AB4 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char result; // al
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 CurrentIrql; // di
  const char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  bool v8; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rcx
  unsigned int v11; // r10d
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  signed __int32 v17[8]; // [rsp+0h] [rbp-80h] BYREF
  int v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-18h]
  unsigned int v24; // [rsp+70h] [rbp-10h]
  char v25; // [rsp+74h] [rbp-Ch]

  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v21 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v22 = 0LL;
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_PerProcessorClockTick__private_reporting,
        0x1AE831Fu,
        0,
        0,
        (__int64)&Feature_PdttSupport_logged_traits,
        0,
        v18);
      if ( KiEnableClockTimerPerCpuTickScheduling && KiClockTimerPerCpu )
        KiClockTimerPerCpuTickScheduling = 1;
      CurrentPrcb = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xDuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x3FFC;
      }
      CurrentPrcb->ClockTimerState.ClockActive = 1;
      KiClockState = 0;
      off_140C01ED8[0]();
      KiSetPendingTick(0);
      off_140C01ED0[0]();
      LOBYTE(v10) = 1;
      ((void (__fastcall *)(__int64))off_140C01EC8)(v10);
      ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C01EE0[0])(0LL, (unsigned int)KeMaximumIncrement, &v21);
      KiSetPendingTick(1);
      v11 = KeMaximumIncrement;
      KeTimeIncrement = v21;
      CurrentPrcb->ClockTimerState.TimeIncrement = v21;
      CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v11;
      v7 = KiClockIntervalRequests;
      KiLastRequestedTimeIncrement = v11;
      KeNonHrTimeIncrement = v11;
      KePseudoHrTimeIncrement = v11;
      dword_140C2B5BC = v11;
      if ( (qword_140CF6018 & 1) != 0 )
      {
        if ( KiClockIntervalRequests )
          v7 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
        else
          v7 = 0LL;
      }
      v8 = 0;
      if ( v7 )
      {
        while ( 1 )
        {
          if ( v11 >= *(_DWORD *)(v7 + 28) )
          {
            v6 = *(_QWORD *)(v7 + 8);
            if ( (qword_140CF6018 & 1) != 0 )
            {
              if ( !v6 )
              {
LABEL_32:
                v8 = 1;
                break;
              }
              v6 ^= v7;
            }
            if ( !v6 )
              goto LABEL_32;
          }
          else
          {
            v6 = *(_QWORD *)v7;
            if ( (qword_140CF6018 & 1) != 0 )
            {
              if ( !v6 )
                break;
              v6 ^= v7;
            }
            if ( !v6 )
              break;
          }
          v7 = v6;
        }
      }
      RtlRbInsertNodeEx(
        (unsigned __int64 *)&KiClockIntervalRequests,
        v7,
        v8,
        (unsigned __int64)&KiDefaultClockIntervalRequest);
      byte_140C2B5B8 = 1;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v12 = KeGetCurrentIrql();
          if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
          {
            v13 = KeGetCurrentPrcb();
            v14 = v13->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v16 = (v15 & v14[5]) == 0;
            v14[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v13);
          }
        }
      }
      __writecr8(CurrentIrql);
      dword_140C2B170 = KeTimeIncrement;
      dword_140C2B174 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140C2B178 = KiLastRequestedTimeIncrement;
      dword_140C2B17C = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_38;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v19 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v19);
        if ( v19 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_38:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v17, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v5 = *(const char **)(a2 + 216);
    qword_140C2B168 = -1LL;
    qword_140C2B188 = -1LL;
    if ( v5 && strstr(v5, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(__int128 *))off_140C01EC0[0])(&v22);
    if ( (v22 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v22 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v22 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v22 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v23, v24);
  }
  return result;
}
