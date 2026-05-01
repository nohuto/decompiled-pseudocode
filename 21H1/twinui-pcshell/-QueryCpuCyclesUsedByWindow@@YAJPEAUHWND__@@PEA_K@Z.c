/*
 * XREFs of ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x180015A84
 * Callers:
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180050B14 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180050B70 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180115624 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall QueryCpuCyclesUsedByWindow(HWND a1, unsigned __int64 *a2)
{
  char *v2; // rbx
  wil::details *v4; // rcx
  int LastErrorFailHr; // edi
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = 0LL;
  if ( a1 )
  {
    dwProcessId = 0;
    GetWindowThreadProcessId(a1, &dwProcessId);
    v2 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
    if ( v2 )
      LastErrorFailHr = 0;
    else
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
    if ( LastErrorFailHr >= 0 )
    {
      if ( QueryProcessCycleTime(v2, a2) )
        LastErrorFailHr = 0;
      else
        LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x950,
                            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                            v6);
    }
  }
  else
  {
    LastErrorFailHr = -2147024809;
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return (unsigned int)LastErrorFailHr;
}
