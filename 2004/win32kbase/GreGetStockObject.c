/*
 * XREFs of GreGetStockObject @ 0x1C0083DB0
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     bInitICM @ 0x1C0295010 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0083E9C (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C0145D70 (GreGetDpiDepDefaultGuiFont.c)
 */

void *__fastcall GreGetStockObject(__int64 a1)
{
  int v1; // esi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v10; // eax
  void *result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax

  LOBYTE(v1) = 18;
  CurrentThread = KeGetCurrentThread();
  v3 = (int)a1;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v8 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v8 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v8 + 340) )
        {
          LOBYTE(v1) = *(_DWORD *)(v8 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
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
  v10 = 205824;
  if ( !_bittest(&v10, v3) || (v1 & 0xF) != 0 || (result = gahStockObjects96[v3]) == 0LL )
  {
    if ( (_DWORD)v3 == 17 )
      return (void *)GreGetDpiDepDefaultGuiFont(17LL);
    goto LABEL_13;
  }
  return result;
}
