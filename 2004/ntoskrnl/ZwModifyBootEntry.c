/*
 * XREFs of ZwModifyBootEntry @ 0x1403F5860
 * Callers:
 *     BiModifyBootEntry @ 0x14096F308 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
