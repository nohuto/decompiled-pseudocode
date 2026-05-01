/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237@@@details@wil@@QEAA_NXZ @ 0x1800C03B4
 * Callers:
 *     ?MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApplicationViewCollection@@PEAUIVirtualDesktopManagerInternal3@@PEAUIApplicationView@@@Z @ 0x1800BF5D0 (-MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApp.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BF100 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ProxyWindowsTo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BF8C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ProxyWindowsToDesktop_29787237>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
