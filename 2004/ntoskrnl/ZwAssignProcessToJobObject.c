/*
 * XREFs of ZwAssignProcessToJobObject @ 0x1403F47A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
