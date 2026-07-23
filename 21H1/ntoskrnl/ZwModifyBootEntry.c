/*
 * XREFs of ZwModifyBootEntry @ 0x1403F45D0
 * Callers:
 *     BiModifyBootEntry @ 0x14096DF68 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
