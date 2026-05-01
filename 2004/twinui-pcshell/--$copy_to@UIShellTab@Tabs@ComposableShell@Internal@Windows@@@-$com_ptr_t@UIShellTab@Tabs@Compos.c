/*
 * XREFs of ??$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180268890
 * Callers:
 *     ?AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationViewTabInsertionContext@ViewManagement@5UI@6@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18026BE10 (-AddAndInsertTabAtDefaultPositionForWindowId@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableS.c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18026C360 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18026CF8C (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x180270A40 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?get_Tab@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUIShellTab@2345@@Z @ 0x180281920 (-get_Tab@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUIShellTab@2345@@Z.c)
 *     ?get_SnappedTab@TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUIShellTab@2345@@Z @ 0x18029DA80 (-get_SnappedTab@TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJ.c)
 *     ?AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x1802B2790 (-AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU-$IVectorView@PEAUISetti.c)
 *     ?get_RelativePositionAnchorView@WindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BAB60 (-get_RelativePositionAnchorView@WindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewManag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
