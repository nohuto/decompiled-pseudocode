/*
 * XREFs of KeIsSubsetAffinityEx @ 0x14020EF50
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     PpmPerfApplyDomainStates @ 0x1402255A0 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x14022560C (PpmPerfApplyDomainState.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405C7A38 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x1405C9170 (PpmUpdateIdleDomains.c)
 *     PspCheckForJobAffinityViolation @ 0x1406EB2C4 (PspCheckForJobAffinityViolation.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AD870 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1409AE810 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     KiAndAffinityEx @ 0x1402FF140 (KiAndAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int64 a1, __int64 a2)
{
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  KiAndAffinityEx(a1, a2, v5, 32LL);
  return KeIsEqualAffinityEx(a1, v5);
}
