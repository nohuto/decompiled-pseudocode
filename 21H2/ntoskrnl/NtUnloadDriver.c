/*
 * XREFs of NtUnloadDriver @ 0x14089B3E0
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
