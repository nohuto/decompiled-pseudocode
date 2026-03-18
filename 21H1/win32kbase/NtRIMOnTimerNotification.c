/*
 * XREFs of NtRIMOnTimerNotification @ 0x1C015CE90
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
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009E9AC (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     RIMOnTimerNotification @ 0x1C0160C20 (RIMOnTimerNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMOnTimerNotification(__int64 a1, unsigned int a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  unsigned int v37; // ebx
  __int64 v38; // rcx
  int v39; // [rsp+38h] [rbp-89h] BYREF
  int v40; // [rsp+3Ch] [rbp-85h] BYREF
  int v41; // [rsp+40h] [rbp-81h] BYREF
  __int64 v42; // [rsp+48h] [rbp-79h]
  __int64 v43; // [rsp+50h] [rbp-71h]
  unsigned __int8 v44; // [rsp+58h] [rbp-69h]
  GUID ActivityId; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+70h] [rbp-51h] BYREF
  int *v47; // [rsp+90h] [rbp-31h]
  int v48; // [rsp+98h] [rbp-29h]
  int v49; // [rsp+9Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-21h] BYREF
  int *v51; // [rsp+C0h] [rbp-1h]
  int v52; // [rsp+C8h] [rbp+7h]
  int v53; // [rsp+CCh] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+D0h] [rbp+Fh] BYREF
  int *v55; // [rsp+F0h] [rbp+2Fh]
  int v56; // [rsp+F8h] [rbp+37h]
  int v57; // [rsp+FCh] [rbp+3Bh]

  v42 = a1;
  v3 = a1;
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    v8 = PsGetCurrentThreadWin32Thread(v6);
    v43 = v8;
    if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v49 = 0;
        v39 = v44;
        v48 = 4;
        v47 = &v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v46);
      }
    }
  }
  else
  {
    v43 = 0LL;
  }
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v9 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v43 )
    {
      v15 = *(unsigned int *)(v43 + 24);
      if ( *(_DWORD *)(v43 + 48) || (int)v15 > 0 )
      {
        *(_DWORD *)(v43 + 44) = 1;
        *(GUID *)(v43 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v53 = 0;
            v40 = v44;
            v52 = 4;
            v51 = &v40;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v50);
            v16 = dword_1C024C960;
          }
          if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v57 = 0;
            v41 = v44;
            v56 = 4;
            v55 = &v41;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v54);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v15);
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (v20 = PsGetCurrentProcess(v19, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(v20),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v25 = 0LL;
    if ( !IsThreadCrossSessionAttached(v19) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v25 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
    if ( v25
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v25 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v25 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v33 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v33[2];
          v34 = *v33;
          v33[2] = 0LL;
          if ( !*(_DWORD *)(v34 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          v36 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v36 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
          ExReleaseResourceAndLeaveCriticalRegion(*v36);
          HMUnlockObject(*v33);
          tagDomLock::LockExclusive(v36);
          v33 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = v42;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v37 = RIMOnTimerNotification(v3, a2);
  UserSessionSwitchLeaveCrit(v38);
  return v37;
}
