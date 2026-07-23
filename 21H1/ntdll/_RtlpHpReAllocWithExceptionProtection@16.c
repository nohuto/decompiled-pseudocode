/*
 * XREFs of _RtlpHpReAllocWithExceptionProtection@16 @ 0x4B34D46A
 * Callers:
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 * Callees:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHpTagReAllocateHeap@16 @ 0x4B370621 (_RtlpHpTagReAllocateHeap@16.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlpHpReAllocWithExceptionProtection(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebp

  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a4, a2);
  else
    return RtlpReAllocateHeapInternal(a1, a2, v4, a3, a4, 0, 0);
}
