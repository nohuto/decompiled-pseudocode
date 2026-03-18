/*
 * XREFs of xxxCreateSystemThreads @ 0x1C000CC90
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C000CFBC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  void (__fastcall *v4)(void *); // rax
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  struct tagKERNELHANDLETABLEENTRY *v23; // rsi
  int v25; // eax
  __int64 v26; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  PERESOURCE *v35; // rdi
  unsigned int v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *v37; // [rsp+40h] [rbp-C8h] BYREF
  int v38; // [rsp+48h] [rbp-C0h] BYREF
  int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+78h] [rbp-90h] BYREF
  int *v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+A8h] [rbp-60h] BYREF
  int *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]

  v36[0] = 0;
  v37 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS || !(unsigned int)CSTPop(v36, &v37) )
    return 1LL;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  if ( v36[0] == 1 )
  {
    if ( qword_1C0258360 )
      v25 = qword_1C0258360();
    else
      v25 = -1073741637;
    if ( v25 >= 0 )
    {
      v4 = (void (__fastcall *)(void *))qword_1C0258368;
LABEL_10:
      if ( v4 )
        v4(v37);
    }
  }
  else
  {
    if ( v36[0] != 2 )
    {
      if ( v36[0] == 4 )
        VideoPortCalloutThread(v37);
      goto LABEL_12;
    }
    if ( qword_1C0258390 )
      v3 = qword_1C0258390();
    else
      v3 = -1073741637;
    if ( v3 >= 0 )
    {
      v4 = (void (__fastcall *)(void *))qword_1C0258398;
      goto LABEL_10;
    }
  }
LABEL_12:
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v29 = PsGetCurrentThreadWin32Thread(v5);
    v41 = v29;
    if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v41 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v30, v31) )
        {
          v38 = ActivityId_4;
          v46 = 4LL;
          v45 = &v38;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024C960,
            (int)&dword_1C02199F7,
            (int)&ActivityId_8,
            0,
            3u,
            &v44);
        }
      }
    }
  }
  else
  {
    v41 = 0LL;
  }
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v41 && (*(_DWORD *)(v41 + 48) || *(int *)(v41 + 24) > 0) )
  {
    *(_DWORD *)(v41 + 44) = 1;
    *(GUID *)(v41 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v14) )
      {
        v39 = ActivityId_4;
        v49 = 4LL;
        v48 = &v39;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199A0, (int)&ActivityId_8, 0, 3u, &v47);
        v32 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v32 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v32, v33) )
      {
        LODWORD(v40) = ActivityId_4;
        v52 = 4LL;
        v51 = &v40;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199CD, (int)&ActivityId_8, 0, 3u, &v50);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v26 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v26),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v23 = gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v34 = *(_QWORD *)v23;
        *((_QWORD *)v23 + 2) = 0LL;
        if ( !*(_DWORD *)(v34 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v35 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v35 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        ExReleaseResourceAndLeaveCriticalRegion(*v35);
        HMUnlockObject(*(_QWORD *)v23);
        tagDomLock::LockExclusive((tagDomLock *)v35);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return 1LL;
}
