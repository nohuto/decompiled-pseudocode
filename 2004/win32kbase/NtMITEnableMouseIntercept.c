/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1C012EEE0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
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
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01BC240 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  CInputThread *v49; // rsi
  unsigned int CurrentThreadId; // eax
  int v51; // ebx
  unsigned int v52; // edi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 MouseProcessor; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  char v59; // al
  int v61; // [rsp+38h] [rbp-89h] BYREF
  int v62; // [rsp+3Ch] [rbp-85h] BYREF
  int v63; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v64; // [rsp+44h] [rbp-7Dh]
  __int64 v65; // [rsp+48h] [rbp-79h]
  unsigned __int8 v66; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+68h] [rbp-59h] BYREF
  int *v69; // [rsp+88h] [rbp-39h]
  __int64 v70; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+98h] [rbp-29h] BYREF
  int *v72; // [rsp+B8h] [rbp-9h]
  __int64 v73; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+C8h] [rbp+7h] BYREF
  int *v75; // [rsp+E8h] [rbp+27h]
  __int64 v76; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v64 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v66 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v65 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v61 = v66;
        v70 = 4LL;
        v69 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v68);
      }
    }
  }
  else
  {
    v65 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v65 )
    {
      v12 = *(unsigned int *)(v65 + 24);
      if ( *(_DWORD *)(v65 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v65 + 44) = 1;
        *(GUID *)(v65 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v62 = v66;
            v73 = 4LL;
            v72 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v71);
            v13 = dword_1C0246A70;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v63 = v66;
            v76 = 4LL;
            v75 = &v63;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v74);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v12);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v17 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v17),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v19),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !IsThreadCrossSessionAttached(v16) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v22 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v22 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v26, v27, v28);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32, v33);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v42 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v42[2];
          v43 = *v42;
          v42[2] = 0LL;
          if ( !*(_DWORD *)(v43 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
          v46 = (PERESOURCE *)GetDomainLockRef(12LL, v38, v40, v41);
          if ( v46 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47, v48);
          ExReleaseResourceAndLeaveCriticalRegion(*v46);
          HMUnlockObject(*v42);
          tagDomLock::LockExclusive(v46);
          v42 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v64;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v49 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v49, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v51 = *((_DWORD *)v49 + 10);
  v52 = CurrentThreadId;
  ExReleasePushLockSharedEx(v49, 0LL);
  KeLeaveCriticalRegion();
  if ( v52 != v51 )
  {
    v54 = 5LL;
LABEL_63:
    UserSetLastError(v54, v53);
    goto LABEL_64;
  }
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v54 = 87LL;
    goto LABEL_63;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    v59 = CMouseProcessor::MouseInterceptState::Enable(MouseProcessor + 3696, v1);
  else
    v59 = 0;
  if ( !v59 )
  {
    v54 = 5023LL;
    goto LABEL_63;
  }
  v2 = 1LL;
LABEL_64:
  UserSessionSwitchLeaveCrit(v56, v53, v57, v58);
  return v2;
}
