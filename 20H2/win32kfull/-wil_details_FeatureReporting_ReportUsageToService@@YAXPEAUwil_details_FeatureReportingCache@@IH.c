/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04
 * Callers:
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0009118 (-SetPenHotKeys@@YAXXZ.c)
 *     InitProcessSystemDpi @ 0x1C0037C20 (InitProcessSystemDpi.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C00AA0A4 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C0102160 (xxxDoHotKeyStuff.c)
 *     DispBrokerGetCurrentModeImpl @ 0x1C0126670 (DispBrokerGetCurrentModeImpl.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C012991C (--0InkProcessor@@AEAA@XZ.c)
 *     InitModuleAllocations @ 0x1C0129E90 (InitModuleAllocations.c)
 *     InitRotationManager @ 0x1C012C1A0 (InitRotationManager.c)
 *     ?Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ @ 0x1C015BF98 (-Feature_ReadClipboardEvent__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_Perf_FindWindowEx__private_IsEnabled@@YAHXZ @ 0x1C015C000 (-Feature_Servicing_Perf_FindWindowEx__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ @ 0x1C015D210 (-Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ @ 0x1C015D478 (-Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_MSRC74780_RejectRecursiveNtGdiStarDoc__private_IsEnabled@@YAHXZ @ 0x1C015D5CC (-Feature_MSRC74780_RejectRecursiveNtGdiStarDoc__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ @ 0x1C015DA88 (-Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ @ 0x1C015EA14 (-Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_HidParseSystem32Load__private_IsEnabled@@YAHXZ @ 0x1C015F3C8 (-Feature_Servicing_HidParseSystem32Load__private_IsEnabled@@YAHXZ.c)
 *     DCompSessionInitialize @ 0x1C0394EA0 (DCompSessionInitialize.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C015AB94 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C015AC88 (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // r10d
  __int64 v9; // r11

  a7 = 3;
  wil_details_MapReportingKind(3LL, a6);
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(v9, a2, v8) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
  }
}
