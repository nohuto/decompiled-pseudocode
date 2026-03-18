/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14033FAF8
 * Callers:
 *     PopSetWatchdog @ 0x14033F820 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140577380 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x140577460 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
