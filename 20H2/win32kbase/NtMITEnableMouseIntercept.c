/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1C012CB90
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01B9ED0 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // r9
  CInputThread *v47; // rsi
  unsigned int CurrentThreadId; // eax
  int v49; // ebx
  unsigned int v50; // edi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 MouseProcessor; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  int v59; // [rsp+38h] [rbp-89h] BYREF
  int v60; // [rsp+3Ch] [rbp-85h] BYREF
  int v61; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v62; // [rsp+44h] [rbp-7Dh]
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

  v1 = a1;
  v62 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v64 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v63 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v63 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v59 = v64;
        v68 = 4LL;
        v67 = &v59;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
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
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v63 && (*(_DWORD *)(v63 + 48) || *(int *)(v63 + 24) > 0) )
  {
    *(_DWORD *)(v63 + 44) = 1;
    *(GUID *)(v63 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = v64;
        v71 = 4LL;
        v70 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v69);
        v13 = dword_1C0244A70;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = v64;
        v74 = 4LL;
        v73 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v72);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( v20
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v20 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v20 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v24, v25, v26);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30, v31);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v40 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v40[2];
          v41 = *v40;
          v40[2] = 0LL;
          if ( !*(_DWORD *)(v41 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
          v44 = (PERESOURCE *)GetDomainLockRef(12LL, v36, v38, v39);
          if ( v44 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
          ExReleaseResourceAndLeaveCriticalRegion(*v44);
          HMUnlockObject(*v40);
          tagDomLock::LockExclusive(v44);
          v40 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v62;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v47 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v47, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v49 = *((_DWORD *)v47 + 10);
  v50 = CurrentThreadId;
  ExReleasePushLockSharedEx(v47, 0LL);
  KeLeaveCriticalRegion();
  if ( v50 != v49 )
  {
    v52 = 5LL;
LABEL_63:
    UserSetLastError(v52, v51);
    goto LABEL_64;
  }
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v52 = 87LL;
    goto LABEL_63;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    v57 = CMouseProcessor::MouseInterceptState::Enable(MouseProcessor + 3696, v1);
  else
    v57 = 0;
  if ( !v57 )
  {
    v52 = 5023LL;
    goto LABEL_63;
  }
  v2 = 1LL;
LABEL_64:
  UserSessionSwitchLeaveCrit(v54, v51, v55, v56);
  return v2;
}
