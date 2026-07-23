/*
 * XREFs of KeIsForceIdleEngaged @ 0x140211564
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140211280 (KePrepareClockTimerForIdle.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KiResetForceIdle @ 0x140523860 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
