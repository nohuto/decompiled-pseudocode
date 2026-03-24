/*
 * XREFs of PoUnregisterSystemState @ 0x14056F040
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x14067D5C0 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
