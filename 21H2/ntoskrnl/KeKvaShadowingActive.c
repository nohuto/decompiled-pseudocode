/*
 * XREFs of KeKvaShadowingActive @ 0x1402CF588
 * Callers:
 *     sub_1403EBA24 @ 0x1403EBA24 (sub_1403EBA24.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406478CC (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1408BB948 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408BCC88 (KeQueryKvaShadowInformation.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
