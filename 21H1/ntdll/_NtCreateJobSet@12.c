/*
 * XREFs of _NtCreateJobSet@12 @ 0x4B2F3460
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtCreateJobSet(ULONG NumJob, PJOB_SET_ARRAY UserJobSet, ULONG Flags)
{
  return Wow64SystemServiceCall();
}
