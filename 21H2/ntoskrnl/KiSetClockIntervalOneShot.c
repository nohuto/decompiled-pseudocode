/*
 * XREFs of KiSetClockIntervalOneShot @ 0x14022F3E8
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140307E90 (KiCheckForTimerExpiration.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x14022F440 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetClockIntervalOneShot @ 0x14022F670 (KiGetClockIntervalOneShot.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 */

__int64 __fastcall KiSetClockIntervalOneShot(__int64 a1, __int64 a2)
{
  unsigned int ClockIntervalOneShot; // eax
  __int64 v5; // r8

  KiClockOwnerOneShotRequest = a1;
  if ( KiClockTimerPerCpuTickScheduling )
    KiSetClockTimer((unsigned int)KeGetCurrentPrcb(), a1, 0, 2, 1, 1);
  else
    KiSetClockIntervalToMinimumRequested();
  ClockIntervalOneShot = KiGetClockIntervalOneShot(a1, a2);
  LOBYTE(v5) = 1;
  return PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL, v5);
}
