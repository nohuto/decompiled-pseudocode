/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402869AC
 * Callers:
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x140286934 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140381574 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140249CD0 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140250B2C (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140381574 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 *v4; // rdi
  _BYTE *v6; // r14
  char *v7; // rcx
  char v8; // dl
  __int64 v9; // rbp
  __int64 v10; // rbp
  unsigned int v11; // esi
  __int64 v12; // rax
  size_t v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  _DWORD *v16; // rdi
  __int64 v18; // rsi
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v26 = 0LL;
  v6 = (_BYTE *)*v4;
  v7 = (char *)v4[1];
  v8 = *(_BYTE *)(*v4 + 3);
  v9 = (unsigned __int16)*(_DWORD *)*v4;
  if ( v8 )
  {
    v10 = 8 * v9 + 8;
    v11 = 255;
    v12 = 8LL;
  }
  else
  {
    v11 = 127;
    v10 = 16 * v9;
    v12 = 16LL;
  }
  v27 = v11;
  v13 = (size_t)&v6[v10 - (_QWORD)v7];
  if ( v13 )
  {
    memmove(v7, &v7[v12], v13);
    v8 = v6[3];
  }
  --*(_WORD *)v6;
  if ( v8 )
    --a1[1];
  v14 = (unsigned __int16)*(_DWORD *)v6;
  if ( (_BYTE *)*a1 != v6 )
  {
    if ( (unsigned int)v14 >= v11 )
    {
LABEL_9:
      v15 = *v4;
      v16 = (_DWORD *)v4[1];
      if ( v16 == (_DWORD *)(v15 + 16)
        && *(_BYTE *)(v15 + 3)
        && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                           a2,
                           0,
                           (__int64)&v26) )
      {
        **((_DWORD **)&v26 + 1) = *v16;
      }
      return v3;
    }
    v18 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            (_DWORD *)v14,
            a2);
    if ( !v18 )
      return (unsigned int)-1073741818;
    v19 = (unsigned __int16)*(_DWORD *)v6;
    if ( v19 < v27 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        a1,
        a2,
        v18);
      v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      if ( (v18 & 1) == 0 )
        goto LABEL_9;
      v23 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
      *v4 = v23;
      v24 = (unsigned __int16)*(_DWORD *)v23;
      if ( *(_BYTE *)(v23 + 3) )
        v25 = 8 * v24 + 16;
      else
        v25 = 16 * (v24 + 1);
      v22 = v23 + v25 - v13;
    }
    else
    {
      if ( (v18 & 1) == 0 )
        goto LABEL_9;
      v20 = v4[1];
      v21 = v19 - v27 + 1;
      if ( v6[3] )
        v22 = v20 + 8 * v21;
      else
        v22 = v20 + 16 * v21;
    }
    v4[1] = v22;
    goto LABEL_9;
  }
  if ( !(unsigned __int16)*(_DWORD *)v6 && !v6[3] )
  {
    memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
    --*(_DWORD *)(a2 + 24);
    *a1 = *((_QWORD *)v6 + 1);
    ExFreePoolWithTag(v6, 0);
  }
  return v3;
}
