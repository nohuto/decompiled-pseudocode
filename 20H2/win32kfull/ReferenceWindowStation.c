/*
 * XREFs of ReferenceWindowStation @ 0x1C0016CE0
 * Callers:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

NTSTATUS __fastcall ReferenceWindowStation(struct _KTHREAD *a1, void *a2, ACCESS_MASK a3, _QWORD *a4, int a5)
{
  PVOID v9; // rsi
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  NTSTATUS result; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v22; // rax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0LL;
  ThreadProcess = PsGetThreadProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( ProcessWin32Process )
  {
    if ( !a5
      || !v12
      || (v17 = *(_QWORD *)(v12 + 456)) == 0
      || *(_QWORD *)(ProcessWin32Process + 664) == *(_QWORD *)(v17 + 40) )
    {
      v9 = *(PVOID *)(ProcessWin32Process + 664);
      if ( v9 )
      {
        if ( RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 680), a3) )
        {
LABEL_11:
          *a4 = v9;
          return 0;
        }
        UserSetLastError(5LL);
        return -1073741790;
      }
    }
    if ( v12 )
    {
      v22 = *(_QWORD *)(v12 + 456);
      if ( v22 )
      {
        v9 = *(PVOID *)(v22 + 40);
        if ( !(unsigned int)AccessCheckObject(v9, a3, 0LL, WinStaMapping) )
          return -1073741790;
      }
    }
    if ( v9 )
      goto LABEL_11;
  }
  if ( !a2 )
    return -1073741275;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, a3, ExWindowStationObjectType, 0, &Object, 0LL);
  v9 = Object;
  if ( result >= 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_11;
  }
  return result;
}
