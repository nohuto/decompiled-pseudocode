/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140275F20
 * Callers:
 *     PopSetWatchdog @ 0x140275C48 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140573950 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x140573A30 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
