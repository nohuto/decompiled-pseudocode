/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@details@wil@@QEAA_NXZ @ 0x180095E44
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180019928 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002C4D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180095BE4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180095DC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@details@wil@@Q.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterFlyoutHeight>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterFlyoutHeight>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterFlyoutHeight>::ReportUsage(a1, v2, v3);
  return v2;
}
