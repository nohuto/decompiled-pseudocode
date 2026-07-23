/*
 * XREFs of KeInitializeClock @ 0x140A69C98
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KiSetPendingTick @ 0x14024184C (KiSetPendingTick.c)
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     KiSetupTimeIncrement @ 0x1403C634C (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     strstr @ 0x1403CD440 (strstr.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PoTraceDynamicTickDisabled @ 0x14056A194 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x14098C0F0 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char result; // al
  unsigned __int8 CurrentIrql; // di
  const char *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  int v16; // [rsp+30h] [rbp-40h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h]

  v18 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
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
      KiClockState = 0;
      off_140C00888[0]();
      KiSetPendingTick(0);
      off_140C00880[0]();
      LOBYTE(v9) = 1;
      ((void (__fastcall *)(__int64))off_140C00878[0])(v9);
      ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C00890[0])(0LL, KeMaximumIncrement, &v18);
      KiSetPendingTick(1);
      Root = (unsigned __int64)KiClockIntervalRequests.Root;
      KeTimeIncrement = v18;
      KiLastRequestedTimeIncrement = KeMaximumIncrement;
      KeNonHrTimeIncrement = v18;
      KePseudoHrTimeIncrement = v18;
      dword_140C3181C = KeMaximumIncrement;
      if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 && KiClockIntervalRequests.Root )
        Root = (unsigned __int64)&KiClockIntervalRequests ^ (unsigned __int64)KiClockIntervalRequests.Root;
      v7 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( KeMaximumIncrement < *(_DWORD *)(Root + 28) )
          {
            v5 = *(_QWORD *)Root;
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v5 )
                break;
              v5 ^= Root;
            }
            if ( !v5 )
              break;
          }
          else
          {
            v5 = *(_QWORD *)(Root + 8);
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v5 )
              {
LABEL_33:
                v7 = 1;
                break;
              }
              v5 ^= Root;
            }
            if ( !v5 )
              goto LABEL_33;
          }
          Root = v5;
        }
      }
      RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v7, &KiDefaultClockIntervalRequest);
      byte_140C31818 = 1;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v10 = KeGetCurrentIrql();
          if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v13 & v12[5]) == 0;
            v12[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      dword_140C31590 = KeTimeIncrement;
      dword_140C31594 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140C31598 = KiLastRequestedTimeIncrement;
      dword_140C3159C = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_37;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v16 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v16);
        if ( v16 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_37:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v15, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v4 = *(const char **)(a2 + 216);
    qword_140C31588 = -1LL;
    qword_140C315A8 = -1LL;
    if ( v4 && strstr(v4, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(__int128 *))off_140C00870[0])(&v19);
    if ( (v19 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v19 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v19 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v19 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v20, DWORD2(v20));
  }
  return result;
}
