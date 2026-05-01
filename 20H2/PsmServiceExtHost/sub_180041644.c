/*
 * XREFs of sub_180041644 @ 0x180041644
 * Callers:
 *     sub_1800415E0 @ 0x1800415E0 (sub_1800415E0.c)
 *     sub_180068764 @ 0x180068764 (sub_180068764.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180041644(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *Heap; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x40uLL);
    *v8 = a1;
    v8[4] = v8 + 3;
    v8[3] = v8 + 3;
    v8[6] = v8 + 5;
    v8[5] = v8 + 5;
    v9 = v8 + 1;
    *((_DWORD *)v8 + 14) = a2;
    v10 = *(_QWORD **)(a1 + 16);
    if ( *v10 != a1 + 8 )
      __fastfail(3u);
    *v9 = a1 + 8;
    v8[2] = v10;
    *v10 = v9;
    *(_QWORD *)(a1 + 16) = v9;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
