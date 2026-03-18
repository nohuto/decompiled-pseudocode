/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0057F10
 * Callers:
 *     <none>
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C005B890 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  ULONG64 v2; // r14
  int v4; // r13d
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rdi
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
  int v27; // r14d
  unsigned int v28; // edi
  struct _KTHREAD *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rcx
  int v40; // edi
  struct _KTHREAD *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // rax
  struct _KTHREAD *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v58; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // ebx
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // [rsp+20h] [rbp-C8h]
  int v77; // [rsp+20h] [rbp-C8h]
  __int64 v78; // [rsp+38h] [rbp-B0h]
  __int128 v80; // [rsp+58h] [rbp-90h] BYREF
  __int64 v81; // [rsp+68h] [rbp-80h]
  _OWORD v82[3]; // [rsp+80h] [rbp-68h] BYREF

  v2 = a2;
  memset(v82, 0, 44);
  v80 = 0LL;
  v81 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v78 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v80 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v80;
    *((_QWORD *)&v80 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v2 & v8) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)v2;
    if ( v2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[43] = v9[43];
    LODWORD(v82[0]) = *(_DWORD *)v2;
    if ( LODWORD(v82[0]) == 44 )
    {
      memset((char *)&v82[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo((struct tagWND *)v6, (struct tagTITLEBARINFO *)v82);
      v11 = 1;
    }
    else
    {
      UserSetLastError(87LL);
      v11 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v10)
      || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v58),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 480) + 224LL) & 1) == 0 )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v19)
        || (v60 = PsGetCurrentProcess(v24, v23, v25),
            v61 = PsGetProcessSessionIdEx(v60),
            v63 = PsGetCurrentThreadProcess(v62),
            v61 == (unsigned int)PsGetProcessSessionIdEx(v63)) )
      {
        v26 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v26 )
          v22 = *v26;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 480) + 224LL) & 0x20) == 0 )
      {
        v76 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        v27 = 18;
        v28 = 18;
        v29 = KeGetCurrentThread();
        v30 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v76)
          || (v64 = PsGetCurrentProcess(v32, v31, v33),
              v65 = PsGetProcessSessionIdEx(v64),
              v67 = PsGetCurrentThreadProcess(v66),
              v65 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
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
        if ( (((unsigned __int16)(v76 >> 8) ^ (unsigned __int16)(v28 >> 8)) & 0x1FF) != 0 )
          goto LABEL_64;
        v39 = *(unsigned int *)(*(_QWORD *)(v78 + 40) + 288LL);
        v77 = (*(_DWORD *)(*(_QWORD *)(v78 + 40) + 288LL) & 0xF) == 2 && (v39 & 0x20000000) != 0;
        LOBYTE(v40) = 18;
        v41 = KeGetCurrentThread();
        v42 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v39)
          || (v68 = PsGetCurrentProcess(v44, v43, v45),
              v69 = PsGetProcessSessionIdEx(v68),
              v71 = PsGetCurrentThreadProcess(v70),
              v69 == (unsigned int)PsGetProcessSessionIdEx(v71)) )
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
            v40 = *(_DWORD *)(v42 + 340);
          }
          else
          {
            v47 = PsGetCurrentProcessWin32Process(v19, v18, v20);
            if ( v47 )
              v40 = *(_DWORD *)(v47 + 280);
          }
        }
        if ( (v40 & 0xF) != 2 )
          goto LABEL_54;
        v48 = KeGetCurrentThread();
        v49 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v19)
          || (v72 = PsGetCurrentProcess(v51, v50, v52),
              v73 = PsGetProcessSessionIdEx(v72),
              v75 = PsGetCurrentThreadProcess(v74),
              v73 == (unsigned int)PsGetProcessSessionIdEx(v75)) )
        {
          v53 = (__int64 *)PsGetThreadWin32Thread(v48);
          if ( v53 )
            v49 = *v53;
        }
        if ( v49 )
        {
          if ( *(_QWORD *)(v49 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v49);
          if ( *(_DWORD *)(v49 + 340) )
          {
            v27 = *(_DWORD *)(v49 + 340);
          }
          else
          {
            v54 = PsGetCurrentProcessWin32Process(v19, v18, v20);
            if ( v54 )
              v27 = *(_DWORD *)(v54 + 280);
          }
          if ( (*(_DWORD *)(v49 + 328) & 4) != 0 && (v27 & 0xF) == 2 && (v27 & 0xF0) == 0x20 )
            v27 |= 0x20000000u;
        }
        if ( (v27 & 0x20000000) == 0 )
LABEL_54:
          v4 = 0;
        if ( v77 != v4 )
LABEL_64:
          TransformRectBetweenCoordinateSpaces((char *)v82 + 4, (char *)v82 + 4, 0LL, v78);
        v2 = a2;
      }
    }
    if ( v11 )
    {
      *(_OWORD *)v2 = v82[0];
      *(_OWORD *)(v2 + 16) = v82[1];
      *(_QWORD *)(v2 + 32) = *(_QWORD *)&v82[2];
      *(_DWORD *)(v2 + 40) = DWORD2(v82[2]);
    }
    ThreadUnlock1(v19, v18, v20);
  }
  else
  {
    v11 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v11;
}
