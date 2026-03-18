/*
 * XREFs of MiFlushCacheMdl @ 0x140398948
 * Callers:
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiFlushCachedIoPfnRange @ 0x140398900 (MiFlushCachedIoPfnRange.c)
 *     MiFlushStaleCacheMap @ 0x1405915B4 (MiFlushStaleCacheMap.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 MiFlushCacheMdl()
{
  _BYTE v1[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v1, 0, sizeof(v1));
  ++dword_140C50744;
  KeInvalidateAllCaches();
  return 1LL;
}
