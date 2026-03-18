/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x14056CFD8
 * Callers:
 *     KiSetClockInterval @ 0x14022F2FC (KiSetClockInterval.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x14038BFAC (KiResumeClockTimer.c)
 * Callees:
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 */

char __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, char a2)
{
  char result; // al

  result = KiSetClockTimer(a1, KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement, KeMinimumIncrement, 1, 1, 0);
  if ( a2 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, KiClockOwnerOneShotRequest, 0, 2, 1, 0);
  }
  return result;
}
