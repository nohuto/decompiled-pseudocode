/*
 * XREFs of sub_180027048 @ 0x180027048
 * Callers:
 *     sub_180026694 @ 0x180026694 (sub_180026694.c)
 * Callees:
 *     sub_1800270E0 @ 0x1800270E0 (sub_1800270E0.c)
 *     sub_1800271B8 @ 0x1800271B8 (sub_1800271B8.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

__int64 __fastcall sub_180027048(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID Heap; // rax
  PVOID v7; // rbx
  int v8; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x270uLL);
  v7 = Heap;
  if ( Heap )
  {
    sub_1800271B8(a1, a2, Heap);
    v8 = sub_1800270E0(v7);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
      v8 = 0;
    }
    if ( v7 )
      sub_1800274E0(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
