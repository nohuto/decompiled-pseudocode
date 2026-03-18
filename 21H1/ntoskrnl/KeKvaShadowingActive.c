/*
 * XREFs of KeKvaShadowingActive @ 0x1402C1374
 * Callers:
 *     sub_1403E75E4 @ 0x1403E75E4 (sub_1403E75E4.c)
 *     PspDisablePrimaryTokenExchange @ 0x14064C7FC (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1408B7528 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408B8450 (KeQueryKvaShadowInformation.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
