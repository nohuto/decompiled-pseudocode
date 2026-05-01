/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1802823A0
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180282234 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003ADB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007C444 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  unsigned __int16 FeatureVariant; // ax
  int v5; // edx
  int *result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = HIDWORD(a1);
  v7 = 0;
  FeatureVariant = (unsigned __int16)wil::details::WilApi_GetFeatureVariant(
                                       (wil::details *)0x10447E5,
                                       0LL,
                                       (__int64)&v9,
                                       &v7,
                                       a3);
  *a2 = 0;
  a2[1] = 0;
  v5 = -(v7 != 0);
  *a2 &= ~0x100u;
  *a2 = (v5 & 0x100 | *a2) ^ ((unsigned __int16)(4 * FeatureVariant) ^ (v5 & 0x100 | (unsigned __int16)*a2)) & 0x200;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    0);
  a2[1] = 0;
  result = a2;
  *a2 &= 0xFFFF03FF;
  return result;
}
