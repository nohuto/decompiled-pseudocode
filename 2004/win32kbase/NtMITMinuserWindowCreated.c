/*
 * XREFs of NtMITMinuserWindowCreated @ 0x1C012F640
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
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     UserAddBaseWindowHandle @ 0x1C013D680 (UserAddBaseWindowHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITMinuserWindowCreated(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
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
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
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
  __int64 *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v56; // [rsp+30h] [rbp-99h] BYREF
  int v57; // [rsp+34h] [rbp-95h] BYREF
  int v58; // [rsp+38h] [rbp-91h] BYREF
  __int64 v59; // [rsp+40h] [rbp-89h]
  __int64 v60; // [rsp+48h] [rbp-81h]
  unsigned __int8 v61; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+68h] [rbp-61h] BYREF
  int *v64; // [rsp+88h] [rbp-41h]
  int v65; // [rsp+90h] [rbp-39h]
  int v66; // [rsp+94h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+98h] [rbp-31h] BYREF
  int *v68; // [rsp+B8h] [rbp-11h]
  int v69; // [rsp+C0h] [rbp-9h]
  int v70; // [rsp+C4h] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+C8h] [rbp-1h] BYREF
  int *v72; // [rsp+E8h] [rbp+1Fh]
  int v73; // [rsp+F0h] [rbp+27h]
  int v74; // [rsp+F4h] [rbp+2Bh]

  v59 = a1;
  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v61 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v60 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v66 = 0;
        v56 = v61;
        v65 = 4;
        v64 = &v56;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v63);
      }
    }
  }
  else
  {
    v60 = 0LL;
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
    if ( v60 )
    {
      v13 = *(unsigned int *)(v60 + 24);
      if ( *(_DWORD *)(v60 + 48) || (int)v13 > 0 )
      {
        *(_DWORD *)(v60 + 44) = 1;
        *(GUID *)(v60 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v70 = 0;
            v57 = v61;
            v69 = 4;
            v68 = &v57;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v67);
            v14 = dword_1C0246A70;
          }
          if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v74 = 0;
            v58 = v61;
            v73 = 4;
            v72 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v71);
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
    v23 = 0LL;
    if ( !IsThreadCrossSessionAttached(v17) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v23 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( v23
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v23 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v23 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v29);
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
        v3 = v59;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v50 = (int)UserAddBaseWindowHandle(v3, a2);
  UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
  return v50;
}
