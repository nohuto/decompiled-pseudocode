/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C0026E90
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetScrollBarInfo @ 0x1C00272B4 (xxxGetScrollBarInfo.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C009B5D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  int ScrollBarInfo; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rax
  int v19; // esi
  unsigned int v20; // edi
  struct _KTHREAD *v21; // r13
  __int64 v22; // r14
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v26; // r14d
  struct _KTHREAD *v27; // r13
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // ebx
  __int64 v45; // rax
  unsigned int v46; // [rsp+20h] [rbp-C8h]
  __int64 v47; // [rsp+38h] [rbp-B0h]
  __int128 v48; // [rsp+50h] [rbp-98h] BYREF
  __int64 v49; // [rsp+60h] [rbp-88h]
  __int128 v50; // [rsp+78h] [rbp-70h] BYREF
  __int128 v51; // [rsp+88h] [rbp-60h]
  __int128 v52; // [rsp+98h] [rbp-50h]
  __int64 v53; // [rsp+A8h] [rbp-40h]
  int v54; // [rsp+B0h] [rbp-38h]

  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0;
  v48 = 0LL;
  v49 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v47 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v48 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v48;
    *((_QWORD *)&v48 + 1) = v8;
    HMLockObject(v8);
    if ( PsGetCurrentProcessWow64Process(v9) )
      v10 = 0LL;
    else
      v10 = 3LL;
    if ( (v10 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[59] = v11[59];
    LODWORD(v50) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v8);
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentProcess = PsGetCurrentProcess(),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 472) + 224LL) & 1) == 0 )
    {
      v16 = KeGetCurrentThread();
      v17 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v37 = PsGetCurrentProcess(),
            v38 = PsGetProcessSessionIdEx(v37),
            v39 = PsGetCurrentThreadProcess(),
            v38 == (unsigned int)PsGetProcessSessionIdEx(v39)) )
      {
        v18 = (__int64 *)PsGetThreadWin32Thread(v16);
        if ( v18 )
          v17 = *v18;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v17 + 472) + 224LL) & 0x20) == 0 )
      {
        v46 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        LOBYTE(v19) = 18;
        v20 = 18;
        v21 = KeGetCurrentThread();
        v22 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v40 = PsGetCurrentProcess(),
              v41 = PsGetProcessSessionIdEx(v40),
              v42 = PsGetCurrentThreadProcess(),
              v41 == (unsigned int)PsGetProcessSessionIdEx(v42)) )
        {
          v23 = (__int64 *)PsGetThreadWin32Thread(v21);
          if ( v23 )
            v22 = *v23;
        }
        if ( v22 )
        {
          if ( *(_QWORD *)(v22 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v22);
          if ( *(_DWORD *)(v22 + 340) )
          {
            v20 = *(_DWORD *)(v22 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
            if ( CurrentProcessWin32Process )
              v20 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v22 + 328) & 4) != 0 && (v20 & 0xF) == 2 && (v20 & 0xF0) == 0x20 )
            v20 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v46 >> 8) ^ (unsigned __int16)(v20 >> 8)) & 0x1FF) != 0 )
          goto LABEL_50;
        v26 = (*(_DWORD *)(*(_QWORD *)(v47 + 40) + 288LL) & 0xF) == 2
           && (*(_DWORD *)(*(_QWORD *)(v47 + 40) + 288LL) & 0x20000000) != 0;
        v27 = KeGetCurrentThread();
        v28 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v43 = PsGetCurrentProcess(),
              v44 = PsGetProcessSessionIdEx(v43),
              v45 = PsGetCurrentThreadProcess(),
              v44 == (unsigned int)PsGetProcessSessionIdEx(v45)) )
        {
          v29 = (__int64 *)PsGetThreadWin32Thread(v27);
          if ( v29 )
            v28 = *v29;
        }
        if ( v28 )
        {
          if ( *(_QWORD *)(v28 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v28);
          if ( *(_DWORD *)(v28 + 340) )
          {
            v19 = *(_DWORD *)(v28 + 340);
          }
          else
          {
            v31 = PsGetCurrentProcessWin32Process(v30);
            if ( v31 )
              v19 = *(_DWORD *)(v31 + 280);
          }
        }
        v32 = (v19 & 0xF) == 2 && (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0;
        if ( v26 != v32 )
LABEL_50:
          TransformRectBetweenCoordinateSpaces((char *)&v50 + 4, (char *)&v50 + 4, 0LL, v47);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v50;
      *(_OWORD *)(a3 + 16) = v51;
      *(_OWORD *)(a3 + 32) = v52;
      *(_QWORD *)(a3 + 48) = v53;
      *(_DWORD *)(a3 + 56) = v54;
    }
    ThreadUnlock1();
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return ScrollBarInfo;
}
