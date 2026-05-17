/*
 * XREFs of _RtlStartRXact@4 @ 0x4B345AB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __stdcall RtlStartRXact(int a1)
{
  _DWORD *Heap; // eax

  if ( *(_DWORD *)(a1 + 12) )
    return -1073741540;
  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 0x4000);
  if ( !Heap )
    return -1073741801;
  *Heap = 0;
  Heap[1] = 0x4000;
  Heap[2] = 12;
  *(_DWORD *)(a1 + 12) = Heap;
  return 0;
}
