/*
 * XREFs of _RtlEqualDomainName@8 @ 0x4B34DB90
 * Callers:
 *     _RtlEqualComputerName@8 @ 0x4B34DB80 (_RtlEqualComputerName@8.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 */

char __stdcall RtlEqualDomainName(unsigned __int16 *a1, unsigned __int16 *a2)
{
  char v2; // bl
  UNICODE_STRING UnicodeString; // [esp+8h] [ebp-10h] BYREF
  UNICODE_STRING v5; // [esp+10h] [ebp-8h] BYREF

  v2 = 0;
  if ( RtlCanonicalizeDomainName((int)&v5, a1, 1u) >= 0 )
  {
    if ( RtlCanonicalizeDomainName((int)&UnicodeString, a2, 1u) >= 0 )
    {
      v2 = RtlEqualUnicodeString(&v5.Length, &UnicodeString.Length, 0);
      RtlFreeAnsiString(&UnicodeString);
    }
    RtlFreeAnsiString(&v5);
  }
  return v2;
}
