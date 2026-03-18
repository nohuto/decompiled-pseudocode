/*
 * XREFs of CmpDuplicateIndex @ 0x14065E880
 * Callers:
 *     CmpLightWeightDuplicateParentLists @ 0x14065E5A4 (CmpLightWeightDuplicateParentLists.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvDuplicateCell @ 0x1406C8FF4 (HvDuplicateCell.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpDuplicateIndex(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3, unsigned int *a4)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  _DWORD *v7; // r14
  _WORD *CellFlat; // rax
  _WORD *v9; // r15
  int v10; // r12d
  unsigned int v11; // esi
  _DWORD *CellPaged; // rax
  int v14; // r13d
  _WORD *v15; // rax
  _WORD *v16; // rsi
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+A0h] [rbp+50h]
  unsigned int *v22; // [rsp+A8h] [rbp+58h]

  v22 = a4;
  v21 = a3;
  v19[1] = 0;
  v5 = 0;
  v19[0] = -1;
  v18[0] = -1;
  LODWORD(BugCheckParameter4) = -1;
  v6 = a2;
  v7 = 0LL;
  v18[1] = 0;
  LODWORD(v17) = 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, a2);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( *CellFlat != 26994 )
  {
    v10 = HvDuplicateCell(BugCheckParameter3, v6, (__int64)&BugCheckParameter4);
    if ( v10 >= 0 )
    {
      v11 = BugCheckParameter4;
      goto LABEL_6;
    }
LABEL_12:
    v11 = BugCheckParameter4;
    goto LABEL_8;
  }
  v10 = HvDuplicateCell(BugCheckParameter3, v6, (__int64)&BugCheckParameter4);
  if ( v10 < 0 )
    goto LABEL_12;
  v11 = BugCheckParameter4;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4);
  else
    CellPaged = (_DWORD *)HvpGetCellPaged(BugCheckParameter3);
  *CellPaged = 26994;
  v7 = CellPaged;
  v14 = 0;
  if ( v9[1] )
  {
    do
    {
      v10 = HvDuplicateCell(BugCheckParameter3, *(unsigned int *)&v9[2 * v14 + 2], (__int64)&v17);
      if ( v10 < 0 )
        goto LABEL_7;
      v7[v14 + 1] = v17;
      ++*((_WORD *)v7 + 1);
    }
    while ( ++v14 < (unsigned int)(unsigned __int16)v9[1] );
  }
LABEL_6:
  *v22 = v11;
  v11 = -1;
LABEL_7:
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v18);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v18);
  }
LABEL_8:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v19);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v19);
  if ( v11 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v15 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v11);
    else
      v15 = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
    v16 = v15;
    if ( *v15 == 26994 && v15[1] )
    {
      do
        HvFreeCell(BugCheckParameter3, *(unsigned int *)&v16[2 * v5++ + 2]);
      while ( v5 < (unsigned __int16)v16[1] );
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v18);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v18);
  }
  return (unsigned int)v10;
}
