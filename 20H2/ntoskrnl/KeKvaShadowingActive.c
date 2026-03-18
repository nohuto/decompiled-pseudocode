/*
 * XREFs of KeKvaShadowingActive @ 0x14032D974
 * Callers:
 *     sub_1403EB0B4 @ 0x1403EB0B4 (sub_1403EB0B4.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406933A0 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     KeQuerySpeculationControlInformation @ 0x1408BE468 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408BF4D0 (KeQueryKvaShadowInformation.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}
