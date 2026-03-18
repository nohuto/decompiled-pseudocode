/*
 * XREFs of PoUnregisterSystemState @ 0x140569C00
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x14064EE30 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
