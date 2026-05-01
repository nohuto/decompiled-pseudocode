/*
 * XREFs of ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180055760
 * Callers:
 *     <none>
 * Callees:
 *     ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x180057F54 (-BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x180058B98 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowEventDispatcher::UnboostShellPriority(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  char *Ptr; // rax
  HWND ForegroundWindow; // rax
  HANDLE CurrentProcess; // rax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  v2 = this + 57;
  AcquireSRWLockExclusive(this + 57);
  v3 = this + 59;
  Ptr = (char *)this[59].Ptr;
  if ( Ptr )
  {
    v3->Ptr = Ptr - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(&this[59]);
    if ( !v3->Ptr )
    {
      ForegroundWindow = GetForegroundWindow();
      if ( !GetWindowThreadProcessId(ForegroundWindow, &dwProcessId) || dwProcessId != GetCurrentProcessId() )
      {
        ProcessInformation = 0;
        CurrentProcess = GetCurrentProcess();
        v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x722,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v7,
            v8);
      }
      WindowEventDispatcher::BoostUnboostSiHostProcess((WindowEventDispatcher *)&this[-2], 0);
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
