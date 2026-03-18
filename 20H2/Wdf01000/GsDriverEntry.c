/*
 * XREFs of GsDriverEntry @ 0x1C00C7010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x1C002D4A0 (DriverEntry.c)
 *     __security_init_cookie @ 0x1C00C7044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
