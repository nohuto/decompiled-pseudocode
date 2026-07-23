/*
 * XREFs of _NtModifyBootEntry@4 @ 0x4B2F3AD0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  return Wow64SystemServiceCall();
}
