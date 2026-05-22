/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_29871746@@@details@wil@@QEAA_NXZ @ 0x180041074
 * Callers:
 *     ?UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z @ 0x180087FBC (-UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_29871746@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180040E58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_29871746.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_29871746@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180040FF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_29871746@@@details@wil@@Q.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_29871746>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_29871746>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_29871746>::ReportUsage(a1, v2, v3);
  return v2;
}
