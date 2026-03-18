/*
 * XREFs of ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C01198B0
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

void __fastcall DwmHitTestLeaveEnterCrit::~DwmHitTestLeaveEnterCrit(DwmHitTestLeaveEnterCrit *this)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rax
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // rsi
  int v45; // [rsp+38h] [rbp-89h] BYREF
  int v46; // [rsp+3Ch] [rbp-85h] BYREF
  int v47; // [rsp+40h] [rbp-81h] BYREF
  __int64 v48; // [rsp+48h] [rbp-79h]
  unsigned __int8 v49; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+68h] [rbp-59h] BYREF
  int *v52; // [rsp+88h] [rbp-39h]
  __int64 v53; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+98h] [rbp-29h] BYREF
  int *v55; // [rsp+B8h] [rbp-9h]
  __int64 v56; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+C8h] [rbp+7h] BYREF
  int *v58; // [rsp+E8h] [rbp+27h]
  __int64 v59; // [rsp+F0h] [rbp+2Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v49 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v48 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v45 = v49;
        v53 = 4LL;
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
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
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
        v46 = v49;
        v56 = 4LL;
        v55 = &v46;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v54);
        v11 = dword_1C0244A70;
      }
      if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v47 = v49;
        v59 = 4LL;
        v58 = &v47;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v57);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v14),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23, v24);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v44 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v38 = *v44;
        v44[2] = 0LL;
        if ( !*(_DWORD *)(v38 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
        v41 = (PERESOURCE *)GetDomainLockRef(12LL, v34, v36, v37);
        if ( v41 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v42, v43);
        ExReleaseResourceAndLeaveCriticalRegion(*v41);
        HMUnlockObject(*v44);
        tagDomLock::LockExclusive(v41);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  gbDITInHitTest = 0;
  if ( gcDITHitTestWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
    gcDITHitTestWaiters = 0;
  }
}
