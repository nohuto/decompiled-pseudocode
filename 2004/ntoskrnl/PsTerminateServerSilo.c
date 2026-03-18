/*
 * XREFs of PsTerminateServerSilo @ 0x140902940
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409030A0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x140907B14 (PspCatchCriticalBreak.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14027B380 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140656408 (PspTerminateAllProcessesInJobHierarchy.c)
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
