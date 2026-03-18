/*
 * XREFs of UserEnterUserCritSec @ 0x1C0051AD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void UserEnterUserCritSec()
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  struct tagTHREADINFO **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct tagKERNELHANDLETABLEENTRY *v29; // rsi
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // [rsp+38h] [rbp-79h] BYREF
  int v45; // [rsp+3Ch] [rbp-75h] BYREF
  int v46; // [rsp+40h] [rbp-71h] BYREF
  __int64 v47; // [rsp+48h] [rbp-69h]
  unsigned __int8 v48; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+68h] [rbp-49h] BYREF
  int *v51; // [rsp+88h] [rbp-29h]
  int v52; // [rsp+90h] [rbp-21h]
  int v53; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+98h] [rbp-19h] BYREF
  int *v55; // [rsp+B8h] [rbp+7h]
  int v56; // [rsp+C0h] [rbp+Fh]
  int v57; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C8h] [rbp+17h] BYREF
  int *v59; // [rsp+E8h] [rbp+37h]
  int v60; // [rsp+F0h] [rbp+3Fh]
  int v61; // [rsp+F4h] [rbp+43h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v48 = 1;
    v33 = PsGetCurrentThreadWin32Thread();
    v47 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v34, v35) )
        {
          v53 = 0;
          v44 = v48;
          v52 = 4;
          v51 = &v44;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v50);
        }
      }
    }
  }
  else
  {
    v47 = 0LL;
  }
  v1 = 0LL;
  while ( 1 )
  {
    v2 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v2 )
      v1 = *v2;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v1 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v47 && (*(_DWORD *)(v47 + 48) || *(int *)(v47 + 24) > 0) )
  {
    *(_DWORD *)(v47 + 44) = 1;
    *(GUID *)(v47 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v8) )
      {
        v57 = 0;
        v45 = v48;
        v56 = 4;
        v55 = &v45;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v54);
        v36 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v36 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v36, v37) )
      {
        v61 = 0;
        v46 = v48;
        v60 = 4;
        v59 = &v46;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v58);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v1;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v30 = PsGetCurrentProcess(v10, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(v30),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( v12
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v12 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v12 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19, v20);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v29 = gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v38 = *(_QWORD *)v29;
        *((_QWORD *)v29 + 2) = 0LL;
        if ( !*(_DWORD *)(v38 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
        v41 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v41 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v42, v43);
        ExReleaseResourceAndLeaveCriticalRegion(*v41);
        HMUnlockObject(*(_QWORD *)v29);
        tagDomLock::LockExclusive((tagDomLock *)v41);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
