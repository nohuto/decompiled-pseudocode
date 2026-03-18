/*
 * XREFs of KeIsForceIdleEngaged @ 0x1402E0E68
 * Callers:
 *     KeClockInterruptNotify @ 0x140280F70 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x1402DFF00 (KePrepareClockTimerForIdle.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KiResetForceIdle @ 0x140521B40 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
