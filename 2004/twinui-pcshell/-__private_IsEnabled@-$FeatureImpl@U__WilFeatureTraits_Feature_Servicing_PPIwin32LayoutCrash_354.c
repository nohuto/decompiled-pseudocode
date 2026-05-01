/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139@@@details@wil@@QEAA_NXZ @ 0x1800BA42C
 * Callers:
 *     ?FindCallMonitorAndSharingToolBar@PPIWin32VtcLayoutOperation@@UEAAJPEAPEAUHWND__@@0@Z @ 0x1800B7ED0 (-FindCallMonitorAndSharingToolBar@PPIWin32VtcLayoutOperation@@UEAAJPEAPEAUHWND__@@0@Z.c)
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800B96A0 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B7FCC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32Layout.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B86CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139@@@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PPIwin32LayoutCrash_35405139>::ReportUsage(a1, v2, v3);
  return v2;
}
