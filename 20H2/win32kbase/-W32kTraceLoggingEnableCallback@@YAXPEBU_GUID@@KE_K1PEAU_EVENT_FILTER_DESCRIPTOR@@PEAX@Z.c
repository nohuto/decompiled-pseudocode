/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00BFC60
 * Callers:
 *     <none>
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
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01F75A0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(const struct _GUID *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // [rsp+30h] [rbp-A1h] BYREF
  int v55; // [rsp+34h] [rbp-9Dh] BYREF
  int v56; // [rsp+38h] [rbp-99h] BYREF
  unsigned __int64 v57; // [rsp+40h] [rbp-91h]
  __int64 v58; // [rsp+48h] [rbp-89h]
  unsigned __int8 v59; // [rsp+50h] [rbp-81h]
  GUID ActivityId; // [rsp+54h] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+68h] [rbp-69h] BYREF
  int *v62; // [rsp+88h] [rbp-49h]
  int v63; // [rsp+90h] [rbp-41h]
  int v64; // [rsp+94h] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+98h] [rbp-39h] BYREF
  int *v66; // [rsp+B8h] [rbp-19h]
  int v67; // [rsp+C0h] [rbp-11h]
  int v68; // [rsp+C4h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C8h] [rbp-9h] BYREF
  int *v70; // [rsp+E8h] [rbp+17h]
  int v71; // [rsp+F0h] [rbp+1Fh]
  int v72; // [rsp+F4h] [rbp+23h]

  if ( a2 == 2 )
  {
    v4 = a4;
    v57 = a4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v59 = 1;
      v8 = PsGetCurrentThreadWin32Thread(v6);
      v58 = v8;
      if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v64 = 0;
          v54 = v59;
          v63 = 4;
          v62 = &v54;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId,
            0LL,
            3u,
            &v61);
        }
      }
    }
    else
    {
      v58 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v58 && (*(_DWORD *)(v58 + 48) || *(int *)(v58 + 24) > 0) )
    {
      *(_DWORD *)(v58 + 44) = 1;
      *(GUID *)(v58 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v68 = 0;
          v55 = v59;
          v67 = 4;
          v66 = &v55;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId,
            0LL,
            3u,
            &v65);
          v16 = dword_1C0244A70;
        }
        if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v72 = 0;
          v56 = v59;
          v71 = 4;
          v70 = &v56;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId,
            0LL,
            3u,
            &v69);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v19 = PsGetCurrentProcess(v18, v17),
          ProcessSessionId = PsGetProcessSessionIdEx(v19),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v23 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v23 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
      if ( v23
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v23 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v23 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v29);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v43 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v43[2];
            v44 = *v43;
            v43[2] = 0LL;
            if ( !*(_DWORD *)(v44 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            v47 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
            if ( v47 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48, v49);
            ExReleaseResourceAndLeaveCriticalRegion(*v47);
            HMUnlockObject(*v43);
            tagDomLock::LockExclusive(v47);
            v43 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v57;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    CitEtwEnableCallback(a1, 2u, v4);
    UserSessionSwitchLeaveCrit(v51, v50, v52, v53);
  }
}
