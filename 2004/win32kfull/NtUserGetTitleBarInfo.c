/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C009C230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C009B5D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C009FBB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  ULONG64 v2; // r14
  int v4; // r13d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  int v14; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KTHREAD *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rax
  int v30; // r14d
  unsigned int v31; // edi
  struct _KTHREAD *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v40; // rcx
  int v41; // edi
  struct _KTHREAD *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // rax
  __int64 v48; // rax
  struct _KTHREAD *v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v59; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // ebx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // ebx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // ebx
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // [rsp+20h] [rbp-C8h]
  int v78; // [rsp+20h] [rbp-C8h]
  __int64 v79; // [rsp+38h] [rbp-B0h]
  __int128 v81; // [rsp+58h] [rbp-90h] BYREF
  __int64 v82; // [rsp+68h] [rbp-80h]
  _OWORD v83[3]; // [rsp+80h] [rbp-68h] BYREF

  v2 = a2;
  memset(v83, 0, 44);
  v81 = 0LL;
  v82 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v79 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v81 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v81;
    *((_QWORD *)&v81 + 1) = v8;
    HMLockObject(v8);
    if ( PsGetCurrentProcessWow64Process(v9) )
      v11 = 0LL;
    else
      v11 = 3LL;
    if ( (v2 & v11) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)v2;
    if ( v2 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[43] = v12[43];
    LODWORD(v83[0]) = *(_DWORD *)v2;
    if ( LODWORD(v83[0]) == 44 )
    {
      memset((char *)&v83[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo((struct tagWND *)v8, (struct tagTITLEBARINFO *)v83);
      v14 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v12, v10);
      v14 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v13)
      || (CurrentProcess = PsGetCurrentProcess(v18, v17, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v59),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 472) + 224LL) & 1) == 0 )
    {
      v24 = KeGetCurrentThread();
      v25 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v22)
        || (v61 = PsGetCurrentProcess(v27, v26, v28),
            v62 = PsGetProcessSessionIdEx(v61),
            v64 = PsGetCurrentThreadProcess(v63),
            v62 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
      {
        v29 = (__int64 *)PsGetThreadWin32Thread(v24);
        if ( v29 )
          v25 = *v29;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 472) + 224LL) & 0x20) == 0 )
      {
        v77 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        v30 = 18;
        v31 = 18;
        v32 = KeGetCurrentThread();
        v33 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v77)
          || (v65 = PsGetCurrentProcess(v35, v34, v36),
              v66 = PsGetProcessSessionIdEx(v65),
              v68 = PsGetCurrentThreadProcess(v67),
              v66 == (unsigned int)PsGetProcessSessionIdEx(v68)) )
        {
          v37 = (__int64 *)PsGetThreadWin32Thread(v32);
          if ( v37 )
            v33 = *v37;
        }
        if ( v33 )
        {
          if ( *(_QWORD *)(v33 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v33);
          if ( *(_DWORD *)(v33 + 340) )
          {
            v31 = *(_DWORD *)(v33 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38);
            if ( CurrentProcessWin32Process )
              v31 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v33 + 328) & 4) != 0 && (v31 & 0xF) == 2 && (v31 & 0xF0) == 0x20 )
            v31 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v77 >> 8) ^ (unsigned __int16)(v31 >> 8)) & 0x1FF) != 0 )
          goto LABEL_64;
        v40 = *(unsigned int *)(*(_QWORD *)(v79 + 40) + 288LL);
        v78 = (*(_DWORD *)(*(_QWORD *)(v79 + 40) + 288LL) & 0xF) == 2 && (v40 & 0x20000000) != 0;
        LOBYTE(v41) = 18;
        v42 = KeGetCurrentThread();
        v43 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v40)
          || (v69 = PsGetCurrentProcess(v45, v44, v46),
              v70 = PsGetProcessSessionIdEx(v69),
              v72 = PsGetCurrentThreadProcess(v71),
              v70 == (unsigned int)PsGetProcessSessionIdEx(v72)) )
        {
          v47 = (__int64 *)PsGetThreadWin32Thread(v42);
          if ( v47 )
            v43 = *v47;
        }
        if ( v43 )
        {
          if ( *(_QWORD *)(v43 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v43);
          if ( *(_DWORD *)(v43 + 340) )
          {
            v41 = *(_DWORD *)(v43 + 340);
          }
          else
          {
            v48 = PsGetCurrentProcessWin32Process(v22);
            if ( v48 )
              v41 = *(_DWORD *)(v48 + 280);
          }
        }
        if ( (v41 & 0xF) != 2 )
          goto LABEL_54;
        v49 = KeGetCurrentThread();
        v50 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v22)
          || (v73 = PsGetCurrentProcess(v52, v51, v53),
              v74 = PsGetProcessSessionIdEx(v73),
              v76 = PsGetCurrentThreadProcess(v75),
              v74 == (unsigned int)PsGetProcessSessionIdEx(v76)) )
        {
          v54 = (__int64 *)PsGetThreadWin32Thread(v49);
          if ( v54 )
            v50 = *v54;
        }
        if ( v50 )
        {
          if ( *(_QWORD *)(v50 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v50);
          if ( *(_DWORD *)(v50 + 340) )
          {
            v30 = *(_DWORD *)(v50 + 340);
          }
          else
          {
            v55 = PsGetCurrentProcessWin32Process(v22);
            if ( v55 )
              v30 = *(_DWORD *)(v55 + 280);
          }
          if ( (*(_DWORD *)(v50 + 328) & 4) != 0 && (v30 & 0xF) == 2 && (v30 & 0xF0) == 0x20 )
            v30 |= 0x20000000u;
        }
        if ( (v30 & 0x20000000) == 0 )
LABEL_54:
          v4 = 0;
        if ( v78 != v4 )
LABEL_64:
          TransformRectBetweenCoordinateSpaces((char *)v83 + 4, (char *)v83 + 4, 0LL, v79);
        v2 = a2;
      }
    }
    if ( v14 )
    {
      *(_OWORD *)v2 = v83[0];
      *(_OWORD *)(v2 + 16) = v83[1];
      *(_QWORD *)(v2 + 32) = *(_QWORD *)&v83[2];
      *(_DWORD *)(v2 + 40) = DWORD2(v83[2]);
    }
    ThreadUnlock1(v22, v21, v23);
  }
  else
  {
    v14 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v14;
}
