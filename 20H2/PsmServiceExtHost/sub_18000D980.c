/*
 * XREFs of sub_18000D980 @ 0x18000D980
 * Callers:
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 * Callees:
 *     sub_18001049C @ 0x18001049C (sub_18001049C.c)
 */

__int64 __fastcall sub_18000D980(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *Heap; // rax

  v2 = 0;
  if ( a1[69] )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( !Heap )
      return (unsigned int)-1073741801;
    Heap[1] = 0LL;
    *Heap = a2;
    Heap[1] = a1[70];
    a1[70] = Heap + 1;
  }
  else
  {
    a1[69] = a2;
  }
  if ( (unsigned __int8)sub_18001049C(a2) )
    a1[71] = a2;
  return v2;
}
