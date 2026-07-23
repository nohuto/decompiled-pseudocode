/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1800FC6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x1800A1AC0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlFlushNonVolatileMemory @ 0x1800FBF10 (RtlFlushNonVolatileMemory.c)
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
  RtlCopyMemoryNonTemporal((__m128i *)NvDestination, (__int64)Source, Size);
  return v5;
}
