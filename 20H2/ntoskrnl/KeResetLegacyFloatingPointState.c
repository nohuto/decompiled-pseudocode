/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1403FC390
 * Callers:
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
