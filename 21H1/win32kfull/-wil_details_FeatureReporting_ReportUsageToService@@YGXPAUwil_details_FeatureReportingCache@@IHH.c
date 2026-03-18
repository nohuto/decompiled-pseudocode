/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YGXPAUwil_details_FeatureReportingCache@@IHHPBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@K@Z @ 0xF6678
 * Callers:
 *     ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ @ 0xF636A (-Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YGHPAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@IK@Z @ 0xF66C6 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YGHPAUwil_details_FeatureReportingCach.c)
 *     ?wil_details_MapReportingKind@@YG?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0xF697A (-wil_details_MapReportingKind@@YG-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 */

void __stdcall wil_details_FeatureReporting_ReportUsageToService(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // [esp-8h] [ebp-10h]
  int v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-4h] BYREF

  v9 = 3;
  v6 = wil_details_MapReportingKind(3, 3);
  if ( wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, v6, v7, v8) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x1651727u,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_DynamicModeChange_23402279_logged_traits,
        0,
        a4,
        (const enum wil_ReportingKind *)&v9,
        0,
        0,
        1u);
  }
}
