/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C00BD670
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
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rsi
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
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
  PVOID v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  PERESOURCE *v53; // rdi
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // [rsp+38h] [rbp-89h] BYREF
  int v57; // [rsp+3Ch] [rbp-85h] BYREF
  int v58; // [rsp+40h] [rbp-81h] BYREF
  __int64 v59; // [rsp+48h] [rbp-79h]
  unsigned __int8 v60; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+68h] [rbp-59h] BYREF
  int *v63; // [rsp+88h] [rbp-39h]
  int v64; // [rsp+90h] [rbp-31h]
  int v65; // [rsp+94h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+98h] [rbp-29h] BYREF
  int *v67; // [rsp+B8h] [rbp-9h]
  int v68; // [rsp+C0h] [rbp-1h]
  int v69; // [rsp+C4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+C8h] [rbp+7h] BYREF
  int *v71; // [rsp+E8h] [rbp+27h]
  int v72; // [rsp+F0h] [rbp+2Fh]
  int v73; // [rsp+F4h] [rbp+33h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  v3 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v60 = 1;
    v48 = PsGetCurrentThreadWin32Thread(v1);
    v59 = v48;
    if ( v48 && (*(int *)(v48 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v65 = 0;
        v56 = v60;
        v64 = 4;
        v63 = &v56;
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
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
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
        v69 = 0;
        v57 = v60;
        v68 = 4;
        v67 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v66);
        v49 = dword_1C0244A70;
      }
      if ( v49 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v73 = 0;
        v58 = v60;
        v72 = 4;
        v71 = &v58;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v70);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v13 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v13),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v19 + 488) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v19 + 1232);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v16, v23, v24);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v38 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v50 = *v38;
              v38[2] = 0LL;
              if ( !*(_DWORD *)(v50 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
              v53 = (PERESOURCE *)GetDomainLockRef(12LL, v34, v36, v37);
              if ( v53 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v54, v55);
              ExReleaseResourceAndLeaveCriticalRegion(*v53);
              HMUnlockObject(*v38);
              tagDomLock::LockExclusive(v53);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  v39 = (PVOID)PsGetCurrentProcess(v17, v16);
  if ( v39 && v39 == g_pepDwm )
  {
    gptiManipulationThread = (__int64)gptiCurrent;
    v47 = PsGetCurrentThreadWin32Thread(v41);
    if ( v47 )
      *(_DWORD *)(v47 + 48) = 1;
  }
  else
  {
    UserSetLastError(5LL, v40);
    v3 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v43, v42, v44, v45);
  return v3;
}
