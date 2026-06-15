/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180064724
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180064690 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006E568 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_31466786@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006F254 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@details@wil@@QEAAX_N.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180137E0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@details@wil.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800647B4 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        int a7)
{
  unsigned int v7; // edi
  int v9; // ecx

  v7 = a2;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v9 = a6 == 0 ? 4 : 0;
        break;
      case 2:
        v9 = a6 != 0 ? 1 : 5;
        break;
      case 3:
        v9 = a6 != 0 ? 2 : 6;
        break;
      case 4:
        v9 = a6 != 0 ? 3 : 7;
        break;
      case 5:
        v9 = a6 != 0 ? 8 : 10;
        break;
      case 6:
        v9 = a6 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a7 - 100) > 0x31u )
          v9 = 255;
        else
          v9 = (unsigned __int8)(a7 - 100) + (a6 != 0 ? 100 : 150);
        break;
    }
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, a3, a4, v9, 0) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(v7, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
    }
  }
}
