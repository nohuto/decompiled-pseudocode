/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x140323C80
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 * Callees:
 *     MiPageListCollision @ 0x14021981C (MiPageListCollision.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiIncreaseAvailablePages @ 0x140309C30 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x1403240D0 (MiDecreaseAvailablePages.c)
 *     MiSetPfnPageState @ 0x140334C50 (MiSetPfnPageState.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiWakeLargePageRebuild @ 0x14038D750 (MiWakeLargePageRebuild.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax
  _QWORD *v16; // rcx
  char v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r11
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r10
  volatile signed __int32 *v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+78h] [rbp+20h]

  v35 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
  v10 = MiLargePageSizes[a3];
  v11 = MiDecreaseAvailablePages(v9, v10, -1LL);
  if ( (a5 & 8) == 0 && !v11 )
  {
    MiIncreaseAvailablePages(v9, v10, v12, v13);
    return 0LL;
  }
  v15 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v16 = *(_QWORD **)(a2 + 8), *v16 != a2) )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  v17 = *(_BYTE *)(a2 + 34);
  if ( (v17 & 8) != 0 )
  {
    MiPageListCollision(a2);
    MiSetOriginalPtePfnFromFreeList(a2 + 16, v18);
    v17 = *(_BYTE *)(a2 + 34);
  }
  v19 = (a2 + 0x58000000000LL) / 48;
  v20 = ((__int64)a1 - *(_QWORD *)(v9 + 16)) / 4544;
  v21 = v17 & 7;
  --a1[134 * v8 + v21];
  v22 = 2LL;
  if ( v19 < 0x100000 )
    v22 = 4LL;
  --a1[134 * v8 + v21 + v22];
  v23 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  if ( *(_BYTE *)(v23 + 4830) )
  {
    if ( a3 == 2 )
    {
      --*(_BYTE *)(*(_QWORD *)(v23 + 5104) + (v19 >> 9));
    }
    else if ( a3 == 1 )
    {
      --*(_WORD *)(*(_QWORD *)(v23 + 5128) + 2 * (v19 >> 18));
    }
  }
  v24 = (unsigned __int64)*(unsigned __int8 *)(a2 + 34) >> 6;
  v25 = v24 + 134 * v8 + 4 * (v35 + 4 * (v21 + (v19 < 0x100000 ? 2 : 0)));
  v26 = 3 * (v19 / MiLargePageSizes[v8] % (unsigned int)dword_140C4DFC0[v8]);
  --*(_QWORD *)(a1[v25 + 70] + 8 * v26 + 16);
  v27 = 2240LL;
  --a1[v25 + 6];
  if ( (_DWORD)v21 )
    v27 = 2304LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + v9), -(__int64)v10);
  if ( dword_140C4E70C == 1 )
  {
    v28 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v25 = v10;
    v29 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v19 >> 5));
    if ( v28 + v10 > 0x20 )
    {
      if ( (v19 & 0x1F) != 0 )
      {
        v24 = 32 - (unsigned int)(v19 & 0x1F);
        _InterlockedOr(v29, ((1 << (32 - (v19 & 0x1F))) - 1) << v28);
        v25 = v10 - v24;
        ++v29;
      }
      if ( v25 >= 0x20 )
      {
        v24 = v25 >> 5;
        v25 += -32LL * (v25 >> 5);
        do
        {
          *v29++ = -1;
          --v24;
        }
        while ( v24 );
      }
      if ( !v25 )
        goto LABEL_30;
      v30 = (1 << v25) - 1;
    }
    else
    {
      if ( v10 == 32 )
      {
        *v29 = -1;
        goto LABEL_30;
      }
      v30 = ((1 << v10) - 1) << v28;
    }
    _InterlockedOr(v29, v30);
  }
LABEL_30:
  if ( !(_DWORD)v21 )
  {
    if ( *(_BYTE *)(v9 + 4829) == 1 )
    {
      LODWORD(v21) = 1;
    }
    else if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero((a2 + 0x58000000000LL) / 48);
    }
  }
  MiSetPfnPageState(a2, 5LL, v24, v25);
  v32 = ZeroPte;
  v34 = ZeroPte;
  if ( (_DWORD)v21 == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&v34, v31);
    v32 = v34;
  }
  v33 = *(_QWORD *)(a2 + 16);
  if ( qword_140C4DF80 && (v33 & 0x10) == 0 )
    v33 &= ~qword_140C4DF80;
  *(_QWORD *)(a2 + 16) = v32;
  if ( HIDWORD(v33) == 4294967293 )
    *(_QWORD *)(a2 + 16) = MiUpdatePageFileHighInPte(v32, 4294967293LL);
  if ( v10 == 16
    && (unsigned __int64)(16 * (a1[268] + a1[269] + 32LL * (a1[134] + a1[135] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v9, (unsigned int)v20, 0LL);
  }
  return 1LL;
}
