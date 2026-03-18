/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037A3E0
 * Callers:
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14037A368 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140397010 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037DDFC (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140397010 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140397B5C (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int64 *v5; // rdi
  _BYTE *v7; // r14
  char *v8; // rcx
  char v9; // dl
  __int64 v10; // rbp
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rax
  size_t v14; // rbp
  char *v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rdi
  __int64 v20; // rsi
  unsigned int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v28 = 0LL;
  v7 = (_BYTE *)*v5;
  v8 = (char *)v5[1];
  v9 = *(_BYTE *)(*v5 + 3);
  v10 = (unsigned __int16)*(_DWORD *)*v5;
  if ( v9 )
  {
    v11 = 8 * v10 + 8;
    v12 = 255;
    v13 = 8LL;
  }
  else
  {
    v12 = 127;
    v11 = 16 * v10;
    v13 = 16LL;
  }
  v29 = v12;
  v14 = (size_t)&v7[v11 - (_QWORD)v8];
  v15 = &v8[v13];
  if ( v14 )
  {
    memmove(v8, &v8[v13], v14);
    v9 = v7[3];
  }
  --*(_WORD *)v7;
  if ( v9 )
    --a1[1];
  v16 = (unsigned __int16)*(_DWORD *)v7;
  if ( (_BYTE *)*a1 != v7 )
  {
    if ( (unsigned int)v16 >= v12 )
    {
LABEL_9:
      v17 = *v5;
      v18 = (_DWORD *)v5[1];
      if ( v18 == (_DWORD *)(v17 + 16)
        && *(_BYTE *)(v17 + 3)
        && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                           a2,
                           0LL,
                           &v28,
                           v15) )
      {
        **((_DWORD **)&v28 + 1) = *v18;
      }
      return v4;
    }
    v20 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            v16,
            a2,
            a3,
            v15,
            v28);
    if ( !v20 )
      return (unsigned int)-1073741818;
    v21 = (unsigned __int16)*(_DWORD *)v7;
    if ( v21 < v29 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        a1,
        a2,
        v20);
      v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      if ( (v20 & 1) == 0 )
        goto LABEL_9;
      v25 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
      *v5 = v25;
      v26 = (unsigned __int16)*(_DWORD *)v25;
      if ( *(_BYTE *)(v25 + 3) )
        v27 = 8 * v26 + 16;
      else
        v27 = 16 * (v26 + 1);
      v24 = v25 + v27 - v14;
    }
    else
    {
      if ( (v20 & 1) == 0 )
        goto LABEL_9;
      v22 = v5[1];
      v23 = v21 - v29 + 1;
      if ( v7[3] )
        v24 = v22 + 8 * v23;
      else
        v24 = v22 + 16 * v23;
    }
    v5[1] = v24;
    goto LABEL_9;
  }
  if ( !(unsigned __int16)*(_DWORD *)v7 && !v7[3] )
  {
    memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
    --*(_DWORD *)(a2 + 24);
    *a1 = *((_QWORD *)v7 + 1);
    ExFreePoolWithTag(v7, 0);
  }
  return v4;
}
