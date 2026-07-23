/*
 * XREFs of ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14059CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14028841C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14028D0A4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028D238 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafPageOut(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 1) == 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      *(char ***)(*(_QWORD *)a1 + 128LL),
      v4 + 24);
    v5 = *(_DWORD *)(v4 + 56);
  }
  *(_DWORD *)(v4 + 56) = v5 | 1;
  do
  {
    v6 = v2[13];
    if ( v6 == v2[15] )
      v7 = v2[14];
    else
      v7 = v6 + 1;
    v2[13] = v7;
  }
  while ( (unsigned int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
                          (char **)v4,
                          4 * (int)v6,
                          v4 + 24) != -1073741275 );
  v8 = *(_DWORD *)(v4 + 820);
  v9 = 0LL;
  v11[1] = a2;
  v11[0] = 0LL;
  v13 = 0;
  v12 = 4 * v6;
  v14 = v8;
  if ( (int)ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(v4, (__int64)v11, 0LL, &v14) >= 0 )
    return 4 * v6;
  return v9;
}
