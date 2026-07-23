/*
 * XREFs of ZwSuspendThread @ 0x1403FB910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
