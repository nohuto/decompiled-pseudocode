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

NTSTATUS __stdcall RtlIntegerToUnicodeString(int a1, int a2, PUNICODE_STRING DestinationString)
{
  NTSTATUS result; // eax
  STRING SourceString; // [esp+8h] [ebp-30h] BYREF
  char v5[36]; // [esp+10h] [ebp-28h] BYREF

  result = RtlIntegerToChar(a1, a2, 33, v5);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v5;
    SourceString.Length = strlen(v5);
    return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 0);
  }
  return result;
}
