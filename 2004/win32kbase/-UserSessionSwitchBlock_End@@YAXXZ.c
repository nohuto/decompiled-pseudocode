/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00633E8
 * Callers:
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerStateCallout @ 0x1C00651B4 (UserPowerStateCallout.c)
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

void UserSessionSwitchBlock_End(void)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct tagKERNELHANDLETABLEENTRY *v33; // rsi
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // [rsp+38h] [rbp-79h] BYREF
  int v49; // [rsp+3Ch] [rbp-75h] BYREF
  int v50; // [rsp+40h] [rbp-71h] BYREF
  int v51; // [rsp+44h] [rbp-6Dh]
  __int64 v52; // [rsp+48h] [rbp-69h]
  unsigned __int8 v53; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+68h] [rbp-49h] BYREF
  int *v56; // [rsp+88h] [rbp-29h]
  int v57; // [rsp+90h] [rbp-21h]
  int v58; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+98h] [rbp-19h] BYREF
  int *v60; // [rsp+B8h] [rbp+7h]
  int v61; // [rsp+C0h] [rbp+Fh]
  int v62; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+C8h] [rbp+17h] BYREF
  int *v64; // [rsp+E8h] [rbp+37h]
  int v65; // [rsp+F0h] [rbp+3Fh]
  int v66; // [rsp+F4h] [rbp+43h]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v2 = IsResourceAcquiredExclusiveLite;
  v51 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v53 = 1;
      v37 = PsGetCurrentThreadWin32Thread(v3);
      v52 = v37;
      if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v38, v39) )
          {
            v58 = 0;
            v48 = v53;
            v57 = 4;
            v56 = &v48;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId,
              0LL,
              3u,
              &v55);
          }
        }
      }
    }
    else
    {
      v52 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v52 && (*(_DWORD *)(v52 + 48) || *(int *)(v52 + 24) > 0) )
    {
      *(_DWORD *)(v52 + 44) = 1;
      *(GUID *)(v52 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v12) )
        {
          v62 = 0;
          v49 = v53;
          v61 = 4;
          v60 = &v49;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &ActivityId,
            0LL,
            3u,
            &v59);
          v40 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v40 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v40, v41) )
        {
          v66 = 0;
          v50 = v53;
          v65 = 4;
          v64 = &v50;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &ActivityId,
            0LL,
            3u,
            &v63);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v34 = PsGetCurrentProcess(v14, v13),
          ProcessSessionId = PsGetProcessSessionIdEx(v34),
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
            v1 = *(unsigned int *)(v16 + 1224);
            if ( (v1 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23, v24);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v33 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v33 + 2);
                  v42 = *(_QWORD *)v33;
                  *((_QWORD *)v33 + 2) = 0LL;
                  if ( !*(_DWORD *)(v42 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
                  v45 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v45 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
                  ExReleaseResourceAndLeaveCriticalRegion(*v45);
                  HMUnlockObject(*(_QWORD *)v33);
                  tagDomLock::LockExclusive((tagDomLock *)v45);
                  v33 = gpducstulHead;
                }
                while ( gpducstulHead );
                v2 = v51;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
  }
  if ( !--gnPoSessionSwitchBlockCount )
    gfSessionSwitchBlock = 0;
  if ( !v2 )
    UserSessionSwitchLeaveCrit(v1);
}
