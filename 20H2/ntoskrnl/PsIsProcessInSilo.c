/*
 * XREFs of PsIsProcessInSilo @ 0x14023F168
 * Callers:
 *     PsIsThreadInSilo @ 0x14023F0B8 (PsIsThreadInSilo.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PsLookupThreadByThreadId @ 0x14063AEE0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14063B130 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x14063B1E0 (PspThreadFromTicket.c)
 *     NtGetNextProcess @ 0x140786AD0 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1406DF41C (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
