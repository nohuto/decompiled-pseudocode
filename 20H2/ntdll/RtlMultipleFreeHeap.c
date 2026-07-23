/*
 * XREFs of RtlMultipleFreeHeap @ 0x1800F2BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

ULONG __cdecl RtlMultipleFreeHeap(PVOID HeapHandle, ULONG Flags, ULONG Count, PVOID *Array)
{
  ULONG v4; // ebx

  v4 = 0;
  if ( !Count )
    return Count;
  while ( RtlFreeHeap(HeapHandle, Flags, *Array) )
  {
    ++v4;
    ++Array;
    if ( v4 >= Count )
      return Count;
  }
  return v4;
}
