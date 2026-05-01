/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AE1F0
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800B7E0C (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$9 @ 0x1800B8329 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$9.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800B835C (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$4 @ 0x1800B8593 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$4.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D6260 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$0 @ 0x1800D64DC (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphForSize_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$1 @ 0x1800D64E8 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1800D64E8.c)
 *     _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$6 @ 0x1801B0BF8 (_CActionCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CControlCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1801B5226 (_CControlCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _CToastCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$5 @ 0x1801C61E0 (_CToastCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$6 @ 0x180220D0C (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$6.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$7 @ 0x180220D18 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$7.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0 @ 0x18023DC7C (__LogEventWithViewHostItemData___--_1_--dtor$0.c)
 *     __LogEventWithViewHostItemData___::_1_::dtor$0_0 @ 0x18024784A (__LogEventWithViewHostItemData___--_1_--dtor$0_0.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::TraceLogTabWindowSnapped_::_1_::dtor$0 @ 0x18029C6F2 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--TraceLogTabWindowSnapped_--_1_--dtor$.c)
 *     _VirtualDesktopAcessibility::RecalculateDesktopName_::_1_::dtor$4 @ 0x180441349 (_VirtualDesktopAcessibility--RecalculateDesktopName_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
