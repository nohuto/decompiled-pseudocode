/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00E4F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserValidateTimerCallback()
{
  __int64 v0; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax
  HANDLE ProcessId; // rax

  v0 = 1LL;
  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v3)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v13),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  if ( *(_DWORD *)(v2 + 632) <= 0x501u )
    v9 = *(_DWORD *)(v2 + 648);
  else
    v9 = 0;
  if ( (v9 & 0x1000000) == 0
    || (*(_DWORD *)(v2 + 488) & 0xC) != 0
    || (ProcessId = PsGetProcessId(**(PEPROCESS **)(v2 + 424)), v8 = gpidLogon, ProcessId == (HANDLE)gpidLogon) )
  {
    v0 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v0;
}
