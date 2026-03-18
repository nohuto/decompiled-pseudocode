/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D1068
 * Callers:
 *     DxgkNotifyMonitorDimming @ 0x1C02177C0 (DxgkNotifyMonitorDimming.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C029EEA0 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?DpiBrightnessNotifyMonitorDimmingForward@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D10D0 (-DpiBrightnessNotifyMonitorDimmingForward@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimming(struct _DEVICE_OBJECT *a1, unsigned int a2, unsigned __int8 a3)
{
  int v7; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_OemPanelDriverSupport__private_reporting,
    0x801B31u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
    1,
    v7);
  return DpiBrightnessNotifyMonitorDimmingForward(a1, a2, a3);
}
