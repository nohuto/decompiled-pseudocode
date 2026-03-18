/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C0053BB0
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
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(int a1)
{
  int v1; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct tagKERNELHANDLETABLEENTRY *v31; // rsi
  __int64 v32; // rcx
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // [rsp+38h] [rbp-79h] BYREF
  int v49; // [rsp+3Ch] [rbp-75h] BYREF
  int v50; // [rsp+40h] [rbp-71h] BYREF
  int v51; // [rsp+44h] [rbp-6Dh]
  _BYTE v52[8]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v53; // [rsp+50h] [rbp-61h]
  unsigned __int8 v54; // [rsp+58h] [rbp-59h]
  GUID ActivityId; // [rsp+5Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+70h] [rbp-41h] BYREF
  int *v57; // [rsp+90h] [rbp-21h]
  int v58; // [rsp+98h] [rbp-19h]
  int v59; // [rsp+9Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+A0h] [rbp-11h] BYREF
  int *v61; // [rsp+C0h] [rbp+Fh]
  int v62; // [rsp+C8h] [rbp+17h]
  int v63; // [rsp+CCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+D0h] [rbp+1Fh] BYREF
  int *v65; // [rsp+F0h] [rbp+3Fh]
  int v66; // [rsp+F8h] [rbp+47h]
  int v67; // [rsp+FCh] [rbp+4Bh]

  v1 = a1;
  v51 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v54 = 1;
    v37 = PsGetCurrentThreadWin32Thread();
    v53 = v37;
    if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v53 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v38, v39) )
        {
          v59 = 0;
          v48 = v54;
          v58 = 4;
          v57 = &v48;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v56);
        }
      }
    }
  }
  else
  {
    v53 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v53 && (*(_DWORD *)(v53 + 48) || *(int *)(v53 + 24) > 0) )
  {
    *(_DWORD *)(v53 + 44) = 1;
    *(GUID *)(v53 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v10) )
      {
        v63 = 0;
        v49 = v54;
        v62 = 4;
        v61 = &v49;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v60);
        v40 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v40 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v40, v41) )
      {
        v67 = 0;
        v50 = v54;
        v66 = 4;
        v65 = &v50;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v64);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v34 = PsGetCurrentProcess(v12, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(v34),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( v14
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v14 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v14 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21, v22);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v31 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v31 + 2);
          v42 = *(_QWORD *)v31;
          *((_QWORD *)v31 + 2) = 0LL;
          if ( !*(_DWORD *)(v42 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
          v45 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v45 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
          ExReleaseResourceAndLeaveCriticalRegion(*v45);
          HMUnlockObject(*(_QWORD *)v31);
          tagDomLock::LockExclusive((tagDomLock *)v45);
          v31 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v51;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v52);
  *((_DWORD *)gptiCurrent + 306) = *((_DWORD *)gptiCurrent + 306) & 0xFFFEFFFF | (v1 != 0 ? 0x10000 : 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v52);
  UserSessionSwitchLeaveCrit(v32);
  return 1LL;
}
