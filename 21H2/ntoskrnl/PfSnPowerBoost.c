/*
 * XREFs of PfSnPowerBoost @ 0x1406E18A0
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     PfSnPowerBoostUpdate @ 0x1406E191C (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  if ( a2 )
  {
    PfSnPowerBoostUpdate(1LL);
    ExAcquireRundownProtection(RunRef);
    KiSetTimerEx((unsigned __int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      PfSnPowerBoostUpdate(0LL);
      ExReleaseRundownProtection(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
