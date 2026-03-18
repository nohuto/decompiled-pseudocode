/*
 * XREFs of RtlpFcLeaveRegion @ 0x14078A3D4
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A648C (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
