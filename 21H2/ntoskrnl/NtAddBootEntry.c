/*
 * XREFs of NtAddBootEntry @ 0x140953160
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1409512D0 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetBootEntry(1, BootEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
