/*
 * XREFs of CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14087CDE4
 * Callers:
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 * Callees:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKeyNodeStack(__int16 *a1)
{
  return CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, a1);
}
