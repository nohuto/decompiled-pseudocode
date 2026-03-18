/*
 * XREFs of PoDeletePowerRequest @ 0x14064EE30
 * Callers:
 *     PoUnregisterSystemState @ 0x140569C00 (PoUnregisterSystemState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  HalPutDmaAdapter((PADAPTER_OBJECT)PowerRequest);
}
