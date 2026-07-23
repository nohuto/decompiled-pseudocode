/*
 * XREFs of ZwAddBootEntry @ 0x1403F4300
 * Callers:
 *     BiAddBootEntry @ 0x14096CC50 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
