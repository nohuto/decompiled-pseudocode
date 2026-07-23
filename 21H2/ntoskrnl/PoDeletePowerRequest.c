/*
 * XREFs of PoDeletePowerRequest @ 0x140671380
 * Callers:
 *     PoUnregisterSystemState @ 0x14056F280 (PoUnregisterSystemState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  HalPutDmaAdapter((PADAPTER_OBJECT)PowerRequest);
}
