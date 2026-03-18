/*
 * XREFs of FsRtlFindInTunnelCache @ 0x14092E170
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFindInTunnelCacheEx @ 0x140694E60 (FsRtlFindInTunnelCacheEx.c)
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
