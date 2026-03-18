/*
 * XREFs of RtlpFcLeaveRegion @ 0x14077BDD4
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A4060 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
