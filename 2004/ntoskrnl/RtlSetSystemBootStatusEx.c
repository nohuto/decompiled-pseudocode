/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x140711260
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14078356C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(32LL, a1, a2, a3);
}
