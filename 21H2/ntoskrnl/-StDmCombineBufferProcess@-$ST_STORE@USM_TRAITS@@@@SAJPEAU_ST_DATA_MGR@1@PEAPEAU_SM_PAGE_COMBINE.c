/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1402903D4
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14028D31C (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140245270 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x14024E110 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028CB3C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028CD48 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028D574 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14029021C (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x140290E5C (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402911E4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(
        __int64 a1,
        unsigned __int16 **a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  unsigned __int16 *v8; // rdx
  int v9; // eax
  int v10; // edi
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rdi
  int v13; // ecx
  int v14; // r14d
  unsigned __int16 *v15; // r14
  char *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD *PreviousEntry; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // r15
  __int128 v25; // [rsp+20h] [rbp-60h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-40h]
  _QWORD v28[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v29; // [rsp+58h] [rbp-28h]
  __int128 v30; // [rsp+68h] [rbp-18h]

  v4 = a1 + 88;
  v6 = *(_QWORD *)(a1 + 800);
  v8 = *a2;
  v26 = 0LL;
  DWORD2(v26) = -1;
  v27 = 1LL;
  v25 = 0LL;
  if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
  {
    v28[1] = v8;
    v28[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v29 = 0LL;
    v30 = 0LL;
    v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
           v6,
           5LL,
           v28,
           12LL,
           v25,
           *((_QWORD *)&v25 + 1),
           v26,
           *((_QWORD *)&v26 + 1),
           v27);
    v10 = v9;
    if ( v9 )
    {
      if ( v9 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v10 = DWORD2(v30);
    }
  }
  else
  {
    v10 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v6 + 6232, v8, 0LL, a4);
  }
  if ( v10 >= 0 )
  {
    v11 = *a2;
    v12 = v11 + 4;
    v13 = *(_DWORD *)(v4 + 32);
    v14 = (*((_DWORD *)v11 + 2) >> 4) | (*(_DWORD *)v11 << *(_DWORD *)(a1 + 812));
    if ( (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (_DWORD *)(a1 + 64),
        v4);
      v13 = *(_DWORD *)(v4 + 32);
    }
    *(_DWORD *)(v4 + 32) = v13 & 0xFFFFFFFE;
    **(_DWORD **)(a1 + 760) = v14;
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                v4,
                a1 + 64,
                *(_DWORD *)(a1 + 768)) < 0 )
      __int2c();
    v15 = (unsigned __int16 *)((char *)v11 + v11[3]);
    while ( v12 < v15 )
    {
      if ( *((_BYTE *)v12 + 7) < 0x10u )
      {
        *(_DWORD *)v12 >>= 4;
        do
        {
          PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                      a1 + 64,
                                      v4);
          v21 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v22, v21);
          v23 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & *PreviousEntry))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22))));
        }
        while ( (*v23 & *(_DWORD *)(a1 + 808)) != *(_DWORD *)v12 );
        if ( (v23[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)&v12[4 * *((unsigned __int8 *)v12 + 7) + 4] << *(_DWORD *)(a1 + 812)) | (*(_DWORD *)&v12[4 * *((unsigned __int8 *)v12 + 7) + 6] >> 4);
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      (_DWORD *)(a1 + 64),
                      *(_DWORD *)(a1 + 768),
                      (__int64)&v25) >= 0 )
          {
            if ( DWORD2(v26) == -1 || !DWORD2(v26) )
              v16 = (char *)&v25 + 8;
            else
              v16 = (char *)(v25 + 16LL * (unsigned int)(DWORD2(v26) - 1));
            v17 = (_DWORD *)*((_QWORD *)v16 + 1);
            v18 = (unsigned int)(*v17 >> *(_DWORD *)(a1 + 456));
            _BitScanReverse((unsigned int *)&v19, v18);
            if ( (*(_DWORD *)(*(unsigned int *)(a1 + 472)
                            + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v17 & *(_DWORD *)(a1 + 460)))
                            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v19 + 192) + 16 * (v18 ^ (unsigned int)(1 << v19)))
                            + 4LL) & 0xFFFFF000) != 0xFFFFF000 )
              ST_STORE<SM_TRAITS>::StDmCombinePageRecords(a1, v23, v4);
          }
        }
      }
      v12 += 4 * *((unsigned __int8 *)v12 + 6) + 4;
    }
    v10 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    (_DWORD *)(a1 + 64),
    (__int64)&v25,
    0);
  return (unsigned int)v10;
}
