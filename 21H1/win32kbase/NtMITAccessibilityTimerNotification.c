/*
 * XREFs of NtMITAccessibilityTimerNotification @ 0x1C0133FA0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1C01AB1D0 (-ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITAccessibilityTimerNotification(__int64 a1)
{
  unsigned int v1; // r14d
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
  CInputThread *v33; // rsi
  unsigned int CurrentThreadId; // eax
  int v35; // ebx
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v40; // [rsp+30h] [rbp-89h] BYREF
  int v41; // [rsp+34h] [rbp-85h] BYREF
  int v42; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-7Dh]
  __int64 v44; // [rsp+40h] [rbp-79h]
  unsigned __int8 v45; // [rsp+48h] [rbp-71h]
  GUID ActivityId; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+60h] [rbp-59h] BYREF
  int *v48; // [rsp+80h] [rbp-39h]
  int v49; // [rsp+88h] [rbp-31h]
  int v50; // [rsp+8Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+90h] [rbp-29h] BYREF
  int *v52; // [rsp+B0h] [rbp-9h]
  int v53; // [rsp+B8h] [rbp-1h]
  int v54; // [rsp+BCh] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C0h] [rbp+7h] BYREF
  int *v56; // [rsp+E0h] [rbp+27h]
  int v57; // [rsp+E8h] [rbp+2Fh]
  int v58; // [rsp+ECh] [rbp+33h]

  v1 = a1;
  v43 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v45 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v44 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v50 = 0;
        v40 = v45;
        v49 = 4;
        v48 = &v40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v47);
      }
    }
  }
  else
  {
    v44 = 0LL;
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
    if ( v44 )
    {
      v11 = *(unsigned int *)(v44 + 24);
      if ( *(_DWORD *)(v44 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v44 + 44) = 1;
        *(GUID *)(v44 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v54 = 0;
            v41 = v45;
            v53 = 4;
            v52 = &v41;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v51);
            v12 = dword_1C024C960;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v58 = 0;
            v42 = v45;
            v57 = 4;
            v56 = &v42;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v55);
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
        v1 = v43;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v33 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v33, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v35 = *((_DWORD *)v33 + 10);
  v36 = CurrentThreadId;
  ExReleasePushLockSharedEx(v33, 0LL);
  KeLeaveCriticalRegion();
  if ( v36 == v35 )
    CAccessibilityTimer::ExecuteTimer(v1);
  else
    UserSetLastError(5LL, v37);
  UserSessionSwitchLeaveCrit(v38);
  return 0LL;
}
