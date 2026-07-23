/*
 * XREFs of ZwUmsThreadYield @ 0x1403FBA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUmsThreadYield(PVOID SchedulerParam)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SchedulerParam);
}
