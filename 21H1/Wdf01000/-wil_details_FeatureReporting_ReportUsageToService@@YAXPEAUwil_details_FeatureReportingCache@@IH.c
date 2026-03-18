/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001B63C
 * Callers:
 *     ?Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled@@YAHXZ @ 0x1C001C9CC (-Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled@@YAHXZ.c)
 *     FxLibraryGlobalsCommission @ 0x1C0057170 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C001B6CC (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C0056B14 (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        wil_details_FeatureReportingCache *reporting,
        unsigned int featureId,
        int hasNotificationState,
        int isVariantConfiguration,
        const FEATURE_LOGGED_TRAITS *traits,
        int enabled,
        wil_ReportingKind kindParam)
{
  wil_details_ServiceReportingKind kind; // eax
  int v9; // r9d
  int v10; // r10d
  wil_details_FeatureReportingCache *v11; // r11
  unsigned int v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+30h] [rbp-28h]

  kindParam = wil_ReportingKind_DeviceUsage;
  kind = wil_details_MapReportingKind(wil_ReportingKind_DeviceUsage, enabled);
  if ( wil_details_FeatureReporting_ReportUsageToServiceDirect(v11, featureId, v10, v9, kind, v12, v13) )
  {
    if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.SectorSize )
      (*(void (__fastcall **)(unsigned int, const FEATURE_LOGGED_TRAITS *, const FEATURE_ERROR *, int, const wil_ReportingKind *, const wil_VariantReportingKind *, unsigned __int8, unsigned __int64))&WPP_GLOBAL_WDF_Control.SectorSize)(
        featureId,
        traits,
        0LL,
        enabled,
        &kindParam,
        0LL,
        0,
        1uLL);
  }
}
