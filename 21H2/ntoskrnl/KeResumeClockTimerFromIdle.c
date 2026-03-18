/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x140308240
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x14020F07C (KiUpdateTimeAssist.c)
 *     KiSendClockInterruptToClockOwner @ 0x14022F244 (KiSendClockInterruptToClockOwner.c)
 *     KiRestoreClockTickRate @ 0x14022F864 (KiRestoreClockTickRate.c)
 *     KiSetPendingTick @ 0x14022F96C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x14022FA04 (KiEventClockStateChange.c)
 *     KiGetPendingTick @ 0x14023EF1C (KiGetPendingTick.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402FF090 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056C1B0 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14056CDBC (KiAdjustTimersAfterDripsExit.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14056CFD8 (KiSetClockTimerKTimerDeadlines.c)
 *     KiResetForceIdle @ 0x14057A428 (KiResetForceIdle.c)
 *     KiGetPastDueIRTimerInfo @ 0x14057AA10 (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x14063DF48 (ExRecordOneTimerExpiry.c)
 */

void __fastcall KeResumeClockTimerFromIdle(_DWORD *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int32 v5; // eax
  __int64 v6; // rax
  __int64 ClockOwner; // rcx
  __int64 *v8; // r9
  __int64 v9; // rdx
  char v10; // di
  struct _KPRCB *v11; // rax
  unsigned __int64 v12; // r14
  char v13; // r15
  unsigned int FirstSetRightAffinity; // r15d
  unsigned int Number; // ecx
  __int32 v16; // edi
  __int64 *v17; // r9
  __int64 *v18; // r8
  __int64 v19; // rax
  int v20; // ecx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  bool v28; // zf
  _BOOL8 v29; // rcx
  unsigned __int8 v30; // r14
  _DWORD *v31; // r10
  unsigned __int8 v32; // al
  int v33; // eax
  unsigned __int64 InterruptTimePrecise; // rdi
  unsigned __int8 v35; // [rsp+38h] [rbp-19h] BYREF
  char v36[7]; // [rsp+39h] [rbp-18h] BYREF
  __int64 v37; // [rsp+40h] [rbp-11h] BYREF
  __int64 v38; // [rsp+48h] [rbp-9h] BYREF
  __int64 v39; // [rsp+50h] [rbp-1h] BYREF
  LARGE_INTEGER v40; // [rsp+58h] [rbp+7h] BYREF
  __int128 v41; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp+1Fh] BYREF

  v38 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v40.QuadPart = 0LL;
  v36[0] = 0;
  v35 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v5 = KiClockState;
    if ( KiClockState == 1 )
    {
      v5 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v5 == 1 )
        break;
    }
    if ( v5 != 3 )
      goto LABEL_6;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, 1, (__int64)&v37, (__int64)&v40);
  KiClockTimerOneShotEndTime = v37;
  if ( KeMinimumIncrement - 1 + (int)v37 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v37;
  v12 = v37;
  if ( (int)v37 - (int)KiLastPseudoHrTimerExpiration + KeMinimumIncrement - 1 >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v37;
  v13 = off_140C01EE8[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number && v12 >= KiClockTimerNextTickTime && v13 )
      *a1 = v12 - KiClockTimerNextTickTime;
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number
    && v12 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_140C01EE8[0]() )
  {
    *a1 = v12 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v12 - KiClockTimerOneShotStartTime < qword_140C2B168 )
    qword_140C2B168 = v12 - KiClockTimerOneShotStartTime;
  if ( v12 - KiClockTimerOneShotStartTime > qword_140C2B160 )
    qword_140C2B160 = v12 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v13 && (unsigned int)KiGetPastDueIRTimerInfo(v12, v36, &v35) )
      ExRecordOneTimerExpiry((unsigned __int8)v36[0], v35);
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v12);
    KiConsiderTimerRebasing = 0;
  }
  if ( !KiClockTimerPerCpu )
  {
    Number = CurrentPrcb->Number;
LABEL_36:
    if ( v12 + (unsigned int)KiLastRequestedTimeIncrement > KiClockTimerNextTickTime )
    {
      ++qword_140C2B158;
      v16 = 2;
      v17 = 0LL;
      v20 = 2;
      v18 = 0LL;
    }
    else
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = Number;
        if ( !KiGetPendingTick() )
        {
          off_140C01ED0[0]();
          CurrentPrcb->ClockTimerState.ClockActive = 1;
        }
      }
      if ( KiClockTimerPerCpuTickScheduling && CurrentPrcb->ClockOwner )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v12 = v37;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KiSetClockTimer((_DWORD)CurrentPrcb, -KeMaximumIncrement, KeMaximumIncrement, 3, 1, 0);
        LOBYTE(v23) = 1;
        KiSetClockTimerKTimerDeadlines(CurrentPrcb, v23);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v28 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(v25);
              v12 = v37;
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      v16 = 0;
      KiRestoreClockTickRate(v12, &v39, (int *)&v38);
      v17 = &v39;
      v18 = &v38;
      v19 = v12 + (unsigned int)KeTimeIncrement;
      CurrentPrcb->ClockTimerState.NextTickDueTime = v12 + v38;
      v20 = 0;
      KiClockTimerNextTickTime = v19;
    }
    KiEventClockStateChange(v20, 1, v18, v17);
    goto LABEL_43;
  }
  KeQuerySystemAllowedCpuSetAffinity(KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion);
  FirstSetRightAffinity = CurrentPrcb->Number;
  if ( !(unsigned int)KeCheckProcessorAffinityEx(KiClockOwnerAllowedCpuSet, FirstSetRightAffinity) )
  {
    FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&KiIntSteerMask);
    if ( FirstSetRightAffinity == -1 )
      FirstSetRightAffinity = CurrentPrcb->Number;
  }
  Number = CurrentPrcb->Number;
  if ( Number == FirstSetRightAffinity )
    goto LABEL_36;
  ++qword_140C2B158;
  v16 = 2;
  KiEventClockStateChange(2, 1, 0LL, 0LL);
  LODWORD(KiClockTimerOwner) = FirstSetRightAffinity;
  KiSendClockInterruptToClockOwner();
LABEL_43:
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v29 = (unsigned __int8)off_140C01EE8[0]() == 0;
    KiResetForceIdle(v29, 0LL);
  }
  v41 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    DWORD2(v41) = KiClockTimerOwner;
    v42[0] = &v41;
    *(_QWORD *)&v41 = v12;
    v42[1] = 16LL;
    EtwTraceKernelEvent((unsigned int)v42, 1, 1074790400, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v16);
LABEL_6:
  v6 = CurrentPrcb->Number;
  if ( (_DWORD)KiClockTimerOwner == (_DWORD)v6 && !CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 1;
  ClockOwner = CurrentPrcb->ClockOwner;
  v8 = KiProcessorBlock;
  v9 = (unsigned __int8)ClockOwner;
  if ( !(_BYTE)ClockOwner )
  {
    a3 = *(_QWORD *)(KiProcessorBlock[v6] + 35000);
    if ( a3 )
    {
      if ( (KiVelocityFlags & 0x40) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)a3, 0xFFF7FFFF);
        v9 = CurrentPrcb->ClockOwner;
      }
    }
  }
  v10 = 0;
  if ( KiClockTimerPerCpu )
    v11 = KeGetCurrentPrcb();
  else
    v11 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  if ( (v11->PendingTickFlags & 1) != 0 )
    goto LABEL_17;
  if ( (_BYTE)v9 || KiClockTimerPerCpuTickScheduling )
  {
    ((void (__fastcall *)(__int64, __int64, __int64, __int64 *))off_140C01ED0[0])(ClockOwner, v9, a3, KiProcessorBlock);
    CurrentPrcb->ClockTimerState.ClockActive = 1;
    v10 = 1;
LABEL_17:
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v30 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
      {
        v31 = KeGetCurrentPrcb()->SchedulerAssist;
        v31[5] |= (-1 << (v30 + 1)) & 0xFFFC;
      }
      KiSetClockTimer((_DWORD)CurrentPrcb, -KeMaximumIncrement, KeMaximumIncrement, 3, 1, 0);
      v9 = CurrentPrcb->ClockOwner;
      if ( (_BYTE)v9 || !KiSerializeTimerExpiration )
        KiSetClockTimerKTimerDeadlines(CurrentPrcb, v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && v30 <= 0xFu && v32 >= 2u )
          {
            v8 = (__int64 *)KeGetCurrentPrcb();
            ClockOwner = (unsigned int)v30 + 1;
            a3 = v8[4375];
            v33 = ~(unsigned __int16)(-1LL << (v30 + 1));
            v28 = (v33 & *(_DWORD *)(a3 + 20)) == 0;
            v9 = (unsigned int)v33 & *(_DWORD *)(a3 + 20);
            *(_DWORD *)(a3 + 20) = v9;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v8);
          }
        }
      }
      __writecr8(v30);
      if ( v10 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v40);
        KiRestoreClockTickRate(InterruptTimePrecise, &v39, (int *)&v38);
        if ( CurrentPrcb->ClockOwner )
        {
          ClockOwner = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
          KiClockTimerNextTickTime = ClockOwner;
        }
        CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise + v38;
      }
    }
  }
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 && !KiClockTimerPerCpuTickScheduling )
  {
    ((void (__fastcall *)(__int64, __int64, __int64, __int64 *))off_140C01ED8[0])(ClockOwner, v9, a3, v8);
    KiSetPendingTick(0);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
}
