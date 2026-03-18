/*
 * XREFs of RtlSetSystemGlobalData @ 0x1403F6A54
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlSetSystemGlobalData(__int64 a1, _DWORD *a2)
{
  if ( PsIsCurrentThreadInServerSilo() )
    *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 141) + 584LL) = *a2;
  else
    MEMORY[0xFFFFF78000000240] = *a2;
  return 0LL;
}
