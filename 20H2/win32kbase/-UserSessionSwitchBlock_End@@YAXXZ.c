/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00BB4C0
 * Callers:
 *     UserPowerStateCallout @ 0x1C0028BDC (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00C8920 (PowerOffMonitor.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void UserSessionSwitchBlock_End(void)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rsi
  __int64 v36; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v39; // rax
  unsigned int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // [rsp+38h] [rbp-79h] BYREF
  int v48; // [rsp+3Ch] [rbp-75h] BYREF
  int v49; // [rsp+40h] [rbp-71h] BYREF
  int v50; // [rsp+44h] [rbp-6Dh]
  __int64 v51; // [rsp+48h] [rbp-69h]
  unsigned __int8 v52; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+68h] [rbp-49h] BYREF
  int *v55; // [rsp+88h] [rbp-29h]
  int v56; // [rsp+90h] [rbp-21h]
  int v57; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+98h] [rbp-19h] BYREF
  int *v59; // [rsp+B8h] [rbp+7h]
  int v60; // [rsp+C0h] [rbp+Fh]
  int v61; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+C8h] [rbp+17h] BYREF
  int *v63; // [rsp+E8h] [rbp+37h]
  int v64; // [rsp+F0h] [rbp+3Fh]
  int v65; // [rsp+F4h] [rbp+43h]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v5 = IsResourceAcquiredExclusiveLite;
  v50 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v52 = 1;
      v39 = PsGetCurrentThreadWin32Thread(v6);
      v51 = v39;
      if ( v39 && (*(int *)(v39 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v57 = 0;
          v47 = v52;
          v56 = 4;
          v55 = &v47;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId,
            0LL,
            3u,
            &v54);
        }
      }
    }
    else
    {
      v51 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v51 && (*(_DWORD *)(v51 + 48) || *(int *)(v51 + 24) > 0) )
    {
      *(_DWORD *)(v51 + 44) = 1;
      *(GUID *)(v51 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v61 = 0;
          v48 = v52;
          v60 = 4;
          v59 = &v48;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId,
            0LL,
            3u,
            &v58);
          v40 = dword_1C0244A70;
        }
        if ( v40 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v65 = 0;
          v49 = v52;
          v64 = 4;
          v63 = &v49;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId,
            0LL,
            3u,
            &v62);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v36 = PsGetCurrentProcess(v16, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(v36),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v18 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v18 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
      if ( v18 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v18 + 488) & 0x1000000) != 0 )
          {
            v2 = *(unsigned int *)(v18 + 1232);
            if ( (v2 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v1, v3, v4);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25, v26);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v35 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v35[2];
                  v41 = *v35;
                  v35[2] = 0LL;
                  if ( !*(_DWORD *)(v41 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
                  v44 = (PERESOURCE *)GetDomainLockRef(12LL, v31, v33, v34);
                  if ( v44 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
                  ExReleaseResourceAndLeaveCriticalRegion(*v44);
                  HMUnlockObject(*v35);
                  tagDomLock::LockExclusive(v44);
                  v35 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v5 = v50;
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
  if ( !v5 )
    UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
}
