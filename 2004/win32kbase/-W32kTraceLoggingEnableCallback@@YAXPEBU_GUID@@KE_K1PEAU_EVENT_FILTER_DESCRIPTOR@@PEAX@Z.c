/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C005F940
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01F8ED0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(const struct _GUID *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct tagKERNELHANDLETABLEENTRY *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  int v52; // [rsp+30h] [rbp-A1h] BYREF
  int v53; // [rsp+34h] [rbp-9Dh] BYREF
  int v54; // [rsp+38h] [rbp-99h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-91h]
  __int64 v56; // [rsp+48h] [rbp-89h]
  unsigned __int8 v57; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+68h] [rbp-69h] BYREF
  int *v60; // [rsp+88h] [rbp-49h]
  int v61; // [rsp+90h] [rbp-41h]
  int v62; // [rsp+94h] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+98h] [rbp-39h] BYREF
  int *v64; // [rsp+B8h] [rbp-19h]
  int v65; // [rsp+C0h] [rbp-11h]
  int v66; // [rsp+C4h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C8h] [rbp-9h] BYREF
  int *v68; // [rsp+E8h] [rbp+17h]
  int v69; // [rsp+F0h] [rbp+1Fh]
  int v70; // [rsp+F4h] [rbp+23h]

  if ( a2 == 2 )
  {
    v4 = a4;
    v55 = a4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v57 = 1;
      v8 = PsGetCurrentThreadWin32Thread(v6);
      v56 = v8;
      if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v9, v10) )
          {
            v62 = 0;
            v52 = v57;
            v61 = 4;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
    {
      *(_DWORD *)(v56 + 44) = 1;
      *(GUID *)(v56 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v18) )
        {
          v66 = 0;
          v53 = v57;
          v65 = 4;
          v64 = &v53;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &ActivityId,
            0LL,
            3u,
            &v63);
          v19 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v19 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v19, v20) )
        {
          v70 = 0;
          v54 = v57;
          v69 = 4;
          v68 = &v54;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &ActivityId,
            0LL,
            3u,
            &v67);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v23 = PsGetCurrentProcess(v22, v21),
          ProcessSessionId = PsGetProcessSessionIdEx(v23),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v27 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v27 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
      if ( v27
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v27 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v27 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34, v35);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v44 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v44 + 2);
            v45 = *(_QWORD *)v44;
            *((_QWORD *)v44 + 2) = 0LL;
            if ( !*(_DWORD *)(v45 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
            v48 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v48 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
            ExReleaseResourceAndLeaveCriticalRegion(*v48);
            HMUnlockObject(*(_QWORD *)v44);
            tagDomLock::LockExclusive((tagDomLock *)v48);
            v44 = gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v55;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    CitEtwEnableCallback(a1, 2u, v4);
    UserSessionSwitchLeaveCrit(v51);
  }
}
