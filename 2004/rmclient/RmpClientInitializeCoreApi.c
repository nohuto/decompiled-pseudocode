/*
 * XREFs of RmpClientInitializeCoreApi @ 0x180008870
 * Callers:
 *     DllMain @ 0x18000A9A8 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

__int64 RmpClientInitializeCoreApi()
{
  __int64 result; // rax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]

  qword_1800246D8 = (__int64)&RmpClientConnectionListHead;
  RmpClientConnectionListHead = (__int64)&RmpClientConnectionListHead;
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  result = v2;
  RmpPageSize = v2;
  return result;
}
