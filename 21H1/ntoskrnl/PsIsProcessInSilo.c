/*
 * XREFs of PsIsProcessInSilo @ 0x140204518
 * Callers:
 *     PsIsThreadInSilo @ 0x140204498 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x1405E0070 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x1407760C0 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406E918C (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
