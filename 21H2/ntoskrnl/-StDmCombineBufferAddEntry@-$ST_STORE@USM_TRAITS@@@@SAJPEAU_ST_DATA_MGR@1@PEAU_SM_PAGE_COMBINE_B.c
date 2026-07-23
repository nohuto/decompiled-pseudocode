/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14028D5E0
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14028D31C (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028C574 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028C76C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14028DA60 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort_s @ 0x1403D3010 (qsort_s.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405982B4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140598A80 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char *v5; // rbx
  unsigned int *v6; // r9
  unsigned __int64 v7; // r8
  char *v9; // rsi
  int v11; // ecx
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int *v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // esi
  _DWORD *v26; // r15
  struct NP_CONTEXT::NP_CTX *v27; // r14
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  int *v35; // rsi
  int *v36; // r9
  unsigned int v37; // r8d
  int *v38; // rdx
  __int64 LeafSibling; // rax
  __int64 v40; // rax
  unsigned int v41; // r13d
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  void *v45; // rsp
  void *v46; // rsp
  unsigned int v47; // edx
  unsigned __int64 v48; // rdi
  __int64 v49; // rbx
  void **v50; // rdx
  _DWORD v51[2]; // [rsp+30h] [rbp+0h] BYREF
  __int128 v52; // [rsp+38h] [rbp+8h] BYREF
  unsigned int v53; // [rsp+48h] [rbp+18h]
  unsigned int *v54; // [rsp+50h] [rbp+20h]
  __int128 Context; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v56; // [rsp+68h] [rbp+38h]
  _DWORD *v57; // [rsp+70h] [rbp+40h] BYREF
  __int128 v58; // [rsp+78h] [rbp+48h]
  int v59; // [rsp+88h] [rbp+58h]
  unsigned int v60; // [rsp+8Ch] [rbp+5Ch]
  int v61; // [rsp+90h] [rbp+60h]
  int v62; // [rsp+94h] [rbp+64h]

  v5 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v54 = a3;
  v6 = a3;
  v7 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v9 = v5 + 8;
  v56 = v7;
  Context = 0LL;
  v52 = 0LL;
  if ( (unsigned __int64)(v5 + 8) > v7 )
  {
    v14 = v52;
    v25 = -2147483643;
    goto LABEL_17;
  }
  *(_QWORD *)v5 = 0LL;
  if ( v5 )
    *(_DWORD *)v5 = *a4 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v5 *= 16;
  v11 = a4[1] & 0xFFF;
  v12 = 4096;
  if ( v11 )
    v12 = v11;
  *((_WORD *)v5 + 2) = v12;
  if ( v6[1] != a4[2] || v6[2] != (a4[1] & 0xFFF) || (v31 = *v6, !(_DWORD)v31) )
  {
    v13 = *(_DWORD *)(a1 + 184);
    if ( (v13 & 1) == 0 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (_DWORD *)(a1 + 128),
        a1 + 152);
      v13 = *(_DWORD *)(a1 + 184);
    }
    *(_DWORD *)(a1 + 184) = v13 | 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = a4[2];
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
      (_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 768),
      a1 + 152);
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      a1 + 128,
      &v52,
      a1 + 152);
    v14 = v52;
    v15 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2LL * *a2) >> 13;
    v16 = 0;
    v53 = v15;
    v51[0] = 0;
    while ( 1 )
    {
      if ( !v14 )
      {
LABEL_15:
        v24 = (unsigned __int8)v5[6];
        if ( !(_BYTE)v24 )
          goto LABEL_16;
        v35 = (int *)&v9[-8 * v24];
        if ( (unsigned __int8)v24 > 1u )
        {
          *(_QWORD *)&Context = *a2;
          *((_QWORD *)&Context + 1) = a1;
          qsort_s(v35, (unsigned __int8)v5[6], 8uLL, ST_STORE<SM_TRAITS>::StDmCombineTargetCompare, &Context);
          LOBYTE(v24) = v5[6];
        }
        v36 = &v35[2 * (unsigned __int8)v24];
        if ( v35 < v36 )
        {
          do
          {
            v37 = *v35;
            v38 = v35 + 1;
            *(_QWORD *)v35 = 0LL;
            if ( v35 != (int *)-4LL )
              *v38 = v37 & *(_DWORD *)(a1 + 808);
            *v35 = v37 >> *(_DWORD *)(a1 + 812);
            v35 += 2;
            *v38 *= 16;
          }
          while ( v35 < v36 );
          LOBYTE(v24) = v5[6];
        }
        v6 = v54;
LABEL_36:
        *v6 = *((unsigned __int16 *)a2 + 3);
        v6[1] = a4[2];
        v6[2] = a4[1] & 0xFFF;
        *((_WORD *)a2 + 3) = (_WORD)v5 + 8 * ((unsigned __int8)v24 + 1) - (_WORD)a2;
LABEL_16:
        v25 = 0;
        goto LABEL_17;
      }
      v17 = *((_QWORD *)&v52 + 1) + 4LL;
      v18 = (unsigned __int16)*(_DWORD *)v14 + 4LL;
      *((_QWORD *)&v52 + 1) = v17;
      if ( v17 >= v14 + 4 * v18 )
        break;
LABEL_12:
      if ( !v17 )
        goto LABEL_15;
      v19 = *(_DWORD *)v17;
      LODWORD(v20) = *(_DWORD *)(a1 + 456);
      v21 = *(_DWORD *)(a1 + 460);
      v51[0] = 0;
      v22 = v19 >> v20;
      _BitScanReverse((unsigned int *)&v20, v22);
      v23 = (unsigned int *)(*(unsigned int *)(a1 + 472)
                           + *(_DWORD *)(a1 + 464) * (v19 & v21)
                           + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v22 ^ (unsigned int)(1 << v20))));
      if ( v23 != a4 )
      {
        if ( v23[2] != a4[2] )
          goto LABEL_15;
        if ( ((a4[1] ^ v23[1]) & 0xFFF) == 0 )
        {
          v29 = (unsigned __int64)*v23 >> *(_BYTE *)(a1 + 812);
          if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v29) >> 13 >= v15 )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6568LL);
            if ( v30 && (v30 == -1 || _bittest64(*(const signed __int64 **)(v30 + 16), v29))
              || (v23[1] & 0xFFFFF000) >= 0xFFEFF000 )
            {
              v14 = v52;
            }
            else
            {
              v14 = v52;
              if ( (unsigned __int64)(v9 + 8) > v56 )
                goto LABEL_54;
              *(_QWORD *)v9 = 0LL;
              *(_DWORD *)v9 = *v23;
              *((_DWORD *)v9 + 1) = v23[1] >> 12;
              v9 += 8;
              ++v5[6];
            }
          }
        }
      }
      v51[0] = ++v16;
      if ( v16 >= 0x10 )
        goto LABEL_15;
    }
    if ( **(_DWORD **)((a1 + 144) & -(__int64)(a1 != -128)) == -1 )
    {
      LeafSibling = *(_QWORD *)(v14 + 8);
    }
    else
    {
      LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                      a1 + 128,
                      v14);
      if ( LeafSibling == -1 )
      {
        v17 = -1LL;
LABEL_51:
        v16 = v51[0];
        v15 = v53;
        goto LABEL_12;
      }
    }
    if ( LeafSibling )
    {
      v17 = LeafSibling + 16;
      *(_QWORD *)&v52 = LeafSibling;
      *((_QWORD *)&v52 + 1) = LeafSibling + 16;
      v14 = LeafSibling;
    }
    else
    {
      v17 = 0LL;
    }
    goto LABEL_51;
  }
  v32 = (char *)a2 + v31;
  if ( (unsigned __int64)&v5[(unsigned int)((_DWORD)v5 - ((_DWORD)a2 + v31))] <= v7 )
  {
    v33 = (unsigned __int64)(v32 + 8);
    v34 = (unsigned __int64)&v32[8 * (unsigned __int8)v32[6] + 8];
    while ( v33 < v34 )
    {
      if ( *(_DWORD *)(v33 + 4) != *(_DWORD *)v5 || *(_DWORD *)v33 != *a2 )
      {
        *(_QWORD *)v9 = *(_QWORD *)v33;
        v9 += 8;
        ++v5[6];
      }
      v33 += 8LL;
    }
    LOBYTE(v24) = v5[6];
    v14 = v52;
    if ( (_BYTE)v24 )
      goto LABEL_36;
    goto LABEL_16;
  }
  v14 = v52;
LABEL_54:
  v25 = -2147483643;
LABEL_17:
  v26 = (_DWORD *)(a1 + 128);
  v27 = (struct NP_CONTEXT::NP_CTX *)((a1 + 144) & -(__int64)(a1 != -128));
  if ( **(_DWORD **)v27 != -1 )
  {
    if ( v14 )
    {
      v40 = *(_QWORD *)v26;
      if ( v14 != *(_QWORD *)v26 )
      {
        if ( v40 )
          v41 = *(unsigned __int8 *)(v40 + 2);
        else
          v41 = 0;
        v42 = 16LL * v41;
        v43 = v42 + 15;
        if ( v42 + 15 < v42 )
          v43 = 0xFFFFFFFFFFFFFF0LL;
        v44 = v43 & 0xFFFFFFFFFFFFFFF0uLL;
        v45 = alloca(v44);
        v62 = 0;
        v59 = 0;
        v46 = alloca(v44);
        v61 = 1;
        v47 = *(_DWORD *)(v14 + 16);
        v58 = 0LL;
        v60 = v41;
        v57 = v51;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          v26,
          v47,
          (__int64)&v57);
        v48 = *((_QWORD *)&v52 + 2 * v41 - 4);
        v49 = *(_QWORD *)&v51[4 * v41 - 8];
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          v26,
          (__int64)&v57);
        v50 = (void **)(v48 - 8);
        if ( v48 <= v49 + 16 )
          v50 = (void **)(v49 + 8);
        if ( **(_DWORD **)v27 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v27, v50);
      }
    }
  }
  return v25;
}
