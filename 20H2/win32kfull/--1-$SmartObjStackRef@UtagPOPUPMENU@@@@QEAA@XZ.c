/*
 * XREFs of ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C015B3B8
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F6A50 (NtUserCalculatePopupWindowPosition.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v9; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v9),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
  {
    if ( *(_BYTE *)(*a1 + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(v3 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v3 + 1472) = result;
  }
  return result;
}
