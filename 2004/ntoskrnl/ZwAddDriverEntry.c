/*
 * XREFs of ZwAddDriverEntry @ 0x1403F4320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
