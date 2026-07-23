/*
 * XREFs of NtAddDriverEntry @ 0x140953190
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140951AC4 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetDriverEntry(1, DriverEntry, (unsigned __int64)Id);
  else
    return -1073741822;
}
