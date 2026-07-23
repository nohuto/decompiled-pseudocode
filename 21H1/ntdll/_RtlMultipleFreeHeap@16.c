/*
 * XREFs of _RtlMultipleFreeHeap@16 @ 0x4B356D10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

ULONG __cdecl RtlMultipleFreeHeap(PVOID HeapHandle, ULONG Flags, ULONG Count, PVOID *Array)
{
  ULONG v4; // esi

  v4 = 0;
  if ( !Count )
    return Count;
  while ( RtlFreeHeap(HeapHandle, Flags, Array[v4]) )
  {
    if ( ++v4 >= Count )
      return Count;
  }
  return v4;
}
