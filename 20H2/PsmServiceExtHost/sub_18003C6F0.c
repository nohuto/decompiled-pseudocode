/*
 * XREFs of sub_18003C6F0 @ 0x18003C6F0
 * Callers:
 *     sub_1800269AC @ 0x1800269AC (sub_1800269AC.c)
 * Callees:
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18003C7A0 @ 0x18003C7A0 (sub_18003C7A0.c)
 *     sub_18003CAD0 @ 0x18003CAD0 (sub_18003CAD0.c)
 */

__int64 __fastcall sub_18003C6F0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  int v8; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v7 = Heap;
  if ( Heap )
  {
    sub_18003CAD0(a1, a2, Heap);
    v8 = sub_18003C7A0(a1, v7);
    if ( v8 >= 0 )
      v8 = 0;
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v8 = 0;
      v7 = 0LL;
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
