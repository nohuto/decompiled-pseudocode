/*
 * XREFs of _RtlMultipleAllocateHeap@20 @ 0x4B356CD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __stdcall RtlMultipleAllocateHeap(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v5; // esi
  int Heap; // eax

  v5 = 0;
  if ( !a4 )
    return a4;
  while ( 1 )
  {
    Heap = RtlAllocateHeap(a1, a2, a3);
    *(_DWORD *)(a5 + 4 * v5) = Heap;
    if ( !Heap )
      break;
    if ( ++v5 >= a4 )
      return a4;
  }
  return v5;
}
