/*
 * XREFs of ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00523F4
 * Callers:
 *     PowerOnMonitor @ 0x1C0053850 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerStateCallout @ 0x1C005C81C (UserPowerStateCallout.c)
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
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct tagKERNELHANDLETABLEENTRY *v24; // rsi
  __int64 v25; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  PERESOURCE *v35; // rdi
  int v36; // [rsp+38h] [rbp-79h] BYREF
  int v37; // [rsp+3Ch] [rbp-75h] BYREF
  int v38; // [rsp+40h] [rbp-71h] BYREF
  int v39; // [rsp+44h] [rbp-6Dh]
  __int64 v40; // [rsp+48h] [rbp-69h]
  unsigned __int8 v41; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+68h] [rbp-49h] BYREF
  int *v44; // [rsp+88h] [rbp-29h]
  int v45; // [rsp+90h] [rbp-21h]
  int v46; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-19h] BYREF
  int *v48; // [rsp+B8h] [rbp+7h]
  int v49; // [rsp+C0h] [rbp+Fh]
  int v50; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+C8h] [rbp+17h] BYREF
  int *v52; // [rsp+E8h] [rbp+37h]
  int v53; // [rsp+F0h] [rbp+3Fh]
  int v54; // [rsp+F4h] [rbp+43h]

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v2 = IsResourceAcquiredExclusiveLite;
  v39 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v41 = 1;
      v28 = PsGetCurrentThreadWin32Thread(v3);
      v40 = v28;
      if ( v28 && (*(int *)(v28 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v29, v30) )
          {
            v46 = 0;
            v36 = v41;
            v45 = 4;
            v44 = &v36;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
              0LL,
              3u,
              &v43);
          }
        }
      }
    }
    else
    {
      v40 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
    {
      *(_DWORD *)(v40 + 44) = 1;
      *(GUID *)(v40 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v12) )
        {
          v50 = 0;
          v37 = v41;
          v49 = 4;
          v48 = &v37;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &ActivityId,
            0LL,
            3u,
            &v47);
          v31 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v31 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v31, v32) )
        {
          v54 = 0;
          v38 = v41;
          v53 = 4;
          v52 = &v38;
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
      || (v25 = PsGetCurrentProcess(v14, v13),
          ProcessSessionId = PsGetProcessSessionIdEx(v25),
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
                  v33 = *(_QWORD *)v24;
                  *((_QWORD *)v24 + 2) = 0LL;
                  if ( !*(_DWORD *)(v33 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
                  v35 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v35 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
                  ExReleaseResourceAndLeaveCriticalRegion(*v35);
                  HMUnlockObject(*(_QWORD *)v24);
                  tagDomLock::LockExclusive((tagDomLock *)v35);
                  v24 = gpducstulHead;
                }
                while ( gpducstulHead );
                v2 = v39;
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
