/*
 * XREFs of PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409070F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 */

LONG __fastcall PspSetVmProcessorHostProcessWorkerRoutine(PRKEVENT Event)
{
  KeGenericProcessorCallback(
    (unsigned __int16 *)KeActiveProcessors,
    (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop,
    0LL,
    2);
  return KeSetEvent(Event, 0, 0);
}
