/*
 * XREFs of _NtTerminateEnclave@8 @ 0x4B2F4560
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  return Wow64SystemServiceCall();
}
