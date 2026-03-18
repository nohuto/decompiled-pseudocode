/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6D30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0036EE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01A6B40 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z @ 0x1C01A7304 (-OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  CBaseInput *v4; // rsi
  __int64 v5; // rcx
  char v6; // r15
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 v23; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // ebx
  int v44; // [rsp+30h] [rbp-D0h] BYREF
  int v45; // [rsp+34h] [rbp-CCh] BYREF
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  CBaseInput *v47; // [rsp+40h] [rbp-C0h]
  __int64 *v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v50; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+70h] [rbp-90h] BYREF
  int *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+A0h] [rbp-60h] BYREF
  int *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+D0h] [rbp-30h] BYREF
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]

  v4 = this;
  v47 = this;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v48, "OnReadNotification", 0LL, a4);
  if ( *((int *)v4 + 8) >= 0 && (*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 48LL))(v4) )
  {
    v6 = 1;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v50 = 1;
      v9 = PsGetCurrentThreadWin32Thread(v7);
      v49 = v9;
      if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v49 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v44 = v50;
          v54 = 4LL;
          v53 = &v44;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v52);
        }
      }
    }
    else
    {
      v49 = 0LL;
    }
    v10 = 0LL;
    while ( 1 )
    {
      v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v11 )
        v10 = *v11;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v10 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v49 )
      {
        v16 = *(unsigned int *)(v49 + 24);
        if ( *(_DWORD *)(v49 + 48) || (int)v16 > 0 )
        {
          *(_DWORD *)(v49 + 44) = 1;
          *(GUID *)(v49 + 28) = ActivityId;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v45 = v50;
              v57 = 4LL;
              v56 = &v45;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &ActivityId,
                0LL,
                3u,
                &v55);
              v17 = dword_1C024C960;
            }
            if ( v17 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v46 = v50;
              v60 = 4LL;
              v59 = &v46;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &ActivityId,
                0LL,
                3u,
                &v58);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v16);
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v18)
      || (v21 = PsGetCurrentProcess(v20, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(v21),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v23),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v26 = 0LL;
      if ( !IsThreadCrossSessionAttached(v20) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v26 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
      if ( v26
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v26 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v26 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v34 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
            v35 = *v34;
            v34[2] = 0LL;
            if ( !*(_DWORD *)(v35 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
            v37 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v37 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
            ExReleaseResourceAndLeaveCriticalRegion(*v37);
            HMUnlockObject(*v34);
            tagDomLock::LockExclusive(v37);
            v34 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v47;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v6 = 0;
  }
  if ( *((int *)v4 + 8) >= 0 )
  {
    InputTraceLogging::Win32k::OnReadNotification(*((void **)v4 + 6), *((_DWORD *)v4 + 10));
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 56LL))(
      v4,
      *((_QWORD *)v4 + 8),
      *((unsigned int *)v4 + 6),
      *((unsigned int *)v4 + 10),
      *((_QWORD *)v4 + 6));
    GetDomainLockRef(13LL);
    if ( dword_1C02531D0 == 1 )
      CBaseInput::OnInputSuppressed((void **)v4);
    else
      (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 64LL))(
        v4,
        *((_QWORD *)v4 + 8),
        *((unsigned int *)v4 + 6),
        *((unsigned int *)v4 + 10),
        *((_QWORD *)v4 + 6));
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
      v4,
      *((_QWORD *)v4 + 8),
      *((unsigned int *)v4 + 6),
      *((unsigned int *)v4 + 10),
      *((_QWORD *)v4 + 6));
    v39 = *((_QWORD *)v4 + 8);
    v40 = *((_QWORD *)v4 + 9);
    if ( v39 != v40 )
    {
      if ( (CBaseInput *)v40 != (CBaseInput *)((char *)v4 + 80) )
      {
        Win32FreePool(v40, v39, v38);
        v39 = *((_QWORD *)v4 + 8);
      }
      *((_DWORD *)v4 + 14) = *((_DWORD *)v4 + 10);
      *((_QWORD *)v4 + 9) = v39;
    }
  }
  v42 = CBaseInput::Read(v4);
  if ( v6 )
    UserSessionSwitchLeaveCrit(v41);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v48);
  return v42;
}
