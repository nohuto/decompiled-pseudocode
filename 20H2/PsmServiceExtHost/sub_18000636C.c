/*
 * XREFs of sub_18000636C @ 0x18000636C
 * Callers:
 *     sub_1800267AC @ 0x1800267AC (sub_1800267AC.c)
 * Callees:
 *     sub_1800063F8 @ 0x1800063F8 (sub_1800063F8.c)
 */

__int64 __fastcall sub_18000636C(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID Heap; // rax
  unsigned int v7; // ebx
  PVOID v8; // rdi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x160uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    sub_1800063F8(a1, a2, Heap);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
