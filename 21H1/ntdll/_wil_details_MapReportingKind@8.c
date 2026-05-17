/*
 * XREFs of _wil_details_MapReportingKind@8 @ 0x4B306847
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0x4B3064E6 (_wil_details_FeatureReporting_ReportUsageToService@32.c)
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
