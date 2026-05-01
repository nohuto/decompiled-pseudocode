/*
 * XREFs of ?AddItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033BD98
 * Callers:
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18033DEF8 (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?OnTabAdded@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033ECC4 (-OnTabAdded@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18033AC30 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$com_ptr_t@UIShellTab@Tabs@Compos.c)
 *     ?UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x18034103C (-UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@.c)
 *     ?UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803410C0 (-UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windo.c)
 *     ?UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x18034116C (-UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal.c)
 *     ?UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180341230 (-UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ?UpdateTabThumbnail@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803414F8 (-UpdateTabThumbnail@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=2
struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **__fastcall AppViewDataSourceAdapter::AddItemForTab(
        AppViewDataSourceAdapter *this,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  AppViewDataSourceAdapter *v10; // rcx
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rdx
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v22; // rcx
  __int64 v23; // rdi
  __int64 v25; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int64 v27; // [rsp+70h] [rbp+30h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem **v28; // [rsp+78h] [rbp+38h]
  unsigned __int64 *v29; // [rsp+88h] [rbp+48h] BYREF

  v28 = a2;
  *a2 = 0LL;
  v6 = *((_QWORD *)this + 4);
  *a2 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      441LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(*(_QWORD *)*a2 + 88LL))(
         *a2,
         a3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      443LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)*a2 + 120LL))(
         *a2,
         2LL);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      444LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  AppViewDataSourceAdapter::UpdateTabDisplayName(retaddr, a3, *a2);
  AppViewDataSourceAdapter::UpdateTabAppId(this, a3, *a2);
  AppViewDataSourceAdapter::UpdateTabActivationTimestamp(v10, a3, *a2);
  v11 = *a2;
  v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, unsigned __int64 *))(*(_QWORD *)a3 + 176LL))(
          a3,
          &v27);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      510LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  LOBYTE(v13) = v27;
  v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)v11 + 112LL))(
          v11,
          v13);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      511LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  AppViewDataSourceAdapter::UpdateTabIcon(this, a3, *a2);
  AppViewDataSourceAdapter::UpdateTabThumbnail(this, a3, *a2);
  LOBYTE(v15) = 1;
  v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)*a2 + 80LL))(
          *a2,
          v15);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      454LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, _QWORD))(*(_QWORD *)*a2 + 72LL))(
          *a2,
          0LL);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      457LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(**((_QWORD **)this + 4) + 56LL))(
          *((_QWORD *)this + 4),
          *a2);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      460LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v27,
    (__int64)a3);
  v20 = (__int64 *)*((_QWORD *)this + 43);
  v21 = v20[1];
  if ( *(_BYTE *)(v21 + 25) )
    goto LABEL_24;
  do
  {
    if ( *(_QWORD *)(v21 + 32) >= v27 )
    {
      v20 = (__int64 *)v21;
      v21 = *(_QWORD *)v21;
    }
    else
    {
      v21 = *(_QWORD *)(v21 + 16);
    }
  }
  while ( !*(_BYTE *)(v21 + 25) );
  if ( v20 == *((__int64 **)this + 43) || v27 < v20[4] )
  {
LABEL_24:
    v29 = &v27;
    v20 = (__int64 *)*std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>,std::less<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> &&>,std::tuple<>>(
                        (__int64 *)this + 43,
                        &v25,
                        v20,
                        v19,
                        (__int64 **)&v29);
  }
  v22 = *a2;
  v23 = v20[5];
  v20[5] = (__int64)*a2;
  if ( v22 )
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)v22 + 8LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  return a2;
}
