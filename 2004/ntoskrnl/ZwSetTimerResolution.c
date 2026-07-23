/*
 * XREFs of ZwSetTimerResolution @ 0x1403F6BC0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036A7D4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&DesiredTime);
}
