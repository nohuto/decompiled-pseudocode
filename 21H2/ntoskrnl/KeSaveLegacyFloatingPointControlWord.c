/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1403FE7D0
 * Callers:
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1408BECB0 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
