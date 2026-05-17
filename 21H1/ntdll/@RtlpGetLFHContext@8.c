/*
 * XREFs of @RtlpGetLFHContext@8 @ 0x4B2AE26A
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     @RtlpInitializeSegmentInfoForBucket@8 @ 0x4B2AE2AF (@RtlpInitializeSegmentInfoForBucket@8.c)
 */

__int16 __fastcall RtlpGetLFHContext(int a1, unsigned int a2)
{
  unsigned int v2; // esi

  if ( a1
    && a2 <= RtlpLargestLfhBlock
    && (v2 = (unsigned __int8)byte_4B28B5FF[(a2 + 15) >> 3], v2 < 0x81)
    && (*(_DWORD *)(a1 + 4 * v2 + 960) || RtlpInitializeSegmentInfoForBucket() >= 0) )
  {
    return v2;
  }
  else
  {
    return -1;
  }
}
