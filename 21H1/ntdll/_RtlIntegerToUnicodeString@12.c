/*
 * XREFs of _RtlIntegerToUnicodeString@12 @ 0x4B2D2A70
 * Callers:
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _RtlConvertLCIDToString@20 @ 0x4B351910 (_RtlConvertLCIDToString@20.c)
 * Callees:
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     _RtlIntegerToChar@16 @ 0x4B2D2AE0 (_RtlIntegerToChar@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  ANSI_STRING SourceString; // [esp+8h] [ebp-30h] BYREF
  CHAR v5[36]; // [esp+10h] [ebp-28h] BYREF

  result = RtlIntegerToChar(Value, Base, 33, v5);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v5;
    SourceString.Length = strlen(v5);
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
