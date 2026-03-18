/*
 * XREFs of NtUserStopAndEndInertia @ 0x1C013F300
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
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01A21C8 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  int v3; // esi
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
  __int64 v22; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  PERESOURCE *v35; // rdi
  PVOID v36; // rax
  __int64 v37; // rdx
  CTouchProcessor *v38; // rcx
  void *v39; // r8
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

  v2 = a2;
  v45 = a2;
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v6 = PsGetCurrentThreadWin32Thread(v4);
    v46 = v6;
    if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
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
    if ( v46 )
    {
      v13 = *(unsigned int *)(v46 + 24);
      if ( *(_DWORD *)(v46 + 48) || (int)v13 > 0 )
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
            v14 = dword_1C024C960;
          }
          if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
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
    v24 = 0LL;
    if ( !IsThreadCrossSessionAttached(v17) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( v24 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v24 + 480) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v24 + 1216);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v32 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
                v33 = *v32;
                v32[2] = 0LL;
                if ( !*(_DWORD *)(v33 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
                v35 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v35 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
                ExReleaseResourceAndLeaveCriticalRegion(*v35);
                HMUnlockObject(*v32);
                tagDomLock::LockExclusive(v35);
                v32 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v2 = v45;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v36 = (PVOID)PsGetCurrentProcess(v17, v22);
  if ( v36 && v36 == g_pepDwm )
    v3 = CTouchProcessor::StopAndEndInertia(v38, v2, v39);
  else
    UserSetLastError(5LL, v37);
  UserSessionSwitchLeaveCrit(v40);
  return v3;
}
