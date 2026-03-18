/*
 * XREFs of NtMITMinuserWindowCreated @ 0x1C0135630
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
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     UserAddBaseWindowHandle @ 0x1C01439D0 (UserAddBaseWindowHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rcx
  int v38; // [rsp+30h] [rbp-99h] BYREF
  int v39; // [rsp+34h] [rbp-95h] BYREF
  int v40; // [rsp+38h] [rbp-91h] BYREF
  __int64 v41; // [rsp+40h] [rbp-89h]
  __int64 v42; // [rsp+48h] [rbp-81h]
  unsigned __int8 v43; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+68h] [rbp-61h] BYREF
  int *v46; // [rsp+88h] [rbp-41h]
  int v47; // [rsp+90h] [rbp-39h]
  int v48; // [rsp+94h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+98h] [rbp-31h] BYREF
  int *v50; // [rsp+B8h] [rbp-11h]
  int v51; // [rsp+C0h] [rbp-9h]
  int v52; // [rsp+C4h] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C8h] [rbp-1h] BYREF
  int *v54; // [rsp+E8h] [rbp+1Fh]
  int v55; // [rsp+F0h] [rbp+27h]
  int v56; // [rsp+F4h] [rbp+2Bh]

  v41 = a1;
  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v42 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v48 = 0;
        v38 = v43;
        v47 = 4;
        v46 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v45);
      }
    }
  }
  else
  {
    v42 = 0LL;
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
    if ( v42 )
    {
      v13 = *(unsigned int *)(v42 + 24);
      if ( *(_DWORD *)(v42 + 48) || (int)v13 > 0 )
      {
        *(_DWORD *)(v42 + 44) = 1;
        *(GUID *)(v42 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v52 = 0;
            v39 = v43;
            v51 = 4;
            v50 = &v39;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v49);
            v14 = dword_1C024C960;
          }
          if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v56 = 0;
            v40 = v43;
            v55 = 4;
            v54 = &v40;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v53);
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
      && (*(_DWORD *)(v23 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
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
        v3 = v41;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v35 = (int)UserAddBaseWindowHandle(v3, a2);
  UserSessionSwitchLeaveCrit(v36);
  return v35;
}
