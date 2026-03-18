/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x140223EC0
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x140316270 (MiTryUnlinkNodeLargePage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EEA3C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403EFD88 (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F00D8 (MiUnlinkNodeLargePages.c)
 * Callees:
 *     MiSetPfnPageState @ 0x140223340 (MiSetPfnPageState.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiDecreaseAvailablePages @ 0x140224310 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MiIncreaseAvailablePages @ 0x140346350 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x1403479DC (MiPageListCollision.c)
 *     MiWakeLargePageRebuild @ 0x140389B70 (MiWakeLargePageRebuild.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // eax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  char v15; // r8
  unsigned __int64 v16; // r11
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  volatile signed __int32 *v26; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+78h] [rbp+20h]

  v33 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
  v10 = MiLargePageSizes[a3];
  v11 = MiDecreaseAvailablePages(v9, v10, -1LL);
  if ( (a5 & 8) == 0 && !v11 )
  {
    MiIncreaseAvailablePages(v9, v10);
    return 0LL;
  }
  v13 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v14 = *(_QWORD **)(a2 + 8), *v14 != a2) )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  v15 = *(_BYTE *)(a2 + 34);
  if ( (v15 & 8) != 0 )
  {
    MiPageListCollision(a2, 1LL);
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
    v15 = *(_BYTE *)(a2 + 34);
  }
  v16 = (a2 + 0x58000000000LL) / 48;
  v17 = ((__int64)a1 - *(_QWORD *)(v9 + 16)) / 4544;
  v18 = v15 & 7;
  --a1[134 * v8 + v18];
  v19 = 2LL;
  if ( v16 < 0x100000 )
    v19 = 4LL;
  --a1[134 * v8 + v18 + v19];
  v20 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  if ( *(_BYTE *)(v20 + 4830) )
  {
    if ( a3 == 2 )
    {
      --*(_BYTE *)(*(_QWORD *)(v20 + 5104) + (v16 >> 9));
    }
    else if ( a3 == 1 )
    {
      --*(_WORD *)(*(_QWORD *)(v20 + 5128) + 2 * (v16 >> 18));
    }
  }
  v21 = ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) >> 6)
      + 134 * v8
      + 4 * (v33 + 4 * (v18 + (v16 < 0x100000 ? 2 : 0)));
  v22 = 3 * (v16 / MiLargePageSizes[v8] % (unsigned int)dword_140C4DEC0[v8]);
  --*(_QWORD *)(a1[v21 + 70] + 8 * v22 + 16);
  v23 = 2240LL;
  --a1[v21 + 6];
  if ( (v15 & 7) != 0 )
    v23 = 2304LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + v9), -v10);
  if ( dword_140C4E60C == 1 )
  {
    v24 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v25 = v10;
    v26 = (volatile signed __int32 *)(qword_140C4E668 + 4 * (v16 >> 5));
    if ( (unsigned __int64)(v24 + v10) > 0x20 )
    {
      if ( (v16 & 0x1F) != 0 )
      {
        _InterlockedOr(v26, ((1 << (32 - (v16 & 0x1F))) - 1) << v24);
        v25 = v10 - (32 - (unsigned int)(v16 & 0x1F));
        ++v26;
      }
      if ( v25 >= 0x20 )
      {
        v28 = v25 >> 5;
        v25 += -32LL * (v25 >> 5);
        do
        {
          *v26++ = -1;
          --v28;
        }
        while ( v28 );
      }
      if ( !v25 )
        goto LABEL_30;
      v27 = (1 << v25) - 1;
    }
    else
    {
      if ( v10 == 32 )
      {
        *v26 = -1;
        goto LABEL_30;
      }
      v27 = ((1 << v10) - 1) << v24;
    }
    _InterlockedOr(v26, v27);
  }
LABEL_30:
  if ( !(_DWORD)v18 )
  {
    if ( *(_BYTE *)(v9 + 4829) == 1 )
    {
      LODWORD(v18) = 1;
    }
    else if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E70C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero((a2 + 0x58000000000LL) / 48);
    }
  }
  MiSetPfnPageState(a2, 5);
  v30 = ZeroPte;
  v32 = ZeroPte;
  if ( (_DWORD)v18 == 1 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v32);
    v30 = v32;
  }
  v31 = *(_QWORD *)(a2 + 16);
  if ( qword_140C4DE80 && (v31 & 0x10) == 0 )
    v31 &= ~qword_140C4DE80;
  *(_QWORD *)(a2 + 16) = v30;
  if ( HIDWORD(v31) == 4294967293 )
    *(_QWORD *)(a2 + 16) = MiUpdatePageFileHighInPte(v30, 4294967293LL, v29);
  if ( v10 == 16
    && (unsigned __int64)(16 * (a1[268] + a1[269] + 32LL * (a1[134] + a1[135] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v9, (unsigned int)v17, 0LL);
  }
  return 1LL;
}
