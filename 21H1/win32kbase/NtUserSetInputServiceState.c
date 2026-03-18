/*
 * XREFs of NtUserSetInputServiceState @ 0x1C00351C0
 * Callers:
 *     <none>
 * Callees:
 *     HandleDeferredInput @ 0x1C0001120 (HandleDeferredInput.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetInputServiceState(__int64 a1, int a2)
{
  int v2; // r12d
  int v3; // r15d
  __int64 v4; // rsi
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct tagKERNELHANDLETABLEENTRY *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  int v41; // [rsp+38h] [rbp-89h] BYREF
  int v42; // [rsp+3Ch] [rbp-85h] BYREF
  int v43; // [rsp+40h] [rbp-81h] BYREF
  int v44; // [rsp+44h] [rbp-7Dh]
  __int64 v45; // [rsp+48h] [rbp-79h]
  unsigned __int8 v46; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+68h] [rbp-59h] BYREF
  int *v49; // [rsp+88h] [rbp-39h]
  __int64 v50; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+98h] [rbp-29h] BYREF
  int *v52; // [rsp+B8h] [rbp-9h]
  __int64 v53; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+C8h] [rbp+7h] BYREF
  int *v55; // [rsp+E8h] [rbp+27h]
  __int64 v56; // [rsp+F0h] [rbp+2Fh]

  v2 = a2;
  v44 = a2;
  v3 = a1;
  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v46 = 1;
    v33 = PsGetCurrentThreadWin32Thread(v5);
    v45 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v34, v35) )
        {
          v41 = v46;
          v50 = 4LL;
          v49 = &v41;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v48);
        }
      }
    }
  }
  else
  {
    v45 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v45 && (*(_DWORD *)(v45 + 48) || *(int *)(v45 + 24) > 0) )
  {
    *(_DWORD *)(v45 + 44) = 1;
    *(GUID *)(v45 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v14) )
      {
        v42 = v46;
        v53 = 4LL;
        v52 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v51);
        v36 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v36 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v36, v37) )
      {
        v43 = v46;
        v56 = 4LL;
        v55 = &v43;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v54);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v30 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v30),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v26 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v26 + 2);
          v38 = *(_QWORD *)v26;
          *((_QWORD *)v26 + 2) = 0LL;
          if ( !*(_DWORD *)(v38 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
          v40 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v40 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
          ExReleaseResourceAndLeaveCriticalRegion(*v40);
          HMUnlockObject(*(_QWORD *)v26);
          tagDomLock::LockExclusive((tagDomLock *)v40);
          v26 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v44;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !v3 )
  {
    *(_DWORD *)(v27 + 1216) &= ~0x10000000u;
    goto LABEL_33;
  }
  if ( v3 == 1 )
  {
    *(_DWORD *)(v27 + 1216) |= 0x10000000u;
LABEL_33:
    v4 = 1LL;
    goto LABEL_34;
  }
  v28 = (unsigned int)(v3 - 2);
  if ( (unsigned int)v28 <= 4 )
  {
    if ( (*(_DWORD *)(v27 + 1216) & 0x10000000) != 0 )
      HandleDeferredInput(v27, v3, v2);
    goto LABEL_33;
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v28);
  return v4;
}
