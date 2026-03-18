/*
 * XREFs of NtUserSetInputServiceState @ 0x1C00446F0
 * Callers:
 *     <none>
 * Callees:
 *     HandleDeferredInput @ 0x1C0001270 (HandleDeferredInput.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetInputServiceState(int a1, int a2)
{
  int v2; // r12d
  __int64 v4; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagKERNELHANDLETABLEENTRY *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // [rsp+38h] [rbp-89h] BYREF
  int v53; // [rsp+3Ch] [rbp-85h] BYREF
  int v54; // [rsp+40h] [rbp-81h] BYREF
  int v55; // [rsp+44h] [rbp-7Dh]
  __int64 v56; // [rsp+48h] [rbp-79h]
  unsigned __int8 v57; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+68h] [rbp-59h] BYREF
  int *v60; // [rsp+88h] [rbp-39h]
  __int64 v61; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+98h] [rbp-29h] BYREF
  int *v63; // [rsp+B8h] [rbp-9h]
  __int64 v64; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+C8h] [rbp+7h] BYREF
  int *v66; // [rsp+E8h] [rbp+27h]
  __int64 v67; // [rsp+F0h] [rbp+2Fh]

  v2 = a2;
  v55 = a2;
  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v57 = 1;
    v41 = PsGetCurrentThreadWin32Thread();
    v56 = v41;
    if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v42, v43) )
        {
          v52 = v57;
          v61 = 4LL;
          v60 = &v52;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v59);
        }
      }
    }
  }
  else
  {
    v56 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
  {
    *(_DWORD *)(v56 + 44) = 1;
    *(GUID *)(v56 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v13) )
      {
        v53 = v57;
        v64 = 4LL;
        v63 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v62);
        v44 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v44 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v44, v45) )
      {
        v54 = v57;
        v67 = 4LL;
        v66 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v65);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v38 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v38),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24, v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v34 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v34 + 2);
          v46 = *(_QWORD *)v34;
          *((_QWORD *)v34 + 2) = 0LL;
          if ( !*(_DWORD *)(v46 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
          v49 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v49 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v50, v51);
          ExReleaseResourceAndLeaveCriticalRegion(*v49);
          HMUnlockObject(*(_QWORD *)v34);
          tagDomLock::LockExclusive((tagDomLock *)v49);
          v34 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v55;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v35 = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !a1 )
  {
    *(_DWORD *)(v35 + 1224) &= ~0x10000000u;
    goto LABEL_33;
  }
  if ( a1 == 1 )
  {
    *(_DWORD *)(v35 + 1224) |= 0x10000000u;
LABEL_33:
    v4 = 1LL;
    goto LABEL_34;
  }
  v36 = (unsigned int)(a1 - 2);
  if ( (unsigned int)v36 <= 4 )
  {
    if ( (*(_DWORD *)(v35 + 1224) & 0x10000000) != 0 )
      HandleDeferredInput(v35, a1, v2);
    goto LABEL_33;
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v36);
  return v4;
}
