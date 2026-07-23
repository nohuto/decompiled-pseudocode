/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x14058B440
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140405BF0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlFlushNonVolatileMemory @ 0x140584200 (RtlFlushNonVolatileMemory.c)
 */

DWORD __cdecl RtlWriteNonVolatileMemory(
        PVOID NvToken,
        void *NvDestination,
        const void *Source,
        SIZE_T Size,
        DWORD Flags)
{
  DWORD v5; // ebx

  v5 = 0;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( (Flags & 3) == 1 )
  {
    v5 = (Flags & 0x100) != 0;
    goto LABEL_10;
  }
  if ( (Flags & 2) == 0 )
  {
    memmove(NvDestination, Source, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_10:
    memmove(NvDestination, Source, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, Size, v5);
  }
  RtlCopyMemoryNonTemporal(NvDestination, Source, Size);
  return v5;
}
