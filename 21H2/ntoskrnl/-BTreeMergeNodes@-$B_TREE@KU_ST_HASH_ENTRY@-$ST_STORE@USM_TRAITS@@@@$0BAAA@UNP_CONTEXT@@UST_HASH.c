/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140395F60
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140381A7C (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140381A7C (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140396008 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405F6710 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405F6854 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r15
  bool v12; // zf
  void *v13; // rcx
  size_t v14; // r8
  __int64 v15; // rcx
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  __int64 result; // rax

  v5 = a3;
  v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = *(v6 - 1);
  if ( (a3 & 1) != 0 )
    v5 = *v6;
  v8 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a3 & 1) == 0 )
  {
    v9 = *v6;
    v8 = a3;
  }
  v10 = *(_DWORD *)v9;
  v11 = (unsigned __int16)*(_DWORD *)v9;
  if ( v9 == v8 )
  {
    v7 -= 16LL;
    *(v6 - 1) = v7;
  }
  if ( *(_BYTE *)(v9 + 3) )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(v5 + 8);
    v13 = (void *)(v9 + 16 + 4 * v11);
    v14 = 4LL * (unsigned __int16)*(_DWORD *)v5;
  }
  else
  {
    v15 = 2LL * (unsigned __int16)v10;
    LODWORD(v11) = (unsigned __int16)v10 + 1;
    *(_DWORD *)(v9 + 8 * v15 + 16) = *(_DWORD *)v7;
    *(_QWORD *)(v9 + 8 * v15 + 24) = *(_QWORD *)(v5 + 8);
    v14 = 16LL * (unsigned __int16)*(_DWORD *)v5;
    v13 = (void *)(v9 + 16 * ((unsigned int)v11 + 1LL));
  }
  memmove(v13, (const void *)(v5 + 16), v14);
  v12 = *(_BYTE *)(v9 + 3) == 0;
  *(_WORD *)v9 = v11 + *(_WORD *)v5;
  if ( !v12 )
  {
    v16 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v16 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v16, (void **)(v7 + 8));
    v17 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v17 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(v17, (void **)(v7 + 8));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    v5);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
