/*
 * XREFs of ZwDelayExecution @ 0x1403F3C40
 * Callers:
 *     IovUnloadDrivers @ 0x1409C22E0 (IovUnloadDrivers.c)
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
