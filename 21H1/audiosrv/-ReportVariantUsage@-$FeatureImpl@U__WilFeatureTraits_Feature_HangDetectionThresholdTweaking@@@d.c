/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_K@Z @ 0x1800645AC
 * Callers:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_N@Z @ 0x180064564 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800647B4 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064C84 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportVariantUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5)
{
  int v5; // esi
  unsigned int v7; // r8d
  int v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ebx
  int v13; // edx
  int v14; // edx
  _BYTE v15[16]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+30h]
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v5 = a3;
  v7 = *a1;
  HIDWORD(v16) = a1[1];
  v9 = a2;
  if ( (*a1 & 2) != 0 )
  {
    LODWORD(v16) = *a1;
    v10 = v16;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState(
                       a1,
                       v15);
    BYTE5(v16) = BYTE5(v10);
    v7 = v10;
  }
  if ( (_BYTE)v5 )
    v11 = HIDWORD(v10);
  else
    LODWORD(v11) = 0;
  BYTE4(v16) = 3;
  LODWORD(a5) = 0;
  WORD2(a5) = WORD2(v16);
  v17 = a4;
  if ( !a4 )
    return;
  v12 = a4 - 1;
  if ( !v12 )
  {
    v13 = v9 + 6;
    goto LABEL_9;
  }
  if ( v12 == 1 )
  {
    v13 = v9 + 4;
LABEL_9:
    v14 = v5 + (v13 << 6);
    goto LABEL_10;
  }
  v14 = 255;
LABEL_10:
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1 + 2,
                       16046125LL,
                       (v7 >> 8) & 1,
                       (v7 >> 9) & 1,
                       v14,
                       v11) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xF4D82Du,
        (const struct FEATURE_LOGGED_TRAITS *)&a5,
        0LL,
        v9,
        0LL,
        (const enum wil_VariantReportingKind *)&v17,
        v5,
        1uLL);
  }
}
