/*
 * XREFs of KiSetNextClockTickDueTime @ 0x14056D050
 * Callers:
 *     KiResetClockIntervalOneShot @ 0x14022F104 (KiResetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x14022F2FC (KiSetClockInterval.c)
 *     KiRestoreClockTickRate @ 0x14022F864 (KiRestoreClockTickRate.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     KePrepareNonClockOwnerForIdle @ 0x14056C984 (KePrepareNonClockOwnerForIdle.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x14022F440 (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x14022F670 (KiGetClockIntervalOneShot.c)
 *     KiSetClockTickRate @ 0x14022F6A4 (KiSetClockTickRate.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall KiSetNextClockTickDueTime(char a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v4; // r10
  $120BD1411D93D4F3A10ED52495176849 *v5; // rdx
  $120BD1411D93D4F3A10ED52495176849 *v6; // r11
  unsigned __int64 v7; // r15
  int v8; // r8d
  ULONG LowPart; // ebp
  unsigned __int8 TypeFlags; // cl
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  bool v14; // cf
  unsigned __int64 v15; // rcx
  unsigned int ClockIntervalOneShot; // eax
  unsigned __int64 v17; // r10
  _QWORD *v18; // r11
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // si
  unsigned int TimeIncrement; // edi
  __int16 v24; // [rsp+50h] [rbp-8h]
  LARGE_INTEGER v25; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v25);
  v4 = -1LL;
  v5 = &CurrentPrcb->ClockTimerState.ClockTimerEntries[0].12;
  v6 = 0LL;
  v7 = InterruptTimePrecise;
  v8 = 0;
  LowPart = 7;
  do
  {
    TypeFlags = v5->TypeFlags;
    v11 = v4;
    v25.LowPart = LowPart;
    if ( (TypeFlags & 1) != 0 && (a1 || (TypeFlags & 2) == 0) )
    {
      v12 = *(_QWORD *)&v5[-12].TypeFlags;
      v13 = v12 + *(unsigned int *)&v5[-4].TypeFlags;
      if ( v8 == 4 && v13 < InterruptTimePrecise && a1 )
        goto LABEL_13;
      v14 = v13 < v4;
      LowPart = v8;
      v4 = v12 + *(unsigned int *)&v5[-4].TypeFlags;
      if ( v14 )
        v6 = v5 - 12;
      if ( v13 >= v11 )
      {
        LowPart = v25.LowPart;
        v4 = v11;
      }
      if ( v12 <= InterruptTimePrecise )
LABEL_13:
        v5->TypeFlags = TypeFlags & 0xFE;
    }
    ++v8;
    v5 += 16;
  }
  while ( v8 < 7 );
  v15 = v4;
  if ( *(_DWORD *)&v6[8].TypeFlags >= (unsigned int)KeMinimumIncrement )
    v15 = v4 - (unsigned int)KeMinimumIncrement;
  ClockIntervalOneShot = KiGetClockIntervalOneShot(v15, InterruptTimePrecise);
  if ( (qword_140CF6018 & 1) != 0 )
  {
    if ( qword_140CF6018 == 1 )
      v19 = 0LL;
    else
      v19 = qword_140CF6018 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v19 = qword_140CF6018;
  }
  v20 = *(unsigned int *)(v19 + 28);
  v21 = 1;
  if ( *v18 <= v7 + v20 && v7 + v20 <= v17 )
  {
    v21 = 0;
    ClockIntervalOneShot = *(_DWORD *)(v19 + 28);
  }
  if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotRearmRequired
    && (ClockIntervalOneShot == CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement
     || ClockIntervalOneShot == CurrentPrcb->ClockTimerState.TimeIncrement) )
  {
    TimeIncrement = CurrentPrcb->ClockTimerState.TimeIncrement;
  }
  else
  {
    TimeIncrement = KiSetClockTickRate(ClockIntervalOneShot, v21);
  }
  CurrentPrcb->ClockTimerState.ExpectedWakeReason = LowPart;
  CurrentPrcb->ClockTimerState.NextTickDueTime = v7 + TimeIncrement;
  if ( v21 )
    PoTraceSystemTimerResolutionKernel(TimeIncrement, 1397707336, 1);
  if ( (v24 & 0x200) != 0 )
    _enable();
  return TimeIncrement;
}
