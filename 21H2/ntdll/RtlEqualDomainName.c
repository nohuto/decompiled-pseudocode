/*
 * XREFs of RtlEqualDomainName @ 0x18000CE90
 * Callers:
 *     RtlEqualComputerName @ 0x1800EB3A0 (RtlEqualComputerName.c)
 * Callees:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 */

char __fastcall RtlEqualDomainName(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  __int64 v5; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(a3) = 1;
  v4 = 0;
  if ( (int)RtlCanonicalizeDomainName(&v8, a1, a3) >= 0 )
  {
    LOBYTE(v5) = 1;
    if ( (int)RtlCanonicalizeDomainName(&UnicodeString, a2, v5) >= 0 )
    {
      v4 = RtlEqualUnicodeString(&v8, &UnicodeString, 0LL);
      RtlFreeAnsiString(&UnicodeString);
    }
    RtlFreeAnsiString(&v8);
  }
  return v4;
}
