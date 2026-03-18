/*
 * XREFs of CmpValueEnumStackCleanup @ 0x14069F3D4
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402260D0 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryCleanup @ 0x140226470 (CmpValueEnumStackEntryCleanup.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069F434 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpValueEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 12); ++i )
  {
    EntryAtLayerHeight = (__int64 *)CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    CmpValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v4 )
    CmSiFreeMemory(v4);
}
