/*
 * XREFs of NtModifyDriverEntry @ 0x140956940
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140C19690 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
