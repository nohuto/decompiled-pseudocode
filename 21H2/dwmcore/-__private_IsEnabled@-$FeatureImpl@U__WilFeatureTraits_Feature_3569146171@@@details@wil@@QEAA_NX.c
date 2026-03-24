/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@QEAA_NXZ @ 0x1800EFF5C
 * Callers:
 *     ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x18009F864 (-RemoveAllLights@CVisual@@AEAAXXZ.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800CD6B4 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800EFD30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EFED8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_3569146171>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3569146171>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3569146171>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
