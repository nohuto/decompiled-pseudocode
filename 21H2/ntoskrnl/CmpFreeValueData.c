/*
 * XREFs of CmpFreeValueData @ 0x14079CF44
 * Callers:
 *     CmpCopyValue @ 0x14065B108 (CmpCopyValue.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x1407169FC (CmpSetValueKeyExisting.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned int v4; // r14d
  bool v6; // zf
  __int64 CellPaged; // rax
  unsigned __int16 v8; // di
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v4 = BugCheckParameter3;
  if ( a3 >= 0x80000000 || (_DWORD)BugCheckParameter3 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 220) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_6:
    HvFreeCell(BugCheckParameter2, v4);
    return 1;
  }
  v15 = 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v14[0] = 0xFFFFFFFFLL;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v15);
  v8 = 0;
  v9 = CellPaged;
  if ( CellPaged )
  {
    v10 = *(unsigned int *)(CellPaged + 4);
    if ( (_DWORD)v10 == -1 )
    {
LABEL_21:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v15);
      else
        HvpReleaseCellPaged(BugCheckParameter2, &v15);
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v10, v14);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2);
    v12 = CellFlat;
    if ( CellFlat )
    {
      while ( v8 < *(_WORD *)(v9 + 2) )
      {
        v13 = *(unsigned int *)(v12 + 4LL * v8);
        if ( (_DWORD)v13 != -1 )
          HvFreeCell(BugCheckParameter2, v13);
        ++v8;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, v14);
      else
        HvpReleaseCellPaged(BugCheckParameter2, v14);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v9 + 4));
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v15);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v15);
  }
  return 0;
}
