/*
 * XREFs of NtRIMOnPnpNotification @ 0x1C009EA60
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
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMOnPnpNotification(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rsi
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 v28; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
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
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v42 = 1;
    v32 = PsGetCurrentThreadWin32Thread(v3);
    v41 = v32;
    if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
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
            v33 = dword_1C024C960;
          }
          if ( v33 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
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
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (v28 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v28),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !IsThreadCrossSessionAttached(v14) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v24 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v24[2];
          v34 = *v24;
          v24[2] = 0LL;
          if ( !*(_DWORD *)(v34 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
          v36 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v36 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
          ExReleaseResourceAndLeaveCriticalRegion(*v36);
          HMUnlockObject(*v24);
          tagDomLock::LockExclusive(v36);
          v24 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v40;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v25 = RIMOnPnpNotification(v1);
  UserSessionSwitchLeaveCrit(v26);
  return v25;
}
