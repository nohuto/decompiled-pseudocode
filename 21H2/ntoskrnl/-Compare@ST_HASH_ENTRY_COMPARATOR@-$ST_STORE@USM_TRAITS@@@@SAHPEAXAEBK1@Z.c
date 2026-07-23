/*
 * XREFs of ?Compare@ST_HASH_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x14021EEB0
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028C574 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeNodeFindKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x14028C6AC (-BTreeNodeFindKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HAS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // r14d
  int v5; // ecx
  unsigned int v6; // r15d
  __int64 v7; // r10
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r11
  unsigned int v13; // r9d
  unsigned int v14; // eax

  v3 = *a2;
  v5 = a1[82];
  v6 = *a3;
  v7 = *a2 >> v5;
  v8 = a1[84];
  v9 = (unsigned int)a1[86];
  v10 = *a3 >> v5;
  _BitScanReverse((unsigned int *)&v11, v7);
  _BitScanReverse((unsigned int *)&v12, v10);
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v11 + 16] + 16 * (v7 ^ (unsigned int)(1 << v11)))
                  + v8 * (*a2 & a1[83])
                  + v9
                  + 8);
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v12 + 16] + 16 * (v10 ^ (unsigned int)(1 << v12)))
                  + v8 * (v6 & a1[83])
                  + v9
                  + 8);
  if ( v13 < v14 )
    return 0xFFFFFFFFLL;
  if ( v13 > v14 || v3 > v6 )
    return 1LL;
  if ( v3 < v6 )
    return 0xFFFFFFFFLL;
  else
    return 0LL;
}
