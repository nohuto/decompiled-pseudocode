/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C00434E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UpconvertTime @ 0x1C00437E0 (UpconvertTime.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C005AF90 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
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
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct tagKERNELHANDLETABLEENTRY *v33; // rsi
  CInputThread *v34; // rsi
  unsigned int CurrentThreadId; // eax
  int v36; // ebx
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  int v49; // [rsp+30h] [rbp-B1h] BYREF
  int v50; // [rsp+34h] [rbp-ADh] BYREF
  int v51; // [rsp+38h] [rbp-A9h] BYREF
  int v52; // [rsp+3Ch] [rbp-A5h]
  unsigned int v53; // [rsp+40h] [rbp-A1h]
  __int64 v54; // [rsp+48h] [rbp-99h]
  unsigned __int8 v55; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+68h] [rbp-79h] BYREF
  int *v58; // [rsp+88h] [rbp-59h]
  __int64 v59; // [rsp+90h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+98h] [rbp-49h] BYREF
  int *v61; // [rsp+B8h] [rbp-29h]
  __int64 v62; // [rsp+C0h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+C8h] [rbp-19h] BYREF
  int *v64; // [rsp+E8h] [rbp+7h]
  __int64 v65; // [rsp+F0h] [rbp+Fh]

  v5 = a4;
  v52 = a4;
  v53 = a2;
  v7 = a1;
  v8 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v55 = 1;
    v41 = PsGetCurrentThreadWin32Thread(v9);
    v54 = v41;
    if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v54 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v42, v43) )
        {
          v49 = v55;
          v59 = 4LL;
          v58 = &v49;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v57);
        }
      }
    }
  }
  else
  {
    v54 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v54 && (*(_DWORD *)(v54 + 48) || *(int *)(v54 + 24) > 0) )
  {
    *(_DWORD *)(v54 + 44) = 1;
    *(GUID *)(v54 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v18) )
      {
        v50 = v55;
        v62 = 4LL;
        v61 = &v50;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v60);
        v44 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v44 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v44, v45) )
      {
        v51 = v55;
        v65 = 4LL;
        v64 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v63);
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
      && (*(_DWORD *)(v25 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v33 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v33 + 2);
          v46 = *(_QWORD *)v33;
          *((_QWORD *)v33 + 2) = 0LL;
          if ( !*(_DWORD *)(v46 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          v48 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v48 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47);
          ExReleaseResourceAndLeaveCriticalRegion(*v48);
          HMUnlockObject(*(_QWORD *)v33);
          tagDomLock::LockExclusive((tagDomLock *)v48);
          v33 = gpducstulHead;
        }
        while ( gpducstulHead );
        v5 = v52;
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
  if ( v37 == v36 )
  {
    v39 = UpconvertTime(v7);
    CInputGlobals::UpdateInputGlobals(gpInputGlobals, v39, v53, a3, v5, a5);
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v38);
  return v8;
}
