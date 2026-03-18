/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C00D6418
 * Callers:
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C01099E0 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00571B0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxClientCallWinEventProc @ 0x1C00D62D0 (xxxClientCallWinEventProc.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D67EC (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00FEAF4 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // r12d
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // r14
  unsigned int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v26; // rdx
  struct tagQ *v27; // r15
  __int64 v28; // rdx
  int v29; // eax
  __int16 ProcessMachine; // bx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rdx
  int v41; // ecx
  __int16 v42; // bx
  _QWORD v43[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 ProcessInformation; // [rsp+A0h] [rbp+40h] BYREF
  tagDomLock *v45; // [rsp+A8h] [rbp+48h] BYREF
  char v46; // [rsp+B0h] [rbp+50h] BYREF

  v43[2] = 0LL;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 || (*(_DWORD *)(v2 + 488) & 0xD) != 0 )
    goto LABEL_30;
  if ( !(unsigned __int8)Enforced(v8) )
  {
    v37 = *(_QWORD *)(v2 + 424);
    v38 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL);
    if ( (*(_DWORD *)(v38 + 780) != *(_DWORD *)(v37 + 780) || *(_DWORD *)(v38 + 784) != *(_DWORD *)(v37 + 784))
      && (*(_DWORD *)(v2 + 488) & 0x400000) == 0 )
    {
      goto LABEL_30;
    }
  }
  v11 = *(_QWORD **)(v9 + 16);
  if ( v11[53] != *(_QWORD *)(v2 + 424) )
  {
    if ( (unsigned __int8)IsRestricted(*v11) )
      goto LABEL_30;
  }
  v12 = *(_QWORD *)(v9 + 16);
  v13 = *(_DWORD *)(v2 + 488) & 0x100;
  if ( (*(_DWORD *)(v12 + 488) & 0x100) != v13 )
    goto LABEL_30;
  if ( v13 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v12 + 424));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 424)) != ProcessMachine )
      goto LABEL_30;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) + 880LL, *(_QWORD *)(v2 + 424) + 880LL) )
  {
    v10 = 1;
    goto LABEL_30;
  }
  if ( (!*(_DWORD *)(v9 + 56) || !*(_QWORD *)(v9 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL)) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL);
    if ( *(int *)(v14 + 12) >= 0 )
    {
      v15 = *(_QWORD *)(v2 + 424);
      if ( v14 != v15 && (*(_DWORD *)(v14 + 820) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v15)
          || (ProcessInformation = 6LL,
              ZwQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                ProcessCookie|ProcessUserModeIOPL,
                &ProcessInformation,
                8u,
                0LL) < 0)
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
LABEL_30:
          v26 = *(_QWORD *)(v9 + 16);
          ProcessInformation = *(_QWORD *)(v9 + 24);
          v27 = *(struct tagQ **)(v26 + 432);
          if ( v10 )
            EtwTraceUIPIEventHookError(a1, v26, v2);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v46);
          *(_DWORD *)(a1 + 56) |= 0xCu;
          if ( !v27
            || (v28 = *(_QWORD *)(v9 + 16), v28 == gptiRit)
            || (v29 = *(_DWORD *)(v9 + 40), (v29 & 1) != 0)
            || (v29 & 0x10) != 0
            && ((v41 = *(_DWORD *)(v2 + 488) & 0x100, (*(_DWORD *)(v28 + 488) & 0x100) != v41)
             || v41
             && (v42 = PsWow64GetProcessMachine(**(_QWORD **)(v28 + 424)),
                 (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 424)) != v42))
            || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v9 + 16), v27, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
          {
            v31 = *(_QWORD *)a1;
            if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
              goto LABEL_49;
            v32 = *(_QWORD **)(a1 + 8);
            if ( *v32 != a1 )
              goto LABEL_49;
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
            *(_QWORD *)(a1 + 8) = a1;
            *(_QWORD *)a1 = a1;
            if ( !*(_DWORD *)(a1 + 24) )
              HMAssignmentUnlock(a1 + 16);
            if ( (_UNKNOWN *)a1 == &unk_1C033B400 )
              dword_1C0339AD0 = 0;
            else
              Win32FreePool(a1);
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v46);
          return ProcessInformation;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
  {
    v39 = *(_QWORD *)a1;
    v22 = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v40 = *(_QWORD **)(a1 + 8);
      if ( *v40 == a1 )
      {
        *v40 = v39;
        *(_QWORD *)(v39 + 8) = v40;
        goto LABEL_25;
      }
    }
LABEL_49:
    __fastfail(3u);
  }
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v43[0] = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = v43;
  v43[1] = v9;
  HMLockObject(v9);
  *(_QWORD *)(a1 + 64) = v2;
  if ( (*(_DWORD *)(v9 + 40) & 8) != 0 )
    EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v9);
  else
    EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v9 + 64);
  if ( EventProc )
  {
    v21 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v9 + 88));
    CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v45);
    xxxClientCallWinEventProc((__int64)EventProc, (__int64 *)v9, a1);
    tagDomLock::LockExclusive(v45);
    W32SetCurrentThreadDpiAwarenessContext(v21);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v22 = *(_QWORD *)(v9 + 24);
  ThreadUnlock1(v18, v17, v19);
  v23 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_49;
  v24 = *(_QWORD **)(a1 + 8);
  if ( *v24 != a1 )
    goto LABEL_49;
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
LABEL_25:
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
    HMAssignmentUnlock(a1 + 16);
  if ( (_UNKNOWN *)a1 == &unk_1C033B400 )
    dword_1C0339AD0 = 0;
  else
    Win32FreePool(a1);
  return v22;
}
