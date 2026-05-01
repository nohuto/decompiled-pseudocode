/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218@@@details@wil@@QEAA_NXZ @ 0x1800B283C
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034F940 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B076C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NullCheckOfTab.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B2478 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_313452.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
