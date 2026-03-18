/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@QEAA_NXZ @ 0x1800E4B54
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4918 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E4AD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_29854332@@@details@wil@@Q.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_29854332>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_29854332>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_29854332>::ReportUsage(a1, v2, v3);
  return v2;
}
