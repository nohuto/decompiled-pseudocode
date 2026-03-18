/*
 * XREFs of KeIsCetCapable @ 0x14025E5E0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsCetCapable()
{
  return KiCetCapable != 0;
}
