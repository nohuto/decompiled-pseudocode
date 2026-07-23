/*
 * XREFs of NtAddBootEntry @ 0x14094E660
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  if ( dword_140C19730 == 2 )
    return ExpSetBootEntry(1, BootEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
