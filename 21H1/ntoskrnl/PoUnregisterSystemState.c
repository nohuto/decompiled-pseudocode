/*
 * XREFs of PoUnregisterSystemState @ 0x1405695B0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1406FF150 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
