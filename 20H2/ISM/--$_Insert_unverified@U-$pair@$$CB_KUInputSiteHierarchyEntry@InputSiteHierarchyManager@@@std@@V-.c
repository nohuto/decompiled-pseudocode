/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@1@@Z @ 0x180014FD0
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180004264 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U.c)
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015650 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180003398 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA_KXZ @ 0x1800051F4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarch.c)
 *     ?erase@?$list@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@@Z @ 0x1800F18A8 (-erase@-$list@U-$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V-$allocat.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>>>>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 **v26; // rax
  __int64 *v27; // rcx
  _BYTE v28[40]; // [rsp+20h] [rbp-28h] BYREF

  v8 = (0x100000001B3LL
      * (a3[7] ^ (0x100000001B3LL
                * (a3[6] ^ (0x100000001B3LL
                          * (a3[5] ^ (0x100000001B3LL
                                    * (a3[4] ^ (0x100000001B3LL
                                              * (a3[3] ^ (0x100000001B3LL
                                                        * (a3[2] ^ (0x100000001B3LL
                                                                  * (a3[1] ^ (0x100000001B3LL
                                                                            * (*a3 ^ 0xCBF29CE484222325uLL)))))))))))))))) & *((_QWORD *)a1 + 6);
  v9 = 2 * v8;
  v10 = *((_QWORD *)a1 + 3);
  v11 = *((_QWORD *)a1 + 1);
  v12 = *(_QWORD *)(v10 + 16 * v8);
  if ( v11 != v12 )
  {
    v11 = **(_QWORD **)(v10 + 16 * v8 + 8);
    while ( v11 != v12 )
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)a3 == *(_QWORD *)(v11 + 16) )
      {
        std::list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>::erase(
          a1 + 2,
          v28,
          a4);
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v13 = *a4;
  if ( v11 != *a4 )
  {
    *(_QWORD *)a4[1] = v13;
    **(_QWORD **)(v13 + 8) = v11;
    **(_QWORD **)(v11 + 8) = a4;
    v14 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a4[1];
    a4[1] = v14;
  }
  v15 = *((_QWORD *)a1 + 3);
  v16 = *(_QWORD *)(v15 + 16 * v8);
  if ( v16 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v15 + 16 * v8) = a4;
    *(_QWORD *)(*((_QWORD *)a1 + 3) + 16 * v8 + 8) = a4;
  }
  else
  {
    v22 = 2 * v8;
    if ( v16 == v11 )
    {
      *(_QWORD *)(v15 + 8 * v22) = a4;
    }
    else
    {
      v26 = *(__int64 ***)(v15 + 8 * v22 + 8);
      v27 = *v26;
      *(_QWORD *)(v15 + 8 * v22 + 8) = *v26;
      if ( v27 != a4 )
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v9 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v9 + 8) + 8LL);
    }
  }
  v17 = *((_QWORD *)a1 + 2);
  v18 = *((_QWORD *)a1 + 7);
  if ( v17 < 0 )
  {
    v24 = *((_QWORD *)a1 + 2) & 1LL | ((unsigned __int64)v17 >> 1);
    v19 = (float)(int)v24 + (float)(int)v24;
  }
  else
  {
    v19 = (float)(int)v17;
  }
  if ( v18 < 0 )
  {
    v25 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v18 >> 1);
    v20 = (float)(int)v25 + (float)(int)v25;
  }
  else
  {
    v20 = (float)(int)v18;
  }
  if ( (float)(v19 / v20) > *a1 )
  {
    v23 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Desired_grow_bucket_count((__int64)a1);
    std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Forced_rehash(
      a1,
      v23);
  }
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
