/*
 * XREFs of NtUserSetMouseInputRateLimitingTimer @ 0x1C013E720
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ApiSetEditionSetMouseInputRateLimitingTimer @ 0x1C01D0580 (ApiSetEditionSetMouseInputRateLimitingTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  PVOID v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v42; // [rsp+38h] [rbp-89h] BYREF
  int v43; // [rsp+3Ch] [rbp-85h] BYREF
  int v44; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v45; // [rsp+44h] [rbp-7Dh]
  __int64 v46; // [rsp+48h] [rbp-79h]
  unsigned __int8 v47; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+68h] [rbp-59h] BYREF
  int *v50; // [rsp+88h] [rbp-39h]
  __int64 v51; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-29h] BYREF
  int *v53; // [rsp+B8h] [rbp-9h]
  __int64 v54; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C8h] [rbp+7h] BYREF
  int *v56; // [rsp+E8h] [rbp+27h]
  __int64 v57; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v45 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v46 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v42 = v47;
        v51 = 4LL;
        v50 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v49);
      }
    }
  }
  else
  {
    v46 = 0LL;
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
    if ( v46 )
    {
      v12 = *(unsigned int *)(v46 + 24);
      if ( *(_DWORD *)(v46 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v46 + 44) = 1;
        *(GUID *)(v46 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v43 = v47;
            v54 = 4LL;
            v53 = &v43;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v52);
            v13 = dword_1C024C960;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v44 = v47;
            v57 = 4LL;
            v56 = &v44;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v55);
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
          v16 = *(unsigned int *)(v23 + 1216);
          if ( (v16 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v31 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v31[2];
                v32 = *v31;
                v31[2] = 0LL;
                if ( !*(_DWORD *)(v32 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
                v34 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v34 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
                ExReleaseResourceAndLeaveCriticalRegion(*v34);
                HMUnlockObject(*v31);
                tagDomLock::LockExclusive(v34);
                v31 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v45;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v35 = (PVOID)PsGetCurrentProcess(v16, v21);
  if ( !v35 || v35 != g_pepDwm )
  {
    v37 = 5LL;
    goto LABEL_59;
  }
  if ( v1 > 0x4E20 )
  {
    v37 = 87LL;
LABEL_59:
    UserSetLastError(v37, v36);
    goto LABEL_60;
  }
  v38 = ApiSetEditionSetMouseInputRateLimitingTimer(v1);
  UserSetLastError(v38, v39);
  LOBYTE(v2) = (v38 & 0x80000000) == 0;
LABEL_60:
  UserSessionSwitchLeaveCrit(v40);
  return v2;
}
