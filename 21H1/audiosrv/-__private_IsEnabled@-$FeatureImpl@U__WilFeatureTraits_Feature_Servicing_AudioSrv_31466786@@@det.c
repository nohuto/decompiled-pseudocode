/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786@@@details@wil@@QEAA_NXZ @ 0x18006E5FC
 * Callers:
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x1800381A0 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18006E2D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_31466.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006E568 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786@@@details@wil.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786>::ReportUsage(a1, v2, v3);
  return v2;
}
