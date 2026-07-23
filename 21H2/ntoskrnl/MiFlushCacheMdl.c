/*
 * XREFs of MiFlushCacheMdl @ 0x1405546F8
 * Callers:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403A4F50 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C4DF44;
  KeInvalidateAllCaches();
  return 1LL;
}
