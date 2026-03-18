/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1402729D0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x1402409F8 (KiUpdateTimeAssist.c)
 *     KiRestoreClockTickRate @ 0x140241808 (KiRestoreClockTickRate.c)
 *     KiSetPendingTick @ 0x14024184C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x14024187C (KiEventClockStateChange.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140277D10 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     KiGetPendingTick @ 0x14030BAA0 (KiGetPendingTick.c)
 *     KiSendClockInterruptToClockOwner @ 0x14030E514 (KiSendClockInterruptToClockOwner.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14050DAD0 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14050E49C (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x14051DB20 (KiResetForceIdle.c)
 *     KiGetPastDueIRTimerInfo @ 0x14051DF74 (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x1405B0A80 (ExRecordOneTimerExpiry.c)
 */

void __fastcall KeResumeClockTimerFromIdle(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // si
  signed __int32 v4; // eax
  __int64 v5; // rdx
  unsigned __int8 ClockOwner; // al
  volatile signed __int32 *v7; // rdx
  struct _KPRCB *v8; // rcx
  unsigned __int64 v9; // r14
  char v10; // r15
  __int64 Number; // r15
  unsigned int v12; // ecx
  __int32 v13; // edi
  _BOOL8 v14; // rcx
  unsigned __int8 v15; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v16[7]; // [rsp+39h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-11h] BYREF
  __int64 v18; // [rsp+48h] [rbp-9h] BYREF
  __int64 v19; // [rsp+50h] [rbp-1h] BYREF
  __int64 v20; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+Fh] BYREF
  int v22; // [rsp+68h] [rbp+17h]
  int v23; // [rsp+6Ch] [rbp+1Bh]
  _QWORD v24[2]; // [rsp+70h] [rbp+1Fh] BYREF

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v16[0] = 0;
  v15 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v4 = KiClockState;
    if ( KiClockState == 1 )
    {
      v4 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v4 == 1 )
        break;
    }
    if ( v4 != 3 )
      goto LABEL_6;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, (__int64)&v17, (__int64)&v20);
  KiClockTimerOneShotEndTime = v17;
  if ( KeMinimumIncrement - 1 + (int)v17 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v17;
  v9 = v17;
  if ( (int)v17 - (int)KiLastPseudoHrTimerExpiration + KeMinimumIncrement - 1 >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v17;
  v10 = off_140C00898[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number && v9 >= KiClockTimerNextTickTime && v10 )
      *a1 = v9 - KiClockTimerNextTickTime;
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number
    && v9 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_140C00898[0]() )
  {
    *a1 = v9 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v9 - KiClockTimerOneShotStartTime < qword_140C31588 )
    qword_140C31588 = v9 - KiClockTimerOneShotStartTime;
  if ( v9 - KiClockTimerOneShotStartTime > qword_140C31580 )
    qword_140C31580 = v9 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v10 && (unsigned int)KiGetPastDueIRTimerInfo(v9, v16, &v15) )
      ExRecordOneTimerExpiry(v16[0], v15);
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v9);
    KiConsiderTimerRebasing = 0;
  }
  if ( KiClockTimerPerCpu )
  {
    KeQuerySystemAllowedCpuSetAffinity(KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion);
    Number = CurrentPrcb->Number;
    if ( ((KiClockOwnerAllowedCpuSet[((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0 )
    {
      LODWORD(Number) = KeFindFirstSetRightAffinityEx(&KiIntSteerMask);
      if ( (_DWORD)Number == -1 )
        LODWORD(Number) = CurrentPrcb->Number;
    }
    v12 = CurrentPrcb->Number;
  }
  else
  {
    LODWORD(Number) = CurrentPrcb->Number;
    v12 = Number;
  }
  if ( v12 == (_DWORD)Number )
  {
    if ( v9 + (unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = v12;
        if ( !(unsigned __int8)KiGetPendingTick() )
          off_140C00880[0]();
      }
      v13 = 0;
      KiRestoreClockTickRate(v9, &v18);
      KiClockTimerNextTickTime = v9 + (unsigned int)KeTimeIncrement;
      KiEventClockStateChange(0, 1, &v19, &v18);
      goto LABEL_42;
    }
  }
  else
  {
    v3 = 1;
  }
  ++qword_140C31578;
  v13 = 2;
  KiEventClockStateChange(2, 1, 0LL, 0LL);
  if ( v3 )
  {
    LODWORD(KiClockTimerOwner) = Number;
    KiSendClockInterruptToClockOwner();
  }
LABEL_42:
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v14 = (unsigned __int8)off_140C00898[0]() == 0;
    KiResetForceIdle(v14, 0LL);
  }
  v23 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v22 = KiClockTimerOwner;
    v24[0] = &v21;
    v21 = v9;
    v24[1] = 16LL;
    EtwTraceKernelEvent((unsigned int)v24, 1, 1074790400, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v13);
LABEL_6:
  v5 = CurrentPrcb->Number;
  if ( (_DWORD)KiClockTimerOwner == (_DWORD)v5 && !CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 1;
  ClockOwner = CurrentPrcb->ClockOwner;
  if ( !ClockOwner )
  {
    v7 = *(volatile signed __int32 **)(KiProcessorBlock[v5] + 33976);
    ClockOwner = 0;
    if ( v7 )
    {
      if ( (KiVelocityFlags & 0x40) != 0 )
      {
        _InterlockedAnd(v7, 0xFFF7FFFF);
        ClockOwner = CurrentPrcb->ClockOwner;
      }
    }
  }
  if ( ClockOwner )
  {
    v8 = KiClockTimerPerCpu ? KeGetCurrentPrcb() : (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    if ( (v8->PendingTickFlags & 1) == 0 )
    {
      off_140C00880[0]();
      ClockOwner = CurrentPrcb->ClockOwner;
    }
  }
  if ( !ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_140C00888[0]();
    KiSetPendingTick(0);
  }
}
