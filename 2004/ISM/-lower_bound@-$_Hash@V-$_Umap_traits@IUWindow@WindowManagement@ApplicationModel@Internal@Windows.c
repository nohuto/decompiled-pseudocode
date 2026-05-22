/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18000D4C0
 * Callers:
 *     ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180003670 (-OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@Applicatio.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_95b2e7e0ed422bec234fdc177c39fe17___::Invoke @ 0x18001B090 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18001B090.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BCE70 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // r9
  __int64 v13; // r8
  __int64 *i; // rax
  __int64 *v15; // rcx

  v6 = a3[2] ^ (0x100000001B3LL * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL))));
  v7 = a3[3];
  v8 = a1[6];
  v9 = a1[3];
  v10 = (__int64 *)a1[1];
  v11 = 16 * ((0x100000001B3LL * (v7 ^ (0x100000001B3LL * v6))) & v8);
  v12 = *(__int64 **)(v9 + v11);
  v13 = v9 + v11;
  for ( i = v12; ; i = (__int64 *)*i )
  {
    if ( v12 == v10 )
      v15 = v10;
    else
      v15 = **(__int64 ***)(v13 + 8);
    if ( i == v15 )
    {
      *a2 = v10;
      return a2;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  *a2 = i;
  return a2;
}
