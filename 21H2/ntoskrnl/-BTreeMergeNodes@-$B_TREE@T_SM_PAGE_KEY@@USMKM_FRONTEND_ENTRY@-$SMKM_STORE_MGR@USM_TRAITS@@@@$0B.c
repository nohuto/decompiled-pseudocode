/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140381574
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402869AC (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402869AC (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  void **v4; // r10
  _DWORD *v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  size_t v11; // r8
  void *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx

  v3 = (_QWORD *)a3;
  v4 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = *(v4 - 1);
  if ( (a3 & 1) != 0 )
    v3 = *v4;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
    v8 = (unsigned __int64)*v4;
  v9 = (unsigned __int16)*(_DWORD *)v8;
  v10 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
    v10 = a3;
  if ( v8 == v10 )
  {
    v7 -= 4;
    *(v4 - 1) = v7;
  }
  if ( *(_BYTE *)(v8 + 3) )
  {
    *(_QWORD *)(v8 + 8) = v3[1];
    v11 = 8LL * (unsigned __int16)*(_DWORD *)v3;
    v12 = (void *)(v8 + 8 * (v9 + 2));
  }
  else
  {
    v14 = 2 * v9;
    LODWORD(v9) = v9 + 1;
    *(_DWORD *)(v8 + 8 * v14 + 16) = *v7;
    *(_QWORD *)(v8 + 8 * v14 + 24) = v3[1];
    v11 = 16LL * (unsigned __int16)*(_DWORD *)v3;
    v12 = (void *)(v8 + 16 * ((unsigned int)v9 + 1LL));
  }
  memmove(v12, v3 + 2, v11);
  *(_WORD *)v8 = v9 + *(_WORD *)v3;
  ExFreePoolWithTag(v3, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
