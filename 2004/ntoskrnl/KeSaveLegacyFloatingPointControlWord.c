/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1403F77D0
 * Callers:
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1408BB630 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
