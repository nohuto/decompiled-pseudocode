/*
 * XREFs of IsValidGuiThreadContext @ 0x1C0092A5C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D16E0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1A80 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidGuiThreadContext(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax

  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
  {
    CurrentProcess = PsGetCurrentProcess(v2, v1);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v13);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (v15 = PsGetCurrentProcess(v6, v5),
        v16 = PsGetProcessSessionIdEx(v15),
        v18 = PsGetCurrentThreadProcess(v17),
        v16 == (unsigned int)PsGetProcessSessionIdEx(v18)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  return v4
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v4 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v4 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0;
}
