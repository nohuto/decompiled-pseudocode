/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x14069F024
 * Callers:
 *     CmpSubtreeEnumeratorCleanup @ 0x14065C63C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069EE0C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x14069F090 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069F130 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x14069F150 (CmpCleanupKeyNodeStack.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  CmpCleanupKeyNodeStack(a1 + 8);
  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 344);
  if ( v4 )
    CmSiFreeMemory(v4);
}
