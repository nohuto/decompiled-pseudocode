/*
 * XREFs of ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180082920
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1800828D4 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180336730 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180082984 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(XamlLauncherState *this, unsigned __int64 *a2)
{
  void **v2; // rbx
  char *v3; // rcx
  __int64 result; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (void **)((char *)this + 1056);
  v3 = (char *)*((_QWORD *)this + 132);
  if ( (unsigned __int64)(v3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = GetSiHostProcessHandle(0x1000u, v2);
    if ( (int)result < 0 )
      return result;
    v3 = (char *)*v2;
  }
  if ( QueryProcessCycleTime(v3, a2) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x975,
             (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
             v6);
}
