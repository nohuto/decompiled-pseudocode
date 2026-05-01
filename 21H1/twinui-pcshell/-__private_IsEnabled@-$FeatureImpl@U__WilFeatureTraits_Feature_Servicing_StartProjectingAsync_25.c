/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502423@@@details@wil@@QEAA_NXZ @ 0x18009EB40
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180025C70 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502423@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009E608 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartProjectin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502423@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009E964 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502423@@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502423>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502423>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502423>::ReportUsage(a1, v2, v3);
  return v2;
}
