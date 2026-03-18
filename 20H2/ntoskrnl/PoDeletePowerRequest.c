/*
 * XREFs of PoDeletePowerRequest @ 0x14071C080
 * Callers:
 *     PoUnregisterSystemState @ 0x14056D630 (PoUnregisterSystemState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  HalPutDmaAdapter((PADAPTER_OBJECT)PowerRequest);
}
