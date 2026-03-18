/*
 * XREFs of ?wil_details_MapReportingKind@@YG?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0xF697A
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YGXPAUwil_details_FeatureReportingCache@@IHHPBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@K@Z @ 0xF6678 (-wil_details_FeatureReporting_ReportUsageToService@@YGXPAUwil_details_FeatureReportingCache@@IHH.c)
 * Callees:
 *     <none>
 */

int __fastcall wil_details_MapReportingKind(int a1, int a2)
{
  unsigned __int8 v2; // cl

  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        return a2 != 0 ? 0 : 4;
      case 2:
        return 4 * (a2 == 0) + 1;
      case 3:
        return 4 * (a2 == 0) + 2;
      case 4:
        return 4 * (a2 == 0) + 3;
      case 5:
        return 2 * (a2 == 0) + 8;
      case 6:
        return 2 * (a2 == 0) + 9;
    }
    v2 = a1 - 100;
    if ( v2 <= 0x31u )
      return (a2 != 0 ? 100 : 150) + v2;
  }
  return 255;
}
