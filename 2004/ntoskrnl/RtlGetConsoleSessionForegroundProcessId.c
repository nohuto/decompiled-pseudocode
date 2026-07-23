/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x14090CC50
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
