/*
 * XREFs of PsGetServerSiloState @ 0x14030D90C
 * Callers:
 *     SepQueueWorkItem @ 0x14030D790 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140901CE0 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140901D40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140902240 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x140906864 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1272) + 1096LL);
  else
    return 1LL;
}
