/*
 * XREFs of PoUnregisterSystemState @ 0x14056F280
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140671380 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
