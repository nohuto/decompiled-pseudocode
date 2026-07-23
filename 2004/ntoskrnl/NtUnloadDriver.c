/*
 * XREFs of NtUnloadDriver @ 0x140898180
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
