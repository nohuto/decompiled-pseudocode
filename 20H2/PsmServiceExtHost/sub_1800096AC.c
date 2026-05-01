/*
 * XREFs of sub_1800096AC @ 0x1800096AC
 * Callers:
 *     sub_180009518 @ 0x180009518 (sub_180009518.c)
 *     sub_1800417A8 @ 0x1800417A8 (sub_1800417A8.c)
 * Callees:
 *     sub_180008894 @ 0x180008894 (sub_180008894.c)
 *     sub_1800097A8 @ 0x1800097A8 (sub_1800097A8.c)
 *     sub_1800098DC @ 0x1800098DC (sub_1800098DC.c)
 *     sub_180009A2C @ 0x180009A2C (sub_180009A2C.c)
 */

__int64 __fastcall sub_1800096AC(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  PVOID Heap; // rax
  __int64 v16; // rbx
  int v17; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v16 = (__int64)Heap;
  if ( Heap )
  {
    sub_180009A2C(a1, a2, a5, a6, a7, a8, a9, a10, Heap);
    v17 = sub_1800098DC(v16, a3, a4);
    if ( v17 >= 0 )
    {
      sub_1800097A8(v16);
      *a11 = v16;
      v16 = 0LL;
      v17 = 0;
    }
    if ( v16 )
      sub_180008894(v16);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v17;
}
