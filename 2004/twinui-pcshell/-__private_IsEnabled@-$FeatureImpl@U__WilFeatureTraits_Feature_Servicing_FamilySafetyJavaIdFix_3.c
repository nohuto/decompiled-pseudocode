/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@@@details@wil@@QEAA_NXZ @ 0x1800BCFE4
 * Callers:
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18045FE50 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180460050 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BC6DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BCCC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
