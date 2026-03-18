/*
 * XREFs of FxDriverEntry @ 0x1C0018280
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x1C00182B4 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x1C007B008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}
