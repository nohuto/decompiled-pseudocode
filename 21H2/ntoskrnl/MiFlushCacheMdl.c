/*
 * XREFs of MiFlushCacheMdl @ 0x1405544B8
 * Callers:
 *     MiReferenceIoPages @ 0x140295A24 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403A4E00 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C4DF04;
  KeInvalidateAllCaches();
  return 1LL;
}
