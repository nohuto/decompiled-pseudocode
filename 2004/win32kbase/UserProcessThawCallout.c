/*
 * XREFs of UserProcessThawCallout @ 0x1C0065504
 * Callers:
 *     W32CalloutDispatch @ 0x1C0065BE0 (W32CalloutDispatch.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsFreezeThawTimersSupported @ 0x1C0065BB0 (IsFreezeThawTimersSupported.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessThawCallout(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  __int64 ProcessWin32Process; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  int v23; // eax
  __int64 v25; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct tagKERNELHANDLETABLEENTRY *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // [rsp+30h] [rbp-89h] BYREF
  int v54; // [rsp+34h] [rbp-85h] BYREF
  int v55; // [rsp+38h] [rbp-81h] BYREF
  __int64 v56; // [rsp+40h] [rbp-79h]
  __int64 v57; // [rsp+48h] [rbp-71h]
  unsigned __int8 v58; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+68h] [rbp-51h] BYREF
  int *v61; // [rsp+88h] [rbp-31h]
  int v62; // [rsp+90h] [rbp-29h]
  int v63; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+98h] [rbp-21h] BYREF
  int *v65; // [rsp+B8h] [rbp-1h]
  int v66; // [rsp+C0h] [rbp+7h]
  int v67; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+C8h] [rbp+Fh] BYREF
  int *v69; // [rsp+E8h] [rbp+2Fh]
  int v70; // [rsp+F0h] [rbp+37h]
  int v71; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v56 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v58 = 1;
    v28 = PsGetCurrentThreadWin32Thread(v2);
    v57 = v28;
    if ( v28 && (*(int *)(v28 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v29, v30) )
        {
          v63 = 0;
          v53 = v58;
          v62 = 4;
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
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
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
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v11) )
      {
        v67 = 0;
        v54 = v58;
        v66 = 4;
        v65 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v64);
        v31 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v31 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v31, v32) )
      {
        v71 = 0;
        v55 = v58;
        v70 = 4;
        v69 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v68);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v25 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v25),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    if ( v15
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v15 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v15 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36, v37);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v46 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v46 + 2);
          v47 = *(_QWORD *)v46;
          *((_QWORD *)v46 + 2) = 0LL;
          if ( !*(_DWORD *)(v47 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
          v50 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v50 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
          ExReleaseResourceAndLeaveCriticalRegion(*v50);
          HMUnlockObject(*(_QWORD *)v46);
          tagDomLock::LockExclusive((tagDomLock *)v50);
          v46 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v56;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  ProcessWin32Process = PsGetProcessWin32Process(v1);
  if ( ProcessWin32Process )
  {
    v21 = *(_QWORD *)(ProcessWin32Process + 320);
    v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v21 )
    {
      if ( qword_1C02522A0 )
        v23 = qword_1C02522A0();
      else
        v23 = -1073741637;
      if ( v23 >= 0 )
      {
        if ( qword_1C02522A8 )
          qword_1C02522A8(v21, (unsigned int)v22);
      }
      v21 = *(_QWORD *)(v21 + 656);
    }
    *(_DWORD *)(ProcessWin32Process + 820) &= ~0x400u;
    if ( (int)IsFreezeThawTimersSupported() >= 0 )
    {
      if ( qword_1C0251F70 )
        qword_1C0251F70();
    }
  }
  UserSessionSwitchLeaveCrit(v19);
  return 0LL;
}
