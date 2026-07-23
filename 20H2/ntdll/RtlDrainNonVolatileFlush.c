/*
 * XREFs of RtlDrainNonVolatileFlush @ 0x1800FBEE0
 * Callers:
 *     RtlFlushNonVolatileMemory @ 0x1800FBF10 (RtlFlushNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1800FC5C0 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlDrainNonVolatileFlush(PVOID NvToken)
{
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( RtlpIsDrainRequired )
  {
    if ( ((unsigned __int8)NvToken & 2) != 0 )
      _mm_sfence();
  }
  return 0;
}
