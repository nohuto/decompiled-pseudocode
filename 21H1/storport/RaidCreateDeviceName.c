/*
 * XREFs of RaidCreateDeviceName @ 0x1C004363C
 * Callers:
 *     RaDriverAddDevice @ 0x1C0032B60 (RaDriverAddDevice.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0017DFC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     RaDuplicateUnicodeString @ 0x1C0042D58 (RaDuplicateUnicodeString.c)
 */

__int64 __fastcall RaidCreateDeviceName(__int64 a1, struct _UNICODE_STRING *a2, unsigned __int32 *a3)
{
  unsigned __int32 v6; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  wchar_t pszDest[32]; // [rsp+30h] [rbp-68h] BYREF

  v6 = _InterlockedIncrement(&RaidPortNumber);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"\\Device\\RaidPort%d", v6, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, pszDest);
  result = RaDuplicateUnicodeString(a2, &DestinationString, v7, a1);
  *a3 = v6;
  return result;
}
