/*
 * XREFs of EtwpUpdateGuidEnableInfo @ 0x1406BA238
 * Callers:
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpUpdateFilterData @ 0x1406BA5B0 (EtwpUpdateFilterData.c)
 *     EtwpReferenceGuidEntry @ 0x1406DB204 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpUpdateGuidEnableInfo(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v5; // eax
  unsigned int v9; // r10d
  __int64 v10; // r8
  unsigned int v11; // r10d
  unsigned __int8 v12; // si
  char *v13; // r9
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r11
  int v17; // r15d
  unsigned __int8 v19; // al
  unsigned __int8 v20; // si
  char *v21; // r9
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r11
  int v25; // r15d
  unsigned __int8 v26; // al
  __int128 v27; // [rsp+30h] [rbp-20h]
  __int128 v28; // [rsp+30h] [rbp-20h]
  __int128 v29; // [rsp+40h] [rbp-10h]
  __int128 v30; // [rsp+40h] [rbp-10h]

  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 == 1 )
  {
    *(_BYTE *)(BugCheckParameter2 + 91) ^= (*(_BYTE *)(BugCheckParameter2 + 91) ^ *(_BYTE *)(a2 + 112)) & 1;
    *(_BYTE *)(BugCheckParameter2 + 91) = *(_BYTE *)(BugCheckParameter2 + 91) & 1 | (2 * *(_BYTE *)(a2 + 107));
    *(_WORD *)(BugCheckParameter2 + 88) = *(_WORD *)(a2 + 104);
    *(_BYTE *)(BugCheckParameter2 + 90) = *(_BYTE *)(a2 + 106);
    *(_QWORD *)(BugCheckParameter2 + 80) = a3;
  }
  else if ( !v5 && *(_WORD *)(BugCheckParameter2 + 88) == *(_WORD *)(a2 + 104) )
  {
    *(_BYTE *)(BugCheckParameter2 + 91) &= ~1u;
  }
  v9 = 0;
  v10 = 8LL;
  do
  {
    if ( *(_DWORD *)(32 * (v9 + 4LL) + BugCheckParameter2)
      && *(_WORD *)(32LL * v9 + BugCheckParameter2 + 134) == *(_WORD *)(a2 + 78) )
    {
      *(_QWORD *)&v28 = 0LL;
      v20 = 0;
      v21 = (char *)(BugCheckParameter2 + 132);
      v22 = 32 * (v9 + 4LL);
      v23 = 0LL;
      v24 = -1LL;
      HIDWORD(v28) = 0;
      v25 = 0;
      *((_QWORD *)&v30 + 1) = -1LL;
      *(_OWORD *)(v22 + BugCheckParameter2) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(v22 + BugCheckParameter2 + 16) = *(_OWORD *)(a2 + 88);
      do
      {
        if ( *((_DWORD *)v21 - 1) )
        {
          v26 = v20;
          LODWORD(v28) = 1;
          if ( v20 <= (unsigned __int8)*v21 )
            v26 = *v21;
          v24 &= *(_QWORD *)(v21 + 20);
          v23 |= *(_QWORD *)(v21 + 12);
          v20 = v26;
          v25 |= *((_DWORD *)v21 + 1);
          *((_QWORD *)&v30 + 1) = v24;
        }
        v21 += 32;
        --v10;
      }
      while ( v10 );
      BYTE4(v28) = v20;
      DWORD2(v28) = v25;
      *a5 = 1 << v9;
      *(_QWORD *)&v30 = v23;
      *(_OWORD *)(BugCheckParameter2 + 96) = v28;
      *(_OWORD *)(BugCheckParameter2 + 112) = v30;
      LOBYTE(v21) = *(_DWORD *)(a2 + 72) == 0;
      EtwpUpdateFilterData(BugCheckParameter2, v9, a2, (_DWORD)v21, a4);
      if ( !*(_DWORD *)(a2 + 72) )
        EtwpUnreferenceGuidEntry((PVOID)BugCheckParameter2);
      return 0LL;
    }
    ++v9;
  }
  while ( v9 < 8 );
  if ( *(_DWORD *)(a2 + 72) )
  {
    v11 = 0;
    while ( *(_DWORD *)(32 * (v11 + 4LL) + BugCheckParameter2) )
    {
      if ( ++v11 >= 8 )
        return 3221225626LL;
    }
    *(_QWORD *)&v27 = 0LL;
    v12 = 0;
    v13 = (char *)(BugCheckParameter2 + 132);
    v14 = 32 * (v11 + 4LL);
    v15 = 0LL;
    v16 = -1LL;
    HIDWORD(v27) = 0;
    v17 = 0;
    *((_QWORD *)&v29 + 1) = -1LL;
    *(_OWORD *)(v14 + BugCheckParameter2) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(v14 + BugCheckParameter2 + 16) = *(_OWORD *)(a2 + 88);
    do
    {
      if ( *((_DWORD *)v13 - 1) )
      {
        v19 = v12;
        LODWORD(v27) = 1;
        if ( v12 <= (unsigned __int8)*v13 )
          v19 = *v13;
        v16 &= *(_QWORD *)(v13 + 20);
        v15 |= *(_QWORD *)(v13 + 12);
        v12 = v19;
        v17 |= *((_DWORD *)v13 + 1);
        *((_QWORD *)&v29 + 1) = v16;
      }
      v13 += 32;
      --v10;
    }
    while ( v10 );
    BYTE4(v27) = v12;
    DWORD2(v27) = v17;
    *a5 = 1 << v11;
    *(_QWORD *)&v29 = v15;
    *(_OWORD *)(BugCheckParameter2 + 96) = v27;
    *(_OWORD *)(BugCheckParameter2 + 112) = v29;
    LOBYTE(v13) = *(_DWORD *)(a2 + 72) == 0;
    EtwpUpdateFilterData(BugCheckParameter2, v11, a2, (_DWORD)v13, a4);
    EtwpReferenceGuidEntry(BugCheckParameter2);
    return 0LL;
  }
  return 3221226021LL;
}
