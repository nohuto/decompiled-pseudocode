/*
 * XREFs of NtModifyDriverEntry @ 0x14094F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140C19730 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
