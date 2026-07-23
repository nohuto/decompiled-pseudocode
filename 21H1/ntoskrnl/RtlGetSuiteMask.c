/*
 * XREFs of RtlGetSuiteMask @ 0x1406D82C0
 * Callers:
 *     RtlGetVersion @ 0x1406D8200 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 139) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
