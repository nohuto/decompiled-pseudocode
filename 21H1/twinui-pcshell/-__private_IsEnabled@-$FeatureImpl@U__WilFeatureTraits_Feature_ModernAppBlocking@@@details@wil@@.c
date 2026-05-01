/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@QEAA_NXZ @ 0x1800A9110
 * Callers:
 *     _lambda_995566f987e36b46da19b96e162bec73_::operator() @ 0x1800A8A44 (_lambda_995566f987e36b46da19b96e162bec73_--operator().c)
 *     ??0Win32AppStateManager@@QEAA@XZ @ 0x180438500 (--0Win32AppStateManager@@QEAA@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A8D50 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8F08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@QEAAX_NW.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ModernAppBlocking>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ModernAppBlocking>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ModernAppBlocking>::ReportUsage(a1, v2, v3);
  return v2;
}
