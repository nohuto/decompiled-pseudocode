/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14023D0B0
 * Callers:
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14023B284 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14023CC0C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402D1614 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140309974 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140309D4C (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14030D938 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14030DCB8 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405933D0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140599368 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     ?BTreeNodeFindKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@T_SM_PAGE_KEY@@@Z @ 0x14023D1E0 (-BTreeNodeFindKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0.c)
 *     SmArrayGrow @ 0x1402D0FD0 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  __int64 *v6; // r14
  int v7; // ebp
  __int64 v8; // rax
  _DWORD *v9; // r8
  _QWORD *v10; // rsi
  __int64 v11; // r14
  unsigned int Key; // eax
  _DWORD *v13; // rdx
  __int64 *v15; // r14

  v3 = 0;
  v5 = a2;
  v6 = (__int64 *)a1;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v10 = (_QWORD *)(a3 + 8);
    v7 = 0;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 0;
    v7 = 1;
    v8 = *(_QWORD *)a1;
    a1 = 0LL;
    if ( v8 )
      a1 = *(unsigned __int8 *)(v8 + 2);
    v9 = (_DWORD *)(a3 + 28);
    if ( *v9 < (unsigned int)a1 && !(unsigned int)SmArrayGrow(a1, a2, v9, a3) )
      return (unsigned int)-1073741670;
    v10 = *(_QWORD **)a3;
  }
  v11 = *v6;
  if ( !v11 )
  {
    if ( !v7 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    Key = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFindKey(
            a1,
            v11,
            v5);
    if ( *(_BYTE *)(v11 + 3) )
      break;
    if ( v7 )
    {
      *v10 = v11;
      a1 = v11 + 16 * (Key + 1LL);
      v10[1] = a1;
      v10 += 2;
    }
    if ( Key )
    {
      a1 = 16LL * (Key - 1);
      v15 = (__int64 *)(a1 + v11 + 24);
    }
    else
    {
      v15 = (__int64 *)(v11 + 8);
    }
    v11 = *v15;
  }
  *v10 = v11;
  v13 = (_DWORD *)(v11 + 8 * (Key + 2LL));
  v10[1] = v13;
  if ( v7 )
    *(_DWORD *)(a3 + 24) = (((__int64)v10 - *(_QWORD *)a3) >> 4) + 1;
  if ( Key >= (unsigned __int16)*(_DWORD *)v11 || *v13 != v5 )
    return (unsigned int)-1073741275;
  return v3;
}
