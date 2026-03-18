/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x1406BDC48
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140725D90 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087CD90 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1406BDCB4 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406BDD30 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x1406BDD50 (CmpCleanupKeyNodeStack.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  CmpCleanupKeyNodeStack(a1 + 8);
  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1, i);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v4 )
    CmSiFreeMemory(v4);
}
