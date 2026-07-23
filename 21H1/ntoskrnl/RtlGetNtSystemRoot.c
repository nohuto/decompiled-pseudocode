/*
 * XREFs of RtlGetNtSystemRoot @ 0x1406E62F0
 * Callers:
 *     AslEnvVarQuery @ 0x14073CDB8 (AslEnvVarQuery.c)
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 *     SdbpGetProcessHistory @ 0x1409618D8 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 139) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
