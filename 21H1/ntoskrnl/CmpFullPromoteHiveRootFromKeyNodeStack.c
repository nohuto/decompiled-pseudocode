/*
 * XREFs of CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14087BAF4
 * Callers:
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 * Callees:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKeyNodeStack(__int16 *a1)
{
  return CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, a1);
}
