/*
 * XREFs of RtlGetSuiteMask @ 0x1406FBD20
 * Callers:
 *     RtlGetVersion @ 0x1406FBC60 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
