/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140292454
 * Callers:
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402921AC (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x14028A8EC (SmKmStoreReferenceEx.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  int v8; // r9d
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // edi
  __m128i *v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v19; // ecx
  int v20; // [rsp+70h] [rbp+8h]
  _DWORD *v21; // [rsp+78h] [rbp+10h]

  v5 = *a2;
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)a3;
  v9 = 1024;
  v21 = (_DWORD *)a3;
  v10 = *(_DWORD *)(a5 + 24);
  v11 = *(_DWORD *)a3 + *a2 - 1;
  v20 = *(_DWORD *)a3;
  if ( v10 == -1 || !v10 )
    v12 = (__m128i *)(a5 + 8);
  else
    v12 = (__m128i *)(*(_QWORD *)a5 + 16LL * (unsigned int)(v10 - 1));
  v13 = v12->m128i_i64[0];
  v14 = _mm_srli_si128(*v12, 8).m128i_u64[0] - 8;
  while ( 1 )
  {
    if ( !v13 )
    {
      v15 = 0LL;
LABEL_27:
      v17 = v11;
      v19 = 1;
      goto LABEL_28;
    }
    v14 += 8LL;
    v15 = v14;
    if ( v14 >= v13 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v13 + 2) )
    {
      v16 = *(_QWORD *)(v13 + 8);
      if ( v16 )
      {
        v13 = *(_QWORD *)(v13 + 8);
        v14 = v16 + 16;
      }
      v15 = (v16 + 16) & -(__int64)(v16 != 0);
    }
    if ( !v15 )
      goto LABEL_27;
    v17 = *(_DWORD *)v15;
    if ( v5 >= *(_DWORD *)v15 && (*(_BYTE *)(v15 + 7) & 1) == 0 )
      goto LABEL_13;
    if ( v11 < v17 )
      goto LABEL_27;
    v19 = 0;
LABEL_28:
    v7 += v17 - v5;
    a3 = v7;
    if ( v6 )
      break;
    if ( v19 )
    {
LABEL_23:
      ++v7;
      goto LABEL_24;
    }
    v6 = v17 - v5;
    v5 = v17;
    if ( (*(_BYTE *)(v15 + 7) & 1) == 0 )
    {
LABEL_13:
      if ( v9 != 1024 && v9 != *(unsigned __int16 *)(v15 + 4) )
        goto LABEL_24;
      if ( *(_BYTE *)(v15 + 6) == 2 )
      {
        if ( v9 != 1024 )
          goto LABEL_24;
      }
      else
      {
        if ( v6 )
        {
          if ( v9 == 1024 )
            goto LABEL_24;
        }
        else
        {
          if ( !SmKmStoreReferenceEx((__int64)&SmGlobals, *(unsigned __int16 *)(v15 + 4), a3) )
            goto LABEL_23;
          v9 = *(unsigned __int16 *)(v15 + 4);
          v8 = v20;
        }
        *(_BYTE *)(v15 + 6) = 2;
      }
    }
    ++v6;
    ++v7;
    if ( v6 == v8 )
      goto LABEL_24;
    ++v5;
  }
  ++v7;
  if ( !v19 )
    v7 = a3;
LABEL_24:
  *v21 = v6;
  *a4 = v7;
  return v9;
}
