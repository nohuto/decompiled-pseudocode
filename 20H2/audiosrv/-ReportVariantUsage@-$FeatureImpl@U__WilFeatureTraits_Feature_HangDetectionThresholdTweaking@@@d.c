/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_K@Z @ 0x18006759C
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_N@Z @ 0x180067554 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180067650 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18006D258 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportVariantUsage(
        unsigned int *a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5)
{
  int v6; // r14d
  unsigned int v7; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  _BYTE v13[16]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v14; // [rsp+80h] [rbp+20h]

  v6 = (unsigned __int8)a2;
  v7 = *a1;
  v14 = *(_QWORD *)a1;
  if ( (*a1 & 2) != 0 )
  {
    v10 = *(_QWORD *)a1;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState(
                       a1,
                       v13);
    BYTE5(v14) = BYTE5(v10);
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  LODWORD(a5) = 0;
  BYTE4(v14) = 3;
  WORD2(a5) = WORD2(v14);
  return wil::details::ReportVariantUsageToService(a1 + 2, a2, (v7 >> 8) & 1, (v7 >> 9) & 1, &a5, v6, a3, v11, a4);
}
