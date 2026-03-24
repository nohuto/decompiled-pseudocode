/*
 * XREFs of ExpReducedLicenseData @ 0x1406C3EC0
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
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
