/*
 * XREFs of PfSnPowerBoostWorker @ 0x14078AED0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x1406DF394 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection_0(RunRef);
}
