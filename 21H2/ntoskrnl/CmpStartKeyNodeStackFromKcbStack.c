/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x14069EDC0
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140920CA0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140920F1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140921F64 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140922400 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140922B20 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14069EEC0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x14069F324 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = CmpStartKeyNodeStack(a1, *(unsigned __int16 *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(a1, a2, a3);
    return 0LL;
  }
  return result;
}
