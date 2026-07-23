/*
 * XREFs of ZwWaitForAlertByThreadId @ 0x1403F5D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Address);
}
