/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x1404E7EDC
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140717860 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x1407184B0 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
