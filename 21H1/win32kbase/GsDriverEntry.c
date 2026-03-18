/*
 * XREFs of GsDriverEntry @ 0x1C0299010
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C0299044 (__security_init_cookie.c)
 *     DriverEntry @ 0x1C029C0B0 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
