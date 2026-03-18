/*
 * XREFs of PfSnPowerBoostWorker @ 0x14077C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x14070CEA4 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection_0(RunRef);
}
