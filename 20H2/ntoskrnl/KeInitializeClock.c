/*
 * XREFs of KeInitializeClock @ 0x140A48B4C
 * Callers:
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KiSetPendingTick @ 0x140266D78 (KiSetPendingTick.c)
 *     KiSetupTimeIncrement @ 0x1403B31DC (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     strstr @ 0x1403D0F10 (strstr.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PoTraceDynamicTickDisabled @ 0x14056E214 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x1409930E0 (EmClientQueryRuleState.c)
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
      dword_140C314BC = KeMaximumIncrement;
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
      byte_140C314B8 = 1;
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
      dword_140C31450 = KeTimeIncrement;
      dword_140C31454 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140C31458 = KiLastRequestedTimeIncrement;
      dword_140C3145C = KiLastRequestedTimeIncrement;
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
    qword_140C31448 = -1LL;
    qword_140C31468 = -1LL;
    if ( v4 && strstr(v4, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(__int128 *))off_140C00870[0])(&v19);
    if ( (v19 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v19 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v19 & 1) != 0 )
      BYTE2(Mm64BitPhysicalAddress) = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v19 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v20, DWORD2(v20));
  }
  return result;
}
