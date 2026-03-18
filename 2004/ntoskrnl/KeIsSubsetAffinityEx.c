/*
 * XREFs of KeIsSubsetAffinityEx @ 0x14050E1D0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainStates @ 0x140330D10 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x140330D80 (PpmPerfApplyDomainState.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140560F60 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x1405629F0 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x140904714 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1409051F4 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14021EBB0 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403C0380 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  KeAndAffinityEx(a1, a2, v5);
  return KeIsEqualAffinityEx(a1, v5);
}
