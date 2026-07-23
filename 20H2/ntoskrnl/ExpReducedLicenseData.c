/*
 * XREFs of ExpReducedLicenseData @ 0x1406E41C0
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
