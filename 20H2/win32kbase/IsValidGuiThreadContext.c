/*
 * XREFs of IsValidGuiThreadContext @ 0x1C004CDDC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsValidGuiThreadContext()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rax

  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v1, v0);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v16 = PsGetCurrentProcess(v5, v4),
        v17 = PsGetProcessSessionIdEx(v16),
        v18 = PsGetCurrentThreadProcess(),
        v17 == (unsigned int)PsGetProcessSessionIdEx(v18)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9, v10);
  return v3
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v3 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v3 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0;
}
