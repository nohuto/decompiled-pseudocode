/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAA_NXZ @ 0x1800561E8
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002ACE8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180055F78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056154 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@QEAAX_NW4Rep.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::ReportUsage(a1, v2, v3);
  return v2;
}
