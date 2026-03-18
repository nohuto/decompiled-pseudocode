/*
 * XREFs of NtUserStopAndEndInertia @ 0x1C0139660
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019C468 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  int v3; // esi
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v22; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  PVOID v50; // rax
  __int64 v51; // rdx
  CTouchProcessor *v52; // rcx
  void *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
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

  v2 = a2;
  v62 = a2;
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v64 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v63 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v63 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v59 = v64;
        v68 = 4LL;
        v67 = &v59;
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
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
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
      v13 = *(unsigned int *)(v63 + 24);
      if ( *(_DWORD *)(v63 + 48) || (int)v13 > 0 )
      {
        *(_DWORD *)(v63 + 44) = 1;
        *(GUID *)(v63 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v60 = v64;
            v71 = 4LL;
            v70 = &v60;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v69);
            v14 = dword_1C0246A70;
          }
          if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v61 = v64;
            v74 = 4LL;
            v73 = &v61;
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
  EtwTraceAcquiredExclusiveUserCrit(v13);
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v15)
    || (v18 = PsGetCurrentProcess(v17, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(v18),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = 0LL;
    if ( !IsThreadCrossSessionAttached(v17) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( v24 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v24 + 480) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v24 + 1224);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v28, v29);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v43 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v43[2];
                v44 = *v43;
                v43[2] = 0LL;
                if ( !*(_DWORD *)(v44 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
                v47 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
                if ( v47 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48, v49);
                ExReleaseResourceAndLeaveCriticalRegion(*v47);
                HMUnlockObject(*v43);
                tagDomLock::LockExclusive(v47);
                v43 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v2 = v62;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v50 = (PVOID)PsGetCurrentProcess(v17, v22);
  if ( v50 && v50 == g_pepDwm )
    v3 = CTouchProcessor::StopAndEndInertia(v52, v2, v53);
  else
    UserSetLastError(5LL, v51);
  UserSessionSwitchLeaveCrit(v55, v54, v56, v57);
  return v3;
}
