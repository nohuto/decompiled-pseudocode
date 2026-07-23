/*
 * XREFs of ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140290F58
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028EDE8 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14038B800 (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  _QWORD *i; // r9
  unsigned __int64 v5; // rdx

  for ( i = (_QWORD *)(*(_QWORD *)a1 + 16 * (*(unsigned int *)(a1 + 24) - 2LL)); ; i -= 2 )
  {
    if ( (unsigned __int64)i < *(_QWORD *)a1 )
      return 0LL;
    if ( a2 )
      break;
    v5 = i[1];
    if ( v5 > *i + 16LL )
    {
      *a3 = *i;
      a3[1] = v5 - 16;
      return 1LL;
    }
LABEL_5:
    ;
  }
  if ( i[1] >= *i + 16 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)*i + 1) )
    goto LABEL_5;
  *(_OWORD *)a3 = *(_OWORD *)i;
  return 1LL;
}
