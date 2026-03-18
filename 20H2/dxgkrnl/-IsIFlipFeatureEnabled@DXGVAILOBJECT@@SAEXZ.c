/*
 * XREFs of ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B440C
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F120 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

bool DXGVAILOBJECT::IsIFlipFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf
  int v3; // [rsp+30h] [rbp-18h]

  v0 = g_IsVailIFlipEnabled == 0;
  v1 = g_IsVailIFlipEnabled < 0;
  if ( g_IsVailIFlipEnabled < 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Vail_iFLIP__private_reporting,
      0xDCD10Au,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
      0,
      v3);
    _InterlockedCompareExchange(&g_IsVailIFlipEnabled, 0, -1);
    v0 = g_IsVailIFlipEnabled == 0;
    v1 = g_IsVailIFlipEnabled < 0;
  }
  return !v1 && !v0;
}
