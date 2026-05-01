/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@details@wil@@QEAA_NXZ @ 0x1800B6B2C
 * Callers:
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B69D8 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803FEFE0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B6654 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B6A50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@details@wil@@Q.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC>::ReportUsage(a1, v2, v3);
  return v2;
}
