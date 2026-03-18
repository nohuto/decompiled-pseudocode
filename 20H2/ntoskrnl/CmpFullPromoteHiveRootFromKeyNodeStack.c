/*
 * XREFs of CmpFullPromoteHiveRootFromKeyNodeStack @ 0x140882994
 * Callers:
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 * Callees:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140725820 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKeyNodeStack(__int16 *a1)
{
  return CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, a1);
}
