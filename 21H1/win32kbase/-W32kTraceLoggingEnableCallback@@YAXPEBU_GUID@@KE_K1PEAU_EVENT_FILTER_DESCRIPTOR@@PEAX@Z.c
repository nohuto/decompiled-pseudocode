/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0051DE0
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
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FE8DC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(const struct _GUID *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int ProcessSessionId; // ebx
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
  struct tagKERNELHANDLETABLEENTRY *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  __int64 v39; // rcx
  int v40; // [rsp+30h] [rbp-A1h] BYREF
  int v41; // [rsp+34h] [rbp-9Dh] BYREF
  int v42; // [rsp+38h] [rbp-99h] BYREF
  unsigned __int64 v43; // [rsp+40h] [rbp-91h]
  __int64 v44; // [rsp+48h] [rbp-89h]
  unsigned __int8 v45; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+68h] [rbp-69h] BYREF
  int *v48; // [rsp+88h] [rbp-49h]
  int v49; // [rsp+90h] [rbp-41h]
  int v50; // [rsp+94h] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+98h] [rbp-39h] BYREF
  int *v52; // [rsp+B8h] [rbp-19h]
  int v53; // [rsp+C0h] [rbp-11h]
  int v54; // [rsp+C4h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C8h] [rbp-9h] BYREF
  int *v56; // [rsp+E8h] [rbp+17h]
  int v57; // [rsp+F0h] [rbp+1Fh]
  int v58; // [rsp+F4h] [rbp+23h]

  if ( a2 == 2 )
  {
    v4 = a4;
    v43 = a4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v45 = 1;
      v8 = PsGetCurrentThreadWin32Thread(v6);
      v44 = v8;
      if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v9, v10) )
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
    }
    else
    {
      v44 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
    {
      *(_DWORD *)(v44 + 44) = 1;
      *(GUID *)(v44 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v18) )
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
          v19 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v19 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v19, v20) )
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
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v23 = PsGetCurrentProcess(v22, v21),
          ProcessSessionId = PsGetProcessSessionIdEx(v23),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v27 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
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
        v35 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v35 + 2);
            v36 = *(_QWORD *)v35;
            *((_QWORD *)v35 + 2) = 0LL;
            if ( !*(_DWORD *)(v36 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
            v38 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v38 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
            ExReleaseResourceAndLeaveCriticalRegion(*v38);
            HMUnlockObject(*(_QWORD *)v35);
            tagDomLock::LockExclusive((tagDomLock *)v38);
            v35 = gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v43;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    CitEtwEnableCallback(a1, 2u, v4);
    UserSessionSwitchLeaveCrit(v39);
  }
}
