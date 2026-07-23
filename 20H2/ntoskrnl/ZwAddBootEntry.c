/*
 * XREFs of ZwAddBootEntry @ 0x1403F8EB0
 * Callers:
 *     BiAddBootEntry @ 0x140972A20 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
