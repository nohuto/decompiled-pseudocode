/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980
 * Callers:
 *     UserGetDesktopDC @ 0x1C0031E28 (UserGetDesktopDC.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C003FE40 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C0045B70 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Process @ 0x1C006A5C0 (UserDeleteW32Process.c)
 *     GreCreateCompatibleDC @ 0x1C008AFD0 (GreCreateCompatibleDC.c)
 *     UserDeleteW32Thread @ 0x1C0129350 (UserDeleteW32Thread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  ReEnterLeaveCrit *v1; // r14
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct tagKERNELHANDLETABLEENTRY *v25; // rsi
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  int v38; // [rsp+30h] [rbp-89h] BYREF
  int v39; // [rsp+34h] [rbp-85h] BYREF
  int v40; // [rsp+38h] [rbp-81h] BYREF
  ReEnterLeaveCrit *v41; // [rsp+40h] [rbp-79h]
  __int64 v42; // [rsp+48h] [rbp-71h]
  unsigned __int8 v43; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+68h] [rbp-51h] BYREF
  int *v46; // [rsp+88h] [rbp-31h]
  int v47; // [rsp+90h] [rbp-29h]
  int v48; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+98h] [rbp-21h] BYREF
  int *v50; // [rsp+B8h] [rbp-1h]
  int v51; // [rsp+C0h] [rbp+7h]
  int v52; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C8h] [rbp+Fh] BYREF
  int *v54; // [rsp+E8h] [rbp+2Fh]
  int v55; // [rsp+F0h] [rbp+37h]
  int v56; // [rsp+F4h] [rbp+3Bh]

  v1 = this;
  v41 = this;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)v1 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v43 = 1;
      v30 = PsGetCurrentThreadWin32Thread(v4);
      v42 = v30;
      if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v31, v32) )
          {
            v48 = 0;
            v38 = v43;
            v47 = 4;
            v46 = &v38;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
    {
      *(_DWORD *)(v42 + 44) = 1;
      *(GUID *)(v42 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v13) )
        {
          v52 = 0;
          v39 = v43;
          v51 = 4;
          v50 = &v39;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &ActivityId,
            0LL,
            3u,
            &v49);
          v33 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v33 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v33, v34) )
        {
          v56 = 0;
          v40 = v43;
          v55 = 4;
          v54 = &v40;
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
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v27 = PsGetCurrentProcess(v15, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(v27),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v17 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v17 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      if ( v17
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v17 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v25 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v25 + 2);
            v35 = *(_QWORD *)v25;
            *((_QWORD *)v25 + 2) = 0LL;
            if ( !*(_DWORD *)(v35 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
            v37 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v37 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
            ExReleaseResourceAndLeaveCriticalRegion(*v37);
            HMUnlockObject(*(_QWORD *)v25);
            tagDomLock::LockExclusive((tagDomLock *)v37);
            v25 = gpducstulHead;
          }
          while ( gpducstulHead );
          v1 = v41;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  return v1;
}
