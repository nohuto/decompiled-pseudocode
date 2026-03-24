/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1403FE5F0
 * Callers:
 *     KiSwapToUmsThread @ 0x1408BD920 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1408BEB50 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
