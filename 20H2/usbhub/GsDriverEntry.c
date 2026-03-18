/*
 * XREFs of GsDriverEntry @ 0x1C0074010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x1C0041468 (DriverEntry.c)
 *     __security_init_cookie @ 0x1C0074044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
