/*
 * XREFs of MiFlushCacheMdl @ 0x14054E9C8
 * Callers:
 *     MiReferenceIoPages @ 0x1402F9AE4 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403A18E0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C4DE44;
  KeInvalidateAllCaches();
  return 1LL;
}
