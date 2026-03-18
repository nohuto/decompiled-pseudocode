/*
 * XREFs of KeIsForceIdleEngaged @ 0x14027F138
 * Callers:
 *     KeClockInterruptNotify @ 0x140216500 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x14027E8E0 (KePrepareClockTimerForIdle.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     KiResetForceIdle @ 0x14051E170 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
