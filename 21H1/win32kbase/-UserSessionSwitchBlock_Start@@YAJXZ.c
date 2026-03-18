/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00520FC
 * Callers:
 *     PowerOnMonitor @ 0x1C0053850 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerStateCallout @ 0x1C005C81C (UserPowerStateCallout.c)
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 *     PowerOffMonitor @ 0x1C00C98F0 (PowerOffMonitor.c)
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
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rcx
  int v2; // r14d
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
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
  struct tagKERNELHANDLETABLEENTRY *v24; // rsi
  unsigned int v25; // ebx
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
  int v38; // [rsp+38h] [rbp-89h] BYREF
  int v39; // [rsp+3Ch] [rbp-85h] BYREF
  int v40; // [rsp+40h] [rbp-81h] BYREF
  int v41; // [rsp+44h] [rbp-7Dh]
  __int64 v42; // [rsp+48h] [rbp-79h]
  unsigned __int8 v43; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+68h] [rbp-59h] BYREF
  int *v46; // [rsp+88h] [rbp-39h]
  __int64 v47; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+98h] [rbp-29h] BYREF
  int *v49; // [rsp+B8h] [rbp-9h]
  __int64 v50; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+C8h] [rbp+7h] BYREF
  int *v52; // [rsp+E8h] [rbp+27h]
  __int64 v53; // [rsp+F0h] [rbp+2Fh]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v2 = IsResourceAcquiredExclusiveLite;
  v41 = IsResourceAcquiredExclusiveLite;
  if ( IsResourceAcquiredExclusiveLite )
  {
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v43 = 1;
      v30 = PsGetCurrentThreadWin32Thread(v3);
      v42 = v30;
      if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v31, v32) )
          {
            v38 = v43;
            v47 = 4LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
    {
      *(_DWORD *)(v42 + 44) = 1;
      *(GUID *)(v42 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v12) )
        {
          v39 = v43;
          v50 = 4LL;
          v49 = &v39;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &ActivityId,
            0LL,
            3u,
            &v48);
          v33 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v33 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v33, v34) )
        {
          v40 = v43;
          v53 = 4LL;
          v52 = &v40;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &ActivityId,
            0LL,
            3u,
            &v51);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v27 = PsGetCurrentProcess(v14, v13),
          ProcessSessionId = PsGetProcessSessionIdEx(v27),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v16 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v16 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
      if ( v16 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v16 + 480) & 0x1000000) != 0 )
          {
            v1 = *(unsigned int *)(v16 + 1216);
            if ( (v1 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v24 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v24 + 2);
                  v35 = *(_QWORD *)v24;
                  *((_QWORD *)v24 + 2) = 0LL;
                  if ( !*(_DWORD *)(v35 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
                  v37 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v37 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
                  ExReleaseResourceAndLeaveCriticalRegion(*v37);
                  HMUnlockObject(*(_QWORD *)v24);
                  tagDomLock::LockExclusive((tagDomLock *)v37);
                  v24 = gpducstulHead;
                }
                while ( gpducstulHead );
                v2 = v41;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
    goto LABEL_34;
  }
  if ( !gfSwitchInProgress && (unsigned int)RtlGetActiveConsoleId() == gSessionId && !gfSessionSwitchBlock )
  {
    ++gnPoSessionSwitchBlockCount;
    gfSessionSwitchBlock = 1;
LABEL_34:
    v25 = 0;
    goto LABEL_35;
  }
  v25 = -1073086428;
LABEL_35:
  if ( !v2 )
    UserSessionSwitchLeaveCrit(v1);
  return v25;
}
