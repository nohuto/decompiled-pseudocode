/*
 * XREFs of _RtlInt64ToUnicodeString@16 @ 0x4B350510
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlLargeIntegerToChar@16 @ 0x4B350590 (_RtlLargeIntegerToChar@16.c)
 */

NTSTATUS __cdecl RtlInt64ToUnicodeString(ULONGLONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  LARGE_INTEGER v4; // [esp+8h] [ebp-50h] BYREF
  CHAR v5[68]; // [esp+10h] [ebp-48h] BYREF

  v4.QuadPart = Value;
  result = RtlLargeIntegerToChar(&v4, Base, 65, v5);
  if ( result >= 0 )
  {
    HIWORD(v4.u.LowPart) = 65;
    v4.HighPart = (int)v5;
    LOWORD(v4.LowPart) = strlen(v5);
    return RtlAnsiStringToUnicodeString(String, (PCANSI_STRING)&v4, 0);
  }
  return result;
}
