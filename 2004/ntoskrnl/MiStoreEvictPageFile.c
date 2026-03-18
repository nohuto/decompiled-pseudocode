/*
 * XREFs of MiStoreEvictPageFile @ 0x140351F58
 * Callers:
 *     MiStoreEvictThread @ 0x1403BE290 (MiStoreEvictThread.c)
 * Callees:
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x1402CDC04 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140303FD0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140352140 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1403521E0 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140352270 (MiRefPageFileSpaceBitmaps.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned int j; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int i; // r12d
  void *v16; // rax
  const signed __int32 *v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h]
  const signed __int32 *v20; // [rsp+40h] [rbp-10h]
  int v21; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+98h] [rbp+48h] BYREF
  union _MM_STORE_KEY v23; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 204);
  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, &v18);
    v3 = v20;
    v4 = DWORD2(v19);
    v5 = 0;
    while ( 1 )
    {
      if ( v4 <= v5 )
      {
LABEL_28:
        v16 = (void *)MiDerefPageFileSpaceBitmaps(a1, &v18, 0LL);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        return;
      }
      v6 = &v3[(unsigned __int64)(v4 - 1) >> 5];
      v7 = &v3[(unsigned __int64)v5 >> 5];
      if ( v7 != v6 && (*v7 | *((_DWORD *)qword_140011690 + (v5 & 0x1F))) == -1 )
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
      if ( (*v7 & ~*((_DWORD *)qword_140011690 + (v5 & 0x1F))) != 0 )
        goto LABEL_16;
      v8 = 32 - (v5 & 0x1F);
      if ( v8 != -1 )
        break;
LABEL_22:
      v3 = v20;
      v4 = DWORD2(v19);
LABEL_23:
      if ( v8 )
      {
        v22 = 0;
        v23.EntireKey = v5 | (unsigned __int64)(v1 << 60);
        SmKeyConvert(&v23, (union _SM_PAGE_KEY *)&v22);
        v21 = v22;
        v12 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v10, &v21, v8, v11);
        for ( i = v8; ; v12 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v13, &v21, i, v14) )
        {
          i -= v12;
          if ( !i )
            break;
          v21 += v12;
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
    v17 = v7 + 1;
    while ( v17 < v6 && !*v17 )
    {
      ++v17;
      v8 += 32;
      if ( v8 == -1 )
        goto LABEL_22;
    }
LABEL_16:
    v3 = v20;
    v4 = DWORD2(v19);
LABEL_17:
    for ( j = v8 + v5; j < v4 && !_bittest(v3, j) && v8 != -1; ++j )
      ++v8;
    goto LABEL_23;
  }
}
