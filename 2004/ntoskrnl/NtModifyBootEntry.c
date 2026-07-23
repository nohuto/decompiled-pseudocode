/*
 * XREFs of NtModifyBootEntry @ 0x140950B50
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14094DB70 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140C19590 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
