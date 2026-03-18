/*
 * XREFs of KiMachineCheckControl @ 0x1404006E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiMachineCheckControl()
{
  return KiDecodeMcaFault();
}
