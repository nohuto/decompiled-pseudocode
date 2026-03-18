/*
 * XREFs of NtUserInvalidateRect @ 0x1C00426F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
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
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  bool v35; // cf
  int v36; // eax
  struct _KTHREAD *v37; // r15
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // rax
  int ProcessSessionId; // ebx
  __int64 v49; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v51; // rax
  int v52; // ebx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int128 v59; // [rsp+38h] [rbp-60h] BYREF
  __int64 v60; // [rsp+48h] [rbp-50h]
  __int128 v61; // [rsp+58h] [rbp-40h] BYREF

  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6);
  v9 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_31;
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v61 = *a2;
    if ( v10 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(MmUserProbeAddress)
        || (v47 = PsGetCurrentProcess(v14, v13, v15),
            ProcessSessionId = PsGetProcessSessionIdEx(v47),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v49),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v12 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 480) + 224LL) & 1) == 0 )
      {
        v17 = KeGetCurrentThread();
        v18 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v8)
          || (v51 = PsGetCurrentProcess(v20, v19, v21),
              v52 = PsGetProcessSessionIdEx(v51),
              v54 = PsGetCurrentThreadProcess(v53),
              v52 == (unsigned int)PsGetProcessSessionIdEx(v54)) )
        {
          v22 = (__int64 *)PsGetThreadWin32Thread(v17);
          if ( v22 )
            v18 = *v22;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v18 + 480) + 224LL) & 0x20) == 0 )
        {
          v26 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (((unsigned __int16)(v26 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v8,
                                                                                   v23,
                                                                                   v24,
                                                                                   v25) >> 8)) & 0x1FF) != 0 )
            goto LABEL_38;
          v30 = *(unsigned int *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) != 2 || (v31 = 1, (v30 & 0x20000000) == 0) )
            v31 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v30, v27, v28, v29) & 0xF) != 2
            || (v35 = (W32GetCurrentThreadDpiAwarenessContext(v8, v32, v33, v34) & 0x20000000) != 0, v36 = 1, !v35) )
          {
            v36 = 0;
          }
          if ( v31 != v36 )
LABEL_38:
            TransformRectBetweenCoordinateSpaces(&v61, &v61, 0LL, v10);
        }
      }
    }
  }
  v37 = KeGetCurrentThread();
  v38 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (v55 = PsGetCurrentProcess(v40, v39, v41),
        v56 = PsGetProcessSessionIdEx(v55),
        v58 = PsGetCurrentThreadProcess(v57),
        v56 == (unsigned int)PsGetProcessSessionIdEx(v58)) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v37);
    if ( v42 )
      v38 = *v42;
  }
  *(_QWORD *)&v59 = *(_QWORD *)(v38 + 416);
  *(_QWORD *)(v38 + 416) = &v59;
  *((_QWORD *)&v59 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  v9 = xxxRedrawWindow((struct tagWND *)v10);
  ThreadUnlock1(v44, v43, v45);
LABEL_31:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
