/*
 * XREFs of _RtlEqualDomainName@8 @ 0x4B34DB90
 * Callers:
 *     _RtlEqualComputerName@8 @ 0x4B34DB80 (_RtlEqualComputerName@8.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 */

BOOLEAN __cdecl RtlEqualDomainName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  BOOLEAN v2; // bl
  _UNICODE_STRING UnicodeString; // [esp+8h] [ebp-10h] BYREF
  _UNICODE_STRING v5; // [esp+10h] [ebp-8h] BYREF

  v2 = 0;
  if ( RtlCanonicalizeDomainName(&v5, String1, 1u) >= 0 )
  {
    if ( RtlCanonicalizeDomainName(&UnicodeString, String2, 1u) >= 0 )
    {
      v2 = RtlEqualUnicodeString(&v5, &UnicodeString, 0);
      RtlFreeAnsiString(&UnicodeString);
    }
    RtlFreeAnsiString(&v5);
  }
  return v2;
}
