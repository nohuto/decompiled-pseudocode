/*
 * XREFs of _RtlStartRXact@4 @ 0x4B345AB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __userpurge RtlStartRXact@<eax>(int a1@<ebx>, int a2)
{
  _DWORD *Heap; // eax
  SIZE_T v4; // [esp-8h] [ebp-Ch]

  if ( *(_DWORD *)(a2 + 12) )
    return -1073741540;
  HIDWORD(v4) = a1;
  LODWORD(v4) = 0x4000;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( !Heap )
    return -1073741801;
  *Heap = 0;
  Heap[1] = 0x4000;
  Heap[2] = 12;
  *(_DWORD *)(a2 + 12) = Heap;
  return 0;
}
