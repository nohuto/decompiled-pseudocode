/*
 * XREFs of CmpSortedValueEnumStackCleanup @ 0x14087B66C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ECE88 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x14087B894 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpSortedValueEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  _QWORD *EntryAtLayerHeight; // rbx
  struct _PRIVILEGE_SET *v4; // rcx
  struct _PRIVILEGE_SET *v5; // rcx
  unsigned int v6; // ebp
  struct _PRIVILEGE_SET *v7; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 8); ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpSortedValueEnumStackGetEntryAtLayerHeight(a1, i);
    v4 = (struct _PRIVILEGE_SET *)EntryAtLayerHeight[1];
    if ( v4 )
      CmSiFreeMemory(v4);
    v5 = (struct _PRIVILEGE_SET *)EntryAtLayerHeight[2];
    if ( v5 )
    {
      v6 = 0;
      if ( *((_DWORD *)EntryAtLayerHeight + 6) )
      {
        do
          (*(void (__fastcall **)(_QWORD, __int64))(*EntryAtLayerHeight + 16LL))(
            *EntryAtLayerHeight,
            EntryAtLayerHeight[2] + 8LL * v6++);
        while ( v6 < *((_DWORD *)EntryAtLayerHeight + 6) );
        v5 = (struct _PRIVILEGE_SET *)EntryAtLayerHeight[2];
      }
      CmSiFreeMemory(v5);
    }
  }
  v7 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v7 )
    CmSiFreeMemory(v7);
}
