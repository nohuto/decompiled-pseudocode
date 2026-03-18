/*
 * XREFs of NtRIMEnableMonitorMappingForDevice @ 0x1C015C7B0
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
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMEnableMonitorMappingForDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  unsigned int v39; // ebx
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-A9h] BYREF
  int v42; // [rsp+34h] [rbp-A5h] BYREF
  int v43; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v44; // [rsp+40h] [rbp-99h]
  __int64 v45; // [rsp+48h] [rbp-91h]
  unsigned __int8 v46; // [rsp+50h] [rbp-89h]
  GUID ActivityId; // [rsp+54h] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+68h] [rbp-71h] BYREF
  int *v49; // [rsp+88h] [rbp-51h]
  int v50; // [rsp+90h] [rbp-49h]
  int v51; // [rsp+94h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-41h] BYREF
  int *v53; // [rsp+B8h] [rbp-21h]
  int v54; // [rsp+C0h] [rbp-19h]
  int v55; // [rsp+C4h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C8h] [rbp-11h] BYREF
  int *v57; // [rsp+E8h] [rbp+Fh]
  int v58; // [rsp+F0h] [rbp+17h]
  int v59; // [rsp+F4h] [rbp+1Bh]

  v44 = a1;
  v5 = a1;
  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v46 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v45 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v51 = 0;
        v41 = v46;
        v50 = 4;
        v49 = &v41;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v48);
      }
    }
  }
  else
  {
    v45 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v45 )
    {
      v17 = *(unsigned int *)(v45 + 24);
      if ( *(_DWORD *)(v45 + 48) || (int)v17 > 0 )
      {
        *(_DWORD *)(v45 + 44) = 1;
        *(GUID *)(v45 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v55 = 0;
            v42 = v46;
            v54 = 4;
            v53 = &v42;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v52);
            v18 = dword_1C024C960;
          }
          if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v59 = 0;
            v43 = v46;
            v58 = 4;
            v57 = &v43;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v56);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v17);
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v22 = PsGetCurrentProcess(v21, v20),
        ProcessSessionId = PsGetProcessSessionIdEx(v22),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v27 = 0LL;
    if ( !IsThreadCrossSessionAttached(v21) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v27 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
    if ( v27
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v27 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v27 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v35 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v35[2];
          v36 = *v35;
          v35[2] = 0LL;
          if ( !*(_DWORD *)(v36 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
          v38 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v38 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
          ExReleaseResourceAndLeaveCriticalRegion(*v38);
          HMUnlockObject(*v35);
          tagDomLock::LockExclusive(v38);
          v35 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v5 = v44;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v39 = RIMEnableMonitorMappingForDevice(v5, a2, 1LL, a3);
  UserSessionSwitchLeaveCrit(v40);
  return v39;
}
