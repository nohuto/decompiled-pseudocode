/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDC9C
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ED0C8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpPopulateKeyNodeInformation @ 0x14065F3B0 (CmpPopulateKeyNodeInformation.c)
 *     CmpPopulateKeyFullInformation @ 0x14065FF60 (CmpPopulateKeyFullInformation.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0 (CmpGetEffectiveKeyNodeSemantics.c)
 *     HvpGetCellContextInitialize @ 0x140875E58 (HvpGetCellContextInitialize.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087A86C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPopulateKeyBasicInformation @ 0x1408827A4 (CmpPopulateKeyBasicInformation.c)
 *     CmpPopulateKeyCachedInformation @ 0x140882858 (CmpPopulateKeyCachedInformation.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(__int16 *a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r14
  __int16 *v6; // r11
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // r15
  __int16 v10; // r8
  __int64 *EntryAtLayerHeight; // rax
  __int64 v12; // rbx
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  _QWORD *v15; // rax
  __int16 v16; // r8
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned __int16 v27; // cx
  char v29; // [rsp+40h] [rbp-A8h]
  unsigned int v30; // [rsp+48h] [rbp-A0h]
  unsigned int v31; // [rsp+50h] [rbp-98h]
  __int64 v32; // [rsp+50h] [rbp-98h]
  unsigned int v33; // [rsp+58h] [rbp-90h]
  unsigned int v34; // [rsp+5Ch] [rbp-8Ch]
  unsigned int v35; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v36; // [rsp+6Ch] [rbp-7Ch] BYREF
  __int64 v37; // [rsp+70h] [rbp-78h] BYREF
  __int128 v38; // [rsp+78h] [rbp-70h] BYREF
  __int128 v39; // [rsp+88h] [rbp-60h]
  __int128 v40; // [rsp+98h] [rbp-50h]
  __int64 v41; // [rsp+A8h] [rbp-40h]

  v37 = 0LL;
  v35 = 0;
  v36 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v29 = 0;
  v5 = 0LL;
  v31 = -1;
  HvpGetCellContextInitialize(&v37);
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  v10 = *v6;
  if ( *v6 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(v6);
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
    v41 = v9;
  }
LABEL_6:
  v12 = *(_QWORD *)(v9 + 4);
  v13 = (unsigned __int16)*(_DWORD *)(v9 + 52);
  v30 = *(_DWORD *)(v9 + 56);
  v33 = *(_DWORD *)(v9 + 60);
  v34 = *(_DWORD *)(v9 + 64);
  if ( *(char *)(v9 + 13) >= 0 )
  {
    v29 = 1;
    v5 = v8;
    v31 = *(_DWORD *)(v9 + 48);
    v7 = *(unsigned __int16 *)(v9 + 74);
  }
  if ( (__int16)(v10 - 1) >= 0 )
  {
    v14 = *(_DWORD *)(v9 + 56);
    do
    {
      v15 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v6);
      if ( v15[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v15) == 1 )
          break;
        if ( v12 < *(_QWORD *)(v19 + 4) )
          v12 = *(_QWORD *)(v19 + 4);
        v21 = (unsigned __int16)*(_DWORD *)(v19 + 52);
        if ( v13 >= v21 )
          v21 = v13;
        v13 = v21;
        v22 = *(_DWORD *)(v19 + 56);
        if ( v14 >= v22 )
          v22 = v14;
        v14 = v22;
        if ( !v29 && *(char *)(v19 + 13) >= 0 )
        {
          v29 = 1;
          v5 = v20;
          v31 = *(_DWORD *)(v19 + 48);
          v7 = *(unsigned __int16 *)(v19 + 74);
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v20) )
          break;
      }
    }
    while ( (__int16)(v16 - 1) >= 0 );
    v30 = v14;
    v34 = v18;
    v33 = v17;
    v9 = v41;
  }
  if ( v29 && v7 )
  {
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v5 + 8))(v5, v31, &v37);
    v6 = a1;
  }
  else
  {
    v32 = 0LL;
    v7 = 0;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *(_QWORD *)&v38 = v12;
      SubKeyCountForKeyNodeStack = CmpPopulateKeyNodeInformation(&v38, v9, v32, v7, a3, a4, a5);
    }
    else
    {
      SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(v6, &v35);
      if ( SubKeyCountForKeyNodeStack >= 0 )
      {
        SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v36);
        if ( SubKeyCountForKeyNodeStack >= 0 )
        {
          if ( v35 )
          {
            v24 = v30;
          }
          else
          {
            v13 = 0;
            v24 = 0;
          }
          if ( v36 )
          {
            v25 = v33;
            v26 = v34;
          }
          else
          {
            v25 = 0;
            v26 = 0;
          }
          if ( a2 == 4 )
          {
            *(_QWORD *)&v38 = v12;
            HIDWORD(v38) = v35;
            *(_QWORD *)&v39 = __PAIR64__(v36, v13);
            *((_QWORD *)&v39 + 1) = __PAIR64__(v26, v25);
            v27 = 2 * *(_WORD *)(v9 + 72);
            if ( (*(_BYTE *)(v9 + 2) & 0x20) == 0 )
              v27 = *(_WORD *)(v9 + 72);
            LODWORD(v40) = v27;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyCachedInformation(&v38, a3, a4, a5);
          }
          else if ( a2 == 2 )
          {
            *(_QWORD *)&v38 = v12;
            *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(v13, v35);
            HIDWORD(v39) = v24;
            *(_QWORD *)&v40 = __PAIR64__(v25, v36);
            DWORD2(v40) = v26;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyFullInformation(&v38, v32, v7, a3, a4, a5);
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
    *(_QWORD *)&v38 = v12;
    SubKeyCountForKeyNodeStack = CmpPopulateKeyBasicInformation((unsigned int)&v38, v9, a3, a4, a5);
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64, __int64 *))(v5 + 16))(v5, &v37);
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
