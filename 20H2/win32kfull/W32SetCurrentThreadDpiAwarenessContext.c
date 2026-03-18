/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C00571B0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     xxxHkCallHook @ 0x1C0056CC0 (xxxHkCallHook.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00D6418 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(__int64 a1)
{
  unsigned int v1; // esi
  int v2; // r14d
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax

  v1 = 0;
  v2 = 0;
  if ( (int)a1 >= 0 )
    v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( v4 )
  {
    v12 = *(_DWORD **)(v4 + 360);
    if ( v12 )
    {
      CaptureAndValidateUserModeDpiAwarenessContext(v4);
      v12 = *(_DWORD **)(v4 + 360);
    }
    v1 = *(_DWORD *)(v4 + 340);
    *(_DWORD *)(v4 + 340) = v2;
    if ( v12 )
      *v12 = v2;
  }
  if ( !v1 )
    v1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v10, v9, v11) + 280) | 0x80000000;
  if ( v4 && (*(_DWORD *)(v4 + 328) & 4) != 0 && (v1 & 0xF) == 2 && (v1 & 0xF0) == 0x20 )
    v1 |= 0x20000000u;
  return v1;
}
