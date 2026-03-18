/*
 * XREFs of NtUserRegisterSessionPort @ 0x1C00526F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C005296C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(HANDLE Handle)
{
  HANDLE v1; // r15
  __int64 v2; // rsi
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
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
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct tagKERNELHANDLETABLEENTRY *v27; // r14
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  ULONG v39; // eax
  int v40; // [rsp+38h] [rbp-89h] BYREF
  int v41; // [rsp+3Ch] [rbp-85h] BYREF
  int v42; // [rsp+40h] [rbp-81h] BYREF
  HANDLE v43; // [rsp+48h] [rbp-79h]
  __int64 v44; // [rsp+50h] [rbp-71h]
  unsigned __int8 v45; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+70h] [rbp-51h] BYREF
  int *v48; // [rsp+90h] [rbp-31h]
  __int64 v49; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-21h] BYREF
  int *v51; // [rsp+C0h] [rbp-1h]
  __int64 v52; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp+Fh] BYREF
  int *v54; // [rsp+F0h] [rbp+2Fh]
  __int64 v55; // [rsp+F8h] [rbp+37h]

  v1 = Handle;
  v43 = Handle;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v45 = 1;
    v31 = PsGetCurrentThreadWin32Thread(v3);
    v44 = v31;
    if ( v31 && (*(int *)(v31 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v32, v33) )
        {
          v40 = v45;
          v49 = 4LL;
          v48 = &v40;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v47);
        }
      }
    }
  }
  else
  {
    v44 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
  {
    *(_DWORD *)(v44 + 44) = 1;
    *(GUID *)(v44 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v12) )
      {
        v41 = v45;
        v52 = 4LL;
        v51 = &v41;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v50);
        v34 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v34 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v34, v35) )
      {
        v42 = v45;
        v55 = 4LL;
        v54 = &v42;
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
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v19 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v19 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v27 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v27 + 2);
          v36 = *(_QWORD *)v27;
          *((_QWORD *)v27 + 2) = 0LL;
          if ( !*(_DWORD *)(v36 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
          v38 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v38 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
          ExReleaseResourceAndLeaveCriticalRegion(*v38);
          HMUnlockObject(*(_QWORD *)v27);
          tagDomLock::LockExclusive((tagDomLock *)v38);
          v27 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v43;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v28 = xxxDwmProcessStartup(v1);
  if ( v28 < 0 )
  {
    v39 = RtlNtStatusToDosError(v28);
    UserSetLastError(v39);
  }
  else
  {
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v29);
  return v2;
}
