/*
 * XREFs of NtAddBootEntry @ 0x1409557C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  if ( dword_140C19690 == 2 )
    return ExpSetBootEntry(1, BootEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
