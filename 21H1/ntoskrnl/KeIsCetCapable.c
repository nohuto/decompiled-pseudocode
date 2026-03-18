/*
 * XREFs of KeIsCetCapable @ 0x1403EC560
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsCetCapable()
{
  return KiCetCapable != 0;
}
