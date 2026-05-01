/*
 * XREFs of sub_180084040 @ 0x180084040
 * Callers:
 *     sub_18008431C @ 0x18008431C (sub_18008431C.c)
 * Callees:
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 *     sub_180083E74 @ 0x180083E74 (sub_180083E74.c)
 */

__int64 __fastcall sub_180084040(__int64 a1, _OWORD *a2, _DWORD *a3, __int64 a4, _QWORD *a5)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38uLL);
  v10 = Heap;
  if ( Heap )
  {
    Heap[6] = 0LL;
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[3] = 1LL;
    Heap[2] = -1LL;
    Heap[4] = a4;
    Heap[5] = -1LL;
    *((_DWORD *)Heap + 12) = *a3;
    v11 = sub_180083E74((__int64)Heap, a1, a2);
    if ( v11 >= 0 )
    {
      sub_180032190(
        a4,
        (__int64)(v10 + 5),
        (int (__fastcall *)(__int64, unsigned __int64, __int64))sub_180084020,
        (unsigned __int64)v10,
        v13,
        v14);
      *a5 = v10;
      v10 = 0LL;
      v11 = 0;
    }
    if ( v10 )
      sub_1800274E0(v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
