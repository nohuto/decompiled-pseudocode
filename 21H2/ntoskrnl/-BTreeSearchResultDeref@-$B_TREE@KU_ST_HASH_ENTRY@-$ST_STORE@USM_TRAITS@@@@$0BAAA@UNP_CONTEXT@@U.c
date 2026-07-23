/*
 * XREFs of ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028C76C
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14028BF0C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028C574 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028C76C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14028D5E0 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14028DA60 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14028E7DC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14029FD6C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028C574 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028C76C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140598A80 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        _DWORD *a1,
        __int64 a2)
{
  struct NP_CONTEXT::NP_CTX *v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  unsigned int v13; // edx
  void *v14; // rsp
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // rbx
  void **v18; // rdx
  __int64 *v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  void **v22; // rdx
  unsigned __int64 v23; // rcx
  void **v24; // rax
  __int64 v25; // [rsp+20h] [rbp+0h] BYREF
  __int128 v26; // [rsp+28h] [rbp+8h]
  int v27; // [rsp+38h] [rbp+18h]
  unsigned int v28; // [rsp+3Ch] [rbp+1Ch]
  int v29; // [rsp+40h] [rbp+20h]
  int v30; // [rsp+44h] [rbp+24h]

  v4 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 4) & -(__int64)(a1 != 0LL));
  if ( **(_DWORD **)v4 == -1 )
  {
    if ( *(_DWORD *)(a2 + 24) == -1 )
      *(_QWORD *)(a2 + 8) = 0LL;
    else
      *(_DWORD *)(a2 + 24) = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 24);
    if ( v5 == -1 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( v6 )
      {
        v7 = *(_QWORD *)a1;
        if ( v6 != *(_QWORD *)a1 )
        {
          if ( v7 )
            v8 = *(unsigned __int8 *)(v7 + 2);
          else
            v8 = 0;
          v9 = 16LL * v8;
          v10 = v9 + 15;
          if ( v9 + 15 < v9 )
            v10 = 0xFFFFFFFFFFFFFF0LL;
          v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
          v12 = alloca(v11);
          v13 = *(_DWORD *)(v6 + 16);
          v30 = 0;
          v14 = alloca(v11);
          v27 = 0;
          v29 = 1;
          v26 = 0LL;
          v28 = v8;
          v25 = (__int64)&v25;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
            a1,
            v13,
            (__int64)&v25);
          v15 = 2LL * (v8 - 2);
          v16 = *(&v25 + 2 * v8 - 3);
          v17 = *(&v25 + v15);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            a1,
            &v25);
          v18 = (void **)(v16 - 8);
          if ( v16 <= v17 + 16 )
            v18 = (void **)(v17 + 8);
          if ( **(_DWORD **)v4 != -1 )
            NP_CONTEXT::NpLeafDerefInternal(v4, v18);
        }
      }
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    else
    {
      if ( v5 > 1 )
      {
        v19 = (__int64 *)(*(_QWORD *)a2 + 16LL * (v5 - 2));
        v20 = v19[1];
        v21 = *v19;
        v22 = (void **)(v20 - 8);
        v23 = v21 + 16;
        v24 = (void **)(v21 + 8);
        if ( v20 <= v23 )
          v22 = v24;
        NP_CONTEXT::NpLeafDerefInternal(v4, v22);
      }
      *(_DWORD *)(a2 + 24) = 0;
    }
  }
}
