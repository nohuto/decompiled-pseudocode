/*
 * XREFs of NtUserRegisterSessionPort @ 0x1C00746A0
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
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007491C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // r14
  NTSTATUS v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  ULONG v53; // eax
  __int64 v54; // rdx
  int v55; // [rsp+38h] [rbp-89h] BYREF
  int v56; // [rsp+3Ch] [rbp-85h] BYREF
  int v57; // [rsp+40h] [rbp-81h] BYREF
  HANDLE v58; // [rsp+48h] [rbp-79h]
  __int64 v59; // [rsp+50h] [rbp-71h]
  unsigned __int8 v60; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+70h] [rbp-51h] BYREF
  int *v63; // [rsp+90h] [rbp-31h]
  __int64 v64; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+A0h] [rbp-21h] BYREF
  int *v66; // [rsp+C0h] [rbp-1h]
  __int64 v67; // [rsp+C8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+D0h] [rbp+Fh] BYREF
  int *v69; // [rsp+F0h] [rbp+2Fh]
  __int64 v70; // [rsp+F8h] [rbp+37h]

  v1 = Handle;
  v58 = Handle;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v60 = 1;
    v45 = PsGetCurrentThreadWin32Thread(v3);
    v59 = v45;
    if ( v45 && (*(int *)(v45 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v55 = v60;
        v64 = 4LL;
        v63 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v62);
      }
    }
  }
  else
  {
    v59 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v59 && (*(_DWORD *)(v59 + 48) || *(int *)(v59 + 24) > 0) )
  {
    *(_DWORD *)(v59 + 44) = 1;
    *(GUID *)(v59 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v56 = v60;
        v67 = 4LL;
        v66 = &v56;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v65);
        v46 = dword_1C0244A70;
      }
      if ( v46 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v57 = v60;
        v70 = 4LL;
        v69 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v68);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v14),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23, v24);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v38 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v38[2];
          v47 = *v38;
          v38[2] = 0LL;
          if ( !*(_DWORD *)(v47 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
          v50 = (PERESOURCE *)GetDomainLockRef(12LL, v34, v36, v37);
          if ( v50 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
          ExReleaseResourceAndLeaveCriticalRegion(*v50);
          HMUnlockObject(*v38);
          tagDomLock::LockExclusive(v50);
          v38 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v58;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v39 = xxxDwmProcessStartup(v1);
  if ( v39 < 0 )
  {
    v53 = RtlNtStatusToDosError(v39);
    UserSetLastError(v53, v54);
  }
  else
  {
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v41, v40, v42, v43);
  return v2;
}
