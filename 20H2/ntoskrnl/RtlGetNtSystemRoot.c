/*
 * XREFs of RtlGetNtSystemRoot @ 0x1406DC560
 * Callers:
 *     AslEnvVarQuery @ 0x14074D51C (AslEnvVarQuery.c)
 *     MiDriverLoadSucceeded @ 0x140755764 (MiDriverLoadSucceeded.c)
 *     SdbpGetProcessHistory @ 0x140968A48 (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 141) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
