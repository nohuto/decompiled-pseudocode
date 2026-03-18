/*
 * XREFs of PoUnregisterSystemState @ 0x14056D630
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x14071C080 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
