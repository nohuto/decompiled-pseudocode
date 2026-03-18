/*
 * XREFs of GreGetStockObject @ 0x1C00326E0
 * Callers:
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     bInitICM @ 0x1C0293518 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00327CC (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C01438E0 (GreGetDpiDepDefaultGuiFont.c)
 */

void *__fastcall GreGetStockObject(int a1)
{
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v13; // eax
  void *result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  LOBYTE(v1) = 18;
  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v11 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v11 + 340) )
        {
          LOBYTE(v1) = *(_DWORD *)(v11 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9, v10);
          if ( CurrentProcessWin32Process )
            v1 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  if ( (unsigned int)v3 > 0x11 )
  {
LABEL_13:
    if ( (unsigned int)v3 > 0x15 )
      return 0LL;
    else
      return gahStockObjects[v3];
  }
  v13 = 205824;
  if ( !_bittest(&v13, v3) || (v1 & 0xF) != 0 || (result = gahStockObjects96[v3]) == 0LL )
  {
    if ( (_DWORD)v3 == 17 )
      return (void *)GreGetDpiDepDefaultGuiFont(17LL);
    goto LABEL_13;
  }
  return result;
}
