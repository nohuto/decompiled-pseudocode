/*
 * XREFs of NtSetIntervalProfile @ 0x140722290
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x1407222E4 (KeSetIntervalProfile.c)
 */

__int64 __fastcall NtSetIntervalProfile(unsigned int a1, unsigned int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
