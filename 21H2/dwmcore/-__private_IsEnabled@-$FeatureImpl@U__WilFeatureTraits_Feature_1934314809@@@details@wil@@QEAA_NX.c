/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1934314809@@@details@wil@@QEAA_NXZ @ 0x1800F06F0
 * Callers:
 *     ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801EF56C (--1CSynchronousSuperWetInk@@UEAA@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_1934314809@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800F04C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_1934314809@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_1934314809@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F066C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_1934314809@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_1934314809>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1934314809>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_1934314809>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
