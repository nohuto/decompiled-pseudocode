/*
 * XREFs of ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01AC670
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01A8D80 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C01AC564 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaTimerNotification(CHidInput *this)
{
  CHidInput *v1; // r14
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
  struct DEVICEINFO *v33; // rax
  CHidInput *v34; // rcx
  __int64 v35; // rdx
  CPTPProcessor *v36; // rcx
  int v38; // [rsp+30h] [rbp-89h] BYREF
  int v39; // [rsp+34h] [rbp-85h] BYREF
  int v40; // [rsp+38h] [rbp-81h] BYREF
  CHidInput *v41; // [rsp+40h] [rbp-79h]
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
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v42 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
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
  else
  {
    v42 = 0LL;
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
    if ( v42 )
    {
      v11 = *(unsigned int *)(v42 + 24);
      if ( *(_DWORD *)(v42 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v42 + 44) = 1;
        *(GUID *)(v42 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
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
            v12 = dword_1C024C960;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
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
        v1 = v41;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v33 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)v1 + 161), 19);
  if ( CHidInput::IsTouchpadDevice(v34, v33) )
  {
    v36 = *(CPTPProcessor **)(v35 + 480);
    if ( v36 )
      v36 = (CPTPProcessor *)*((_QWORD *)v36 + 125);
    if ( v36 )
      CPTPProcessor::HandleInertiaTimer(v36);
  }
  UserSessionSwitchLeaveCrit((__int64)v36);
  return 0LL;
}
