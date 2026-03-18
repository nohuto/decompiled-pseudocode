/*
 * XREFs of ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B43AC
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C00434C0 (DxgkDeviceIoctl.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0284248 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C02B7230 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

bool DXGVAILOBJECT::IsFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf
  int v3; // [rsp+30h] [rbp-18h]

  v0 = g_IsVailEnabled == 0;
  v1 = g_IsVailEnabled < 0;
  if ( g_IsVailEnabled < 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Vail__private_reporting,
      0x82866Bu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1,
      v3);
    _InterlockedCompareExchange(&g_IsVailEnabled, 1, -1);
    v0 = g_IsVailEnabled == 0;
    v1 = g_IsVailEnabled < 0;
  }
  return !v1 && !v0;
}
