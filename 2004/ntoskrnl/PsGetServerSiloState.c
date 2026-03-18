/*
 * XREFs of PsGetServerSiloState @ 0x14034ADEC
 * Callers:
 *     SepQueueWorkItem @ 0x14034AC70 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140902B40 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140902BA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140903040 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x140907B14 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1272) + 1104LL);
  else
    return 1LL;
}
