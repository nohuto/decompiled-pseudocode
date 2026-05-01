/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18009521C
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_K@Z @ 0x18007C210 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wi.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX_NW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_K@Z @ 0x18009D2E4 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@QEAAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@3@_K@Z @ 0x180282A88 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@de.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180093470 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportVariantUsageToService(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3,
        int a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        unsigned __int8 a7,
        int a8,
        int a9)
{
  unsigned int v11; // ecx
  int v12; // ecx

  switch ( a9 )
  {
    case 0:
      return;
    case 1:
      v12 = a6 != 0 ? 448 : 384;
      break;
    case 2:
      v12 = a6 != 0 ? 320 : 256;
      break;
    default:
      v11 = 255;
      goto LABEL_8;
  }
  v11 = a7 + v12;
LABEL_8:
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(a1, a2, a3, a4, v11, a8) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, 0LL, (const enum wil_VariantReportingKind *)&a9, a7, 1uLL);
  }
}
