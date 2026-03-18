/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140381A7C
 * Callers:
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14037ED14 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1403800F0 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140395F60 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140382BC0 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140395F60 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140396008 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140397B5C (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405F6710 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405F67D0 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405F6854 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // rsi
  char v7; // dl
  __int64 v8; // rcx
  char *v9; // rax
  const void *v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rcx
  _DWORD *v16; // rdi
  __int64 v18; // r14
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  void **v25; // rdx
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD **v29; // rdi
  __int128 v30; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v30 = 0LL;
  v6 = *v4;
  v7 = *(_BYTE *)(*v4 + 3);
  v8 = (unsigned __int16)*(_DWORD *)*v4;
  v9 = (char *)v4[1];
  if ( v7 )
  {
    v10 = v9 + 4;
    v11 = 510;
    v12 = 4 * v8 + 12;
  }
  else
  {
    v10 = v9 + 16;
    v12 = 16 * v8;
    v11 = 127;
  }
  v13 = v12 - (_QWORD)v9;
  v14 = v6 + v13;
  if ( v6 + v13 )
  {
    memmove(v9, v10, v6 + v13);
    v7 = *(_BYTE *)(v6 + 3);
  }
  --*(_WORD *)v6;
  if ( v7 )
    --*(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v6 )
  {
    if ( !(unsigned __int16)*(_DWORD *)v6 && !*(_BYTE *)(v6 + 3) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v29 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *(_BYTE *)(v6 + 2) != 2 )
      {
        *(_QWORD *)a1 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)(v6 + 8), 1u);
        if ( **v29 != -1 )
        {
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)(v6 + 8));
          if ( **v29 != -1 )
          {
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)(v6 + 8));
            if ( **v29 != -1 )
              NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)(v6 + 8));
          }
        }
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        v6);
    }
  }
  else
  {
    if ( (unsigned __int16)*(_DWORD *)v6 < v11 )
    {
      v18 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      if ( !v18 )
        return (unsigned int)-1073741818;
      v19 = (unsigned __int16)*(_DWORD *)v6;
      if ( v19 < v11 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
          a1,
          a2,
          v18);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v18 & 1) != 0 )
        {
          v26 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v26;
          v27 = (unsigned __int16)*(_DWORD *)v26;
          if ( *(_BYTE *)(v26 + 3) )
            v28 = 4 * v27 + 16;
          else
            v28 = 16 * (v27 + 1);
          v4[1] = v26 + v28 - v14;
        }
      }
      else
      {
        if ( (v18 & 1) != 0 )
        {
          v20 = v4[1];
          v21 = v19 - v11 + 1;
          if ( *(_BYTE *)(v6 + 3) )
            v22 = v20 + 4 * v21;
          else
            v22 = v20 + 16 * v21;
          v4[1] = v22;
        }
        if ( *(_BYTE *)(v6 + 3) )
        {
          v23 = *(v4 - 2);
          v24 = 32LL * !(v18 & 1) + *(v4 - 1) - 16;
          v25 = (void **)(v24 <= v23 + 16 ? v23 + 8 : v24 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v25);
        }
      }
    }
    v15 = *v4;
    v16 = (_DWORD *)v4[1];
    if ( v16 == (_DWORD *)(v15 + 16)
      && *(_BYTE *)(v15 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         &v30,
                         v10) )
    {
      **((_DWORD **)&v30 + 1) = *v16;
    }
  }
  return v3;
}
