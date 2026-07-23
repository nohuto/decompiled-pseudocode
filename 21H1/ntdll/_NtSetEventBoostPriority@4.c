/*
 * XREFs of _NtSetEventBoostPriority@4 @ 0x4B2F2C50
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetEventBoostPriority(HANDLE EventHandle)
{
  return Wow64SystemServiceCall();
}
