/*
 * XREFs of KeKvaShadowingActive @ 0x1402FDE54
 * Callers:
 *     sub_1403E8424 @ 0x1403E8424 (sub_1403E8424.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406B57DC (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1408B8848 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408B9770 (KeQueryKvaShadowInformation.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
