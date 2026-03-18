/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1403F77C0
 * Callers:
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
