/*
 * XREFs of PfSnPowerBoost @ 0x14070CE28
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1406BB750 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     PfSnPowerBoostUpdate @ 0x14070CEA4 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  if ( a2 )
  {
    PfSnPowerBoostUpdate(1LL);
    ExAcquireRundownProtection_0(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      PfSnPowerBoostUpdate(0LL);
      ExReleaseRundownProtection_0(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
