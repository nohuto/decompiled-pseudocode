/*
 * XREFs of PsGetServerSiloState @ 0x14031BDAC
 * Callers:
 *     SepQueueWorkItem @ 0x14031BC30 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140908750 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409087B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140908C68 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14090D734 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1272) + 1112LL);
  else
    return 1LL;
}
