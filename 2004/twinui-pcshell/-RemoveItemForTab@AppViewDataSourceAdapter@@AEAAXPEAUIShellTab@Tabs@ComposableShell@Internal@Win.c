/*
 * XREFs of ?RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033FFC0
 * Callers:
 *     ?OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18033EE10 (-OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal.c)
 *     ?OnTabRemoved@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033F068 (-OnTabRemoved@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x180268D64 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@@Z @ 0x180281504 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@.c)
 */

void __fastcall AppViewDataSourceAdapter::RemoveItemForTab(
        __int64 **this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  __int64 *v3; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+40h] [rbp+18h] BYREF

  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v6,
    (__int64)a2);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    this + 43,
    &v7,
    (unsigned __int64 *)&v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v6);
  v3 = v7;
  if ( v7 != this[43] )
  {
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*this[4] + 64))(this[4], v7[5]);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        471LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::erase(
      this + 43,
      &v6,
      v3);
  }
}
