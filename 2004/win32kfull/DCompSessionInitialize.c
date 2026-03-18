/*
 * XREFs of DCompSessionInitialize @ 0x1C0395EA0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 DCompSessionInitialize()
{
  int v1; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_DWMTouchTargeting__private_reporting,
    0x7F63A4u,
    0,
    0,
    (__int64)&Feature_PenTailDockEvents_logged_traits,
    1u,
    v1);
  g_bHitTestDwmFirstForTouch = 1;
  return DCompositionSessionInitialize(0LL);
}
