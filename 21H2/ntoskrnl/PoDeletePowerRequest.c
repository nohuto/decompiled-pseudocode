/*
 * XREFs of PoDeletePowerRequest @ 0x14067D5C0
 * Callers:
 *     PoUnregisterSystemState @ 0x14056F040 (PoUnregisterSystemState.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14028278C (PopPowerRequestCleanUp.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  HalPutDmaAdapter((PADAPTER_OBJECT)PowerRequest);
}
