/*
 * XREFs of ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C03515D4
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0050460 (DxgkDeviceIoctl.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0336764 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0353BC0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

bool __fastcall DXGVAILOBJECT::IsFeatureEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  bool v5; // sf

  v4 = g_IsVailEnabled == 0;
  v5 = g_IsVailEnabled < 0;
  if ( g_IsVailEnabled < 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Vail__private_reporting,
      0x82866Bu,
      a3,
      a4,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    _InterlockedCompareExchange(&g_IsVailEnabled, 1, -1);
    v4 = g_IsVailEnabled == 0;
    v5 = g_IsVailEnabled < 0;
  }
  return !v5 && !v4;
}
