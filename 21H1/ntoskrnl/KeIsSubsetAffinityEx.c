/*
 * XREFs of KeIsSubsetAffinityEx @ 0x14050DB80
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainStates @ 0x1402F4110 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x1402F4180 (PpmPerfApplyDomainState.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140560910 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x1405623A0 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x140903434 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x140903F14 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140277C00 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403BF3F0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  KeAndAffinityEx(a1, a2, v5);
  return KeIsEqualAffinityEx(a1, v5);
}
