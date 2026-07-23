/*
 * XREFs of NtModifyDriverEntry @ 0x1409542E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x140951AC4 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140C197B0 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
