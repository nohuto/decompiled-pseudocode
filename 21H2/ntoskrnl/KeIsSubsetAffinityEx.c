/*
 * XREFs of KeIsSubsetAffinityEx @ 0x140513640
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainStates @ 0x1402A0580 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x1402A05F0 (PpmPerfApplyDomainState.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140566410 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x140567EA0 (PpmUpdateIdleDomains.c)
 *     PsUpdateActiveProcessAffinity @ 0x140907AE4 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1409085C4 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14022A080 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403C2250 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v5[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  KeAndAffinityEx(a1, a2, v5);
  return KeIsEqualAffinityEx(a1, v5);
}
