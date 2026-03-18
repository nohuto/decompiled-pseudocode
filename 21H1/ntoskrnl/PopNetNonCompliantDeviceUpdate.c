/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x1408ED80C
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x1408EB794 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077F550 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x1408ED574 (PopNetClearConnectivityConstraint.c)
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
