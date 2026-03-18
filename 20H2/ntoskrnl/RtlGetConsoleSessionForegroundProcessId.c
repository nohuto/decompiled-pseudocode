/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x140912880
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 141) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
