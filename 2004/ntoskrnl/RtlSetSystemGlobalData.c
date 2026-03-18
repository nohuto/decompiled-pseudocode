/*
 * XREFs of RtlSetSystemGlobalData @ 0x1403F2424
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlSetSystemGlobalData(__int64 a1, _DWORD *a2)
{
  if ( PsIsCurrentThreadInServerSilo() )
    *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 584LL) = *a2;
  else
    MEMORY[0xFFFFF78000000240] = *a2;
  return 0LL;
}
