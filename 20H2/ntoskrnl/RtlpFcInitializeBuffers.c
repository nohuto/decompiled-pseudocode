/*
 * XREFs of RtlpFcInitializeBuffers @ 0x140331D18
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407C6834 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
