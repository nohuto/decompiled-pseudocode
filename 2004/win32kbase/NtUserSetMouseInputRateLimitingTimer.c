/*
 * XREFs of NtUserSetMouseInputRateLimitingTimer @ 0x1C0138A80
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
 *     ApiSetEditionSetMouseInputRateLimitingTimer @ 0x1C01CA600 (ApiSetEditionSetMouseInputRateLimitingTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetMouseInputRateLimitingTimer(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rsi
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
  __int64 v21; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
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
  __int64 *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  PVOID v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // ebx
  __int64 v53; // rdx
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
    if ( v63 )
    {
      v12 = *(unsigned int *)(v63 + 24);
      if ( *(_DWORD *)(v63 + 48) || (int)v12 > 0 )
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
            v13 = dword_1C0246A70;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
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
    v23 = 0LL;
    if ( !IsThreadCrossSessionAttached(v16) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v23 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( v23 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v23 + 480) & 0x1000000) != 0 )
        {
          v16 = *(unsigned int *)(v23 + 1224);
          if ( (v16 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v21, v27, v28);
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
              v1 = v62;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v49 = (PVOID)PsGetCurrentProcess(v16, v21);
  if ( !v49 || v49 != g_pepDwm )
  {
    v51 = 5LL;
    goto LABEL_59;
  }
  if ( v1 > 0x4E20 )
  {
    v51 = 87LL;
LABEL_59:
    UserSetLastError(v51, v50);
    goto LABEL_60;
  }
  v52 = ApiSetEditionSetMouseInputRateLimitingTimer(v1);
  UserSetLastError(v52, v53);
  LOBYTE(v2) = (v52 & 0x80000000) == 0;
LABEL_60:
  UserSessionSwitchLeaveCrit(v55, v54, v56, v57);
  return v2;
}
