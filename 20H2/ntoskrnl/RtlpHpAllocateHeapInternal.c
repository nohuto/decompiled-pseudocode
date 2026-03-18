/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1403093D8
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1403092CC (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402CC910 (RtlpHpSegAlloc.c)
 *     RtlpHpLargeAlloc @ 0x140308ADC (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x1403094BC (RtlpHpLfhContextAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x140309844 (RtlpHpVsContextAllocate.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, size_t a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rbx
  size_t v7; // rsi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v12; // rax

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*(unsigned __int16 *)(a1 + 892) - 16
    || (v10 = RtlpHpLfhContextAllocate(a1 + 832, a2, a3, a4), a3 = (unsigned int)v6, a2 = (unsigned int)v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 464) )
        v12 = (__int64)RtlpHpLargeAlloc(a1, v7, v6, v5);
      else
        v12 = RtlpHpSegAlloc(a1 + (*(unsigned int *)(a1 + 272) < v6 ? 448LL : 256LL), v7, v6, v6, v5);
    }
    else
    {
      v12 = RtlpHpVsContextAllocate(a1 + 640, a2, a3, v5);
    }
    v10 = v12;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
