/*
 * XREFs of CmpAddSubKeyEx @ 0x140718244
 * Callers:
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14065B3DC (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpAddSubKey @ 0x140881496 (CmpAddSubKey.c)
 *     CmpCopySyncTree2 @ 0x14091EEC4 (CmpCopySyncTree2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpAddSubKeyToList @ 0x1407185B4 (CmpAddSubKeyToList.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r12d
  unsigned int v8; // r8d
  ULONG_PTR v9; // rdx
  __int64 CellFlat; // rax
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // eax
  unsigned int v15; // ecx
  __int16 v16; // r13
  int v17; // edx
  int Cell; // esi
  _DWORD *v19; // rax
  _WORD *v20; // rdi
  unsigned int *v21; // rsi
  _WORD *CellPaged; // rax
  __int16 v23; // ax
  unsigned int v24; // edx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  int *v27; // rsi
  int v29; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+34h] [rbp-2Ch]
  unsigned int v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v33; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-10h] BYREF
  int v35; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+50h]

  v36 = a3;
  v30 = -1;
  v35 = -1;
  v6 = -1;
  v29 = -1;
  v34[0] = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)v34 + 4);
  v32 = v8;
  v33 = 0LL;
  HvpGetBinContextInitialize((char *)&v32 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v9, v34);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v11 = CellFlat;
  v12 = a3 >> 31;
  v31 = a3 >> 31;
  v13 = v12;
  if ( *(_DWORD *)(CellFlat + 4 * v12 + 20) )
  {
    v21 = (unsigned int *)(CellFlat + 4 * (v12 + 7));
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, *v21, &v32);
    else
      CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
    v20 = CellPaged;
    v23 = *CellPaged;
    if ( v23 == 26220 && v20[1] >= 0x1FBu )
    {
      Cell = HvpMarkCellDirty(BugCheckParameter3, *v21);
      if ( Cell < 0 )
        goto LABEL_21;
      v24 = 0;
      if ( v20[1] )
      {
        do
        {
          v25 = v24++;
          *(_DWORD *)&v20[2 * v25 + 2] = *(_DWORD *)&v20[4 * v25 + 2];
        }
        while ( v24 < (unsigned __int16)v20[1] );
        v6 = v30;
      }
      *v20 = 26988;
    }
    else if ( ((v23 - 26732) & 0xFEFF) != 0 )
    {
LABEL_44:
      Cell = CmpAddSubKeyToList(BugCheckParameter3);
      if ( Cell >= 0 )
        goto LABEL_18;
      goto LABEL_21;
    }
    if ( v20[1] >= 0x3F5u )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v32);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v32);
      v33 = 0LL;
      Cell = HvAllocateCell(BugCheckParameter3, 12, v31, (unsigned int)&v29, (__int64)&v33, (__int64)&v32);
      if ( Cell < 0 )
      {
        v20 = v33;
        goto LABEL_21;
      }
      v26 = v33;
      v27 = (int *)(v11 + 4 * (v13 + 7));
      *v33 = 92530;
      v26[1] = *v27;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v32);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v32);
      v20 = 0LL;
      *v27 = v29;
    }
    goto LABEL_44;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 5u )
  {
    v17 = 12;
    v16 = 26220;
  }
  else
  {
    v14 = 1012;
    v15 = 1;
    v16 = 26732;
    if ( a4 )
      v15 = a4;
    if ( v15 < 0x3F4 )
      v14 = v15;
    v17 = 8 * v14 + 4;
  }
  Cell = HvAllocateCell(BugCheckParameter3, v17, v12, (unsigned int)&v35, (__int64)&v33, (__int64)&v32);
  if ( Cell < 0 )
  {
    v20 = v33;
    v6 = v35;
  }
  else
  {
    v19 = v33;
    *(_WORD *)v33 = v16;
    *((_WORD *)v19 + 1) = 0;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v32);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v32);
    v20 = 0LL;
    Cell = CmpAddSubKeyToList(BugCheckParameter3);
    if ( Cell >= 0 )
    {
      v6 = -1;
      *(_DWORD *)(v11 + 4 * v13 + 28) = v35;
LABEL_18:
      ++*(_DWORD *)(v11 + 4 * v13 + 20);
      Cell = 0;
      goto LABEL_21;
    }
    v6 = v35;
  }
LABEL_21:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v34);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v34);
  }
  if ( v20 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v32);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v32);
  }
  if ( v6 != -1 )
    HvFreeCell(BugCheckParameter3, v6);
  return (unsigned int)Cell;
}
