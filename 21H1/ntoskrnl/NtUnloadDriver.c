/*
 * XREFs of NtUnloadDriver @ 0x140896E60
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
