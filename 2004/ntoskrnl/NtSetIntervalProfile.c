/*
 * XREFs of NtSetIntervalProfile @ 0x140722290
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x1407222E4 (KeSetIntervalProfile.c)
 */

NTSTATUS __cdecl NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE Source)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  KeSetIntervalProfile(Interval, (unsigned int)Source);
  return 0;
}
