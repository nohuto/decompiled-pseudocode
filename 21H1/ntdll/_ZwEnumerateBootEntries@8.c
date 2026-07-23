/*
 * XREFs of _ZwEnumerateBootEntries@8 @ 0x4B2F3760
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  return Wow64SystemServiceCall();
}
