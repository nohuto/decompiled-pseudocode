/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x1406E92D0
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140717DD0 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140877214 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x1406E933C (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406E93B8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x1406E93D8 (CmpCleanupKeyNodeStack.c)
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
