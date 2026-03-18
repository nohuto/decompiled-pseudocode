/*
 * XREFs of MiFlushCacheMdl @ 0x14054F018
 * Callers:
 *     MiReferenceIoPages @ 0x140336B14 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403A2070 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C4DD04;
  KeInvalidateAllCaches();
  return 1LL;
}
