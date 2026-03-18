/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1402CE4D8
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1402CFA3C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14035ECA0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 * Callees:
 *     SmArrayGrow @ 0x140311014 (SmArrayGrow.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14034B564 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14035ECA0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14035EE44 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 *v10; // r14
  _DWORD *v11; // rsi
  int v12; // r9d
  unsigned int v13; // r12d
  _QWORD *v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r10
  int v22; // eax
  _DWORD *v23; // r8
  _DWORD *v24; // rax
  __int64 v25; // rdx
  char v26; // cl
  int v27; // edi
  int v28; // eax
  __int64 v29; // rax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v29 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v8,
            1LL,
            1LL);
    *a1 = v29;
    if ( !v29 )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a2;
    *v10 = v29;
    v10[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_DWORD *)*v10;
  LOBYTE(v8) = *(_BYTE *)(*v10 + 3);
  v12 = *(_DWORD *)*v10;
  v13 = (unsigned __int8)-((_BYTE)v8 != 0) + 255;
  if ( (unsigned __int16)v12 >= v13 )
  {
    v16 = v10[1] - (_QWORD)v11 - 16;
    v17 = v16 >> 3;
    v18 = v16 >> 4;
    if ( !(_BYTE)v8 )
      LODWORD(v17) = v18;
    if ( v11 == (_DWORD *)*a1 )
    {
      v21 = 0LL;
      v20 = 0LL;
    }
    else
    {
      v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              v8,
              a2);
      v12 = *v11;
      v20 = v19;
      v21 = 32LL * ((v19 & 1) == 0) - 16 + *(v10 - 1);
    }
    v22 = (unsigned __int16)v12;
    if ( (unsigned __int16)v12 < v13 )
    {
      if ( (v20 & 1) != 0 )
      {
        v23 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v17) = (unsigned __int16)v12 + v17 - v13;
        if ( *((_BYTE *)v11 + 3) )
        {
          if ( (int)v17 > 0 )
            goto LABEL_19;
        }
        else
        {
          if ( (int)v17 >= 0 )
            goto LABEL_19;
          LODWORD(v17) = v17 + 1;
        }
        v11 = v23;
        LODWORD(v17) = (unsigned __int16)*v23 + (_DWORD)v17;
LABEL_19:
        if ( v11 == v23 )
          *(v10 - 1) = v21;
        goto LABEL_21;
      }
      if ( (int)v17 > (unsigned __int16)v12 )
      {
        v26 = *((_BYTE *)v11 + 3);
        v11 = (_DWORD *)v20;
        *(v10 - 1) = v21;
        goto LABEL_27;
      }
      goto LABEL_21;
    }
    v25 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
            a1,
            a2,
            v20);
    if ( v25 )
    {
      v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v22 = (unsigned __int16)*v11;
      if ( (int)v17 > v22 )
      {
        v26 = *((_BYTE *)v11 + 3);
        v11 = (_DWORD *)v25;
        *(v10 - 1) += 16LL;
LABEL_27:
        v27 = v17 - v22;
        v28 = v27 - 1;
        if ( v26 )
          v28 = v27;
        LODWORD(v17) = v28;
      }
LABEL_21:
      *v10 = (__int64)v11;
      if ( *((_BYTE *)v11 + 3) )
        v24 = &v11[2 * (int)v17 + 4];
      else
        v24 = &v11[4 * (int)v17 + 4];
      v10[1] = (__int64)v24;
      LOBYTE(v8) = *((_BYTE *)v11 + 3);
      v12 = *v11;
      goto LABEL_7;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v14 = (_QWORD *)v10[1];
  if ( (_BYTE)v8 )
  {
    memmove(v14 + 1, v14, (size_t)v11 + 8LL * (unsigned __int16)v12 + 16 - (_QWORD)v14);
    *v14 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v14 + 2, v14, (size_t)v11 + 16 * ((unsigned __int16)v12 + 1LL) - (_QWORD)v14);
    *(_OWORD *)v14 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
