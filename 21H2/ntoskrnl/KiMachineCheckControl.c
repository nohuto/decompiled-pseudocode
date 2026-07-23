/*
 * XREFs of KiMachineCheckControl @ 0x14040A5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiMachineCheckControl()
{
  return KiDecodeMcaFault();
}
