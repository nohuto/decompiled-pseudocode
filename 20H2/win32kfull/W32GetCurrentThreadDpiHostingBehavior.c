/*
 * XREFs of W32GetCurrentThreadDpiHostingBehavior @ 0x1C00F835C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiHostingBehavior(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v8; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax

  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v12),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    v8 = *(_DWORD **)(v3 + 368);
    if ( v8 )
    {
      if ( v8[1] )
      {
        if ( *v8 <= 1u )
          *(_DWORD *)(v3 + 344) = *v8;
        v8[1] = 0;
      }
      return *(unsigned int *)(v3 + 344);
    }
  }
  return v1;
}
