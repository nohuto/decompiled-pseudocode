/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x14028C6AC
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028C574 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 * Callees:
 *     ?Compare@ST_HASH_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x14021EEB0 (-Compare@ST_HASH_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = -1;
  v6 = (unsigned __int16)*(_DWORD *)a2;
  if ( *(_BYTE *)(a2 + 3) )
  {
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      v8 = a3;
      do
      {
        v9 = *(_DWORD *)(a2 + 4LL * ((v6 + v3) >> 1) + 16);
        if ( (int)ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(a1, &v9, &v8) >= 0 )
          v6 = (v6 + v3) >> 1;
        else
          v3 = (v6 + v3) >> 1;
      }
      while ( v3 + 1 != v6 );
    }
  }
  else if ( (unsigned __int16)*(_DWORD *)a2 )
  {
    v8 = a3;
    do
    {
      v9 = *(_DWORD *)(a2 + 16LL * ((v6 + v3) >> 1) + 16);
      if ( (int)ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(a1, &v9, &v8) > 0 )
        v6 = (v6 + v3) >> 1;
      else
        v3 = (v6 + v3) >> 1;
    }
    while ( v3 + 1 != v6 );
  }
  return v6;
}
