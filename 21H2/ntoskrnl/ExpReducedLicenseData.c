/*
 * XREFs of ExpReducedLicenseData @ 0x140622A80
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
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
