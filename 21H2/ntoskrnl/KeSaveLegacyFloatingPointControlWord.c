/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14041FAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
