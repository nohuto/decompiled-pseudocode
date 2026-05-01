/*
 * XREFs of ?wil_details_FeatureReporting_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18007D21C
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@3@_K@Z @ 0x18007D160 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wi.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@QEAAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@3@_K@Z @ 0x1802616F8 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@de.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18002BB08 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportVariantUsageToService(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        unsigned __int8 a7,
        unsigned int a8,
        int a9)
{
  int v11; // ecx
  unsigned int v12; // ecx

  switch ( a9 )
  {
    case 0:
      return;
    case 1:
      v11 = a6 != 0 ? 448 : 384;
      goto LABEL_5;
    case 2:
      v11 = a6 != 0 ? 320 : 256;
LABEL_5:
      v12 = a7 + v11;
      goto LABEL_6;
  }
  v12 = 255;
LABEL_6:
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, a3, a4, v12, a8) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, 0LL, (const enum wil_VariantReportingKind *)&a9, a7, 1uLL);
  }
}
