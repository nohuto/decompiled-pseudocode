/*
 * XREFs of _RtlWakeAddressSingleNoFence@4 @ 0x4B36A960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlWakeAddressSingleNoFence(unsigned int a1)
{
  return RtlpWakeByAddress(a1, 0, a1);
}
