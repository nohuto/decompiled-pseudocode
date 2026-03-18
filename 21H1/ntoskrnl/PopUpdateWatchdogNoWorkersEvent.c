/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14035C0D0
 * Callers:
 *     PopSetWatchdog @ 0x14035BDF8 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140573300 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405733E0 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
