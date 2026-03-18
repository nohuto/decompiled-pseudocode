/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C0060BC0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UpconvertTime @ 0x1C0060B60 (UpconvertTime.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4, int a5)
{
  int v5; // r15d
  unsigned int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct tagKERNELHANDLETABLEENTRY *v42; // rsi
  CInputThread *v43; // rsi
  unsigned int CurrentThreadId; // eax
  int v45; // ebx
  unsigned int v46; // edi
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  PERESOURCE *v58; // rdi
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // [rsp+30h] [rbp-B1h] BYREF
  int v62; // [rsp+34h] [rbp-ADh] BYREF
  int v63; // [rsp+38h] [rbp-A9h] BYREF
  int v64; // [rsp+3Ch] [rbp-A5h]
  unsigned int v65; // [rsp+40h] [rbp-A1h]
  __int64 v66; // [rsp+48h] [rbp-99h]
  unsigned __int8 v67; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+68h] [rbp-79h] BYREF
  int *v70; // [rsp+88h] [rbp-59h]
  __int64 v71; // [rsp+90h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+98h] [rbp-49h] BYREF
  int *v73; // [rsp+B8h] [rbp-29h]
  __int64 v74; // [rsp+C0h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+C8h] [rbp-19h] BYREF
  int *v76; // [rsp+E8h] [rbp+7h]
  __int64 v77; // [rsp+F0h] [rbp+Fh]

  v5 = a4;
  v64 = a4;
  v65 = a2;
  v7 = a1;
  v8 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v67 = 1;
    v50 = PsGetCurrentThreadWin32Thread(v9);
    v66 = v50;
    if ( v50 && (*(int *)(v50 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v51, v52) )
        {
          v61 = v67;
          v71 = 4LL;
          v70 = &v61;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v69);
        }
      }
    }
  }
  else
  {
    v66 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v66 && (*(_DWORD *)(v66 + 48) || *(int *)(v66 + 24) > 0) )
  {
    *(_DWORD *)(v66 + 44) = 1;
    *(GUID *)(v66 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v18) )
      {
        v62 = v67;
        v74 = 4LL;
        v73 = &v62;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v72);
        v53 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v53 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v53, v54) )
      {
        v63 = v67;
        v77 = 4LL;
        v76 = &v63;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v75);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v21 = PsGetCurrentProcess(v20, v19),
        ProcessSessionId = PsGetProcessSessionIdEx(v21),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v25 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
    if ( v25
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v25 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v25 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32, v33);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v42 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v42 + 2);
          v55 = *(_QWORD *)v42;
          *((_QWORD *)v42 + 2) = 0LL;
          if ( !*(_DWORD *)(v55 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
          v58 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v58 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v59, v60);
          ExReleaseResourceAndLeaveCriticalRegion(*v58);
          HMUnlockObject(*(_QWORD *)v42);
          tagDomLock::LockExclusive((tagDomLock *)v58);
          v42 = gpducstulHead;
        }
        while ( gpducstulHead );
        v5 = v64;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v43 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v43, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v45 = *((_DWORD *)v43 + 10);
  v46 = CurrentThreadId;
  ExReleasePushLockSharedEx(v43, 0LL);
  KeLeaveCriticalRegion();
  if ( v46 == v45 )
  {
    v48 = UpconvertTime(v7);
    CInputGlobals::UpdateInputGlobals(gpInputGlobals, v48, v65, a3, v5, a5);
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v47);
  return v8;
}
