/*
 * XREFs of KeIsForceIdleEngaged @ 0x1402935F4
 * Callers:
 *     KeClockInterruptNotify @ 0x140221640 (KeClockInterruptNotify.c)
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x140293310 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x140523620 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
