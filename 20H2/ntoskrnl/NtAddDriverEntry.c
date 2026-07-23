/*
 * XREFs of NtAddDriverEntry @ 0x1409557F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  if ( dword_140C19690 == 2 )
    return ExpSetDriverEntry(1, DriverEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
