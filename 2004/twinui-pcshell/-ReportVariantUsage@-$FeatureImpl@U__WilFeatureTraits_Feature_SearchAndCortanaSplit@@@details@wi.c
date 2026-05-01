/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_K@Z @ 0x18007D930
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_N@Z @ 0x18007D8E8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18007D9EC (-wil_details_FeatureReporting_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007DAB0 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportVariantUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        char a3,
        int a4,
        unsigned __int64 a5)
{
  int v6; // ebp
  unsigned int v7; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  _BYTE v13[16]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+80h] [rbp+8h] BYREF
  char v15; // [rsp+84h] [rbp+Ch]

  v6 = a2;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  LODWORD(a5) = v7;
  if ( (v7 & 2) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedVariantState(
                       a1,
                       v13);
    a5 = v10;
    v7 = v10;
  }
  if ( a3 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  v14 = 2;
  v15 = 3;
  return wil_details_FeatureReporting_ReportVariantUsageToService(
           a1 + 2,
           17983783LL,
           (v7 >> 8) & 1,
           (v7 >> 9) & 1,
           &v14,
           v6,
           a3,
           v11,
           a4);
}
