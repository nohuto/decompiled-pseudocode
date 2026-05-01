/*
 * XREFs of ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18027E4B4
 * Callers:
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18026C4CC (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x180270150 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?IsViewTabbed@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180271420 (-IsViewTabbed@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x180273100 (-OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z.c)
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180274808 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bf3070c3e93852458baa0b42ac380439___::Run @ 0x180276970 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bf3070c3e93852458baa0b42ac380439___--Run.c)
 *     ?TryGetTabForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x18027E470 (-TryGetTabForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z.c)
 *     ?TryGetTabGroupForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18027E590 (-TryGetTabGroupForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@56@@Z @ 0x18027E690 (-TryGetTabGroupForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Inte.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18003C7E4 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x180268444 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 */

__int64 **__fastcall TabViewManager::TryGetTabForViewImpl(__int64 a1, __int64 **a2, unsigned __int64 a3)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 *v6; // rax
  char v7; // bl
  __int64 *v8; // rcx
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  LODWORD(v10) = 0;
  v5 = (RTL_SRWLOCK *)(a1 + 1432);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 1432));
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)(a1 + 1280),
    &v10,
    &v12);
  if ( v10 == *(__int64 **)(a1 + 1280) )
  {
    v6 = &v11;
    v7 = 2;
    v8 = 0LL;
  }
  else
  {
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v10,
      v10[5]);
    v6 = (__int64 *)&v10;
    v7 = 1;
    v8 = v10;
  }
  *v6 = 0LL;
  *a2 = v8;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  }
  if ( (v7 & 1) != 0 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return a2;
}
