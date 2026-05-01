/*
 * XREFs of sub_1800301E8 @ 0x1800301E8
 * Callers:
 *     sub_18002FB90 @ 0x18002FB90 (sub_18002FB90.c)
 *     sub_1800427A0 @ 0x1800427A0 (sub_1800427A0.c)
 * Callees:
 *     sub_18002FDF4 @ 0x18002FDF4 (sub_18002FDF4.c)
 *     sub_180030158 @ 0x180030158 (sub_180030158.c)
 *     sub_1800302AC @ 0x1800302AC (sub_1800302AC.c)
 *     sub_180030370 @ 0x180030370 (sub_180030370.c)
 */

__int64 __fastcall sub_1800301E8(__int64 a1, unsigned int a2, volatile signed __int64 **a3)
{
  volatile signed __int64 *Heap; // rax
  volatile signed __int64 *v7; // rbx
  int v8; // edi

  Heap = (volatile signed __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xD8uLL);
  v7 = Heap;
  if ( Heap )
  {
    sub_180030158((__int64)Heap, a1);
    v8 = sub_180030370(v7, a1, a2, a1 + 72);
    if ( v8 >= 0 )
    {
      sub_1800302AC(a1, v7);
      if ( a3 )
      {
        if ( _InterlockedIncrement64(v7 + 2) <= 1 )
          __fastfail(0xEu);
        *a3 = v7;
      }
      v7 = 0LL;
      v8 = 0;
    }
    if ( v7 )
      sub_18002FDF4(v7);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
