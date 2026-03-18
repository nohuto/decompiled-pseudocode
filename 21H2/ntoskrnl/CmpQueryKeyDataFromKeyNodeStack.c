/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x140225E68
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetValueCountForKeyNodeStack @ 0x1402260D0 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069EE0C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpPopulateKeyCachedInformation @ 0x14069F500 (CmpPopulateKeyCachedInformation.c)
 *     CmpPopulateKeyNodeInformation @ 0x14069F540 (CmpPopulateKeyNodeInformation.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpPopulateKeyFullInformation @ 0x1406C27B4 (CmpPopulateKeyFullInformation.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpPopulateKeyBasicInformation @ 0x140924594 (CmpPopulateKeyBasicInformation.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(__int16 *a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  ULONG_PTR v6; // r14
  unsigned int v7; // r12d
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // r13
  __int16 v10; // r9
  ULONG_PTR *EntryAtLayerHeight; // rax
  __int64 v12; // rbx
  unsigned int v13; // esi
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned __int16 v19; // cx
  _QWORD *v21; // rax
  __int16 v22; // r9
  unsigned int v23; // r10d
  unsigned int v24; // r11d
  __int64 v25; // rdx
  ULONG_PTR v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // r8d
  __int64 CellFlat; // rax
  char v31; // [rsp+40h] [rbp-A8h]
  unsigned int BugCheckParameter4; // [rsp+48h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4a; // [rsp+48h] [rbp-A0h]
  unsigned int v34; // [rsp+50h] [rbp-98h]
  unsigned int v35; // [rsp+54h] [rbp-94h]
  unsigned int v36; // [rsp+58h] [rbp-90h]
  unsigned int v37; // [rsp+5Ch] [rbp-8Ch]
  unsigned int v38; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v39; // [rsp+6Ch] [rbp-7Ch] BYREF
  __int64 v40; // [rsp+70h] [rbp-78h] BYREF
  __int128 v41; // [rsp+78h] [rbp-70h] BYREF
  __int128 v42; // [rsp+88h] [rbp-60h]
  __int128 v43; // [rsp+98h] [rbp-50h]
  ULONG_PTR v44; // [rsp+A8h] [rbp-40h]

  v40 = 0LL;
  v38 = 0;
  v39 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v31 = 0;
  v6 = 0LL;
  BugCheckParameter4 = -1;
  HvpGetCellContextReinitialize(&v40);
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v44 = 0LL;
  v10 = *a1;
  if ( *a1 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
      if ( EntryAtLayerHeight[2] )
        break;
      if ( --v10 < 0 )
      {
        v8 = 0LL;
        goto LABEL_6;
      }
    }
    v8 = *EntryAtLayerHeight;
    v9 = EntryAtLayerHeight[2];
    v44 = v9;
  }
LABEL_6:
  v12 = *(_QWORD *)(v9 + 4);
  v35 = (unsigned __int16)*(_DWORD *)(v9 + 52);
  v34 = *(_DWORD *)(v9 + 56);
  v36 = *(_DWORD *)(v9 + 60);
  v13 = *(_DWORD *)(v9 + 64);
  v37 = v13;
  if ( *(char *)(v9 + 13) >= 0 )
  {
    v31 = 1;
    v6 = v8;
    BugCheckParameter4 = *(_DWORD *)(v9 + 48);
    v7 = *(unsigned __int16 *)(v9 + 74);
  }
  if ( (__int16)(v10 - 1) >= 0 )
  {
    while ( 1 )
    {
      v21 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1);
      if ( v21[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v21) == 1 )
          goto LABEL_42;
        if ( v12 < *(_QWORD *)(v25 + 4) )
          v12 = *(_QWORD *)(v25 + 4);
        v27 = *(_DWORD *)(v25 + 56);
        if ( v34 >= v27 )
          v27 = v34;
        v34 = v27;
        v28 = *(_DWORD *)(v25 + 64);
        if ( v13 >= v28 )
          v28 = v13;
        v13 = v28;
        if ( !v31 && *(char *)(v25 + 13) >= 0 )
        {
          v31 = 1;
          v6 = v26;
          BugCheckParameter4 = *(_DWORD *)(v25 + 48);
          v7 = *(unsigned __int16 *)(v25 + 74);
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v26) )
        {
LABEL_42:
          v37 = v13;
          v36 = v24;
          v35 = v23;
          v9 = v44;
          break;
        }
        v34 = v29;
      }
      if ( (__int16)(v22 - 1) < 0 )
        goto LABEL_42;
    }
  }
  if ( v31 && v7 )
  {
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v6, BugCheckParameter4);
    else
      CellFlat = HvpGetCellPaged(v6);
    BugCheckParameter4a = CellFlat;
  }
  else
  {
    BugCheckParameter4a = 0LL;
    v7 = 0;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *(_QWORD *)&v41 = v12;
      SubKeyCountForKeyNodeStack = CmpPopulateKeyNodeInformation(&v41, v9, BugCheckParameter4a, v7, a3, a4, a5);
    }
    else
    {
      SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v38);
      if ( SubKeyCountForKeyNodeStack >= 0 )
      {
        SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v39);
        if ( SubKeyCountForKeyNodeStack >= 0 )
        {
          if ( v38 )
          {
            v15 = v35;
            v16 = v34;
          }
          else
          {
            v15 = 0;
            v16 = 0;
          }
          if ( v39 )
          {
            v17 = v36;
            v18 = v37;
          }
          else
          {
            v17 = 0;
            v18 = 0;
          }
          if ( a2 == 4 )
          {
            *(_QWORD *)&v41 = v12;
            HIDWORD(v41) = v38;
            *(_QWORD *)&v42 = __PAIR64__(v39, v15);
            *((_QWORD *)&v42 + 1) = __PAIR64__(v18, v17);
            v19 = 2 * *(_WORD *)(v9 + 72);
            if ( (*(_BYTE *)(v9 + 2) & 0x20) == 0 )
              v19 = *(_WORD *)(v9 + 72);
            LODWORD(v43) = v19;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyCachedInformation(&v41, a3, a4, a5);
          }
          else if ( a2 == 2 )
          {
            *(_QWORD *)&v41 = v12;
            *(_QWORD *)((char *)&v42 + 4) = __PAIR64__(v15, v38);
            HIDWORD(v42) = v16;
            *(_QWORD *)&v43 = __PAIR64__(v17, v39);
            DWORD2(v43) = v18;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyFullInformation(&v41, BugCheckParameter4a, v7, a3, a4, a5);
          }
          else
          {
            SubKeyCountForKeyNodeStack = -1073741811;
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v41 = v12;
    SubKeyCountForKeyNodeStack = CmpPopulateKeyBasicInformation((unsigned int)&v41, v9, a3, a4, a5);
  }
  if ( BugCheckParameter4a )
  {
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v6, &v40);
    else
      HvpReleaseCellPaged(v6, &v40);
  }
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
