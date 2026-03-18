/*
 * XREFs of ExpReducedLicenseData @ 0x1406EB390
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
