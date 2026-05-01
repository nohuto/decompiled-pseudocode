/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAA_NXZ @ 0x180095824
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18019CDF0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18019E4F0 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180094FEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefau.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800956E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::ReportUsage(a1, v2, v3);
  return v2;
}
