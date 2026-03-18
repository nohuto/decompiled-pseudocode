/*
 * XREFs of MiFlushCacheMdl @ 0x1405529E8
 * Callers:
 *     MiReferenceIoPages @ 0x140260AB4 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403A4540 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C4DD84;
  KeInvalidateAllCaches();
  return 1LL;
}
