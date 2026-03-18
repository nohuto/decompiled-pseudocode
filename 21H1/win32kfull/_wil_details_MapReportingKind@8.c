/*
 * XREFs of _wil_details_MapReportingKind@8 @ 0xA68C2
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToService@32 @ 0xEF6BC (_wil_details_FeatureReporting_ReportUsageToService@32.c)
 * Callees:
 *     <none>
 */

int __fastcall wil_details_MapReportingKind(int a1, int a2)
{
  unsigned __int8 v3; // cl

  switch ( a1 )
  {
    case 0:
      return 255;
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
  }
  if ( a1 != 6 )
  {
    v3 = a1 - 100;
    if ( v3 <= 0x31u )
      return (a2 != 0 ? 100 : 150) + v3;
    return 255;
  }
  return 2 * (a2 == 0) + 9;
}
