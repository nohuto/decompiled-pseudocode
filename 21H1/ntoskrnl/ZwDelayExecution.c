/*
 * XREFs of ZwDelayExecution @ 0x1403F29B0
 * Callers:
 *     IovUnloadDrivers @ 0x1409C22D0 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}
