/*
 * XREFs of _RtlWaitOnAddress@16 @ 0x4B36A8E0
 * Callers:
 *     _RtlpFcBufferManagerUpdateBuffers@16 @ 0x4B2E5386 (_RtlpFcBufferManagerUpdateBuffers@16.c)
 * Callees:
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 */

int __stdcall RtlWaitOnAddress(volatile signed __int64 *a1, int a2, unsigned int a3, int a4)
{
  return RtlpWaitOnAddress(a1, a2, a3, a4, RtlpWaitOnAddressSpinCycleCount);
}
