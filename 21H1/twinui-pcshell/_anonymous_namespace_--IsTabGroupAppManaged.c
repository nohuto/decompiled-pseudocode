/*
 * XREFs of _anonymous_namespace_::IsTabGroupAppManaged @ 0x18024FF98
 * Callers:
 *     ?ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@6@PEAPEAUIShellTab@89Internal@6@@Z @ 0x18024B30C (-ConnectTabToView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Founda.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18025C090 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180141CB4 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z @ 0x180262A74 (-ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z.c)
 */

bool __fastcall anonymous_namespace_::IsTabGroupAppManaged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  HWND WindowForView; // rax
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( WindowForView && GetPropW(WindowForView, L"WindowHasAppManagedTabs") )
    return 1;
  if ( a1 )
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, (const WCHAR **)off_1804AABF8, v6);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v11,
                (HSTRING)v7[1].Reserved.Reserved1,
                v8,
                &v12) < 0 )
      goto LABEL_10;
    v9 = v12 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v12 == *(_QWORD *)&GUID_NULL.Data1 )
      v9 = *((_QWORD *)&v12 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v9 )
LABEL_10:
      v10 = 0;
    else
      v10 = 1;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v10 )
      return TabAppPolicySettings::ViewUsesCustomTabsWhenLaunchedIntoNewGroup((struct IApplicationView *)a2);
  }
  return 0;
}
