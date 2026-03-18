/*
 * XREFs of NtSetIntervalProfile @ 0x1407F88C0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x1407F8914 (KeSetIntervalProfile.c)
 */

__int64 __fastcall NtSetIntervalProfile(unsigned int a1, unsigned int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
