/*
 * XREFs of ?CreateWatcher@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModel@UITabDataModel@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x18034BAE8
 * Callers:
 *     ??$call@AEAV_lambda_00b3774f9078045c1aa70b56771c2efa_@@@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_00b3774f9078045c1aa70b56771c2efa_@@@Z @ 0x1803458C8 (--$call@AEAV_lambda_00b3774f9078045c1aa70b56771c2efa_@@@-$factory_cache_entry@UKnownOnScreenInpu.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18044BCA8 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModel<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModel>::CreateWatcher(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
