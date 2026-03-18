/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x14069F150
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x14065C63C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpKeyEnumStackCleanup @ 0x14069F024 (CmpKeyEnumStackCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140920CA0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140920F1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140921F64 (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140922400 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140922984 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140922B20 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1)
{
  __int16 i; // bx
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
    if ( EntryAtLayerHeight[2] )
    {
      v5 = *EntryAtLayerHeight;
      v6 = EntryAtLayerHeight + 3;
      if ( (*(_BYTE *)(*EntryAtLayerHeight + 140LL) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    CmSiFreeMemory(v4);
}
