/*
 * XREFs of _ZwAddBootEntry@8 @ 0x4B2F3020
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  return Wow64SystemServiceCall();
}
