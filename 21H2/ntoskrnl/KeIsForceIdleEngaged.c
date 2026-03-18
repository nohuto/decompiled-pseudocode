/*
 * XREFs of KeIsForceIdleEngaged @ 0x1403542B8
 * Callers:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x140353FB0 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14057A428 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
