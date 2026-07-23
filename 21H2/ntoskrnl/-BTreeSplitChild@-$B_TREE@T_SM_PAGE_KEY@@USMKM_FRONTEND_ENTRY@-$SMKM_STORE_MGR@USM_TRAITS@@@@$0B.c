/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14024FE00
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140289624 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14024FFA4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140289624 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  int v2; // r12d
  _QWORD *v4; // r12
  void *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  int *v10; // rdx
  int v11; // eax
  int *v12; // rbx
  void *v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // rbx
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 24);
  DWORD1(v21) = 0;
  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1));
  v5 = 0LL;
  v23 = 0LL;
  v6 = *v4;
  v7 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v4 + 3LL),
         *(unsigned __int8 *)(*v4 + 2LL));
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return v23;
  DWORD1(v21) = 0;
  *((_QWORD *)&v21 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = (int *)(v6 + 16 + 8 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 2) < v4[1] )
    {
      v10 += 2;
      LODWORD(v9) = v9 + 1;
    }
    v11 = *v10;
    v12 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v12 = (int *)(v6 + 16 * (((*(_DWORD *)v6 >> 1) & 0x7FFF) + 1LL));
    v11 = *v12;
  }
  LODWORD(v21) = v11;
  v13 = v8 + 2;
  v14 = (unsigned __int16)*(_DWORD *)v6 - (_DWORD)v9;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v8[1] = *(_QWORD *)(v6 + 8);
    memmove(v13, v10, 8LL * v14);
  }
  else
  {
    memmove(v13, v12 + 4, 16LL * --v14);
    v8[1] = *((_QWORD *)v12 + 1);
  }
  *(_WORD *)v8 = v14;
  if ( *a1 == v6 )
  {
    v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v15,
            0LL,
            (unsigned int)*(unsigned __int8 *)(v6 + 2) + 1);
    v5 = (void *)v19;
    if ( v19 )
    {
      *(_QWORD *)(v19 + 8) = v6;
      v20 = v19 + 16;
      *(_OWORD *)(v19 + 16) = v21;
      *(_WORD *)v19 = 1;
      *a1 = v19;
      memmove(v4 + 2, v4, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *v4 = v5;
      v4[1] = v20;
      ++*(_DWORD *)(a2 + 24);
      goto LABEL_9;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v16 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v21);
    ++*(_DWORD *)(a2 + 24);
    if ( v16 >= 0 )
    {
LABEL_9:
      v17 = *(_BYTE *)(v6 + 3) == 0;
      *(_WORD *)v6 = v9;
      if ( !v17 )
        *(_QWORD *)(v6 + 8) = v8;
      v23 = v8;
      v8 = 0LL;
      v5 = 0LL;
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v23;
}
