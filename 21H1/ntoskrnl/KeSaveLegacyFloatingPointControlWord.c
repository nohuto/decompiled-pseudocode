/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1403F6540
 * Callers:
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1408BA310 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
