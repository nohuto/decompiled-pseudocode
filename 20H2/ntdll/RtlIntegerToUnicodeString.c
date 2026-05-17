/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1800164A0
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlConvertLCIDToString @ 0x1800EF080 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlIntegerToChar @ 0x1800163A0 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlIntegerToUnicodeString(unsigned int a1, unsigned int a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  char v7[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(a1, a2, 33, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
