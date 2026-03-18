/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1C0139150
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
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(__int64 a1)
{
  int v1; // r15d
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
  __int64 *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // r15d
  unsigned int v55; // eax
  int v57; // [rsp+38h] [rbp-89h] BYREF
  int v58; // [rsp+3Ch] [rbp-85h] BYREF
  int v59; // [rsp+40h] [rbp-81h] BYREF
  int v60; // [rsp+44h] [rbp-7Dh]
  __int64 v61; // [rsp+48h] [rbp-79h]
  unsigned __int8 v62; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+68h] [rbp-59h] BYREF
  int *v65; // [rsp+88h] [rbp-39h]
  __int64 v66; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+98h] [rbp-29h] BYREF
  int *v68; // [rsp+B8h] [rbp-9h]
  __int64 v69; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+C8h] [rbp+7h] BYREF
  int *v71; // [rsp+E8h] [rbp+27h]
  __int64 v72; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v60 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v62 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v61 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v61 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v57 = v62;
        v66 = 4LL;
        v65 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v64);
      }
    }
  }
  else
  {
    v61 = 0LL;
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
    if ( v61 )
    {
      v12 = *(unsigned int *)(v61 + 24);
      if ( *(_DWORD *)(v61 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v61 + 44) = 1;
        *(GUID *)(v61 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v58 = v62;
            v69 = 4LL;
            v68 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v67);
            v13 = dword_1C0246A70;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v59 = v62;
            v72 = 4LL;
            v71 = &v59;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v70);
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
    if ( v22 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v22 + 480) & 0x1000000) != 0 )
        {
          v16 = *(unsigned int *)(v22 + 1224);
          if ( (v16 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
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
              v1 = v60;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v49 = PsGetCurrentProcessWin32Process(v16);
  v53 = v49;
  if ( !v49 )
    goto LABEL_61;
  if ( !v1 )
  {
    v55 = *(_DWORD *)(v49 + 820) & 0xFFFE7FFF;
    goto LABEL_60;
  }
  v54 = v1 - 1;
  if ( !v54 )
  {
    v55 = *(_DWORD *)(v49 + 820) & 0xFFFE7FFF | 0x8000;
    goto LABEL_60;
  }
  if ( v54 != 1 )
  {
LABEL_61:
    UserSetLastError(87LL, v49);
    goto LABEL_62;
  }
  v55 = *(_DWORD *)(v49 + 820) & 0xFFFE7FFF | 0x10000;
LABEL_60:
  *(_DWORD *)(v53 + 820) = v55;
  v2 = 1LL;
LABEL_62:
  UserSessionSwitchLeaveCrit(v50, v53, v51, v52);
  return v2;
}
