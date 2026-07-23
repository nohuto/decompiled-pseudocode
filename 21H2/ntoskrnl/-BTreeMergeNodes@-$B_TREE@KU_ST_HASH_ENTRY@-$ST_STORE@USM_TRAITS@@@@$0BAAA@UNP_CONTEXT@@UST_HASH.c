/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14037FAB8
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028E974 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028E974 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14037FEA0 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140598A80 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140598BC4 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 *v6; // rcx
  _DWORD *v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  _DWORD *v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  void *v14; // rcx
  size_t v15; // r8
  void **v16; // rsi
  _DWORD **v17; // rbx
  __int64 result; // rax
  __int64 v19; // rcx

  v4 = a3;
  v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = (_DWORD *)*(v6 - 1);
  if ( (a3 & 1) != 0 )
    v4 = *v6;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
    v8 = *v6;
  v9 = (unsigned __int16)*(_DWORD *)v8;
  v10 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
    v10 = a3;
  if ( v8 == v10 )
  {
    v7 -= 4;
    *(v6 - 1) = (unsigned __int64)v7;
  }
  if ( *(_BYTE *)(v8 + 3) )
  {
    v11 = *(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    v12 = *v11 == -1;
    if ( *v11 == -1 )
      v13 = *(_QWORD *)(v4 + 8);
    else
      v13 = 3358LL;
    if ( v12 )
      *(_QWORD *)(v8 + 8) = v13;
    v14 = (void *)(v8 + 16 + 4 * v9);
    v15 = 4LL * (unsigned __int16)*(_DWORD *)v4;
  }
  else
  {
    v19 = 2 * v9;
    LODWORD(v9) = v9 + 1;
    *(_DWORD *)(v8 + 8 * v19 + 16) = *v7;
    *(_QWORD *)(v8 + 8 * v19 + 24) = *(_QWORD *)(v4 + 8);
    v15 = 16LL * (unsigned __int16)*(_DWORD *)v4;
    v14 = (void *)(v8 + 16 * ((unsigned int)v9 + 1LL));
  }
  memmove(v14, (const void *)(v4 + 16), v15);
  v12 = *(_BYTE *)(v8 + 3) == 0;
  *(_WORD *)v8 = v9 + *(_WORD *)v4;
  if ( !v12 )
  {
    v16 = (void **)(v7 + 2);
    v17 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v17 != -1 )
    {
      NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)), v16);
      if ( **v17 != -1 )
        NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)), v16);
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    v4);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
