/*
 * XREFs of sub_180042CF4 @ 0x180042CF4
 * Callers:
 *     sub_180042B54 @ 0x180042B54 (sub_180042B54.c)
 *     sub_180042BF4 @ 0x180042BF4 (sub_180042BF4.c)
 * Callees:
 *     sub_180009444 @ 0x180009444 (sub_180009444.c)
 *     sub_18002EA88 @ 0x18002EA88 (sub_18002EA88.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 */

__int64 __fastcall sub_180042CF4(__int64 a1, void *a2, int a3, _QWORD *a4)
{
  __int64 v5; // r14
  _DWORD *Heap; // rax
  _DWORD *v9; // rdi
  int v10; // ebx

  v5 = *(_QWORD *)&qword_1800B41A8;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v9 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x40uLL);
    *(_QWORD *)v9 = v5;
    v9[14] = a3;
    *((_QWORD *)v9 + 6) = 0LL;
    v10 = sub_18002EA88(a2, 1024LL, 0, (__int64)(v9 + 6));
    if ( v10 >= 0 )
    {
      v10 = sub_180009444((_QWORD *)v9 + 4);
      if ( v10 >= 0 )
        v10 = 0;
    }
    if ( v10 >= 0 )
    {
      *a4 = v9;
      v10 = 0;
      v9 = 0LL;
    }
    if ( v9 )
    {
      sub_18006A214(v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
