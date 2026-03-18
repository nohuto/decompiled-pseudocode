/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C000B814
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C005296C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0054924 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
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
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  struct tagKERNELHANDLETABLEENTRY *v22; // rsi
  __int64 v23; // rax
  PERESOURCE *v24; // rdi
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // [rsp+38h] [rbp-79h] BYREF
  int v31; // [rsp+3Ch] [rbp-75h] BYREF
  int v32; // [rsp+40h] [rbp-71h] BYREF
  __int64 v33; // [rsp+48h] [rbp-69h]
  unsigned __int8 v34; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+68h] [rbp-49h] BYREF
  int *v37; // [rsp+88h] [rbp-29h]
  int v38; // [rsp+90h] [rbp-21h]
  int v39; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+98h] [rbp-19h] BYREF
  int *v41; // [rsp+B8h] [rbp+7h]
  int v42; // [rsp+C0h] [rbp+Fh]
  int v43; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C8h] [rbp+17h] BYREF
  int *v45; // [rsp+E8h] [rbp+37h]
  int v46; // [rsp+F0h] [rbp+3Fh]
  int v47; // [rsp+F4h] [rbp+43h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v34 = 1;
    v17 = PsGetCurrentThreadWin32Thread(v1);
    v33 = v17;
    if ( v17 && (*(int *)(v17 + 24) > 0 || *(_DWORD *)(v33 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v26, v27) )
        {
          v39 = 0;
          v30 = v34;
          v38 = 4;
          v37 = &v30;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199F7, (int)&ActivityId, 0, 3u, &v36);
        }
      }
    }
  }
  else
  {
    v33 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v33 && (*(_DWORD *)(v33 + 48) || *(int *)(v33 + 24) > 0) )
  {
    *(_DWORD *)(v33 + 44) = 1;
    *(GUID *)(v33 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v10) )
      {
        v43 = 0;
        v31 = v34;
        v42 = 4;
        v41 = &v31;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199A0, (int)&ActivityId, 0, 3u, &v40);
        v28 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v28 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v28, v29) )
      {
        v47 = 0;
        v32 = v34;
        v46 = 4;
        v45 = &v32;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199CD, (int)&ActivityId, 0, 3u, &v44);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v18 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v18),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( v14
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v14 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v14 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v22 = gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v23 = *(_QWORD *)v22;
        *((_QWORD *)v22 + 2) = 0LL;
        if ( !*(_DWORD *)(v23 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v24 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v24 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        ExReleaseResourceAndLeaveCriticalRegion(*v24);
        HMUnlockObject(*(_QWORD *)v22);
        tagDomLock::LockExclusive((tagDomLock *)v24);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
