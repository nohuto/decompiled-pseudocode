/*
 * XREFs of FsRtlFindInTunnelCache @ 0x140887320
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFindInTunnelCacheEx @ 0x1406B9BB0 (FsRtlFindInTunnelCacheEx.c)
 */

BOOLEAN __stdcall FsRtlFindInTunnelCache(
        TUNNEL *Cache,
        ULONGLONG DirectoryKey,
        UNICODE_STRING *Name,
        UNICODE_STRING *ShortName,
        UNICODE_STRING *LongName,
        ULONG *DataLength,
        void *Data)
{
  return FsRtlFindInTunnelCacheEx(&Cache->Mutex, DirectoryKey, Name, ShortName, LongName, 0, DataLength, Data);
}
