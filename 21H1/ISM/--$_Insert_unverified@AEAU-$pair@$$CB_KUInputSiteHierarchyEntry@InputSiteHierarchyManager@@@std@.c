/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@1@@Z @ 0x180003498
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800033A8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180003590 (-_Check_size@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_U.c)
 *     ?erase@?$list@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@@Z @ 0x1800F1DF8 (-erase@-$list@U-$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@V-$allocat.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 **v20; // r8
  __int64 **v21; // rax
  __int64 *v22; // rcx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = v8 & a1[6];
  v11 = 2 * v10;
  v12 = a1[3];
  v13 = a1[1];
  v14 = *(_QWORD *)(v12 + 16 * v10);
  if ( v13 != v14 )
  {
    v13 = **(_QWORD **)(v12 + 16 * (v8 & a1[6]) + 8);
    while ( v13 != v14 )
    {
      v13 = *(_QWORD *)(v13 + 8);
      if ( *a3 == *(_QWORD *)(v13 + 16) )
      {
        std::list<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>::erase(
          a1 + 1,
          v23,
          a4);
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v15 = *a4;
  if ( v13 != *a4 )
  {
    *(_QWORD *)a4[1] = v15;
    **(_QWORD **)(v15 + 8) = v13;
    **(_QWORD **)(v13 + 8) = a4;
    v16 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = a4[1];
    a4[1] = v16;
  }
  v17 = a1[3];
  v18 = *(_QWORD *)(v17 + 16 * v10);
  if ( v18 == a1[1] )
  {
    *(_QWORD *)(v17 + 16 * v10) = a4;
    *(_QWORD *)(a1[3] + 16 * v10 + 8) = a4;
  }
  else
  {
    v20 = (__int64 **)(v17 + 16 * v10);
    if ( v18 == v13 )
    {
      *v20 = a4;
    }
    else
    {
      v21 = (__int64 **)v20[1];
      v22 = *v21;
      v20[1] = *v21;
      if ( v22 != a4 )
        *(_QWORD *)(a1[3] + 8 * v11 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v11 + 8) + 8LL);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Check_size(a1);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
