/*
 * XREFs of _RtlInt64ToUnicodeString@16 @ 0x4B350510
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlLargeIntegerToChar@16 @ 0x4B350590 (_RtlLargeIntegerToChar@16.c)
 */

NTSTATUS __stdcall RtlInt64ToUnicodeString(int a1, char *a2, int a3, PUNICODE_STRING DestinationString)
{
  NTSTATUS result; // eax
  STRING SourceString; // [esp+8h] [ebp-50h] BYREF
  char v6[68]; // [esp+10h] [ebp-48h] BYREF

  *(_DWORD *)&SourceString.Length = a1;
  SourceString.Buffer = a2;
  result = RtlLargeIntegerToChar(&SourceString, a3, 65, v6);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v6;
    SourceString.Length = strlen(v6);
    return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 0);
  }
  return result;
}
