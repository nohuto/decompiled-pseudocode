/*
 * XREFs of RtlWaitOnAddress @ 0x180063460
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005CA68 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x1800636B4 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlWaitOnAddress(int a1, int a2, int a3, int a4)
{
  return RtlpWaitOnAddress(a1, a2, a3, a4, RtlpWaitOnAddressSpinCycleCount);
}
