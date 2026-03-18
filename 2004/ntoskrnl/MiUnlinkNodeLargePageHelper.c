/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1402B6B40
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x140353DE8 (MiTryUnlinkNodeLargePage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EFD9C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F1438 (MiUnlinkNodeLargePages.c)
 * Callees:
 *     MiSetPfnPageState @ 0x1402B5FC0 (MiSetPfnPageState.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiDecreaseAvailablePages @ 0x1402B6F90 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiIncreaseAvailablePages @ 0x140317010 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14031869C (MiPageListCollision.c)
 *     MiWakeLargePageRebuild @ 0x14038ABE0 (MiWakeLargePageRebuild.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r11
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r10
  unsigned __int64 v28; // r9
  volatile signed __int32 *v29; // rax
  unsigned int v30; // edx
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+78h] [rbp+20h]

  v38 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
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
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16), v16, v17, v18);
    v15 = *(_BYTE *)(a2 + 34);
  }
  v19 = (a2 + 0x58000000000LL) / 48;
  v20 = ((__int64)a1 - *(_QWORD *)(v9 + 16)) / 4544;
  v21 = v15 & 7;
  --a1[134 * v8 + v21];
  v22 = 2LL;
  if ( v19 < 0x100000 )
    v22 = 4LL;
  --a1[134 * v8 + v21 + v22];
  v23 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
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
  v24 = ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) >> 6)
      + 134 * v8
      + 4 * (v38 + 4 * (v21 + (v19 < 0x100000 ? 2 : 0)));
  v25 = 3 * (v19 / MiLargePageSizes[v8] % (unsigned int)dword_140C4DD80[v8]);
  --*(_QWORD *)(a1[v24 + 70] + 8 * v25 + 16);
  v26 = 2240LL;
  --a1[v24 + 6];
  if ( (v15 & 7) != 0 )
    v26 = 2304LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + v9), -v10);
  if ( dword_140C4E4CC == 1 )
  {
    v27 = ((a2 + 0x58000000000LL) / 48) & 0x1F;
    v28 = v10;
    v29 = (volatile signed __int32 *)(qword_140C4E528 + 4 * (v19 >> 5));
    if ( (unsigned __int64)(v27 + v10) > 0x20 )
    {
      if ( (v19 & 0x1F) != 0 )
      {
        _InterlockedOr(v29, ((1 << (32 - (v19 & 0x1F))) - 1) << v27);
        v28 = v10 - (32 - (unsigned int)(v19 & 0x1F));
        ++v29;
      }
      if ( v28 >= 0x20 )
      {
        v31 = v28 >> 5;
        v28 += -32LL * (v28 >> 5);
        do
        {
          *v29++ = -1;
          --v31;
        }
        while ( v31 );
      }
      if ( !v28 )
        goto LABEL_30;
      v30 = (1 << v28) - 1;
    }
    else
    {
      if ( v10 == 32 )
      {
        *v29 = -1;
        goto LABEL_30;
      }
      v30 = ((1 << v10) - 1) << v27;
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
    else if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E5CC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero((a2 + 0x58000000000LL) / 48);
    }
  }
  MiSetPfnPageState(a2, 5);
  v35 = ZeroPte;
  v37 = ZeroPte;
  if ( (_DWORD)v21 == 1 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v37, v32, v33, v34);
    v35 = v37;
  }
  v36 = *(_QWORD *)(a2 + 16);
  if ( qword_140C4DD40 && (v36 & 0x10) == 0 )
    v36 &= ~qword_140C4DD40;
  *(_QWORD *)(a2 + 16) = v35;
  if ( HIDWORD(v36) == 4294967293 )
    *(_QWORD *)(a2 + 16) = MiUpdatePageFileHighInPte(v35, 4294967293LL);
  if ( v10 == 16
    && (unsigned __int64)(16 * (a1[268] + a1[269] + 32LL * (a1[134] + a1[135] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v9, (unsigned int)v20, 0LL);
  }
  return 1LL;
}
