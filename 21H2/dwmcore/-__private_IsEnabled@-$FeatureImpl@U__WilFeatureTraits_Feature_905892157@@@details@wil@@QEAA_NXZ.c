/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@@QEAA_NXZ @ 0x180103FA4
 * Callers:
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x18021072C (--1CConditionalExpression@@UEAA@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180103D88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180103F20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@@QEAAX_NW4Reporti.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_905892157>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_905892157>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = (v6 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_905892157>::ReportUsage(a1, v2, v3, v4);
  return v2;
}
