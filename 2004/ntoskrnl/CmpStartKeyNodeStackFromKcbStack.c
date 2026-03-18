/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x1408731EC
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140877174 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140877780 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1408786BC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14087CD14 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14087D444 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14087D5D8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpStartKeyNodeStack @ 0x140718708 (CmpStartKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407187E0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpStartKeyNodeStack(a1, *(_WORD *)(a2 + 2), a3, a4);
  if ( (int)result >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(a1, a2);
    return 0LL;
  }
  return result;
}
