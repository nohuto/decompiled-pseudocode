/*
 * XREFs of LdrpHashUnicodeString @ 0x1800610A0
 * Callers:
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpInsertDataTableEntry @ 0x180014620 (LdrpInsertDataTableEntry.c)
 *     LdrpMapDllSearchPath @ 0x180060B00 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180060EC0 (LdrpMapDllFullPath.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4C54 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18001CCB0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(_UNICODE_STRING *a1)
{
  __int64 result; // rax
  ULONG HashValue; // [rsp+38h] [rbp+10h] BYREF

  HashValue = 0;
  RtlHashUnicodeString(a1, 1u, 0, &HashValue);
  result = HashValue;
  if ( !HashValue )
    return 0x80000000LL;
  return result;
}
