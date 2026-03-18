/*
 * XREFs of NtSetIntervalProfile @ 0x1407203D0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x140720424 (KeSetIntervalProfile.c)
 */

__int64 __fastcall NtSetIntervalProfile(unsigned int a1, unsigned int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
