/*
 * XREFs of UserProcessTimerStatisticsCallout @ 0x1C01299C4
 * Callers:
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
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
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessTimerStatisticsCallout(__int64 a1)
{
  __int64 v1; // r15
  unsigned int v2; // esi
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
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v35; // rcx
  int v37; // [rsp+38h] [rbp-89h] BYREF
  int v38; // [rsp+3Ch] [rbp-85h] BYREF
  int v39; // [rsp+40h] [rbp-81h] BYREF
  __int64 v40; // [rsp+48h] [rbp-79h]
  __int64 v41; // [rsp+50h] [rbp-71h]
  unsigned __int8 v42; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+70h] [rbp-51h] BYREF
  int *v45; // [rsp+90h] [rbp-31h]
  __int64 v46; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+A0h] [rbp-21h] BYREF
  int *v48; // [rsp+C0h] [rbp-1h]
  __int64 v49; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+D0h] [rbp+Fh] BYREF
  int *v51; // [rsp+F0h] [rbp+2Fh]
  __int64 v52; // [rsp+F8h] [rbp+37h]

  v1 = a1;
  v40 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v41 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v37 = v42;
        v46 = 4LL;
        v45 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v44);
      }
    }
  }
  else
  {
    v41 = 0LL;
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
    if ( v41 )
    {
      v12 = *(unsigned int *)(v41 + 24);
      if ( *(_DWORD *)(v41 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v41 + 44) = 1;
        *(GUID *)(v41 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v38 = v42;
            v49 = 4LL;
            v48 = &v38;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v47);
            v13 = dword_1C024C960;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v39 = v42;
            v52 = 4LL;
            v51 = &v39;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v50);
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
    if ( v22
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v22 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v22 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v30 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
          v31 = *v30;
          v30[2] = 0LL;
          if ( !*(_DWORD *)(v31 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
          v33 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v33 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          ExReleaseResourceAndLeaveCriticalRegion(*v33);
          HMUnlockObject(*v30);
          tagDomLock::LockExclusive(v33);
          v30 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v40;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)v1);
  if ( ProcessWin32Process )
    *(_DWORD *)(v1 + 8) = *(_DWORD *)(ProcessWin32Process + 1048);
  else
    v2 = -1073741558;
  UserSessionSwitchLeaveCrit(v35);
  return v2;
}
