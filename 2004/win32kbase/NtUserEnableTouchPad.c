/*
 * XREFs of NtUserEnableTouchPad @ 0x1C0132A30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CheckAccessEx @ 0x1C0095808 (CheckAccessEx.c)
 *     EtwTraceUIPISystemError @ 0x1C00ADAE0 (EtwTraceUIPISystemError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     EnablePTPDevices @ 0x1C0122AD0 (EnablePTPDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1)
{
  int v1; // r15d
  int v2; // esi
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
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
  __int64 *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  int v55; // [rsp+38h] [rbp-D0h] BYREF
  int v56; // [rsp+3Ch] [rbp-CCh] BYREF
  int v57; // [rsp+40h] [rbp-C8h] BYREF
  int v58; // [rsp+44h] [rbp-C4h]
  int v59[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+78h] [rbp-90h] BYREF
  int *v65; // [rsp+98h] [rbp-70h]
  __int64 v66; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+A8h] [rbp-60h] BYREF
  int *v68; // [rsp+C8h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+D8h] [rbp-30h] BYREF
  int *v71; // [rsp+F8h] [rbp-10h]
  __int64 v72; // [rsp+100h] [rbp-8h]

  v1 = a1;
  v58 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v61 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v61 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v55 = ActivityId_4;
        v66 = 4LL;
        v65 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId_8,
          0LL,
          3u,
          &v64);
      }
    }
  }
  else
  {
    v61 = 0LL;
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
    if ( v61 )
    {
      v12 = *(unsigned int *)(v61 + 24);
      if ( *(_DWORD *)(v61 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v61 + 44) = 1;
        *(GUID *)(v61 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v56 = ActivityId_4;
            v69 = 4LL;
            v68 = &v56;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId_8,
              0LL,
              3u,
              &v67);
            v13 = dword_1C0246A70;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v57 = ActivityId_4;
            v72 = 4LL;
            v71 = &v57;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId_8,
              0LL,
              3u,
              &v70);
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
      && (*(_DWORD *)(v22 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v26, v27, v28);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32, v33);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v42 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v42[2];
          v43 = *v42;
          v42[2] = 0LL;
          if ( !*(_DWORD *)(v43 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
          v46 = (PERESOURCE *)GetDomainLockRef(12LL, v38, v40, v41);
          if ( v46 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47, v48);
          ExReleaseResourceAndLeaveCriticalRegion(*v46);
          HMUnlockObject(*v42);
          tagDomLock::LockExclusive(v46);
          v42 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v58;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v60);
  v59[1] = -1;
  v59[0] = 0x2000;
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 880LL), v59, 0) )
  {
    LOBYTE(v2) = v1 != 0;
    v2 = EnablePTPDevices(v2);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 52), 0LL);
    UserSetLastError(5LL, v49);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v60);
  UserSessionSwitchLeaveCrit(v51, v50, v52, v53);
  return v2;
}
