/*
 * XREFs of NtUserInvalidateRect @ 0x1C0071290
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  ULONG64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v19; // r15
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  int v27; // ebx
  bool v28; // cf
  int v29; // eax
  struct _KTHREAD *v30; // r15
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  int ProcessSessionId; // ebx
  __int64 v42; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ebx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int128 v52; // [rsp+38h] [rbp-60h] BYREF
  __int64 v53; // [rsp+48h] [rbp-50h]
  __int128 v54; // [rsp+58h] [rbp-40h] BYREF

  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6);
  v9 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v11 = ValidateHwnd(a1);
    if ( !v11 )
      goto LABEL_31;
  }
  else
  {
    v11 = 0LL;
  }
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v54 = *a2;
    if ( v11 )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(MmUserProbeAddress)
        || (v40 = PsGetCurrentProcess(v16, v15, v17),
            ProcessSessionId = PsGetProcessSessionIdEx(v40),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v42),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v14 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v14 + 472) + 224LL) & 1) == 0 )
      {
        v19 = KeGetCurrentThread();
        v20 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v8)
          || (v44 = PsGetCurrentProcess(v22, v21, v23),
              v45 = PsGetProcessSessionIdEx(v44),
              v47 = PsGetCurrentThreadProcess(v46),
              v45 == (unsigned int)PsGetProcessSessionIdEx(v47)) )
        {
          v24 = (__int64 *)PsGetThreadWin32Thread(v19);
          if ( v24 )
            v20 = *v24;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v20 + 472) + 224LL) & 0x20) == 0 )
        {
          v25 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL);
          if ( (((unsigned __int16)(v25 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v8) >> 8)) & 0x1FF) != 0 )
            goto LABEL_38;
          v26 = *(unsigned int *)(*(_QWORD *)(v11 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) & 0xF) != 2 || (v27 = 1, (v26 & 0x20000000) == 0) )
            v27 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v26) & 0xF) != 2
            || (v28 = (W32GetCurrentThreadDpiAwarenessContext(v8) & 0x20000000) != 0, v29 = 1, !v28) )
          {
            v29 = 0;
          }
          if ( v27 != v29 )
LABEL_38:
            TransformRectBetweenCoordinateSpaces(&v54, &v54, 0LL, v11);
        }
      }
    }
  }
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (v48 = PsGetCurrentProcess(v33, v32, v34),
        v49 = PsGetProcessSessionIdEx(v48),
        v51 = PsGetCurrentThreadProcess(v50),
        v49 == (unsigned int)PsGetProcessSessionIdEx(v51)) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v35 )
      v31 = *v35;
  }
  *(_QWORD *)&v52 = *(_QWORD *)(v31 + 408);
  *(_QWORD *)(v31 + 408) = &v52;
  *((_QWORD *)&v52 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  v9 = xxxRedrawWindow((struct tagWND *)v11);
  ThreadUnlock1(v37, v36, v38);
LABEL_31:
  UserSessionSwitchLeaveCrit(v8, v10, v12);
  return v9;
}
