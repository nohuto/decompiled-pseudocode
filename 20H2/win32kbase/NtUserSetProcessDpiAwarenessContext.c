/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C002FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C002FE1C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C002FFD4 (IsValidKernelDpiAwarenessContext.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(unsigned int a1, int a2)
{
  int v2; // r15d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagKERNELHANDLETABLEENTRY *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 i; // rsi
  __int64 v48; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  PERESOURCE *v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // [rsp+38h] [rbp-89h] BYREF
  int v63; // [rsp+3Ch] [rbp-85h] BYREF
  int v64; // [rsp+40h] [rbp-81h] BYREF
  int v65; // [rsp+44h] [rbp-7Dh]
  __int64 v66; // [rsp+48h] [rbp-79h]
  unsigned __int8 v67; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+68h] [rbp-59h] BYREF
  int *v70; // [rsp+88h] [rbp-39h]
  int v71; // [rsp+90h] [rbp-31h]
  int v72; // [rsp+94h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+98h] [rbp-29h] BYREF
  int *v74; // [rsp+B8h] [rbp-9h]
  int v75; // [rsp+C0h] [rbp-1h]
  int v76; // [rsp+C4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+C8h] [rbp+7h] BYREF
  int *v78; // [rsp+E8h] [rbp+27h]
  int v79; // [rsp+F0h] [rbp+2Fh]
  int v80; // [rsp+F4h] [rbp+33h]

  v2 = a2;
  v65 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v67 = 1;
    v51 = PsGetCurrentThreadWin32Thread();
    v66 = v51;
    if ( v51 && (*(int *)(v51 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v52, v53) )
        {
          v72 = 0;
          v62 = v67;
          v71 = 4;
          v70 = &v62;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&ActivityId, 0, 3u, &v69);
        }
      }
    }
  }
  else
  {
    v66 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v66 && (*(_DWORD *)(v66 + 48) || *(int *)(v66 + 24) > 0) )
  {
    *(_DWORD *)(v66 + 44) = 1;
    *(GUID *)(v66 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v12) )
      {
        v76 = 0;
        v63 = v67;
        v75 = 4;
        v74 = &v63;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&ActivityId, 0, 3u, &v73);
        v54 = (unsigned int)dword_1C0244A70;
      }
      if ( (unsigned int)v54 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v54, v55) )
      {
        v80 = 0;
        v64 = v67;
        v79 = 4;
        v78 = &v64;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&ActivityId, 0, 3u, &v77);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v48 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v48),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19, v20);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v36 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v36 + 2);
          v56 = *(_QWORD *)v36;
          *((_QWORD *)v36 + 2) = 0LL;
          if ( !*(_DWORD *)(v56 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
          v59 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v59 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v60, v61);
          ExReleaseResourceAndLeaveCriticalRegion(*v59);
          HMUnlockObject(*(_QWORD *)v36);
          tagDomLock::LockExclusive((tagDomLock *)v59);
          v36 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v65;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(a1)
    || (a1 & 0xF) == 1 && ((a1 >> 8) & 0x1FF) != *(_WORD *)(PsGetCurrentProcessWin32Process(v38, v37, v39, v40) + 284) )
  {
    UserSetLastError(87LL);
LABEL_72:
    v44 = 0LL;
    goto LABEL_37;
  }
  v41 = *((_QWORD *)gptiCurrent + 53);
  v42 = *(unsigned int *)(v41 + 820);
  if ( (v42 & 0x400000) != 0 )
  {
    if ( !v2 )
      goto LABEL_72;
    if ( (a1 & 0xF) == 0 )
      goto LABEL_72;
    v43 = *(_DWORD *)(v41 + 280);
    if ( v43 != 18 )
      goto LABEL_72;
  }
  else
  {
    v43 = *(_DWORD *)(v41 + 280);
  }
  v42 = (unsigned int)v42 | 0x400000;
  v44 = 1LL;
  *(_DWORD *)(v41 + 820) = v42;
  if ( v43 != a1 )
  {
    v45 = *(_QWORD *)(v41 + 664);
    *(_DWORD *)(v41 + 280) = a1;
    if ( v45 )
    {
      for ( i = *(_QWORD *)(v45 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v41, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v41, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_37:
  UserSessionSwitchLeaveCrit(v42);
  return v44;
}
