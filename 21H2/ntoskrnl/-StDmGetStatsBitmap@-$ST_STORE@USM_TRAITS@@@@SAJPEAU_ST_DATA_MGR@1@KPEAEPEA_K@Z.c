/*
 * XREFs of ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x14059B8BC
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14024A6F4 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14027556C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028CB3C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028CD48 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028D238 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14028E768 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140290260 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405983C4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  _DWORD *LeafSibling; // rax
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // r8d
  signed int v26; // r10d
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char v29; // cl
  _OWORD v31[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  v31[0] = 0LL;
  if ( *(_QWORD *)(a1 + 72) )
  {
    v9 = *(_DWORD *)(a1 + 56);
    if ( (v9 & 1) == 0 )
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (char **)a1,
        a1 + 24);
      v9 = *(_DWORD *)(a1 + 56);
    }
    *(_DWORD *)(a1 + 56) = v9 | 1;
    v10 = *(_DWORD *)(a1 + 120);
    if ( (v10 & 1) == 0 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (_DWORD *)(a1 + 64),
        a1 + 88);
      v10 = *(_DWORD *)(a1 + 120);
    }
    *(_DWORD *)(a1 + 120) = v10 | 1;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
    **(_DWORD **)(a1 + 760) = 0;
    v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            (_DWORD *)(a1 + 64),
            *(_DWORD *)(a1 + 768),
            a1 + 88);
    if ( v11 != -1073741818 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        (unsigned __int8 **)(a1 + 64),
        (__int64)v31,
        a1 + 88);
      v12 = *((_QWORD *)&v31[0] + 1);
      v13 = *(_QWORD *)&v31[0];
      while ( 1 )
      {
        if ( !v13 )
          goto LABEL_28;
        v12 += 4LL;
        v14 = (unsigned __int16)*(_DWORD *)v13 + 4LL;
        *((_QWORD *)&v31[0] + 1) = v12;
        if ( v12 < v13 + 4 * v14 )
          goto LABEL_17;
        if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
        {
          LeafSibling = *(_DWORD **)(v13 + 8);
        }
        else
        {
          LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                                    a1 + 64,
                                    v13);
          if ( LeafSibling == (_DWORD *)-1LL )
            goto LABEL_18;
        }
        if ( LeafSibling )
        {
          v12 = (unsigned __int64)(LeafSibling + 4);
          *(_QWORD *)&v31[0] = LeafSibling;
          *((_QWORD *)&v31[0] + 1) = LeafSibling + 4;
          v13 = (__int64)LeafSibling;
LABEL_17:
          LeafSibling = (_DWORD *)v12;
        }
LABEL_18:
        if ( !LeafSibling )
          goto LABEL_28;
        if ( LeafSibling == (_DWORD *)-1LL )
        {
          v11 = -1073741818;
          break;
        }
        v16 = 4096;
        v17 = (unsigned int)(*LeafSibling >> *(_DWORD *)(a1 + 456));
        _BitScanReverse((unsigned int *)&v18, v17);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v18 + 192) + 16 * (v17 ^ (unsigned int)(1 << v18)));
        v20 = 4096LL;
        v21 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*LeafSibling & *(_DWORD *)(a1 + 460))) + v19;
        v22 = *(unsigned int *)(a1 + 472);
        v23 = *(_DWORD *)(v21 + v22 + 4);
        v24 = *(_DWORD *)(v21 + v22);
        v25 = v23 & 0xFFF;
        if ( v25 )
          v20 = v25;
        v4 += v20;
        if ( v25 )
          v16 = v25;
        v26 = (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v16) >> 4;
        v27 = v24 / a2;
        if ( v26 )
        {
          do
          {
            v28 = (unsigned __int64)v27 >> 3;
            v29 = v27++ & 7;
            v26 -= a2;
            *(_BYTE *)(v28 + a3) |= 1 << v29;
          }
          while ( v26 > 0 );
        }
      }
    }
  }
  else
  {
LABEL_28:
    *a4 = v4;
    v11 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)v31,
    (_DWORD *)(a1 + 64));
  return v11;
}
