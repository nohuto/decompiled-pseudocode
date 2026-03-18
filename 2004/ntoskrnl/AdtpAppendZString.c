/*
 * XREFs of AdtpAppendZString @ 0x14096AD78
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x14096B280 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     AdtpAppendString @ 0x14096ABD0 (AdtpAppendString.c)
 */

__int64 __fastcall AdtpAppendZString(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  RtlInitUnicodeString(&v8, a3);
  return AdtpAppendString(a1, a2, &v8, a4);
}
