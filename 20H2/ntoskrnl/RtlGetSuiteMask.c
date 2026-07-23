/*
 * XREFs of RtlGetSuiteMask @ 0x1406CE650
 * Callers:
 *     RtlGetVersion @ 0x1406CE590 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 141) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
