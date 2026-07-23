/*
 * XREFs of NtModifyBootEntry @ 0x140956910
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140C19690 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
