/*
 * XREFs of CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x14065C6FC
 * Callers:
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x14065C6C0 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorBeginForKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 i; // rbp
  __int64 EntryAtLayerHeight; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rcx
  __int64 CellFlat; // rax
  __int64 result; // rax

  v2 = *a2;
  for ( i = a1 + 16; v2 >= 0; --v2 )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(i);
    v7 = CmpKeyNodeStackGetEntryAtLayerHeight(a2);
    v8 = *(unsigned int *)(v7 + 8);
    if ( (_DWORD)v8 != -1 )
    {
      v9 = *(_QWORD *)v7;
      *(_QWORD *)EntryAtLayerHeight = *(_QWORD *)v7;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v8;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v9, v8);
      else
        CellFlat = HvpGetCellPaged(v9);
      *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
    }
  }
  result = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(result + 16) = i;
  *(_QWORD *)(result + 8) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
