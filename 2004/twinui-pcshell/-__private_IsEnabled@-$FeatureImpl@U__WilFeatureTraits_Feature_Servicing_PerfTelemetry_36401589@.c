/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@@@details@wil@@QEAA_NXZ @ 0x18009E5B8
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x180099474 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 *     ?PrelaunchTimerTicked@ShellFeedsExperienceManagerImpl@@UEAAJXZ @ 0x18009BBF0 (-PrelaunchTimerTicked@ShellFeedsExperienceManagerImpl@@UEAAJXZ.c)
 *     ?SetPrelaunchOnMouseMoveState@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x18009C748 (-SetPrelaunchOnMouseMoveState@ShellFeedsExperienceManagerImpl@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009A0BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009C2B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@@@detail.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::ReportUsage(a1, v2, v3);
  return v2;
}
