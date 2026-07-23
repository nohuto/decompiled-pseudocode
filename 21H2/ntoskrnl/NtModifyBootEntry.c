/*
 * XREFs of NtModifyBootEntry @ 0x1409542B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409512D0 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
