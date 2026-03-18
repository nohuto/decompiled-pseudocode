/*
 * XREFs of PsIsProcessInSilo @ 0x14027D828
 * Callers:
 *     PsIsThreadInSilo @ 0x14027D7A8 (PsIsThreadInSilo.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     PsLookupProcessByProcessId @ 0x140666370 (PsLookupProcessByProcessId.c)
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x14070CFEC (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
