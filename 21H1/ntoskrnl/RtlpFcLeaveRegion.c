/*
 * XREFs of RtlpFcLeaveRegion @ 0x1407799C4
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A3900 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
