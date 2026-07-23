/*
 * XREFs of NtAddDriverEntry @ 0x14094E690
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  if ( dword_140C19730 == 2 )
    return ExpSetDriverEntry(1, DriverEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
