/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x1403FC3A0
 * Callers:
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x1408C1390 (KiCaptureUmsThreadContext.c)
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
