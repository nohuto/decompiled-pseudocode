/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C005D0A0
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
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 NtUserRegisterManipulationThread()
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v1; // rsi
  struct tagTHREADINFO *v2; // rbx
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct tagKERNELHANDLETABLEENTRY *v35; // r14
  PVOID v36; // rax
  __int64 v37; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // [rsp+38h] [rbp-89h] BYREF
  int v52; // [rsp+3Ch] [rbp-85h] BYREF
  int v53; // [rsp+40h] [rbp-81h] BYREF
  __int64 v54; // [rsp+48h] [rbp-79h]
  unsigned __int8 v55; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+68h] [rbp-59h] BYREF
  int *v58; // [rsp+88h] [rbp-39h]
  int v59; // [rsp+90h] [rbp-31h]
  int v60; // [rsp+94h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+98h] [rbp-29h] BYREF
  int *v62; // [rsp+B8h] [rbp-9h]
  int v63; // [rsp+C0h] [rbp-1h]
  int v64; // [rsp+C4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+C8h] [rbp+7h] BYREF
  int *v66; // [rsp+E8h] [rbp+27h]
  int v67; // [rsp+F0h] [rbp+2Fh]
  int v68; // [rsp+F4h] [rbp+33h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  v1 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v55 = 1;
    v40 = PsGetCurrentThreadWin32Thread();
    v54 = v40;
    if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v54 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v41, v42) )
        {
          v60 = 0;
          v51 = v55;
          v59 = 4;
          v58 = &v51;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
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
  v2 = 0LL;
  while ( 1 )
  {
    v3 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v3 )
      v2 = *v3;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v8, v7) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v2 == gptiRit )
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
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v9) )
      {
        v64 = 0;
        v52 = v55;
        v63 = 4;
        v62 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v61);
        v43 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v43 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v43, v44) )
      {
        v68 = 0;
        v53 = v55;
        v67 = 4;
        v66 = &v53;
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
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v12 = PsGetCurrentProcess(v11, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(v12),
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
    if ( v18 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v18 + 480) & 0x1000000) != 0 )
        {
          v16 = *(unsigned int *)(v18 + 1224);
          if ( (v16 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25, v26);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v35 = gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v45 = *(_QWORD *)v35;
              *((_QWORD *)v35 + 2) = 0LL;
              if ( !*(_DWORD *)(v45 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
              v48 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v48 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
              ExReleaseResourceAndLeaveCriticalRegion(*v48);
              HMUnlockObject(*(_QWORD *)v35);
              tagDomLock::LockExclusive((tagDomLock *)v48);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v36 = (PVOID)PsGetCurrentProcess(v16, v15);
  if ( v36 && v36 == g_pepDwm )
  {
    gptiManipulationThread = (__int64)gptiCurrent;
    v39 = PsGetCurrentThreadWin32Thread();
    if ( v39 )
      *(_DWORD *)(v39 + 48) = 1;
  }
  else
  {
    UserSetLastError(5LL);
    v1 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v37);
  return v1;
}
