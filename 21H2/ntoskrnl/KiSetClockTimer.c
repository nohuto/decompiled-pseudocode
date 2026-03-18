/*
 * XREFs of KiSetClockTimer @ 0x14056CF48
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x14022F3E8 (KiSetClockIntervalOneShot.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140291710 (KiTransitionSchedulingGroupGeneration.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x14038BFAC (KiResumeClockTimer.c)
 *     KeUpdatePendingQosRequest @ 0x14045ABA8 (KeUpdatePendingQosRequest.c)
 *     KePrepareNonClockOwnerForIdle @ 0x14056C984 (KePrepareNonClockOwnerForIdle.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14056CFD8 (KiSetClockTimerKTimerDeadlines.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 */

char __fastcall KiSetClockTimer(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  __int64 v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  char result; // al
  bool v13; // zf
  LARGE_INTEGER v14; // [rsp+30h] [rbp+8h] BYREF

  v7 = 2LL * a4;
  v10 = RtlGetInterruptTimePrecise(&v14) - a2;
  *(_DWORD *)(a1 + 8 * v7 + 37024) = a3;
  LOBYTE(v11) = 1;
  if ( a2 > 0 )
    v10 = a2;
  *(_QWORD *)(a1 + 8 * v7 + 37016) = v10;
  result = *(_BYTE *)(a1 + 8 * v7 + 37028) ^ (*(_BYTE *)(a1 + 8 * v7 + 37028) ^ (2 * a5)) & 2 | 1;
  v13 = a6 == 0;
  *(_BYTE *)(a1 + 8 * v7 + 37028) = result;
  if ( !v13 )
    return KiSetNextClockTickDueTime(v11);
  return result;
}
