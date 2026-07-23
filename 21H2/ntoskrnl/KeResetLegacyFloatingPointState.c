/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x1403FE7C0
 * Callers:
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
