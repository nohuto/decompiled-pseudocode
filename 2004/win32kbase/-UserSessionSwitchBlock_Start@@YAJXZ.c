/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00630F0
 * Callers:
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerStateCallout @ 0x1C00651B4 (UserPowerStateCallout.c)
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
 *     PowerOffMonitor @ 0x1C00C9F70 (PowerOffMonitor.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r14d
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagKERNELHANDLETABLEENTRY *v36; // rsi
  unsigned int v37; // ebx
  __int64 v39; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // [rsp+38h] [rbp-89h] BYREF
  int v54; // [rsp+3Ch] [rbp-85h] BYREF
  int v55; // [rsp+40h] [rbp-81h] BYREF
  int v56; // [rsp+44h] [rbp-7Dh]
  __int64 v57; // [rsp+48h] [rbp-79h]
  unsigned __int8 v58; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+68h] [rbp-59h] BYREF
  int *v61; // [rsp+88h] [rbp-39h]
  __int64 v62; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+98h] [rbp-29h] BYREF
  int *v64; // [rsp+B8h] [rbp-9h]
  __int64 v65; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+C8h] [rbp+7h] BYREF
  int *v67; // [rsp+E8h] [rbp+27h]
  __int64 v68; // [rsp+F0h] [rbp+2Fh]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v5 = IsResourceAcquiredExclusiveLite;
  v56 = IsResourceAcquiredExclusiveLite;
  if ( IsResourceAcquiredExclusiveLite )
  {
    if ( gfSwitchInProgress )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3, v4);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v58 = 1;
      v42 = PsGetCurrentThreadWin32Thread(v6);
      v57 = v42;
      if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v43, v44) )
          {
            v53 = v58;
            v62 = 4LL;
            v61 = &v53;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId,
              0LL,
              3u,
              &v60);
          }
        }
      }
    }
    else
    {
      v57 = 0LL;
    }
    v8 = 0LL;
    while ( 1 )
    {
      v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v9 )
        v8 = *v9;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v8 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v57 && (*(_DWORD *)(v57 + 48) || *(int *)(v57 + 24) > 0) )
    {
      *(_DWORD *)(v57 + 44) = 1;
      *(GUID *)(v57 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v15) )
        {
          v54 = v58;
          v65 = 4LL;
          v64 = &v54;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &ActivityId,
            0LL,
            3u,
            &v63);
          v45 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v45 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v45, v46) )
        {
          v55 = v58;
          v68 = 4LL;
          v67 = &v55;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &ActivityId,
            0LL,
            3u,
            &v66);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v39 = PsGetCurrentProcess(v17, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(v39),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v19 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v19 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      if ( v19 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v19 + 480) & 0x1000000) != 0 )
          {
            v2 = *(unsigned int *)(v19 + 1224);
            if ( (v2 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v36 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v36 + 2);
                  v47 = *(_QWORD *)v36;
                  *((_QWORD *)v36 + 2) = 0LL;
                  if ( !*(_DWORD *)(v47 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
                  v50 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v50 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
                  ExReleaseResourceAndLeaveCriticalRegion(*v50);
                  HMUnlockObject(*(_QWORD *)v36);
                  tagDomLock::LockExclusive((tagDomLock *)v50);
                  v36 = gpducstulHead;
                }
                while ( gpducstulHead );
                v5 = v56;
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
    v37 = 0;
    goto LABEL_35;
  }
  v37 = -1073086428;
LABEL_35:
  if ( !v5 )
    UserSessionSwitchLeaveCrit(v2);
  return v37;
}
