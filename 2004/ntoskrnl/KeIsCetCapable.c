/*
 * XREFs of KeIsCetCapable @ 0x1403ED690
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsCetCapable()
{
  return KiCetCapable != 0;
}
