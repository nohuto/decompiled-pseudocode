/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1800076C4
 * Callers:
 *     RtlpHpAllocateHeap @ 0x18000776C (RtlpHpAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18010E1E0 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x180007230 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhContextAllocate @ 0x1800075AC (RtlpHpLfhContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        unsigned int *BaseAddress,
        __int64 a2,
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
  if ( a3 > (unsigned int)*((unsigned __int16 *)BaseAddress + 446) - 16
    || (v10 = RtlpHpLfhContextAllocate((__int64)(BaseAddress + 208), a2, a3, a4),
        a3 = (unsigned int)v6,
        a2 = v7,
        v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > BaseAddress[116] )
        v11 = (__int64)RtlpHpLargeAlloc((char *)BaseAddress, v7, v6, a4);
      else
        v11 = RtlpHpSegAlloc((unsigned int)BaseAddress + (BaseAddress[68] < v6 ? 448 : 256), a4);
    }
    else
    {
      v11 = RtlpHpVsContextAllocate((_RTL_SRWLOCK *)BaseAddress + 80, a2, a3, a4);
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
