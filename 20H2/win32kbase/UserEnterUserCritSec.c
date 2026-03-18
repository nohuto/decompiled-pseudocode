/*
 * XREFs of UserEnterUserCritSec @ 0x1C00B2160
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserEnterUserCritSec(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rsi
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // [rsp+38h] [rbp-79h] BYREF
  int v46; // [rsp+3Ch] [rbp-75h] BYREF
  int v47; // [rsp+40h] [rbp-71h] BYREF
  __int64 v48; // [rsp+48h] [rbp-69h]
  unsigned __int8 v49; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+68h] [rbp-49h] BYREF
  int *v52; // [rsp+88h] [rbp-29h]
  int v53; // [rsp+90h] [rbp-21h]
  int v54; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+98h] [rbp-19h] BYREF
  int *v56; // [rsp+B8h] [rbp+7h]
  int v57; // [rsp+C0h] [rbp+Fh]
  int v58; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+C8h] [rbp+17h] BYREF
  int *v60; // [rsp+E8h] [rbp+37h]
  int v61; // [rsp+F0h] [rbp+3Fh]
  int v62; // [rsp+F4h] [rbp+43h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v49 = 1;
    v37 = PsGetCurrentThreadWin32Thread(v1);
    v48 = v37;
    if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v54 = 0;
        v45 = v49;
        v53 = 4;
        v52 = &v45;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v51);
      }
    }
  }
  else
  {
    v48 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v48 && (*(_DWORD *)(v48 + 48) || *(int *)(v48 + 24) > 0) )
  {
    *(_DWORD *)(v48 + 44) = 1;
    *(GUID *)(v48 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v58 = 0;
        v46 = v49;
        v57 = 4;
        v56 = &v46;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v55);
        v38 = dword_1C0244A70;
      }
      if ( v38 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v62 = 0;
        v47 = v49;
        v61 = 4;
        v60 = &v47;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v59);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v34 = PsGetCurrentProcess(v11, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(v34),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( v13
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v13 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v13 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v17, v18, v19);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23, v24);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v33 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v39 = *v33;
        v33[2] = 0LL;
        if ( !*(_DWORD *)(v39 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
        v42 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v31, v32);
        if ( v42 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43, v44);
        ExReleaseResourceAndLeaveCriticalRegion(*v42);
        HMUnlockObject(*v33);
        tagDomLock::LockExclusive(v42);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
