/*
 * XREFs of _NtSetIntervalProfile@8 @ 0x4B2F4380
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE Source)
{
  return Wow64SystemServiceCall();
}
