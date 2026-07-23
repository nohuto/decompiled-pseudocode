/*
 * XREFs of RtlGetNtSystemRoot @ 0x14070A160
 * Callers:
 *     AslEnvVarQuery @ 0x14073E938 (AslEnvVarQuery.c)
 *     MiDriverLoadSucceeded @ 0x140746B84 (MiDriverLoadSucceeded.c)
 *     SdbpGetProcessHistory @ 0x140962C78 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
