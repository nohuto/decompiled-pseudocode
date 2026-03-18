/*
 * XREFs of UserProcessTimerDelayCallout @ 0x1C01294E4
 * Callers:
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessTimerDelayCallout(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  PERESOURCE *v32; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  int v37; // [rsp+30h] [rbp-89h] BYREF
  int v38; // [rsp+34h] [rbp-85h] BYREF
  int v39; // [rsp+38h] [rbp-81h] BYREF
  __int64 v40; // [rsp+40h] [rbp-79h]
  __int64 v41; // [rsp+48h] [rbp-71h]
  unsigned __int8 v42; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+68h] [rbp-51h] BYREF
  int *v45; // [rsp+88h] [rbp-31h]
  int v46; // [rsp+90h] [rbp-29h]
  int v47; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+98h] [rbp-21h] BYREF
  int *v49; // [rsp+B8h] [rbp-1h]
  int v50; // [rsp+C0h] [rbp+7h]
  int v51; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+C8h] [rbp+Fh] BYREF
  int *v53; // [rsp+E8h] [rbp+2Fh]
  int v54; // [rsp+F0h] [rbp+37h]
  int v55; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v40 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v41 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v47 = 0;
        v37 = v42;
        v46 = 4;
        v45 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v44);
      }
    }
  }
  else
  {
    v41 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v41 )
    {
      v11 = *(unsigned int *)(v41 + 24);
      if ( *(_DWORD *)(v41 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v41 + 44) = 1;
        *(GUID *)(v41 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v51 = 0;
            v38 = v42;
            v50 = 4;
            v49 = &v38;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v48);
            v12 = dword_1C024C960;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v55 = 0;
            v39 = v42;
            v54 = 4;
            v53 = &v39;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v52);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v11);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached(v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v21 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v21 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v29 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v29[2];
          v30 = *v29;
          v29[2] = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
          v32 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v32 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
          ExReleaseResourceAndLeaveCriticalRegion(*v32);
          HMUnlockObject(*v29);
          tagDomLock::LockExclusive(v32);
          v29 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v40;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)v1);
  if ( ProcessWin32Process )
  {
    if ( qword_1C0257F38 )
      v35 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0257F38)(
              ProcessWin32Process,
              *(unsigned int *)(v1 + 8),
              *(unsigned int *)(v1 + 12));
    else
      v35 = -1073741637;
  }
  else
  {
    v35 = -1073741558;
  }
  UserSessionSwitchLeaveCrit(v34);
  return v35;
}
