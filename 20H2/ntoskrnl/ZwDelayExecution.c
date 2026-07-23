/*
 * XREFs of ZwDelayExecution @ 0x1403F87F0
 * Callers:
 *     IovUnloadDrivers @ 0x1409C8300 (IovUnloadDrivers.c)
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
