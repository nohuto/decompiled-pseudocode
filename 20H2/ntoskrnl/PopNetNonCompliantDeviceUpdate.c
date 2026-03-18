/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x1408F470C
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x1408F2624 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14078C284 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x1408F4474 (PopNetClearConnectivityConstraint.c)
 */

void __fastcall PopNetNonCompliantDeviceUpdate(char a1, int a2)
{
  int v2; // eax

  if ( a2 || !PopIgnoreCsComplianceCheck )
  {
    v2 = PopNetNonCompliantDeviceCount;
    if ( a1 )
    {
      ++PopNetNonCompliantDeviceCount;
      if ( !v2 )
        PopNetSetConnectivityConstraint(3);
    }
    else if ( PopNetNonCompliantDeviceCount )
    {
      --PopNetNonCompliantDeviceCount;
      if ( v2 == 1 )
        PopNetClearConnectivityConstraint(3);
    }
  }
}
