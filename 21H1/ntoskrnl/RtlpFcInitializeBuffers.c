/*
 * XREFs of RtlpFcInitializeBuffers @ 0x140323448
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407B4E34 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
