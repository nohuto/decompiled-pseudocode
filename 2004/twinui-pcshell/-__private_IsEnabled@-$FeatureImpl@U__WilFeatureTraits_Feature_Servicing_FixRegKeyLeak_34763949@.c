/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949@@@details@wil@@QEAA_NXZ @ 0x180094A90
 * Callers:
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x1800783C0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180094844 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800949FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949@@@detail.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763949>::ReportUsage(a1, v2, v3);
  return v2;
}
