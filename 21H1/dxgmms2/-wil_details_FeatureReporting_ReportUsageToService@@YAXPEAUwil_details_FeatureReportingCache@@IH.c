/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024038
 * Callers:
 *     ?Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ @ 0x1C0015D08 (-Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_29778884__private_IsEnabled@@YAHXZ @ 0x1C0015D70 (-Feature_Servicing_29778884__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_CpuHostAperture_30783247__private_IsEnabled@@YAHXZ @ 0x1C0015DD8 (-Feature_Servicing_CpuHostAperture_30783247__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_2103c_30527880__private_IsEnabled@@YAHXZ @ 0x1C00168D8 (-Feature_Servicing_2103c_30527880__private_IsEnabled@@YAHXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C54 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00B0774 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 *     ?VerifyIntegrity@VIDMM_SEGMENT@@UEAAJXZ @ 0x1C00CB390 (-VerifyIntegrity@VIDMM_SEGMENT@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00240C8 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C00241DC (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
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
