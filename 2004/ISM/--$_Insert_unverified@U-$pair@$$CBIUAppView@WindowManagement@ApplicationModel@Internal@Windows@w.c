/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@1@@Z @ 0x18001B480
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::Invoke @ 0x18001AED0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18001AED0.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180003828 (-erase@-$list@U-$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@st.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180003FF0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA_KXZ @ 0x180005204 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarch.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Insert_unverified<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>>>>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  unsigned __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm1_4
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rcx
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = (0x100000001B3LL
      * (a3[3] ^ (0x100000001B3LL
                * (a3[2] ^ (0x100000001B3LL * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL)))))))) & *((_QWORD *)a1 + 6);
  v8 = 2 * v7;
  v9 = *((_QWORD *)a1 + 3);
  v10 = *((_QWORD *)a1 + 1);
  v11 = *(_QWORD *)(v9 + 16 * v7);
  if ( v10 != v11 )
  {
    v10 = **(_QWORD **)(v9 + 16 * v7 + 8);
    while ( v10 != v11 )
    {
      v10 = *(_QWORD *)(v10 + 8);
      if ( *(_DWORD *)a3 == *(_DWORD *)(v10 + 16) )
      {
        std::list<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>::erase(
          (__int64)(a1 + 2),
          v27,
          (__int64 *)a4);
        *(_QWORD *)a2 = v10;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v12 = *(_QWORD *)a4;
  if ( v10 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v12;
    **(_QWORD **)(v12 + 8) = v10;
    **(_QWORD **)(v10 + 8) = a4;
    v13 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v13;
  }
  v14 = *((_QWORD *)a1 + 3);
  v15 = *(_QWORD *)(v14 + 16 * v7);
  if ( v15 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v14 + 16 * v7) = a4;
    *(_QWORD *)(*((_QWORD *)a1 + 3) + 16 * v7 + 8) = a4;
  }
  else
  {
    v21 = 2 * v7;
    if ( v15 == v10 )
    {
      *(_QWORD *)(v14 + 8 * v21) = a4;
    }
    else
    {
      v25 = *(__int64 **)(v14 + 8 * v21 + 8);
      v26 = *v25;
      *(_QWORD *)(v14 + 8 * v21 + 8) = *v25;
      if ( v26 != a4 )
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v8 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v8 + 8) + 8LL);
    }
  }
  v16 = *((_QWORD *)a1 + 2);
  v17 = *((_QWORD *)a1 + 7);
  if ( v16 < 0 )
  {
    v22 = *((_QWORD *)a1 + 2) & 1LL | ((unsigned __int64)v16 >> 1);
    v18 = (float)(int)v22 + (float)(int)v22;
  }
  else
  {
    v18 = (float)(int)v16;
  }
  if ( v17 < 0 )
  {
    v23 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v17 >> 1);
    v19 = (float)(int)v23 + (float)(int)v23;
  }
  else
  {
    v19 = (float)(int)v17;
  }
  if ( (float)(v18 / v19) > *a1 )
  {
    v24 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Desired_grow_bucket_count((__int64)a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v24);
  }
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
