/*
 * XREFs of _RtlMultipleAllocateHeap@20 @ 0x4B356CD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

ULONG __cdecl RtlMultipleAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size, ULONG Count, PVOID *Array)
{
  ULONG v5; // esi
  PVOID Heap; // eax
  SIZE_T v8; // [esp-4h] [ebp-Ch]

  v5 = 0;
  if ( !HIDWORD(Size) )
    return HIDWORD(Size);
  while ( 1 )
  {
    LODWORD(v8) = Size;
    Heap = RtlAllocateHeap(HeapHandle, Flags, v8);
    *(_DWORD *)(Count + 4 * v5) = Heap;
    if ( !Heap )
      break;
    if ( ++v5 >= HIDWORD(Size) )
      return HIDWORD(Size);
  }
  return v5;
}
