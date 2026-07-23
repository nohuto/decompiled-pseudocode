/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x14028CC88
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028CB3C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 * Callees:
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x14021F870 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        _DWORD *a1,
        __int64 a2,
        int a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax
  int v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = -1;
  v6 = (unsigned __int16)*(_DWORD *)a2;
  if ( *(_BYTE *)(a2 + 3) )
  {
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      v10 = a3;
      do
      {
        v11 = *(_DWORD *)(a2 + 4LL * ((v6 + v3) >> 1) + 16);
        LOBYTE(v7) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v11, &v10);
        if ( v7 >= 0 )
          v6 = (v6 + v3) >> 1;
        else
          v3 = (v6 + v3) >> 1;
      }
      while ( v3 + 1 != v6 );
    }
  }
  else if ( (unsigned __int16)*(_DWORD *)a2 )
  {
    v10 = a3;
    do
    {
      v11 = *(_DWORD *)(a2 + 16LL * ((v6 + v3) >> 1) + 16);
      LOBYTE(v9) = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v11, &v10);
      if ( v9 > 0 )
        v6 = (v6 + v3) >> 1;
      else
        v3 = (v6 + v3) >> 1;
    }
    while ( v3 + 1 != v6 );
  }
  return v6;
}
