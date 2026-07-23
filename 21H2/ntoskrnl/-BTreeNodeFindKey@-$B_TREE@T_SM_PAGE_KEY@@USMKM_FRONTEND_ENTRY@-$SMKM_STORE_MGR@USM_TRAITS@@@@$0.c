/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@T_SM_PAGE_KEY@@@Z @ 0x14028A010
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140289EDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFindKey(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3)
{
  _DWORD *v3; // r11
  __int64 result; // rax
  int v5; // r9d
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // r10d
  unsigned int v9; // edx
  unsigned int v10; // r10d
  int v11; // ecx

  v3 = a2 + 4;
  result = (unsigned __int16)*a2;
  v5 = -1;
  if ( HIBYTE(*a2) )
  {
    if ( (unsigned __int16)*a2 )
    {
      do
      {
        v6 = (unsigned int)(result + v5) >> 1;
        v7 = v3[2 * v6];
        if ( v7 >= a3 )
          v8 = v7 != a3;
        else
          v8 = -1;
        if ( v8 >= 0 )
        {
          result = v6;
          v6 = v5;
        }
        v5 = v6;
      }
      while ( v6 + 1 != (_DWORD)result );
    }
  }
  else if ( (unsigned __int16)*a2 )
  {
    do
    {
      v9 = (unsigned int)(result + v5) >> 1;
      v10 = v3[4 * v9];
      if ( v10 >= a3 )
        v11 = v10 != a3;
      else
        v11 = -1;
      if ( v11 > 0 )
      {
        result = v9;
        v9 = v5;
      }
      v5 = v9;
    }
    while ( v9 + 1 != (_DWORD)result );
  }
  return result;
}
