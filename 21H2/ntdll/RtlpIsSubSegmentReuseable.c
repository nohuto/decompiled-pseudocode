/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x180023574
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800235A0 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 */

bool __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_WORD *)(a2 + 32) )
    return (unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, a2) == 0;
  return v2;
}
