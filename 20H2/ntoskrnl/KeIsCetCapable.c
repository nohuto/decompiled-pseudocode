/*
 * XREFs of KeIsCetCapable @ 0x1403F1880
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsCetCapable()
{
  return KiCetCapable != 0;
}
