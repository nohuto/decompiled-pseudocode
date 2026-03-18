/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C0091238
 * Callers:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C01089C0 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00428B0 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxClientCallWinEventProc @ 0x1C00910F0 (xxxClientCallWinEventProc.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C009160C (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C009B4D0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rsi
  int v9; // r12d
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // r14
  unsigned int v20; // ebx
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v25; // rdx
  struct tagQ *v26; // r15
  __int64 v27; // rdx
  int v28; // eax
  __int16 ProcessMachine; // bx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v34; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rdx
  int v40; // ecx
  __int16 v41; // bx
  _QWORD v42[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 ProcessInformation; // [rsp+A0h] [rbp+40h] BYREF
  tagDomLock *v44; // [rsp+A8h] [rbp+48h] BYREF
  char v45; // [rsp+B0h] [rbp+50h] BYREF

  v42[2] = 0LL;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v34),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 || (*(_DWORD *)(v2 + 480) & 0xD) != 0 )
    goto LABEL_30;
  if ( !(unsigned __int8)Enforced() )
  {
    v36 = *(_QWORD *)(v2 + 416);
    v37 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
    if ( (*(_DWORD *)(v37 + 780) != *(_DWORD *)(v36 + 780) || *(_DWORD *)(v37 + 784) != *(_DWORD *)(v36 + 784))
      && (*(_DWORD *)(v2 + 480) & 0x400000) == 0 )
    {
      goto LABEL_30;
    }
  }
  v10 = *(_QWORD **)(v8 + 16);
  if ( v10[52] != *(_QWORD *)(v2 + 416) )
  {
    if ( (unsigned __int8)IsRestricted(*v10) )
      goto LABEL_30;
  }
  v11 = *(_QWORD *)(v8 + 16);
  v12 = *(_DWORD *)(v2 + 480) & 0x100;
  if ( (*(_DWORD *)(v11 + 480) & 0x100) != v12 )
    goto LABEL_30;
  if ( v12 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v11 + 416));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 416)) != ProcessMachine )
      goto LABEL_30;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 880LL, *(_QWORD *)(v2 + 416) + 880LL) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  if ( (!*(_DWORD *)(v8 + 56) || !*(_QWORD *)(v8 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL)) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
    if ( *(int *)(v13 + 12) >= 0 )
    {
      v14 = *(_QWORD *)(v2 + 416);
      if ( v13 != v14 && (*(_DWORD *)(v13 + 820) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v14)
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
          v25 = *(_QWORD *)(v8 + 16);
          ProcessInformation = *(_QWORD *)(v8 + 24);
          v26 = *(struct tagQ **)(v25 + 424);
          if ( v9 )
            EtwTraceUIPIEventHookError(a1, v25, v2);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v45);
          *(_DWORD *)(a1 + 56) |= 0xCu;
          if ( !v26
            || (v27 = *(_QWORD *)(v8 + 16), v27 == gptiRit)
            || (v28 = *(_DWORD *)(v8 + 40), (v28 & 1) != 0)
            || (v28 & 0x10) != 0
            && ((v40 = *(_DWORD *)(v2 + 480) & 0x100, (*(_DWORD *)(v27 + 480) & 0x100) != v40)
             || v40
             && (v41 = PsWow64GetProcessMachine(**(_QWORD **)(v27 + 416)),
                 (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 416)) != v41))
            || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v8 + 16), v26, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
          {
            v30 = *(_QWORD *)a1;
            if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
              goto LABEL_49;
            v31 = *(_QWORD **)(a1 + 8);
            if ( *v31 != a1 )
              goto LABEL_49;
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
            *(_QWORD *)(a1 + 8) = a1;
            *(_QWORD *)a1 = a1;
            if ( !*(_DWORD *)(a1 + 24) )
              HMAssignmentUnlock(a1 + 16);
            if ( (_UNKNOWN *)a1 == &unk_1C033C3E0 )
              dword_1C033AA98 = 0;
            else
              Win32FreePool(a1);
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v45);
          return ProcessInformation;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
  {
    v38 = *(_QWORD *)a1;
    v21 = *(_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v39 = *(_QWORD **)(a1 + 8);
      if ( *v39 == a1 )
      {
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        goto LABEL_25;
      }
    }
LABEL_49:
    __fastfail(3u);
  }
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v42[0] = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = v42;
  v42[1] = v8;
  HMLockObject(v8);
  *(_QWORD *)(a1 + 64) = v2;
  if ( (*(_DWORD *)(v8 + 40) & 8) != 0 )
    EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v8);
  else
    EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v8 + 64);
  if ( EventProc )
  {
    v20 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v8 + 88));
    CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v44);
    xxxClientCallWinEventProc((__int64)EventProc, (__int64 *)v8, a1);
    tagDomLock::LockExclusive(v44);
    W32SetCurrentThreadDpiAwarenessContext(v20);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v21 = *(_QWORD *)(v8 + 24);
  ThreadUnlock1(v17, v16, v18);
  v22 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_49;
  v23 = *(_QWORD **)(a1 + 8);
  if ( *v23 != a1 )
    goto LABEL_49;
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
LABEL_25:
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
    HMAssignmentUnlock(a1 + 16);
  if ( (_UNKNOWN *)a1 == &unk_1C033C3E0 )
    dword_1C033AA98 = 0;
  else
    Win32FreePool(a1);
  return v21;
}
