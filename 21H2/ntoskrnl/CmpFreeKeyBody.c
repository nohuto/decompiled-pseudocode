/*
 * XREFs of CmpFreeKeyBody @ 0x1407166AC
 * Callers:
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

char __fastcall CmpFreeKeyBody(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // esi
  __int64 CellFlat; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2);
  v5 = CellFlat;
  if ( CellFlat )
  {
    if ( (*(_BYTE *)(CellFlat + 2) & 2) == 0 )
    {
      v6 = *(unsigned int *)(CellFlat + 44);
      if ( (_DWORD)v6 != -1 )
        HvFreeCell(BugCheckParameter2, v6);
      if ( *(_WORD *)(v5 + 74) )
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v5 + 48));
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v8);
    HvFreeCell(BugCheckParameter2, v2);
    LOBYTE(CellFlat) = 1;
  }
  return CellFlat;
}
