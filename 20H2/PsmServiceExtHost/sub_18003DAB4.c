/*
 * XREFs of sub_18003DAB4 @ 0x18003DAB4
 * Callers:
 *     sub_1800268A8 @ 0x1800268A8 (sub_1800268A8.c)
 * Callees:
 *     sub_18003DB40 @ 0x18003DB40 (sub_18003DB40.c)
 */

__int64 __fastcall sub_18003DAB4(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID Heap; // rax
  unsigned int v7; // ebx
  PVOID v8; // rdi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC8uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    sub_18003DB40(a1, a2, Heap);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
