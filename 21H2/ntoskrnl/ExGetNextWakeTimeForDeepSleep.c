/*
 * XREFs of ExGetNextWakeTimeForDeepSleep @ 0x14063DA44
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x14030A3C0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     KeQueryTimerDueTime @ 0x14056DF08 (KeQueryTimerDueTime.c)
 */

unsigned __int64 __fastcall ExGetNextWakeTimeForDeepSleep(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 TimerDueTime; // rdx
  __int64 v7; // rcx

  v4 = (__int64 *)ExpWakeTimerList;
  v5 = -1LL;
  TimerDueTime = -1LL;
  while ( v4 != &ExpWakeTimerList )
  {
    v7 = (__int64)(v4 - 33);
    v4 = (__int64 *)*v4;
    if ( (*(_BYTE *)(v7 + 304) & 4) != 0 )
    {
      if ( *(_QWORD *)(v7 + 256) )
        TimerDueTime = KeQueryTimerDueTime(v7, TimerDueTime, a3, a4);
      if ( TimerDueTime && TimerDueTime < v5 )
        v5 = TimerDueTime;
    }
  }
  return v5;
}
