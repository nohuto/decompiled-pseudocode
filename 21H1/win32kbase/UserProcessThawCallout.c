/*
 * XREFs of UserProcessThawCallout @ 0x1C005CC4C
 * Callers:
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsFreezeThawTimersSupported @ 0x1C005D994 (IsFreezeThawTimersSupported.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  struct tagKERNELHANDLETABLEENTRY *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  int v41; // [rsp+30h] [rbp-89h] BYREF
  int v42; // [rsp+34h] [rbp-85h] BYREF
  int v43; // [rsp+38h] [rbp-81h] BYREF
  __int64 v44; // [rsp+40h] [rbp-79h]
  __int64 v45; // [rsp+48h] [rbp-71h]
  unsigned __int8 v46; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+68h] [rbp-51h] BYREF
  int *v49; // [rsp+88h] [rbp-31h]
  int v50; // [rsp+90h] [rbp-29h]
  int v51; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-21h] BYREF
  int *v53; // [rsp+B8h] [rbp-1h]
  int v54; // [rsp+C0h] [rbp+7h]
  int v55; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C8h] [rbp+Fh] BYREF
  int *v57; // [rsp+E8h] [rbp+2Fh]
  int v58; // [rsp+F0h] [rbp+37h]
  int v59; // [rsp+F4h] [rbp+3Bh]

  v1 = a1;
  v44 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v46 = 1;
    v28 = PsGetCurrentThreadWin32Thread(v2);
    v45 = v28;
    if ( v28 && (*(int *)(v28 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v29, v30) )
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
  }
  else
  {
    v45 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v45 && (*(_DWORD *)(v45 + 48) || *(int *)(v45 + 24) > 0) )
  {
    *(_DWORD *)(v45 + 44) = 1;
    *(GUID *)(v45 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v11) )
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
        v31 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v31 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v31, v32) )
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
      && (*(_DWORD *)(v15 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v37 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v37 + 2);
          v38 = *(_QWORD *)v37;
          *((_QWORD *)v37 + 2) = 0LL;
          if ( !*(_DWORD *)(v38 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
          v40 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v40 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
          ExReleaseResourceAndLeaveCriticalRegion(*v40);
          HMUnlockObject(*(_QWORD *)v37);
          tagDomLock::LockExclusive((tagDomLock *)v40);
          v37 = gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v44;
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
      if ( qword_1C0258260 )
        v23 = qword_1C0258260();
      else
        v23 = -1073741637;
      if ( v23 >= 0 )
      {
        if ( qword_1C0258268 )
          qword_1C0258268(v21, (unsigned int)v22);
      }
      v21 = *(_QWORD *)(v21 + 656);
    }
    *(_DWORD *)(ProcessWin32Process + 820) &= ~0x400u;
    if ( (int)IsFreezeThawTimersSupported() >= 0 )
    {
      if ( qword_1C0257F30 )
        qword_1C0257F30();
    }
  }
  UserSessionSwitchLeaveCrit(v19);
  return 0LL;
}
