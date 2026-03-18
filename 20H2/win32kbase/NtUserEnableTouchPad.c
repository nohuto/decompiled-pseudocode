/*
 * XREFs of NtUserEnableTouchPad @ 0x1C01306E0
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
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwTraceUIPISystemError @ 0x1C00774A0 (EtwTraceUIPISystemError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     EnablePTPDevices @ 0x1C0120780 (EnablePTPDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v53; // [rsp+38h] [rbp-D0h] BYREF
  int v54; // [rsp+3Ch] [rbp-CCh] BYREF
  int v55; // [rsp+40h] [rbp-C8h] BYREF
  int v56; // [rsp+44h] [rbp-C4h]
  int v57[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+78h] [rbp-90h] BYREF
  int *v63; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+A8h] [rbp-60h] BYREF
  int *v66; // [rsp+C8h] [rbp-40h]
  __int64 v67; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+D8h] [rbp-30h] BYREF
  int *v69; // [rsp+F8h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp-8h]

  v1 = a1;
  v56 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v59 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v53 = ActivityId_4;
        v64 = 4LL;
        v63 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId_8,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v59 && (*(_DWORD *)(v59 + 48) || *(int *)(v59 + 24) > 0) )
  {
    *(_DWORD *)(v59 + 44) = 1;
    *(GUID *)(v59 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v54 = ActivityId_4;
        v67 = 4LL;
        v66 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId_8,
          0LL,
          3u,
          &v65);
        v13 = dword_1C0244A70;
      }
      if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v55 = ActivityId_4;
        v70 = 4LL;
        v69 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId_8,
          0LL,
          3u,
          &v68);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( v20
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v20 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v20 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v24, v25, v26);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30, v31);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v40 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v40[2];
          v41 = *v40;
          v40[2] = 0LL;
          if ( !*(_DWORD *)(v41 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
          v44 = (PERESOURCE *)GetDomainLockRef(12LL, v36, v38, v39);
          if ( v44 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
          ExReleaseResourceAndLeaveCriticalRegion(*v44);
          HMUnlockObject(*v40);
          tagDomLock::LockExclusive(v44);
          v40 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v56;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v58);
  v57[1] = -1;
  v57[0] = 0x2000;
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v57, 0) )
  {
    LOBYTE(v2) = v1 != 0;
    v2 = EnablePTPDevices(v2);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    UserSetLastError(5LL, v47);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v58);
  UserSessionSwitchLeaveCrit(v49, v48, v50, v51);
  return v2;
}
