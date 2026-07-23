/*
 * XREFs of NtUnloadDriver @ 0x14089DCB0
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
