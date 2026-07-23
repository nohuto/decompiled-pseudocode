/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14028DFD8
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B0E4 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x14024F608 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402928CC (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059A508 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14027556C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14028C1BC (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14028C814 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14028CB3C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14028CD48 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14028E5B0 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14028E768 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14028F0D8 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14029021C (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140290260 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140290308 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405983C4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  _WORD *v9; // rax
  int v10; // r13d
  _QWORD *v11; // rsi
  int v12; // ecx
  _DWORD *v13; // r14
  int v14; // ebx
  unsigned __int64 v15; // r15
  unsigned int *v16; // r12
  __int64 v17; // rax
  unsigned int *LeafSibling; // rax
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v24; // rbx
  int *v25; // rbx
  int v26; // r9d
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r11d
  size_t v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // r14
  int v34; // eax
  int v35; // edx
  int *v36; // r14
  unsigned int v37; // r15d
  int v38; // eax
  int v39; // eax
  __int64 v40; // r8
  int v41; // eax
  int v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+24h] [rbp-DCh]
  int v45; // [rsp+28h] [rbp-D8h]
  unsigned int v46; // [rsp+2Ch] [rbp-D4h]
  unsigned int v47; // [rsp+30h] [rbp-D0h]
  unsigned int v48; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v49; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-B0h]
  _WORD *v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  int *v54; // [rsp+68h] [rbp-98h]
  _WORD *v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  _QWORD v57[22]; // [rsp+80h] [rbp-80h] BYREF

  v7 = a3;
  v53 = a2;
  v50 = a3;
  v46 = a5;
  v51 = a4;
  memset(v57, 0, 0xA8uLL);
  v8 = *(_QWORD *)(a1 + 1032);
  v44 = 0;
  v49 = 0LL;
  v9 = (_WORD *)(v8 + 2LL * a5);
  v55 = (_WORD *)(v8 + 2 * v7);
  v52 = v9;
  if ( v55 == v9 )
    v10 = 0;
  else
    v10 = *v9 & 0x1FFF;
  v43 = v10;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  v11 = (_QWORD *)(a1 + 88);
  v12 = *(_DWORD *)(a1 + 120);
  v13 = (_DWORD *)(a1 + 64);
  v56 = a1 + 64;
  if ( (v12 & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (_DWORD *)(a1 + 64),
      a1 + 88);
    v12 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v12 & 0xFFFFFFFE;
  **(_DWORD **)(a1 + 760) = (_DWORD)v7 << *(_DWORD *)(a1 + 812);
  v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          (_DWORD *)(a1 + 64),
          *(_DWORD *)(a1 + 768),
          a1 + 88);
  if ( v14 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      a1 + 64,
      &v49,
      a1 + 88);
    v15 = *((_QWORD *)&v49 + 1);
    v16 = (unsigned int *)v49;
    while ( 1 )
    {
      if ( v44 )
      {
        **(_DWORD **)(a1 + 760) = v50 << *(_DWORD *)(a1 + 812);
        v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                v13,
                *(_DWORD *)(a1 + 768),
                a1 + 88);
        if ( v14 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          &v49,
          v13);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
          v13,
          &v49,
          a1 + 88);
        v15 = *((_QWORD *)&v49 + 1);
        v16 = (unsigned int *)v49;
      }
      if ( !v16 )
      {
LABEL_51:
        v14 = 0;
        break;
      }
      v15 += 4LL;
      v17 = (unsigned __int16)*v16 + 4LL;
      *((_QWORD *)&v49 + 1) = v15;
      if ( v15 < (unsigned __int64)&v16[v17] )
        goto LABEL_12;
      if ( **(_DWORD **)((unsigned __int64)(v13 + 4) & -(__int64)(v13 != 0LL)) == -1 )
      {
        LeafSibling = (unsigned int *)*((_QWORD *)v16 + 1);
      }
      else
      {
        LeafSibling = (unsigned int *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                                        v13,
                                        v16);
        if ( LeafSibling == (unsigned int *)-1LL )
          goto LABEL_13;
      }
      if ( LeafSibling )
      {
        v15 = (unsigned __int64)(LeafSibling + 4);
        *(_QWORD *)&v49 = LeafSibling;
        *((_QWORD *)&v49 + 1) = LeafSibling + 4;
        v16 = LeafSibling;
LABEL_12:
        LeafSibling = (unsigned int *)v15;
      }
LABEL_13:
      if ( LeafSibling == (unsigned int *)-1LL )
        goto LABEL_66;
      if ( !LeafSibling )
        goto LABEL_51;
      v19 = *LeafSibling;
      v20 = *(_DWORD *)(a1 + 464) * (*LeafSibling & *(_DWORD *)(a1 + 460));
      v21 = v19 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v22, v21);
      v48 = v19;
      v23 = *(_DWORD *)(a1 + 808);
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22)));
      LODWORD(v22) = *(_DWORD *)(a1 + 812);
      v25 = (int *)(*(unsigned int *)(a1 + 472) + v20 + v24);
      v54 = v25;
      v26 = *v25 & v23;
      if ( (unsigned int)*v25 >> v22 != v50 )
        goto LABEL_51;
      v27 = 4096;
      v28 = *(_DWORD *)(a1 + 824);
      v29 = v46;
      if ( (v25[1] & 0xFFF) != 0 )
        v27 = v25[1] & 0xFFF;
      v47 = (unsigned int)(v27 + v28 + 15) >> 4;
      v30 = (-*(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) & (unsigned int)(v27
                                                                       + *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL)
                                                                       - 1))
          + v28;
      if ( v46 == v50 || v47 + (*v52 & 0x1FFF) <= *(_DWORD *)(a1 + 816) )
      {
        v31 = v51;
      }
      else
      {
        v10 = 0;
        v31 = v53;
        v29 = v50;
        v44 = 0;
        v52 = v55;
        v51 = v53;
        v43 = 0;
        v46 = v50;
      }
      if ( v26 != v10 || v50 != v29 )
      {
        if ( !v31 )
        {
          v14 = -1073741802;
          break;
        }
        memmove((void *)(v31 + (unsigned int)(16 * v10)), (const void *)(v53 + (unsigned int)(16 * v26)), v30);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v25);
        v32 = a1 + 96;
        v33 = a1 + 96;
        v34 = *(_DWORD *)(a1 + 112);
        v35 = v10 | (v46 << *(_DWORD *)(a1 + 812));
        v45 = v35;
        if ( v34 != -1 && v34 )
          v33 = *v11 + 16LL * (unsigned int)(v34 - 1);
        if ( *(unsigned int **)v33 == v16 )
        {
          *(_QWORD *)(v33 + 8) = v15;
        }
        else
        {
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (_DWORD *)(a1 + 64),
            a1 + 88);
          if ( *(_DWORD *)(a1 + 112) == -1 )
          {
            *(_OWORD *)v33 = v49;
          }
          else
          {
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              (_DWORD *)(a1 + 64),
              v16[4],
              a1 + 88);
            v41 = *(_DWORD *)(a1 + 112);
            if ( v41 != -1 && v41 )
              v32 = *v11 + 16LL * (unsigned int)(v41 - 1);
            *(_QWORD *)(v32 + 8) = v15;
          }
          v35 = v45;
        }
        if ( v44 )
        {
LABEL_27:
          v36 = v54;
          **(_DWORD **)(a1 + 760) = *v54;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            *(unsigned int *)(a1 + 768));
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
            &v49,
            a1 + 64);
          v37 = v48;
          *v36 = v45;
          v48 = v37;
          v57[0] = &v57[5];
          v49 = 0LL;
          v57[1] = 0LL;
          v57[2] = 0LL;
          v57[4] = 0LL;
          v57[3] = 0x800000000LL;
          v14 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
                  a1 + 64,
                  &v48,
                  (__int64)v57);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
            a1 + 64,
            v57,
            1LL);
          if ( v14 < 0 )
          {
            *v36 = **(_DWORD **)(a1 + 760);
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
              a1 + 64,
              a1 + 88,
              v37);
            break;
          }
          v38 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDelete(
                  a1 + 64,
                  *(unsigned int *)(a1 + 768),
                  a1 + 88);
          v14 = v38;
          if ( v38 < 0 )
          {
            if ( v38 == -1073741818 )
              break;
            __int2c();
          }
          v15 = *((_QWORD *)&v49 + 1);
          v16 = (unsigned int *)v49;
        }
        else
        {
          **(_DWORD **)(a1 + 760) = v35;
          v39 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
                  a1 + 64,
                  a1 + 88,
                  *(unsigned int *)(a1 + 768));
          if ( !v39 )
          {
            v44 = 1;
            goto LABEL_27;
          }
          if ( v39 == -1 )
          {
LABEL_66:
            v14 = -1073741818;
            break;
          }
          v40 = v48;
          *v54 = v45;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            v40);
        }
        if ( v50 != v46 )
        {
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v50, -v47, 1);
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v46, v47, 0);
        }
        v10 = v43;
        v13 = (_DWORD *)(a1 + 64);
      }
      v10 += v47;
      v43 = v10;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL) != 2 )
      {
        v14 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    &v49,
    v56);
  return (unsigned int)v14;
}
