/*
 * XREFs of NtMITDisableMouseIntercept @ 0x1C012E9C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C005CFD0 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITDisableMouseIntercept(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rsi
  CInputThread *v48; // rsi
  unsigned int CurrentThreadId; // eax
  int v50; // ebx
  unsigned int v51; // edi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 MouseProcessor; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  bool v58; // al
  int v60; // [rsp+38h] [rbp-89h] BYREF
  int v61; // [rsp+3Ch] [rbp-85h] BYREF
  int v62; // [rsp+40h] [rbp-81h] BYREF
  __int64 v63; // [rsp+48h] [rbp-79h]
  unsigned __int8 v64; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+68h] [rbp-59h] BYREF
  int *v67; // [rsp+88h] [rbp-39h]
  __int64 v68; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+98h] [rbp-29h] BYREF
  int *v70; // [rsp+B8h] [rbp-9h]
  __int64 v71; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+C8h] [rbp+7h] BYREF
  int *v73; // [rsp+E8h] [rbp+27h]
  __int64 v74; // [rsp+F0h] [rbp+2Fh]

  v1 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v64 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v63 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v63 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v60 = v64;
        v68 = 4LL;
        v67 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v66);
      }
    }
  }
  else
  {
    v63 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v63 )
    {
      v11 = *(unsigned int *)(v63 + 24);
      if ( *(_DWORD *)(v63 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v63 + 44) = 1;
        *(GUID *)(v63 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v61 = v64;
            v71 = 4LL;
            v70 = &v61;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v69);
            v12 = dword_1C0246A70;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v62 = v64;
            v74 = 4LL;
            v73 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v72);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v11);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached(v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v21 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v21 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v26, v27);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v47 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v41 = *v47;
        v47[2] = 0LL;
        if ( !*(_DWORD *)(v41 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
        v44 = (PERESOURCE *)GetDomainLockRef(12LL, v37, v39, v40);
        if ( v44 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
        ExReleaseResourceAndLeaveCriticalRegion(*v44);
        HMUnlockObject(*v47);
        tagDomLock::LockExclusive(v44);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v48 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v48, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v50 = *((_DWORD *)v48 + 10);
  v51 = CurrentThreadId;
  ExReleasePushLockSharedEx(v48, 0LL);
  KeLeaveCriticalRegion();
  if ( v51 != v50 )
  {
    v53 = 5LL;
LABEL_61:
    UserSetLastError(v53, v52);
    goto LABEL_62;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    v58 = CMouseProcessor::MouseInterceptState::Disable(MouseProcessor + 3696);
  else
    v58 = 0;
  if ( !v58 )
  {
    v53 = 5023LL;
    goto LABEL_61;
  }
  v1 = 1LL;
LABEL_62:
  UserSessionSwitchLeaveCrit(v55, v52, v56, v57);
  return v1;
}
