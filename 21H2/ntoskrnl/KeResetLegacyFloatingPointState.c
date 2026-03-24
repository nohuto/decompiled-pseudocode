/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1403FE5E0
 * Callers:
 *     KiParkUmsThread @ 0x140525F20 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408BD920 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
