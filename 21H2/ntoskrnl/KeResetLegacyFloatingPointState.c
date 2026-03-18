/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x14041FAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
