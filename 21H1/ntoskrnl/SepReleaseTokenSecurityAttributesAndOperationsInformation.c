/*
 * XREFs of SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1406F7C04
 * Callers:
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 * Callees:
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1406F7C44 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepReleaseTokenSecurityAttributesAndOperationsInformation(PVOID *P, char a2)
{
  if ( a2 )
  {
    ExFreePoolWithTag(P[1], 0);
    if ( *P )
      SepFreeCapturedTokenSecurityAttributesInformation(*P);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
