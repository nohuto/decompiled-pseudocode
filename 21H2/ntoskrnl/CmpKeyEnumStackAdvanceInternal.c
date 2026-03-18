/*
 * XREFs of CmpKeyEnumStackAdvanceInternal @ 0x14065B994
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x14065B900 (CmpKeyEnumStackAdvance.c)
 * Callees:
 *     CmpKeyEnumStackEntryAdvance @ 0x14065BB1C (CmpKeyEnumStackEntryAdvance.c)
 *     CmpCompareKeysByName @ 0x14065C51C (CmpCompareKeysByName.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069F130 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1)
{
  unsigned int v1; // ebx
  __int16 v3; // si
  __int64 v4; // r14
  __int16 v5; // bp
  __int64 v6; // r15
  __int64 v7; // rcx
  __int16 i; // bp
  __int64 EntryAtLayerHeight; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17; // rcx
  __int64 v18; // rsi
  ULONG_PTR v19; // rdx
  __int64 CellFlat; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    for ( i = 0; i <= *(__int16 *)a1; ++i )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8);
      if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
      {
        v11 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
        CmpKeyEnumStackEntryAdvance(v11);
        if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
        {
          v12 = *(_QWORD *)EntryAtLayerHeight;
          v13 = EntryAtLayerHeight + 24;
          if ( (*(_BYTE *)(*(_QWORD *)EntryAtLayerHeight + 140LL) & 1) != 0 )
            HvpReleaseCellFlat(v12, v13);
          else
            HvpReleaseCellPaged(v12, v13);
        }
        *(_OWORD *)EntryAtLayerHeight = 0LL;
        *(_OWORD *)(EntryAtLayerHeight + 16) = 0LL;
        *(_DWORD *)(EntryAtLayerHeight + 8) = -1;
        HvpGetCellContextReinitialize(EntryAtLayerHeight + 24);
      }
    }
  }
  v3 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 4) = 1;
  v4 = 0LL;
  v5 = -1;
  if ( v3 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v6 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    v7 = *(_QWORD *)(v6 + 120);
    if ( v7 && (!v4 || (int)CmpCompareKeysByName(v7, v4) < 0) )
    {
      v4 = *(_QWORD *)(v6 + 120);
      v5 = v3;
    }
    --v3;
  }
  while ( v3 >= 0 );
  if ( v4 )
  {
    for ( ; v5 >= 0; --v5 )
    {
      v14 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
      v15 = *(_QWORD *)(v14 + 120);
      if ( v15 && (v15 == v4 || !(unsigned int)CmpCompareKeysByName(v15, v4)) )
      {
        v16 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8);
        v17 = *(_QWORD *)v14;
        v18 = v16;
        v19 = *(unsigned int *)(v14 + 112);
        *(_QWORD *)v16 = *(_QWORD *)v14;
        *(_DWORD *)(v16 + 8) = v19;
        if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v17, v19);
        else
          CellFlat = HvpGetCellPaged(v17);
        *(_QWORD *)(v18 + 16) = CellFlat;
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v1;
}
