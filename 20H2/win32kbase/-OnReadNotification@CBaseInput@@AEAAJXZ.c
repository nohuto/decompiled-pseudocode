/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C019EC30
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0005EE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C019EA40 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z @ 0x1C019F204 (-OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
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
  __int64 *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // ebx
  __int64 v62; // r8
  __int64 v63; // r9
  int v65; // [rsp+30h] [rbp-D0h] BYREF
  int v66; // [rsp+34h] [rbp-CCh] BYREF
  int v67; // [rsp+38h] [rbp-C8h] BYREF
  CBaseInput *v68; // [rsp+40h] [rbp-C0h]
  __int64 *v69; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v71; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+70h] [rbp-90h] BYREF
  int *v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+A0h] [rbp-60h] BYREF
  int *v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+D0h] [rbp-30h] BYREF
  int *v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]

  v4 = this;
  v68 = this;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v69, "OnReadNotification", 0LL, a4);
  if ( *((int *)v4 + 8) >= 0 && (*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 48LL))(v4) )
  {
    v6 = 1;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v71 = 1;
      v9 = PsGetCurrentThreadWin32Thread(v7);
      v70 = v9;
      if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v70 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v65 = v71;
          v75 = 4LL;
          v74 = &v65;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId,
            0LL,
            3u,
            &v73);
        }
      }
    }
    else
    {
      v70 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v70 && (*(_DWORD *)(v70 + 48) || *(int *)(v70 + 24) > 0) )
    {
      *(_DWORD *)(v70 + 44) = 1;
      *(GUID *)(v70 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v66 = v71;
          v78 = 4LL;
          v77 = &v66;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId,
            0LL,
            3u,
            &v76);
          v17 = dword_1C0244A70;
        }
        if ( v17 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v67 = v71;
          v81 = 4LL;
          v80 = &v67;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId,
            0LL,
            3u,
            &v79);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v20 = PsGetCurrentProcess(v19, v18),
          ProcessSessionId = PsGetProcessSessionIdEx(v20),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v24 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v24 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
      if ( v24
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v24 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v24 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v28, v29, v30);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34, v35);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v44 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v44[2];
            v45 = *v44;
            v44[2] = 0LL;
            if ( !*(_DWORD *)(v45 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
            v48 = (PERESOURCE *)GetDomainLockRef(12LL, v40, v42, v43);
            if ( v48 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
            ExReleaseResourceAndLeaveCriticalRegion(*v48);
            HMUnlockObject(*v44);
            tagDomLock::LockExclusive(v48);
            v44 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v68;
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
    GetDomainLockRef(13LL, v51, v52, v53);
    if ( dword_1C024B1D0 == 1 )
      CBaseInput::OnInputSuppressed((void **)v4, v54, v55, v56);
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
    v57 = *((_QWORD *)v4 + 8);
    v58 = *((_QWORD *)v4 + 9);
    if ( v57 != v58 )
    {
      if ( (CBaseInput *)v58 != (CBaseInput *)((char *)v4 + 80) )
      {
        Win32FreePool(v58);
        v57 = *((_QWORD *)v4 + 8);
      }
      *((_DWORD *)v4 + 14) = *((_DWORD *)v4 + 10);
      *((_QWORD *)v4 + 9) = v57;
    }
  }
  v61 = CBaseInput::Read(v4);
  if ( v6 )
    UserSessionSwitchLeaveCrit(v60, v59, v62, v63);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v69);
  return v61;
}
