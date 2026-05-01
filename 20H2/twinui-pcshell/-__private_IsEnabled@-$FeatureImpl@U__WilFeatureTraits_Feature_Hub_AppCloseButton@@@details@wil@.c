/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAA_NXZ @ 0x180094310
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18003B260 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803F6108 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180093D80 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800941F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAAX_N.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_AppCloseButton>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_AppCloseButton>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_AppCloseButton>::ReportUsage(a1, v2, v3);
  return v2;
}
