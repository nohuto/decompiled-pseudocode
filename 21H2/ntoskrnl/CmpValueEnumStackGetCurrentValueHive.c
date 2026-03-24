/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x1404ED05C
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407292B0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140729F90 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
