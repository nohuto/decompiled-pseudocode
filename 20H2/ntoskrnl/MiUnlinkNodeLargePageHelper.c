/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1402312D0
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x1402F27F8 (MiTryUnlinkNodeLargePage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F594C (MiUnlinkNodeLargePages.c)
 * Callees:
 *     MiDecreaseAvailablePages @ 0x140231720 (MiDecreaseAvailablePages.c)
 *     MiSetPfnPageState @ 0x1402AD310 (MiSetPfnPageState.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiIncreaseAvailablePages @ 0x1402F2250 (MiIncreaseAvailablePages.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiPageListCollision @ 0x140350B60 (MiPageListCollision.c)
 *     MiWakeLargePageRebuild @ 0x14038CEE0 (MiWakeLargePageRebuild.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // eax
  __int64 *v13; // rax
  __int64 **v14; // rcx
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
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+78h] [rbp+20h]

  v32 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(qword_140C4E4C8 + 8 * (((unsigned __int64)a2[5] >> 39) & 0x3FF));
  v10 = MiLargePageSizes[a3];
  v11 = MiDecreaseAvailablePages(v9, v10, -1LL, 0LL);
  if ( (a5 & 8) == 0 && !v11 )
  {
    MiIncreaseAvailablePages(v9, v10);
    return 0LL;
  }
  v13 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v14 = (__int64 **)a2[1], *v14 != a2) )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = (__int64)v14;
  v15 = *((_BYTE *)a2 + 34);
  if ( (v15 & 8) != 0 )
  {
    MiPageListCollision(a2, 1LL);
    MiSetOriginalPtePfnFromFreeList(a2 + 2);
    v15 = *((_BYTE *)a2 + 34);
  }
  v16 = (__int64)(a2 + 0xB000000000LL) / 48;
  v17 = ((__int64)a1 - *(_QWORD *)(v9 + 16)) / 4544;
  v18 = v15 & 7;
  --a1[134 * v8 + v18];
  v19 = 2LL;
  if ( v16 < 0x100000 )
    v19 = 4LL;
  --a1[134 * v8 + v18 + v19];
  v20 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(48 * v16 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
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
  v21 = ((unsigned __int64)*((unsigned __int8 *)a2 + 34) >> 6)
      + 134 * v8
      + 4 * (v32 + 4 * (v18 + (v16 < 0x100000 ? 2 : 0)));
  v22 = 3 * (v16 / MiLargePageSizes[v8] % (unsigned int)dword_140C4DE00[v8]);
  --*(_QWORD *)(a1[v21 + 70] + 8 * v22 + 16);
  v23 = 2240LL;
  --a1[v21 + 6];
  if ( (v15 & 7) != 0 )
    v23 = 2304LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + v9), -v10);
  if ( dword_140C4E54C == 1 )
  {
    v24 = ((__int64)(a2 + 0xB000000000LL) / 48) & 0x1F;
    v25 = v10;
    v26 = (volatile signed __int32 *)(qword_140C4E5A8 + 4 * (v16 >> 5));
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
    else if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero((__int64)(a2 + 0xB000000000LL) / 48);
    }
  }
  MiSetPfnPageState(a2, 5LL);
  v29 = ZeroPte;
  v31 = ZeroPte;
  if ( (_DWORD)v18 == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&v31);
    v29 = v31;
  }
  v30 = a2[2];
  if ( qword_140C4DDC0 && (v30 & 0x10) == 0 )
    v30 &= ~qword_140C4DDC0;
  a2[2] = v29;
  if ( HIDWORD(v30) == 4294967293 )
    a2[2] = MiUpdatePageFileHighInPte();
  if ( v10 == 16
    && (unsigned __int64)(16 * (a1[268] + a1[269] + 32LL * (a1[134] + a1[135] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v9, (unsigned int)v17, 0LL);
  }
  return 1LL;
}
