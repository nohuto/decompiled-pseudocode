/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@QEAA_NXZ @ 0x1800953EC
 * Callers:
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800951C0 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009500C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@A.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180095368 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MeetNow@@@details@wil@@QEAAX_NW4Reporting.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MeetNow>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MeetNow>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MeetNow>::ReportUsage(a1, v2, v3);
  return v2;
}
