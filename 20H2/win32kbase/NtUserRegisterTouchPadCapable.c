/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C00B4030
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
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
  __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v43; // rax
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // [rsp+38h] [rbp-79h] BYREF
  int v52; // [rsp+3Ch] [rbp-75h] BYREF
  int v53; // [rsp+40h] [rbp-71h] BYREF
  int v54; // [rsp+44h] [rbp-6Dh]
  _BYTE v55[8]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v56; // [rsp+50h] [rbp-61h]
  unsigned __int8 v57; // [rsp+58h] [rbp-59h]
  GUID ActivityId; // [rsp+5Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+70h] [rbp-41h] BYREF
  int *v60; // [rsp+90h] [rbp-21h]
  int v61; // [rsp+98h] [rbp-19h]
  int v62; // [rsp+9Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+A0h] [rbp-11h] BYREF
  int *v64; // [rsp+C0h] [rbp+Fh]
  int v65; // [rsp+C8h] [rbp+17h]
  int v66; // [rsp+CCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+D0h] [rbp+1Fh] BYREF
  int *v68; // [rsp+F0h] [rbp+3Fh]
  int v69; // [rsp+F8h] [rbp+47h]
  int v70; // [rsp+FCh] [rbp+4Bh]

  v1 = a1;
  v54 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v57 = 1;
    v43 = PsGetCurrentThreadWin32Thread(v2);
    v56 = v43;
    if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v62 = 0;
        v51 = v57;
        v61 = 4;
        v60 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v59);
      }
    }
  }
  else
  {
    v56 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
  {
    *(_DWORD *)(v56 + 44) = 1;
    *(GUID *)(v56 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v66 = 0;
        v52 = v57;
        v65 = 4;
        v64 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v63);
        v44 = dword_1C0244A70;
      }
      if ( v44 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v70 = 0;
        v53 = v57;
        v69 = 4;
        v68 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v67);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v40 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v40),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( v14
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v14 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v14 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v18, v19, v20);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24, v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v34 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
          v45 = *v34;
          v34[2] = 0LL;
          if ( !*(_DWORD *)(v45 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
          v48 = (PERESOURCE *)GetDomainLockRef(12LL, v30, v32, v33);
          if ( v48 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
          ExReleaseResourceAndLeaveCriticalRegion(*v48);
          HMUnlockObject(*v34);
          tagDomLock::LockExclusive(v48);
          v34 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v54;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v55);
  *((_DWORD *)gptiCurrent + 308) = *((_DWORD *)gptiCurrent + 308) & 0xFFFEFFFF | (v1 != 0 ? 0x10000 : 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v55);
  UserSessionSwitchLeaveCrit(v36, v35, v37, v38);
  return 1LL;
}
