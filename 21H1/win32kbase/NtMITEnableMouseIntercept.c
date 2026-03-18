/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1C0134ED0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
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
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01C1FA0 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // r14
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
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  CInputThread *v34; // rsi
  unsigned int CurrentThreadId; // eax
  int v36; // ebx
  unsigned int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 MouseProcessor; // rax
  __int64 v41; // rcx
  char v42; // al
  int v44; // [rsp+38h] [rbp-89h] BYREF
  int v45; // [rsp+3Ch] [rbp-85h] BYREF
  int v46; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v47; // [rsp+44h] [rbp-7Dh]
  __int64 v48; // [rsp+48h] [rbp-79h]
  unsigned __int8 v49; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+68h] [rbp-59h] BYREF
  int *v52; // [rsp+88h] [rbp-39h]
  __int64 v53; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+98h] [rbp-29h] BYREF
  int *v55; // [rsp+B8h] [rbp-9h]
  __int64 v56; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+C8h] [rbp+7h] BYREF
  int *v58; // [rsp+E8h] [rbp+27h]
  __int64 v59; // [rsp+F0h] [rbp+2Fh]

  v1 = a1;
  v47 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v49 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v48 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v44 = v49;
        v53 = 4LL;
        v52 = &v44;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v51);
      }
    }
  }
  else
  {
    v48 = 0LL;
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
    if ( v48 )
    {
      v12 = *(unsigned int *)(v48 + 24);
      if ( *(_DWORD *)(v48 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v48 + 44) = 1;
        *(GUID *)(v48 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v45 = v49;
            v56 = 4LL;
            v55 = &v45;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v54);
            v13 = dword_1C024C960;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v46 = v49;
            v59 = 4LL;
            v58 = &v46;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v57);
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
        v1 = v47;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v34 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v34, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v36 = *((_DWORD *)v34 + 10);
  v37 = CurrentThreadId;
  ExReleasePushLockSharedEx(v34, 0LL);
  KeLeaveCriticalRegion();
  if ( v37 != v36 )
  {
    v39 = 5LL;
LABEL_63:
    UserSetLastError(v39, v38);
    goto LABEL_64;
  }
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v39 = 87LL;
    goto LABEL_63;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    v42 = CMouseProcessor::MouseInterceptState::Enable(MouseProcessor + 3768, v1);
  else
    v42 = 0;
  if ( !v42 )
  {
    v39 = 5023LL;
    goto LABEL_63;
  }
  v2 = 1LL;
LABEL_64:
  UserSessionSwitchLeaveCrit(v41);
  return v2;
}
