/*
 * XREFs of PsTerminateServerSilo @ 0x140908550
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140908CC0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x14090D734 (PspCatchCriticalBreak.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406D7168 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  unsigned int v1; // edx
  struct _KEVENT *v2; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v2, v1, 0);
  }
}
