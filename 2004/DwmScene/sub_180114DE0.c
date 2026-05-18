/*
 * XREFs of sub_180114DE0 @ 0x180114DE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

DWORDLONG sub_180114DE0()
{
  _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys;
}
