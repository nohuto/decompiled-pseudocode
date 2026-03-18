/*
 * XREFs of KeIsForceIdleEngaged @ 0x140242A38
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140241D70 (KePrepareClockTimerForIdle.c)
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     KiResetForceIdle @ 0x14051DB20 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
