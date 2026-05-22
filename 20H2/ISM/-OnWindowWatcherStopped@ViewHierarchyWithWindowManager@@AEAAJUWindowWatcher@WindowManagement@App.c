/*
 * XREFs of ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800BDF6C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_24c2e9d7bdf14833e820dba9efe6491e___::Invoke @ 0x1800BDE00 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1800BDE00.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B29C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@Z @ 0x1800337D0 (--$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ??$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@Z @ 0x1800338F0 (--$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180038114 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180038A98 (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD00C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x1800BE1C4 (-clear@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHierarchyWithWindowManager::OnWindowWatcherStopped(__int64 *a1, __int64 *a2, __int64 *a3)
{
  signed int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+68h] [rbp+48h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a2 + 144LL))(*a2, &v14);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  if ( (_DWORD)v14 == 5 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::clear(a1 + 7);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::clear(a1 + 15);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<_lambda_3c84e564eb869bfeecbf9f03c102acb2_ &>(
      v7,
      &v14);
    if ( a1 == &v14 )
    {
      v9 = v14;
    }
    else
    {
      if ( *a1 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
      v8 = v14;
      v9 = 0LL;
      v14 = 0LL;
      *a1 = v8;
    }
    if ( v9 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v14);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_a0948b4265dfdd13ae56361479f20a08_ &>(
      v8,
      (__int64)&v14);
    v10 = a1 + 1;
    if ( a1 + 1 == &v14 )
    {
      v12 = v14;
    }
    else
    {
      if ( *v10 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1 + 1);
      v11 = v14;
      v12 = 0LL;
      v14 = 0LL;
      *v10 = v11;
    }
    if ( v12 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v14);
    ViewHierarchyWithWindowManager::StartWindowWatcher((ViewHierarchyWithWindowManager *)a1);
    ViewHierarchyWithWindowManager::StartAppViewWatcher((ViewHierarchyWithWindowManager *)a1);
  }
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}
