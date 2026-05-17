/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1800076C4
 * Callers:
 *     RtlpHpAllocateHeap @ 0x18000776C (RtlpHpAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18010E6F0 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x180007230 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhContextAllocate @ 0x1800075AC (RtlpHpLfhContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  size_t v6; // rbx
  unsigned int v7; // esi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rax

  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*(unsigned __int16 *)(a1 + 892) - 16
    || (v10 = RtlpHpLfhContextAllocate(a1 + 832, a2, a3, a4), LODWORD(a3) = v6, a2 = v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *(unsigned int *)(a1 + 464) )
        v11 = (__int64)RtlpHpLargeAlloc((__int128 *)a1, v7, v6, a4);
      else
        v11 = RtlpHpSegAlloc((unsigned int)a1 + (*(unsigned int *)(a1 + 272) < v6 ? 448 : 256), v7, v6, v6, a4);
    }
    else
    {
      v11 = RtlpHpVsContextAllocate((int)a1 + 640, a2, a3, a4);
    }
    v10 = v11;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
