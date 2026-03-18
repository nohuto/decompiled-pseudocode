/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1403F6530
 * Callers:
 *     KiParkUmsThread @ 0x140520420 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
