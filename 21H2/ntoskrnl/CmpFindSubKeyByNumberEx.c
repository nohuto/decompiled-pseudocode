/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1407C3070
 * Callers:
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140916E20 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     CmRmIsKCBVisible @ 0x1406A7690 (CmRmIsKCBVisible.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpIsKeyDeleted @ 0x14071A6D4 (CmpIsKeyDeleted.c)
 *     CmpReferenceKeyControlBlock @ 0x14071B250 (CmpReferenceKeyControlBlock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1407C0C50 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoFindSubKeyByNumber @ 0x1407C82B0 (CmpDoFindSubKeyByNumber.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  ULONG_PTR v9; // r13
  unsigned int v10; // r14d
  _DWORD *CellFlat; // rax
  _DWORD *v15; // rdi
  ULONG_PTR *v16; // r15
  unsigned int v17; // eax
  ULONG_PTR v18; // rdx
  ULONG_PTR v19; // rcx
  __int64 CellPaged; // rax
  __int64 result; // rax
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  int v25; // edx
  unsigned int v26; // ecx
  char v27; // al
  __int64 v28; // rax
  unsigned int SubKeyByNumber; // eax
  _DWORD *v30; // rdx
  __int64 v31; // r8
  ULONG_PTR v32; // rcx
  __int64 NextElement; // rax
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // r9d
  int SubkeyInHashByChildCell; // eax
  __int64 v38; // rax
  unsigned int i; // [rsp+30h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-38h]
  ULONG_PTR v43; // [rsp+50h] [rbp-30h]
  __int64 j; // [rsp+58h] [rbp-28h]
  _DWORD v45[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v46[2]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v48; // [rsp+B0h] [rbp+30h] BYREF

  v40 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v10 = 0;
  BugCheckParameter2 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, a2, &v40);
  else
    CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3);
  v15 = CellFlat;
  if ( !CellFlat )
    return 3221225626LL;
  v16 = a9;
  *a4 = -1;
  if ( v16 )
    *v16 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 208) == a5 + 208 )
  {
    v17 = CellFlat[5];
    v48 = 0xFFFFFFFFLL;
    *a4 = -1;
    if ( a3 >= v17 )
    {
      if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || a3 - v17 >= v15[6] )
        goto LABEL_13;
      v18 = (unsigned int)v15[8];
      v19 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
        goto LABEL_9;
    }
    else
    {
      v18 = (unsigned int)v15[7];
      v19 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
      {
LABEL_9:
        CellPaged = HvpGetCellPaged(v19);
        goto LABEL_10;
      }
    }
    CellPaged = HvpGetCellFlat(v19, v18, &v48);
LABEL_10:
    if ( CellPaged )
    {
      *a4 = CmpDoFindSubKeyByNumber(BugCheckParameter3);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v48);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v48);
    }
    else
    {
      v10 = -1073741670;
    }
    goto LABEL_13;
  }
  v22 = CellFlat[5];
  LODWORD(v47[0]) = v22;
  LODWORD(v48) = 0;
  v45[0] = -1;
  v45[1] = 0;
  v46[0] = -1;
  v46[1] = 0;
  if ( v22 )
    LODWORD(BugCheckParameter4) = CellFlat[7];
  else
    LODWORD(BugCheckParameter4) = -1;
  v23 = CellFlat[6];
  if ( v23 )
    LODWORD(v43) = v15[8];
  else
    LODWORD(v43) = -1;
  v24 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  LODWORD(j) = v22 + v23;
  if ( v24 )
    HvpReleaseCellPaged(BugCheckParameter3, &v40);
  else
    HvpReleaseCellFlat(BugCheckParameter3, &v40);
  v25 = j;
  v26 = 0;
  v15 = 0LL;
  for ( i = 0; v26 < (unsigned int)j; i = v26 )
  {
    v27 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
    BugCheckParameter2 = 0LL;
    if ( v26 >= LODWORD(v47[0]) )
    {
      if ( v27 )
        v38 = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v43, v46);
      else
        v38 = HvpGetCellPaged(BugCheckParameter3);
      if ( !v38 )
        return 3221225626LL;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
      v30 = v46;
    }
    else
    {
      if ( v27 )
        v28 = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, v45);
      else
        v28 = HvpGetCellPaged(BugCheckParameter3);
      if ( !v28 )
        return 3221225626LL;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
      v30 = v45;
    }
    v24 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    *a4 = SubKeyByNumber;
    if ( v24 )
      HvpReleaseCellPaged(BugCheckParameter3, v30);
    else
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    if ( *a4 == -1 )
      return 3221225626LL;
    result = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, *a4, &BugCheckParameter2);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    v9 = BugCheckParameter2;
    if ( !BugCheckParameter2 || CmRmIsKCBVisible(BugCheckParameter2, a7, v31) && !CmpIsKeyDeleted(v9, a7) )
      LODWORD(v48) = v48 + 1;
    if ( (_DWORD)v48 == a3 + 1 )
      goto LABEL_13;
    if ( v9 )
      CmpDelayDerefKeyControlBlock(v9, a8);
    v25 = j;
    v26 = i + 1;
  }
  if ( v26 == v25 )
  {
    v47[0] = 0LL;
    v32 = a5 + 208;
    *a4 = -1;
    v43 = v32;
    NextElement = CmListGetNextElement(v32, v47, 32LL);
    for ( j = NextElement; NextElement; j = NextElement )
    {
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
      {
        v35 = *(_DWORD *)(j + 68);
        if ( v35 == 1 )
        {
          v9 = *(_QWORD *)(j + 88);
        }
        else
        {
          if ( v35 != 10 )
            goto LABEL_53;
          v9 = *(_QWORD *)(j + 96);
        }
        BugCheckParameter2 = v9;
        if ( CmRmIsKCBVisible(v9, a7, v34) && !CmpIsKeyDeleted(v9, a7) )
        {
          if ( (_DWORD)v48 == a3 )
          {
            *a4 = *(_DWORD *)(v9 + 40);
            CmpReferenceKeyControlBlock(v9);
            break;
          }
          LODWORD(v48) = v48 + 1;
        }
      }
LABEL_53:
      v9 = 0LL;
      BugCheckParameter2 = 0LL;
      NextElement = CmListGetNextElement(v43, v47, 32LL);
    }
  }
LABEL_13:
  if ( !v16 || (v36 = *a4, *a4 == -1) )
  {
    if ( v9 )
      CmpDelayDerefKeyControlBlock(v9, a8);
  }
  else
  {
    if ( !v9 )
    {
      if ( v15 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v40);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v40);
        v36 = *a4;
        v15 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, v36, &BugCheckParameter2);
      v9 = BugCheckParameter2;
      v10 = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *v16 = v9;
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v40);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v40);
  }
  return v10;
}
