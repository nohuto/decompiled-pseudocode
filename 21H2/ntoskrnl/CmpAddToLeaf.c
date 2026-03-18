/*
 * XREFs of CmpAddToLeaf @ 0x1407187D4
 * Callers:
 *     CmpAddSubKeyToList @ 0x1407185B4 (CmpAddSubKeyToList.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140718B18 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     CmpHashUnicodeComponent @ 0x140718B68 (CmpHashUnicodeComponent.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvReallocateCell @ 0x14079BA7C (HvReallocateCell.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     CmpCompareInIndex @ 0x1407C4180 (CmpCompareInIndex.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1407CD270 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        const UNICODE_STRING *a4,
        unsigned int *a5)
{
  unsigned int v5; // r12d
  unsigned int v8; // edx
  unsigned int v9; // r15d
  int SubKeyInLeafWithStatus; // esi
  __int64 CellFlat; // rax
  _WORD *v12; // rdi
  int v13; // eax
  int v14; // ecx
  _WORD *v15; // r14
  int v16; // ecx
  unsigned int v17; // r9d
  int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  int v21; // eax
  int FastLeafHintForUnicodeString; // eax
  int v24; // [rsp+30h] [rbp-30h]
  unsigned int v25; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+58h] [rbp-8h] BYREF

  v5 = BugCheckParameter4;
  v28 = 0xFFFFFFFFLL;
  LODWORD(v27) = 0;
  v26 = 0;
  HvpGetBinContextInitialize((char *)&v28 + 4);
  v9 = v8;
  SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v5);
  if ( SubKeyInLeafWithStatus < 0 )
    return (unsigned int)SubKeyInLeafWithStatus;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, &v28);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v12 = (_WORD *)CellFlat;
  v13 = *(unsigned __int16 *)(CellFlat + 2);
  if ( (_WORD)v13 == 0xFFFF )
  {
    SubKeyInLeafWithStatus = -1073741670;
    goto LABEL_21;
  }
  v14 = -4 - *((_DWORD *)v12 - 1);
  if ( *v12 == 26988 )
  {
    v15 = 0LL;
    v16 = v14 - 4 * v13;
    v17 = 4;
  }
  else
  {
    v17 = 8;
    v16 = v14 - 8 * v13;
    v15 = v12;
  }
  v25 = v5;
  v9 = v5;
  if ( v16 - 4 < v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v28);
    v29 = 0LL;
    v18 = HvReallocateCell(BugCheckParameter3, v5, (__int64)&v25, (__int64)&v29, (__int64)&v28);
    v12 = (_WORD *)v29;
    SubKeyInLeafWithStatus = v18;
    v9 = v25;
    if ( v18 < 0 )
      goto LABEL_21;
    if ( v15 )
      v15 = (_WORD *)v29;
  }
  SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(BugCheckParameter3, v12, a4, 0LL, &v27, &v26, v24);
  if ( SubKeyInLeafWithStatus == -1073741772 )
  {
    v19 = v26;
    if ( v26 == (unsigned __int16)v12[1] )
      goto LABEL_33;
    v20 = CmpCompareInIndex(BugCheckParameter3, a4, (__int64)v12, (__int64)&v27);
    if ( v20 == 2 )
    {
      SubKeyInLeafWithStatus = -1073741670;
      goto LABEL_21;
    }
    if ( v20 > 0 )
      v19 = (unsigned int)(v19 + 1);
    v21 = (unsigned __int16)v12[1];
    if ( (_DWORD)v19 == v21 )
    {
LABEL_33:
      if ( v15 )
        goto LABEL_34;
    }
    else
    {
      if ( v15 )
      {
        memmove(
          &v15[4 * (unsigned int)(v19 + 1) + 2],
          &v15[4 * v19 + 2],
          8LL * ((unsigned __int16)v15[1] - (unsigned int)v19));
LABEL_34:
        *(_DWORD *)&v15[4 * v19 + 2] = a3;
        if ( *v15 == 26732 )
          FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
        else
          FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
        *(_DWORD *)&v15[4 * v19 + 4] = FastLeafHintForUnicodeString;
        goto LABEL_31;
      }
      memmove(&v12[2 * (unsigned int)(v19 + 1) + 2], &v12[2 * (unsigned int)v19 + 2], 4LL * (unsigned int)(v21 - v19));
    }
    *(_DWORD *)&v12[2 * v19 + 2] = a3;
LABEL_31:
    ++v12[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v28);
    v12 = 0LL;
    if ( v9 != v5 )
      HvFreeCell(BugCheckParameter3, v5);
    *a5 = v9;
    v9 = -1;
    SubKeyInLeafWithStatus = 0;
  }
LABEL_21:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v28);
  }
  if ( v9 != -1 && v9 != v5 )
    HvFreeCell(BugCheckParameter3, v9);
  return (unsigned int)SubKeyInLeafWithStatus;
}
