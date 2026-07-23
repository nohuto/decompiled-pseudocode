/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x1800236C8
 * Callers:
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x18009D09C (RtlpHpTagReAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E064 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpReAllocWithExceptionProtection(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  else
    return RtlpReAllocateHeapInternal(a1, 0LL, 0LL);
}
