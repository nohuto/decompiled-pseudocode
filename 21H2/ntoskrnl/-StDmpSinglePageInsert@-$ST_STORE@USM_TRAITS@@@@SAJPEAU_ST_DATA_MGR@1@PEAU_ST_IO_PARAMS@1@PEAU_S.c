/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1403800F0
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14037FDA0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140237D58 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140237ED8 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140237F80 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmEtwEnabled @ 0x140261818 (SmEtwEnabled.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14038032C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1403803F8 (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140380708 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140380900 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140380E44 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140381130 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140381A7C (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140381C90 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140381E98 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     SmEtwLogStoreOp @ 0x1405FB4F4 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  int v5; // ecx
  char v6; // bl
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // r13d
  int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // r8d
  ULONGLONG *v16; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF
  _BYTE *v21; // [rsp+88h] [rbp+10h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF

  v21 = (_BYTE *)a2;
  v3 = a1 + 24;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 1;
  if ( (v5 & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      v3);
    v5 = *(_DWORD *)(v3 + 32);
  }
  *(_DWORD *)(v3 + 32) = v5 & 0xFFFFFFFE;
  v9 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
    v9 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v9 & 0xFFFFFFFE;
  v10 = *(_DWORD *)(a1 + 184);
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
    v10 = *(_DWORD *)(a1 + 184);
    v6 = 1;
  }
  v22 = 0LL;
  *(_DWORD *)(a1 + 184) = v10 & 0xFFFFFFFE;
  v11 = ((unsigned int)a3 - ((a3 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464)
      + (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  LODWORD(v22) = *(_DWORD *)(a2 + 16);
  HIDWORD(v22) = v11;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    a1,
    (unsigned int)v22,
    v3);
  v12 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
          a1,
          v3,
          &v22);
  if ( v12 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v13 = *(_DWORD *)(a3 + 4) + 4096;
      *(_DWORD *)(a3 + 4) = v13;
      v14 = v13 >> 12;
      if ( v14 > 1 )
        return 0;
      if ( !v14 )
        __int2c();
    }
    v20 = v11;
    v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
            a1 + 64,
            &v20,
            a1 + 88);
    if ( v12 >= 0 )
    {
      v6 = 3;
      if ( *(_BYTE *)(a1 + 776) )
      {
LABEL_16:
        v15 = 4096;
        if ( (*(_DWORD *)(a3 + 4) & 0xFFF) != 0 )
          v15 = *(_DWORD *)(a3 + 4) & 0xFFF;
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
          a1,
          (unsigned int)(*(_DWORD *)a3 >> *(_DWORD *)(a1 + 812)),
          (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v15) >> 4,
          0LL);
        v16 = SmEtwEnabled(0);
        if ( v16 )
          SmEtwLogStoreOp(
            (_DWORD)v16,
            0,
            (unsigned int)&v22,
            (_DWORD)v16,
            *(_DWORD *)a3,
            a1,
            *(_WORD *)(a3 + 4),
            (2 * (*v21 & 7)) | ((*(_DWORD *)v21 & 0x40000000) != 0));
        return 0;
      }
      v20 = v11;
      v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 128,
              v11,
              a1 + 152);
      if ( v12 == -1073741275 )
      {
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
                a1 + 128,
                a1 + 152,
                &v20);
        if ( v12 >= 0 )
          goto LABEL_16;
      }
      else if ( v12 >= 0 )
      {
        v12 = -1073741484;
      }
    }
    v18 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            v3);
    if ( v18 < 0 )
    {
      if ( v18 != -1073741818 )
        __int2c();
      v12 = v18;
    }
    if ( (v6 & 2) != 0 )
    {
      v19 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
              a1 + 64,
              a1 + 88);
      if ( v19 < 0 )
      {
        if ( v19 != -1073741818 )
          __int2c();
        return (unsigned int)v19;
      }
    }
  }
  return (unsigned int)v12;
}
