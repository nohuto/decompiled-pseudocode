/*
 * XREFs of _RtlWakeAddressAllNoFence@4 @ 0x4B36A910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlWakeAddressAllNoFence(unsigned int a1)
{
  return RtlpWakeByAddress(a1, 1, a1);
}
