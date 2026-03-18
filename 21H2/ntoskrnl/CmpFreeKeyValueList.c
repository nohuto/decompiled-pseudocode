/*
 * XREFs of CmpFreeKeyValueList @ 0x14091F7C8
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpFreeKeyValueList(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  __int64 CellFlat; // rax
  __int64 v7; // rsi
  __int64 i; // r14
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  result = HvpGetCellContextReinitialize(&v9);
  if ( *a2 )
  {
    v5 = (unsigned int)a2[1];
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v5, &v9);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, v5, (unsigned int *)&v9);
    v7 = 0LL;
    for ( i = CellFlat; (unsigned int)v7 < *a2; v7 = (unsigned int)(v7 + 1) )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(i + 4 * v7));
    result = HvFreeCell(BugCheckParameter2, (unsigned int)a2[1]);
    if ( i )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(BugCheckParameter2, &v9);
      else
        return HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v9);
    }
  }
  return result;
}
