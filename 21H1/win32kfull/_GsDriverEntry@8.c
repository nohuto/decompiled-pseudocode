/*
 * XREFs of _GsDriverEntry@8 @ 0x292000
 * Callers:
 *     <none>
 * Callees:
 *     ___security_init_cookie @ 0x292010 (___security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  __security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
