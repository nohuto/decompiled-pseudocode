/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18033FB10
 * Callers:
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18033D498 (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180082FB4 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x1800AA464 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 *     ?IsViewTabbed@AppViewDataSourceAdapterBase@@IEAA_NPEAUIApplicationView@@@Z @ 0x18033DAC4 (-IsViewTabbed@AppViewDataSourceAdapterBase@@IEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18033F6C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x18033FBB0 (-ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z.c)
 */

bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2,
        __int64 a3)
{
  struct IApplicationView *v5; // rdx
  struct IApplicationView *v6; // rdx
  HWND WindowForView; // rax
  bool result; // al

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::GetImpl'::`2'::impl,
    1u,
    a3);
  result = !HolographicViewHelpers::IsApplicationViewHolographic(a2, v5)
        && (*((_DWORD *)this + 82) != 2 || !AppViewDataSourceAdapterBase::IsViewTabbed(this, a2))
        && (!wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl)
         || (WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                     (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                     v6),
             !GetPropW(WindowForView, (LPCWSTR)0xA920)))
        && AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
  return result;
}
