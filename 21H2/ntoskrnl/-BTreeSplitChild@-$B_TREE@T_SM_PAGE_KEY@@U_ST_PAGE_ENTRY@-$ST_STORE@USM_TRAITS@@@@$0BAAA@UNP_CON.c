/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14024CCCC
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14028CDF0 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14024CF0C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14028CDF0 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14037FEA0 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x140598A4C (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // r12
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  int *v9; // rdx
  int v10; // eax
  int *v11; // r15
  unsigned int v12; // r13d
  _DWORD *v13; // rax
  bool v14; // zf
  __int64 v15; // rax
  _QWORD *v16; // r15
  int v17; // eax
  int v18; // ecx
  char v19; // dl
  struct NP_CONTEXT::NP_CTX *v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  struct NP_CONTEXT::NP_CTX *v24; // rcx
  union _NP_LEAF_PTR *v25; // rdx
  int v26; // r8d
  __int64 v27; // r13
  __int128 v28; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
  v3 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v4 = 0LL;
  v5 = *v3;
  v6 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         *(unsigned __int8 *)(*v3 + 3),
         *(unsigned __int8 *)(*v3 + 2));
  v7 = v6;
  if ( !v6 )
    return v30;
  DWORD1(v28) = 0;
  *((_QWORD *)&v28 + 1) = v6;
  v8 = (*(_DWORD *)v5 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v5 + 3) )
  {
    v9 = (int *)(v5 + 16 + 8 * v8);
    if ( (*(_DWORD *)v5 & 1) != 0 && (unsigned __int64)(v9 + 2) < v3[1] )
    {
      v9 += 2;
      LODWORD(v8) = v8 + 1;
    }
    v10 = *v9;
    v11 = 0LL;
  }
  else
  {
    v9 = 0LL;
    v11 = (int *)(v5 + 16 * (((*(_DWORD *)v5 >> 1) & 0x7FFF) + 1LL));
    v10 = *v11;
  }
  LODWORD(v28) = v10;
  v12 = (unsigned __int16)*(_DWORD *)v5 - (_DWORD)v8;
  if ( *(_BYTE *)(v5 + 3) )
  {
    v13 = *(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    v14 = *v13 == -1;
    if ( *v13 == -1 )
      v15 = *(_QWORD *)(v5 + 8);
    else
      v15 = 3358LL;
    if ( v14 )
      *(_QWORD *)(v7 + 8) = v15;
    memmove((void *)(v7 + 16), v9, 8LL * v12);
  }
  else
  {
    memmove((void *)(v7 + 16), v11 + 4, 16LL * --v12);
    *(_QWORD *)(v7 + 8) = *((_QWORD *)v11 + 1);
  }
  *(_WORD *)v7 = v12;
  if ( *(_QWORD *)a1 == v5 )
  {
    v23 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0LL,
            (unsigned int)*(unsigned __int8 *)(v5 + 2) + 1);
    v4 = v23;
    if ( v23 )
    {
      v25 = (union _NP_LEAF_PTR *)(v23 + 8);
      v26 = 1;
      *(_QWORD *)(v23 + 8) = v5;
      v27 = v23 + 16;
      *(_OWORD *)(v23 + 16) = v28;
      *(_WORD *)v23 = 1;
      *(_QWORD *)a1 = v23;
      if ( *(_BYTE *)(v5 + 3) && **(_DWORD **)(a1 + 16) != -1 )
      {
        *(_DWORD *)v25 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v24, v25);
      }
      v16 = (_QWORD *)a2;
      memmove(v3 + 2, v3, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v26));
      *v3 = v4;
      v3[1] = v27;
      v18 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_13;
    }
  }
  else
  {
    v16 = (_QWORD *)a2;
    --*(_DWORD *)(a2 + 24);
    v17 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v28);
    v18 = ++*(_DWORD *)(a2 + 24);
    if ( v17 >= 0 )
    {
LABEL_13:
      v19 = *(_BYTE *)(v5 + 3);
      if ( v19 )
      {
        v20 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v18 - 2));
        v21 = *(_QWORD *)(*v16 + 8LL * (_QWORD)v20 + 8);
        if ( **(_DWORD **)(a1 + 16) != -1 )
        {
          *(_DWORD *)(v21 + 8) |= 1u;
          NP_CONTEXT::NpGetResidentLeaf(v20, (union _NP_LEAF_PTR *)(v21 + 8));
          v19 = *(_BYTE *)(v5 + 3);
        }
      }
      *(_WORD *)v5 = v8;
      if ( v19 && **(_DWORD **)(a1 + 16) == -1 )
        *(_QWORD *)(v5 + 8) = v7;
      v30 = v7;
      v7 = 0LL;
      v4 = 0LL;
    }
  }
  if ( v7 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v7);
  if ( v4 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v4);
  return v30;
}
