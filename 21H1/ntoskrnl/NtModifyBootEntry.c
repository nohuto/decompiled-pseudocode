/*
 * XREFs of NtModifyBootEntry @ 0x14094F7B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140C19730 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
