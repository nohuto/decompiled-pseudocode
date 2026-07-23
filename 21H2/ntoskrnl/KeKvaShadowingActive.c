/*
 * XREFs of KeKvaShadowingActive @ 0x14024D904
 * Callers:
 *     sub_1403EBB94 @ 0x1403EBB94 (sub_1403EBB94.c)
 *     PspDisablePrimaryTokenExchange @ 0x14063C6BC (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1408BBAA8 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408BCDE8 (KeQueryKvaShadowInformation.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
