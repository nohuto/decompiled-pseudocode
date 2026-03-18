/*
 * XREFs of KiSetClockTickRate @ 0x14022F6A4
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 * Callees:
 *     KiSetPendingTick @ 0x14022F96C (KiSetPendingTick.c)
 *     KiLogClockIncrementUpdate @ 0x14022F99C (KiLogClockIncrementUpdate.c)
 *     KiEventClockStateChange @ 0x14022FA04 (KiEventClockStateChange.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int32 v4; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 InterruptTimePrecise; // r14
  LARGE_INTEGER *v9; // rbx
  int v10; // eax
  _BYTE v12[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = KiClockState;
  v14 = a1;
  if ( a2 )
  {
    ((void (__fastcall *)(__int64, _QWORD, __int64 *))off_140C01EE0[0])(1LL, a1, &v13);
    v7 = 1;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C01EE0[0])(0LL, a1, &v13);
    v7 = 0;
  }
  LOBYTE(v6) = 1;
  CurrentPrcb->ClockTimerState.OneShotState = v7;
  KiSetPendingTick(v6);
  if ( CurrentPrcb->ClockOwner )
  {
    KeTimeIncrement = v13;
    KiLastRequestedTimeIncrement = a1;
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
    KiClockTimerNextTickTime = MEMORY[0xFFFFF78000000008] + (unsigned int)v13;
    KiClockOwnerOneShotRequestState = a2 != 0;
    if ( v4 == 2 )
      v4 = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0LL, v4, &v13, &v14);
  }
  else
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v12);
  }
  CurrentPrcb->ClockTimerState.TimeIncrement = v13;
  CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = a1;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise + v13;
  if ( KeTimeIncrement < (unsigned int)dword_140C2B174 )
    dword_140C2B174 = KeTimeIncrement;
  if ( KeTimeIncrement > (unsigned int)dword_140C2B170 )
    dword_140C2B170 = KeTimeIncrement;
  if ( a1 < dword_140C2B17C )
    dword_140C2B17C = a1;
  if ( a1 > dword_140C2B178 )
    dword_140C2B178 = a1;
  if ( CurrentPrcb->ClockOwner )
  {
    v9 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
    KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
    v10 = KiLastRequestedTimeIncrement;
    v9->LowPart = KeTimeIncrement;
    v9->HighPart = v10;
    v9[1].QuadPart = InterruptTimePrecise;
    v9[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v9[3].LowPart) = a2;
  }
  KiLogClockIncrementUpdate((_DWORD)CurrentPrcb, InterruptTimePrecise, a1, v13, a2);
  return (unsigned int)v13;
}
