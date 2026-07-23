/*
 * XREFs of NtModifyDriverEntry @ 0x140950B80
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14094E364 (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140C19590 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
