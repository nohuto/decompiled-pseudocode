/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204@@@details@wil@@QEAA_NXZ @ 0x180055BA4
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180021E40 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180055958 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180055B10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204@@@details@wil@@Q.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2011c_29519204>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2011c_29519204>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2011c_29519204>::ReportUsage(a1, v2, v3);
  return v2;
}
