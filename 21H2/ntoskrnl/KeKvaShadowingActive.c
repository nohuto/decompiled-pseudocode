/*
 * XREFs of KeKvaShadowingActive @ 0x1402581D0
 * Callers:
 *     sub_1403FABD0 @ 0x1403FABD0 (sub_1403FABD0.c)
 *     PspDisablePrimaryTokenExchange @ 0x140702AF8 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x140961998 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140962C48 (KeQueryKvaShadowInformation.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
