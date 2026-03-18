/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C005E200
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     xxxGetScrollBarInfo @ 0x1C005E624 (xxxGetScrollBarInfo.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  int ScrollBarInfo; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KTHREAD *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rax
  int v27; // esi
  unsigned int v28; // edi
  struct _KTHREAD *v29; // r13
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rcx
  int v40; // r14d
  struct _KTHREAD *v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v52; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // [rsp+20h] [rbp-C8h]
  __int64 v67; // [rsp+38h] [rbp-B0h]
  __int128 v68; // [rsp+50h] [rbp-98h] BYREF
  __int64 v69; // [rsp+60h] [rbp-88h]
  __int128 v70; // [rsp+78h] [rbp-70h] BYREF
  __int128 v71; // [rsp+88h] [rbp-60h]
  __int128 v72; // [rsp+98h] [rbp-50h]
  __int64 v73; // [rsp+A8h] [rbp-40h]
  int v74; // [rsp+B0h] [rbp-38h]

  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0;
  v68 = 0LL;
  v69 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v67 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v68;
    *((_QWORD *)&v68 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[59] = v9[59];
    LODWORD(v70) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v6);
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v13)
      || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v52),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 480) + 224LL) & 1) == 0 )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v19)
        || (v54 = PsGetCurrentProcess(v24, v23, v25),
            v55 = PsGetProcessSessionIdEx(v54),
            v57 = PsGetCurrentThreadProcess(v56),
            v55 == (unsigned int)PsGetProcessSessionIdEx(v57)) )
      {
        v26 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v26 )
          v22 = *v26;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 480) + 224LL) & 0x20) == 0 )
      {
        v66 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        LOBYTE(v27) = 18;
        v28 = 18;
        v29 = KeGetCurrentThread();
        v30 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v66)
          || (v58 = PsGetCurrentProcess(v32, v31, v33),
              v59 = PsGetProcessSessionIdEx(v58),
              v61 = PsGetCurrentThreadProcess(v60),
              v59 == (unsigned int)PsGetProcessSessionIdEx(v61)) )
        {
          v34 = (__int64 *)PsGetThreadWin32Thread(v29);
          if ( v34 )
            v30 = *v34;
        }
        if ( v30 )
        {
          if ( *(_QWORD *)(v30 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v30);
          if ( *(_DWORD *)(v30 + 340) )
          {
            v28 = *(_DWORD *)(v30 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36, v35, v37);
            if ( CurrentProcessWin32Process )
              v28 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v30 + 328) & 4) != 0 && (v28 & 0xF) == 2 && (v28 & 0xF0) == 0x20 )
            v28 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v66 >> 8) ^ (unsigned __int16)(v28 >> 8)) & 0x1FF) != 0 )
          goto LABEL_50;
        v39 = *(unsigned int *)(*(_QWORD *)(v67 + 40) + 288LL);
        v40 = (*(_DWORD *)(*(_QWORD *)(v67 + 40) + 288LL) & 0xF) == 2 && (v39 & 0x20000000) != 0;
        v41 = KeGetCurrentThread();
        v42 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v39)
          || (v62 = PsGetCurrentProcess(v44, v43, v45),
              v63 = PsGetProcessSessionIdEx(v62),
              v65 = PsGetCurrentThreadProcess(v64),
              v63 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
        {
          v46 = (__int64 *)PsGetThreadWin32Thread(v41);
          if ( v46 )
            v42 = *v46;
        }
        if ( v42 )
        {
          if ( *(_QWORD *)(v42 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v42);
          if ( *(_DWORD *)(v42 + 340) )
          {
            v27 = *(_DWORD *)(v42 + 340);
          }
          else
          {
            v47 = PsGetCurrentProcessWin32Process(v19, v18, v20);
            if ( v47 )
              v27 = *(_DWORD *)(v47 + 280);
          }
        }
        v48 = (v27 & 0xF) == 2 && (W32GetCurrentThreadDpiAwarenessContext(v19) & 0x20000000) != 0;
        if ( v40 != v48 )
LABEL_50:
          TransformRectBetweenCoordinateSpaces((char *)&v70 + 4, (char *)&v70 + 4, 0LL, v67);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v70;
      *(_OWORD *)(a3 + 16) = v71;
      *(_OWORD *)(a3 + 32) = v72;
      *(_QWORD *)(a3 + 48) = v73;
      *(_DWORD *)(a3 + 56) = v74;
    }
    ThreadUnlock1(v19, v18, v20);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ScrollBarInfo;
}
