/*
 * XREFs of RtlpFcInitializeBuffers @ 0x140360F18
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407B7FA4 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
