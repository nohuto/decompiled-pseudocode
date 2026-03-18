/*
 * XREFs of GreDecLockCount @ 0x1C007AB30
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 GreDecLockCount()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v2, v1),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        result = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)result) )
  {
    result = PsGetThreadWin32Thread(CurrentThread);
    if ( result )
    {
      result = *(_QWORD *)result;
      if ( result )
        --*(_DWORD *)(result + 104);
    }
  }
  return result;
}
