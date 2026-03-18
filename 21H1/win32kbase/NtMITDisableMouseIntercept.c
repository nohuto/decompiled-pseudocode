/*
 * XREFs of NtMITDisableMouseIntercept @ 0x1C01349B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C004F460 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITDisableMouseIntercept(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 *v32; // rsi
  CInputThread *v33; // rsi
  unsigned int CurrentThreadId; // eax
  int v35; // ebx
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 MouseProcessor; // rax
  __int64 v40; // rcx
  bool v41; // al
  int v43; // [rsp+38h] [rbp-89h] BYREF
  int v44; // [rsp+3Ch] [rbp-85h] BYREF
  int v45; // [rsp+40h] [rbp-81h] BYREF
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

  v1 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v46 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v43 = v47;
        v51 = 4LL;
        v50 = &v43;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v46 )
    {
      v11 = *(unsigned int *)(v46 + 24);
      if ( *(_DWORD *)(v46 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v46 + 44) = 1;
        *(GUID *)(v46 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v44 = v47;
            v54 = 4LL;
            v53 = &v44;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v52);
            v12 = dword_1C024C960;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v45 = v47;
            v57 = 4LL;
            v56 = &v45;
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
  EtwTraceAcquiredExclusiveUserCrit(v11);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached(v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v21 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v21 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v32 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v29 = *v32;
        v32[2] = 0LL;
        if ( !*(_DWORD *)(v29 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
        v31 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v31 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
        ExReleaseResourceAndLeaveCriticalRegion(*v31);
        HMUnlockObject(*v32);
        tagDomLock::LockExclusive(v31);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v33 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v33, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v35 = *((_DWORD *)v33 + 10);
  v36 = CurrentThreadId;
  ExReleasePushLockSharedEx(v33, 0LL);
  KeLeaveCriticalRegion();
  if ( v36 != v35 )
  {
    v38 = 5LL;
LABEL_61:
    UserSetLastError(v38, v37);
    goto LABEL_62;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    v41 = CMouseProcessor::MouseInterceptState::Disable(MouseProcessor + 3768);
  else
    v41 = 0;
  if ( !v41 )
  {
    v38 = 5023LL;
    goto LABEL_61;
  }
  v1 = 1LL;
LABEL_62:
  UserSessionSwitchLeaveCrit(v40);
  return v1;
}
