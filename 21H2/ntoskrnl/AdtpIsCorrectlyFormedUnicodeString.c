/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x1403C0BE4
 * Callers:
 *     AdtpPackageParameters @ 0x1403C06B4 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
