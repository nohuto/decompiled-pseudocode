/*
 * XREFs of MiStoreEvictPageFile @ 0x140241F98
 * Callers:
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 * Callees:
 *     MiStoreSetPageFileRunEvicted @ 0x140242180 (MiStoreSetPageFileRunEvicted.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140242220 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402422B0 (MiRefPageFileSpaceBitmaps.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14028BD6C (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140291F80 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int v12; // eax
  __int64 v13; // rcx
  unsigned int i; // r12d
  void *v15; // rax
  const signed __int32 *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  const signed __int32 *v19; // [rsp+40h] [rbp-10h]
  int v20; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF
  union _MM_STORE_KEY v22; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 204);
  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, &v17);
    v3 = v19;
    v4 = DWORD2(v18);
    v5 = 0;
    while ( 1 )
    {
      if ( v4 <= v5 )
      {
LABEL_28:
        v15 = (void *)MiDerefPageFileSpaceBitmaps(a1, &v17, 0LL);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        return;
      }
      v6 = &v3[(unsigned __int64)(v4 - 1) >> 5];
      v7 = &v3[(unsigned __int64)v5 >> 5];
      if ( v7 != v6 && (*v7 | *((_DWORD *)qword_140012120 + (v5 & 0x1F))) == -1 )
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
      if ( (*v7 & ~*((_DWORD *)qword_140012120 + (v5 & 0x1F))) != 0 )
        goto LABEL_16;
      v8 = 32 - v9;
      if ( v9 != 33 )
        break;
LABEL_22:
      v3 = v19;
      v4 = DWORD2(v18);
LABEL_23:
      if ( v8 )
      {
        v21 = 0;
        v22.EntireKey = v5 | (unsigned __int64)(v1 << 60);
        SmKeyConvert(&v22, (union _SM_PAGE_KEY *)&v21);
        v20 = v21;
        v12 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v11, &v20, v8);
        for ( i = v8; ; v12 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v13, &v20, i) )
        {
          i -= v12;
          if ( !i )
            break;
          v20 += v12;
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
    v16 = v7 + 1;
    while ( v16 < v6 && !*v16 )
    {
      ++v16;
      v8 += 32;
      if ( v8 == -1 )
        goto LABEL_22;
    }
LABEL_16:
    v3 = v19;
    v4 = DWORD2(v18);
LABEL_17:
    for ( j = v8 + v5; j < v4 && !_bittest(v3, j) && v8 != -1; ++j )
      ++v8;
    goto LABEL_23;
  }
}
