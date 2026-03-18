/*
 * XREFs of CmpValueEnumStackAdvance @ 0x14065AED8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402260D0 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14065B030 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069F434 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpIsValueTombstone @ 0x1406C01F4 (CmpIsValueTombstone.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int16 v2; // cx
  unsigned int v3; // r9d
  _QWORD *EntryAtLayerHeight; // r14
  ULONG_PTR v5; // rcx
  __int64 CellFlat; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // eax
  __int16 v14; // ax
  char v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  v15 = 0;
  HvpGetCellContextReinitialize(&v16);
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    v2 = *(_WORD *)(a1 + 6);
    ++*(_DWORD *)(a1 + 8);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 12);
    *(_BYTE *)(a1 + 4) = 1;
    *(_WORD *)(a1 + 6) = v2;
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_DWORD *)a1 = -1;
  if ( v2 < 0 )
    return (unsigned int)-2147483622;
  while ( 1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v2);
    if ( v3 < *((_DWORD *)EntryAtLayerHeight + 6) )
      break;
LABEL_15:
    v14 = *(_WORD *)(a1 + 6) - 1;
    *(_DWORD *)(a1 + 8) = 0;
    v2 = v14;
    *(_WORD *)(a1 + 6) = v14;
    if ( v14 < 0 )
      return (unsigned int)-2147483622;
  }
  while ( 1 )
  {
    v5 = *EntryAtLayerHeight;
    if ( (*(_BYTE *)(*EntryAtLayerHeight + 140LL) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v5, *(unsigned int *)(EntryAtLayerHeight[1] + 4LL * v3));
    else
      CellFlat = HvpGetCellPaged(v5);
    if ( (unsigned __int8)CmpIsValueTombstone(*EntryAtLayerHeight, CellFlat) )
    {
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v8, &v16);
      else
        HvpReleaseCellPaged(v8, &v16);
      v3 = ++*(_DWORD *)(a1 + 8);
      goto LABEL_25;
    }
    v9 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), v7, &v15);
    v10 = *EntryAtLayerHeight;
    v11 = v9;
    if ( (*(_BYTE *)(*EntryAtLayerHeight + 140LL) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v16);
    else
      HvpReleaseCellPaged(v10, &v16);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = *(_DWORD *)(a1 + 8);
    if ( !v15 )
      break;
    v3 = v12 + 1;
    *(_DWORD *)(a1 + 8) = v12 + 1;
LABEL_25:
    if ( v3 >= *((_DWORD *)EntryAtLayerHeight + 6) )
      goto LABEL_15;
  }
  v11 = 0;
  *(_DWORD *)a1 = *(_DWORD *)(EntryAtLayerHeight[1] + 4LL * v12);
  return (unsigned int)v11;
}
