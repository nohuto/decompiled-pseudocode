/*
 * XREFs of _NtQueryIntervalProfile@8 @ 0x4B2F3E90
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  return Wow64SystemServiceCall();
}
