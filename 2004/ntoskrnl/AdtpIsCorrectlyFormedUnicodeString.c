/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x1403BDE74
 * Callers:
 *     AdtpPackageParameters @ 0x1403BD944 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
