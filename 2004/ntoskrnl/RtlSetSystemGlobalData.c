/*
 * XREFs of RtlSetSystemGlobalData @ 0x1403F2424
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

DWORD __cdecl RtlSetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  if ( PsIsCurrentThreadInServerSilo() )
    *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 584LL) = *(_DWORD *)Buffer;
  else
    MEMORY[0xFFFFF78000000240] = *(_DWORD *)Buffer;
  return 0;
}
