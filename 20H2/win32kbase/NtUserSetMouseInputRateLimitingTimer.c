/*
 * XREFs of NtUserSetMouseInputRateLimitingTimer @ 0x1C0136730
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
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ApiSetEditionSetMouseInputRateLimitingTimer @ 0x1C01C8280 (ApiSetEditionSetMouseInputRateLimitingTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
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
  __int64 *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  PVOID v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v58; // [rsp+38h] [rbp-89h] BYREF
  int v59; // [rsp+3Ch] [rbp-85h] BYREF
  int v60; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v61; // [rsp+44h] [rbp-7Dh]
  __int64 v62; // [rsp+48h] [rbp-79h]
  unsigned __int8 v63; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+68h] [rbp-59h] BYREF
  int *v66; // [rsp+88h] [rbp-39h]
  __int64 v67; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+98h] [rbp-29h] BYREF
  int *v69; // [rsp+B8h] [rbp-9h]
  __int64 v70; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+C8h] [rbp+7h] BYREF
  int *v72; // [rsp+E8h] [rbp+27h]
  __int64 v73; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v61 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v63 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v62 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v62 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v58 = v63;
        v67 = 4LL;
        v66 = &v58;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v65);
      }
    }
  }
  else
  {
    v62 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v62 && (*(_DWORD *)(v62 + 48) || *(int *)(v62 + 24) > 0) )
  {
    *(_DWORD *)(v62 + 44) = 1;
    *(GUID *)(v62 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v59 = v63;
        v70 = 4LL;
        v69 = &v59;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v68);
        v13 = dword_1C0244A70;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = v63;
        v73 = 4LL;
        v72 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v71);
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
    v22 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v22 + 488) & 0x1000000) != 0 )
        {
          v20 = *(unsigned int *)(v22 + 1232);
          if ( (v20 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v19, v26, v27);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v41 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v41[2];
                v42 = *v41;
                v41[2] = 0LL;
                if ( !*(_DWORD *)(v42 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
                v45 = (PERESOURCE *)GetDomainLockRef(12LL, v37, v39, v40);
                if ( v45 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
                ExReleaseResourceAndLeaveCriticalRegion(*v45);
                HMUnlockObject(*v41);
                tagDomLock::LockExclusive(v45);
                v41 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v61;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v48 = (PVOID)PsGetCurrentProcess(v20, v19);
  if ( !v48 || v48 != g_pepDwm )
  {
    v50 = 5LL;
    goto LABEL_59;
  }
  if ( v1 > 0x4E20 )
  {
    v50 = 87LL;
LABEL_59:
    UserSetLastError(v50, v49);
    goto LABEL_60;
  }
  v51 = ApiSetEditionSetMouseInputRateLimitingTimer(v1);
  UserSetLastError(v51, v52);
  LOBYTE(v2) = (v51 & 0x80000000) == 0;
LABEL_60:
  UserSessionSwitchLeaveCrit(v54, v53, v55, v56);
  return v2;
}
