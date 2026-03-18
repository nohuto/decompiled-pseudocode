/*
 * XREFs of NtMITMinuserWindowDestroyed @ 0x1C012D7A0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013B5D0 (UserDeleteBaseWindowHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITMinuserWindowDestroyed(__int64 a1)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v52; // [rsp+30h] [rbp-89h] BYREF
  int v53; // [rsp+34h] [rbp-85h] BYREF
  int v54; // [rsp+38h] [rbp-81h] BYREF
  __int64 v55; // [rsp+40h] [rbp-79h]
  __int64 v56; // [rsp+48h] [rbp-71h]
  unsigned __int8 v57; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+68h] [rbp-51h] BYREF
  int *v60; // [rsp+88h] [rbp-31h]
  int v61; // [rsp+90h] [rbp-29h]
  int v62; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+98h] [rbp-21h] BYREF
  int *v64; // [rsp+B8h] [rbp-1h]
  int v65; // [rsp+C0h] [rbp+7h]
  int v66; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C8h] [rbp+Fh] BYREF
  int *v68; // [rsp+E8h] [rbp+2Fh]
  int v69; // [rsp+F0h] [rbp+37h]
  int v70; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v55 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v57 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v56 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v62 = 0;
        v52 = v57;
        v61 = 4;
        v60 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v59);
      }
    }
  }
  else
  {
    v56 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
  {
    *(_DWORD *)(v56 + 44) = 1;
    *(GUID *)(v56 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v66 = 0;
        v53 = v57;
        v65 = 4;
        v64 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v63);
        v12 = dword_1C0244A70;
      }
      if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v70 = 0;
        v54 = v57;
        v69 = 4;
        v68 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v67);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v15 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v15),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v19 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v19 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v23, v24, v25);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29, v30);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v39 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v39[2];
          v40 = *v39;
          v39[2] = 0LL;
          if ( !*(_DWORD *)(v40 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
          v43 = (PERESOURCE *)GetDomainLockRef(12LL, v35, v37, v38);
          if ( v43 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44, v45);
          ExReleaseResourceAndLeaveCriticalRegion(*v43);
          HMUnlockObject(*v39);
          tagDomLock::LockExclusive(v43);
          v39 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v55;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v46 = (int)UserDeleteBaseWindowHandle(v1);
  UserSessionSwitchLeaveCrit(v48, v47, v49, v50);
  return v46;
}
