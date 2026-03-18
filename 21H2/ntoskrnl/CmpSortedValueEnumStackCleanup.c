/*
 * XREFs of CmpSortedValueEnumStackCleanup @ 0x14069F374
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402260D0 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140921D5C (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpSortedValueEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 EntryAtLayerHeight; // rbx
  struct _PRIVILEGE_SET *v5; // rcx
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 8); ++i )
  {
    EntryAtLayerHeight = CmpSortedValueEnumStackGetEntryAtLayerHeight(a1, i);
    v5 = *(struct _PRIVILEGE_SET **)(EntryAtLayerHeight + 8);
    if ( v5 )
      CmSiFreeMemory(v5);
    v6 = *(struct _PRIVILEGE_SET **)(EntryAtLayerHeight + 16);
    if ( v6 )
    {
      v7 = 0;
      if ( *(_DWORD *)(EntryAtLayerHeight + 24) )
      {
        do
        {
          v8 = *(_QWORD *)(EntryAtLayerHeight + 16) + 8LL * v7;
          v9 = *(_QWORD *)EntryAtLayerHeight;
          if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
            HvpReleaseCellFlat(v9, v8);
          else
            HvpReleaseCellPaged(v9, v8);
          ++v7;
        }
        while ( v7 < *(_DWORD *)(EntryAtLayerHeight + 24) );
        v6 = *(struct _PRIVILEGE_SET **)(EntryAtLayerHeight + 16);
      }
      CmSiFreeMemory(v6);
    }
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v3 )
    CmSiFreeMemory(v3);
}
