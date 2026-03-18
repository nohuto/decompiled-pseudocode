/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1406ED730
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14077AB6C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(32LL, a1, a2, a3);
}
