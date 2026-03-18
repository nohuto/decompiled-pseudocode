/*
 * XREFs of KeIsSubsetAffinityEx @ 0x140511B00
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainStates @ 0x140304310 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x140304380 (PpmPerfApplyDomainState.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140564940 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x1405663D0 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x14090A334 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x14090AE14 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140288400 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403C1A00 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  KeAndAffinityEx(a1, a2, v5);
  return KeIsEqualAffinityEx(a1, v5);
}
