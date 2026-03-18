/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1402C4380
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402C53BC (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1402C4660 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402C5614 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1402C6BF0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402C6DFC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1402C8314 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x1402C86B8 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402C8BCC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140317A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  int v11; // ecx
  int v12; // r14d
  unsigned __int64 v13; // r14
  char *v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *PreviousEntry; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r15
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  __int128 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-40h]
  _QWORD v26[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v27; // [rsp+58h] [rbp-28h]
  __int128 v28; // [rsp+68h] [rbp-18h]

  v2 = a1 + 88;
  v4 = *(_QWORD *)(a1 + 800);
  v6 = *a2;
  v24 = 0LL;
  DWORD2(v24) = -1;
  v25 = 1LL;
  v23 = 0LL;
  if ( (*(_BYTE *)(v4 + 6021) & 4) != 0 )
  {
    v26[1] = v6;
    v26[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v27 = 0LL;
    v28 = 0LL;
    v7 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v4, 5LL, v26);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v8 = DWORD2(v28);
    }
  }
  else
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v4 + 6232, v6, 0LL);
  }
  if ( v8 >= 0 )
  {
    v9 = *a2;
    v10 = v9 + 8;
    v11 = *(_DWORD *)(v2 + 32);
    v12 = (*(_DWORD *)(v9 + 8) >> 4) | (*(_DWORD *)v9 << *(_DWORD *)(a1 + 812));
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        a1 + 64,
        v2);
      v11 = *(_DWORD *)(v2 + 32);
    }
    *(_DWORD *)(v2 + 32) = v11 & 0xFFFFFFFE;
    **(_DWORD **)(a1 + 760) = v12;
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                v2,
                a1 + 64,
                *(unsigned int *)(a1 + 768)) < 0 )
      __int2c();
    v13 = v9 + *(unsigned __int16 *)(v9 + 6);
    while ( v10 < v13 )
    {
      if ( *(_BYTE *)(v10 + 7) < 0x10u )
      {
        *(_DWORD *)v10 >>= 4;
        do
        {
          PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                      a1 + 64,
                                      v2);
          v19 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v20, v19);
          v21 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & *PreviousEntry))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v19 ^ (unsigned int)(1 << v20))));
        }
        while ( (*v21 & *(_DWORD *)(a1 + 808)) != *(_DWORD *)v10 );
        if ( (v21[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)(v10 + 8LL * *(unsigned __int8 *)(v10 + 7) + 8) << *(_DWORD *)(a1 + 812)) | (*(_DWORD *)(v10 + 8LL * *(unsigned __int8 *)(v10 + 7) + 12) >> 4);
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      a1 + 64,
                      *(unsigned int *)(a1 + 768),
                      &v23) >= 0 )
          {
            if ( DWORD2(v24) == -1 || !DWORD2(v24) )
              v14 = (char *)&v23 + 8;
            else
              v14 = (char *)(v23 + 16LL * (unsigned int)(DWORD2(v24) - 1));
            v15 = (_DWORD *)*((_QWORD *)v14 + 1);
            v16 = (unsigned int)(*v15 >> *(_DWORD *)(a1 + 456));
            _BitScanReverse((unsigned int *)&v17, v16);
            if ( (*(_DWORD *)(*(unsigned int *)(a1 + 472)
                            + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v15 & *(_DWORD *)(a1 + 460)))
                            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17)))
                            + 4LL) & 0xFFFFF000) != 0xFFFFF000 )
              ST_STORE<SM_TRAITS>::StDmCombinePageRecords(a1, v21, v2);
          }
        }
      }
      v10 += 8LL * *(unsigned __int8 *)(v10 + 6) + 8;
    }
    v8 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    &v23,
    0LL);
  return (unsigned int)v8;
}
