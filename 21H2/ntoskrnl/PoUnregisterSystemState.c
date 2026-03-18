/*
 * XREFs of PoUnregisterSystemState @ 0x140202100
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1407EF700 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
