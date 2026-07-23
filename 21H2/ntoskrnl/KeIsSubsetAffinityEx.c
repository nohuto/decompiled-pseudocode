/*
 * XREFs of KeIsSubsetAffinityEx @ 0x140513880
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x14021DB00 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x14021DB70 (PpmPerfApplyDomainState.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140566650 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x1405680E0 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x140907C44 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x140908724 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1402CE930 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403C2680 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  KeAndAffinityEx(a1, a2, v5);
  return KeIsEqualAffinityEx(a1, v5);
}
