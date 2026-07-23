/*
 * XREFs of ZwModifyBootEntry @ 0x1403FA430
 * Callers:
 *     BiModifyBootEntry @ 0x1409750D8 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
