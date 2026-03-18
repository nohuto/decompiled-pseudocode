/*
 * XREFs of MiStoreEvictPageFile @ 0x140314108
 * Callers:
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 * Callees:
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14023ADD4 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140309B20 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     MiStoreSetPageFileRunEvicted @ 0x1403142F0 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140314390 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140314420 (MiRefPageFileSpaceBitmaps.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  __int64 v1; // r13
  const signed __int32 *v3; // r14
  unsigned int v4; // esi
  unsigned int v5; // ebx
  const signed __int32 *v6; // r8
  const signed __int32 *v7; // rdx
  unsigned int v8; // edi
  int v9; // r9d
  unsigned int j; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int i; // r12d
  void *v17; // rax
  const signed __int32 *v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  const signed __int32 *v21; // [rsp+40h] [rbp-10h]
  int v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+98h] [rbp+48h] BYREF
  union _MM_STORE_KEY v24; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 204);
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, &v19);
    v3 = v21;
    v4 = DWORD2(v20);
    v5 = 0;
    while ( 1 )
    {
      if ( v4 <= v5 )
      {
LABEL_28:
        v17 = (void *)MiDerefPageFileSpaceBitmaps(a1, &v19, 0LL);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        return;
      }
      v6 = &v3[(unsigned __int64)(v4 - 1) >> 5];
      v7 = &v3[(unsigned __int64)v5 >> 5];
      if ( v7 != v6 && (*v7 | *((_DWORD *)qword_140011AC0 + (v5 & 0x1F))) == -1 )
      {
        v5 = v5 - (v5 & 0x1F) + 32;
        for ( ++v7; v7 < v6 && *v7 == -1; ++v7 )
          v5 += 32;
      }
      while ( v5 < v4 && _bittest(v3, v5) )
        ++v5;
      v8 = 0;
      if ( v7 == v6 )
        goto LABEL_17;
      v9 = v5 & 0x1F;
      if ( (*v7 & ~*((_DWORD *)qword_140011AC0 + (v5 & 0x1F))) != 0 )
        goto LABEL_16;
      v8 = 32 - v9;
      if ( v9 != 33 )
        break;
LABEL_22:
      v3 = v21;
      v4 = DWORD2(v20);
LABEL_23:
      if ( v8 )
      {
        v23 = 0;
        v24.EntireKey = v5 | (unsigned __int64)(v1 << 60);
        SmKeyConvert(&v24, (union _SM_PAGE_KEY *)&v23);
        v22 = v23;
        v13 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v11, &v22, v8, v12);
        for ( i = v8; ; v13 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v14, &v22, i, v15) )
        {
          i -= v13;
          if ( !i )
            break;
          v22 += v13;
        }
        MiStoreSetPageFileRunEvicted(a1, v5, v8);
        if ( *(_DWORD *)(a1 + 200) )
        {
          v5 += v8;
          if ( v5 < v4 )
            continue;
        }
      }
      goto LABEL_28;
    }
    v18 = v7 + 1;
    while ( v18 < v6 && !*v18 )
    {
      ++v18;
      v8 += 32;
      if ( v8 == -1 )
        goto LABEL_22;
    }
LABEL_16:
    v3 = v21;
    v4 = DWORD2(v20);
LABEL_17:
    for ( j = v8 + v5; j < v4 && !_bittest(v3, j) && v8 != -1; ++j )
      ++v8;
    goto LABEL_23;
  }
}
