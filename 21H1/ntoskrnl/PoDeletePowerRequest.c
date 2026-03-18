/*
 * XREFs of PoDeletePowerRequest @ 0x1406FF150
 * Callers:
 *     PoUnregisterSystemState @ 0x1405695B0 (PoUnregisterSystemState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  HalPutDmaAdapter((PADAPTER_OBJECT)PowerRequest);
}
