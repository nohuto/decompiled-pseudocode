/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C0045F70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct tagKERNELHANDLETABLEENTRY *v23; // rsi
  __int64 v24; // rcx
  __int64 v26; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  int v37; // [rsp+38h] [rbp-79h] BYREF
  int v38; // [rsp+3Ch] [rbp-75h] BYREF
  int v39; // [rsp+40h] [rbp-71h] BYREF
  int v40; // [rsp+44h] [rbp-6Dh]
  _BYTE v41[8]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v42; // [rsp+50h] [rbp-61h]
  unsigned __int8 v43; // [rsp+58h] [rbp-59h]
  GUID ActivityId; // [rsp+5Ch] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+70h] [rbp-41h] BYREF
  int *v46; // [rsp+90h] [rbp-21h]
  int v47; // [rsp+98h] [rbp-19h]
  int v48; // [rsp+9Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+A0h] [rbp-11h] BYREF
  int *v50; // [rsp+C0h] [rbp+Fh]
  int v51; // [rsp+C8h] [rbp+17h]
  int v52; // [rsp+CCh] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp+1Fh] BYREF
  int *v54; // [rsp+F0h] [rbp+3Fh]
  int v55; // [rsp+F8h] [rbp+47h]
  int v56; // [rsp+FCh] [rbp+4Bh]

  v1 = a1;
  v40 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v29 = PsGetCurrentThreadWin32Thread(v2);
    v42 = v29;
    if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v30, v31) )
        {
          v48 = 0;
          v37 = v43;
          v47 = 4;
          v46 = &v37;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v45);
        }
      }
    }
  }
  else
  {
    v42 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
  {
    *(_DWORD *)(v42 + 44) = 1;
    *(GUID *)(v42 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v11) )
      {
        v52 = 0;
        v38 = v43;
        v51 = 4;
        v50 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v49);
        v32 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v32 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v32, v33) )
      {
        v56 = 0;
        v39 = v43;
        v55 = 4;
        v54 = &v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v53);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v26 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v26),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( v15
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v15 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v15 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v23 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v23 + 2);
          v34 = *(_QWORD *)v23;
          *((_QWORD *)v23 + 2) = 0LL;
          if ( !*(_DWORD *)(v34 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
          v36 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v36 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
          ExReleaseResourceAndLeaveCriticalRegion(*v36);
          HMUnlockObject(*(_QWORD *)v23);
          tagDomLock::LockExclusive((tagDomLock *)v36);
          v23 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v40;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v41);
  *((_DWORD *)gptiCurrent + 304) = *((_DWORD *)gptiCurrent + 304) & 0xFFFEFFFF | (v1 != 0 ? 0x10000 : 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v41);
  UserSessionSwitchLeaveCrit(v24);
  return 1LL;
}
