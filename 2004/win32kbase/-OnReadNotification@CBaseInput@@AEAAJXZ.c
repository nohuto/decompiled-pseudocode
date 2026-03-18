/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A0FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0005EE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01A0DE0 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z @ 0x1C01A15A4 (-OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  CBaseInput *v1; // rsi
  __int64 v2; // rcx
  char v3; // r15
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // ebx
  __int64 v61; // r8
  __int64 v62; // r9
  int v64; // [rsp+30h] [rbp-D0h] BYREF
  int v65; // [rsp+34h] [rbp-CCh] BYREF
  int v66; // [rsp+38h] [rbp-C8h] BYREF
  CBaseInput *v67; // [rsp+40h] [rbp-C0h]
  __int64 *v68; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v70; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+70h] [rbp-90h] BYREF
  int *v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+A0h] [rbp-60h] BYREF
  int *v76; // [rsp+C0h] [rbp-40h]
  __int64 v77; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+D0h] [rbp-30h] BYREF
  int *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]

  v1 = this;
  v67 = this;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v68, "OnReadNotification", 0LL);
  if ( *((int *)v1 + 8) >= 0 && (*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)v1 + 48LL))(v1) )
  {
    v3 = 1;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v70 = 1;
      v6 = PsGetCurrentThreadWin32Thread(v4);
      v69 = v6;
      if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v69 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v64 = v70;
          v74 = 4LL;
          v73 = &v64;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v72);
        }
      }
    }
    else
    {
      v69 = 0LL;
    }
    v7 = 0LL;
    while ( 1 )
    {
      v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v8 )
        v7 = *v8;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v7 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v69 )
      {
        v13 = *(unsigned int *)(v69 + 24);
        if ( *(_DWORD *)(v69 + 48) || (int)v13 > 0 )
        {
          *(_DWORD *)(v69 + 44) = 1;
          *(GUID *)(v69 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v65 = v70;
              v77 = 4LL;
              v76 = &v65;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &ActivityId,
                0LL,
                3u,
                &v75);
              v14 = dword_1C0246A70;
            }
            if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v66 = v70;
              v80 = 4LL;
              v79 = &v66;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &ActivityId,
                0LL,
                3u,
                &v78);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v13);
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v15)
      || (v18 = PsGetCurrentProcess(v17, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(v18),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v23 = 0LL;
      if ( !IsThreadCrossSessionAttached(v17) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v23 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
      if ( v23
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v23 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v23 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v29);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v43 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v43[2];
            v44 = *v43;
            v43[2] = 0LL;
            if ( !*(_DWORD *)(v44 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            v47 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
            if ( v47 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48, v49);
            ExReleaseResourceAndLeaveCriticalRegion(*v47);
            HMUnlockObject(*v43);
            tagDomLock::LockExclusive(v47);
            v43 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v1 = v67;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v3 = 0;
  }
  if ( *((int *)v1 + 8) >= 0 )
  {
    InputTraceLogging::Win32k::OnReadNotification(*((void **)v1 + 6), *((_DWORD *)v1 + 10));
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 56LL))(
      v1,
      *((_QWORD *)v1 + 8),
      *((unsigned int *)v1 + 6),
      *((unsigned int *)v1 + 10),
      *((_QWORD *)v1 + 6));
    GetDomainLockRef(13LL, v50, v51, v52);
    if ( dword_1C024D1C0 == 1 )
      CBaseInput::OnInputSuppressed((void **)v1, v53, v54, v55);
    else
      (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 64LL))(
        v1,
        *((_QWORD *)v1 + 8),
        *((unsigned int *)v1 + 6),
        *((unsigned int *)v1 + 10),
        *((_QWORD *)v1 + 6));
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v1 + 72LL))(
      v1,
      *((_QWORD *)v1 + 8),
      *((unsigned int *)v1 + 6),
      *((unsigned int *)v1 + 10),
      *((_QWORD *)v1 + 6));
    v56 = *((_QWORD *)v1 + 8);
    v57 = *((_QWORD *)v1 + 9);
    if ( v56 != v57 )
    {
      if ( (CBaseInput *)v57 != (CBaseInput *)((char *)v1 + 80) )
      {
        Win32FreePool(v57);
        v56 = *((_QWORD *)v1 + 8);
      }
      *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 10);
      *((_QWORD *)v1 + 9) = v56;
    }
  }
  v60 = CBaseInput::Read(v1);
  if ( v3 )
    UserSessionSwitchLeaveCrit(v59, v58, v61, v62);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v68);
  return v60;
}
