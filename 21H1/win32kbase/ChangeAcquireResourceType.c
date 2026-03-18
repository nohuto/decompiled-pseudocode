/*
 * XREFs of ChangeAcquireResourceType @ 0x1C0033C90
 * Callers:
 *     NtUserGetKeyState @ 0x1C0073EA0 (NtUserGetKeyState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ChangeAcquireResourceType(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  LARGE_INTEGER *v3; // rbx
  struct tagTHREADINFO *v4; // r14
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
  PERESOURCE *DomainLockRef; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct tagKERNELHANDLETABLEENTRY *v23; // rsi
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  PERESOURCE *v39; // rdi
  int v40; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v42; // [rsp+40h] [rbp-C8h] BYREF
  PERESOURCE *v43; // [rsp+48h] [rbp-C0h]
  __int64 v44; // [rsp+50h] [rbp-B8h]
  unsigned __int8 ActivityId_4; // [rsp+58h] [rbp-B0h]
  GUID ActivityId_8; // [rsp+5Ch] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+70h] [rbp-98h] BYREF
  int *v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-68h] BYREF
  int *v51; // [rsp+C0h] [rbp-48h]
  __int64 v52; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v54; // [rsp+F0h] [rbp-18h]
  __int64 v55; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+100h] [rbp-8h] BYREF

  if ( qword_1C0258B08 )
    qword_1C0258B08();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    a1 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
    v30 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v31 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v30 + 44) || *(_DWORD *)(v30 + 48) || v31 > 0)
        && (unsigned int)dword_1C024C960 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v28, v29) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C0219981,
          (const GUID *)(v30 + 28),
          0LL,
          2u,
          &v56);
      }
      *(_DWORD *)(v30 + 44) = 0;
      *(_OWORD *)(v30 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  v3 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
  if ( v3 )
    v3[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v32 = PsGetCurrentThreadWin32Thread(v2);
    v44 = v32;
    if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v33, v34) )
        {
          v40 = ActivityId_4;
          v49 = 4LL;
          v48 = &v40;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId_8,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
  {
    *(_DWORD *)(v44 + 44) = 1;
    *(GUID *)(v44 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v11) )
      {
        v41 = ActivityId_4;
        v52 = 4LL;
        v51 = &v41;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId_8,
          0LL,
          3u,
          &v50);
        v35 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v35 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v35, v36) )
      {
        LODWORD(v42) = ActivityId_4;
        v55 = 4LL;
        v54 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId_8,
          0LL,
          3u,
          &v53);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v24 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v24),
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
      v43 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v23 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v23 + 2);
          v37 = *(_QWORD *)v23;
          *((_QWORD *)v23 + 2) = 0LL;
          if ( !*(_DWORD *)(v37 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
          v39 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v39 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
          ExReleaseResourceAndLeaveCriticalRegion(*v39);
          HMUnlockObject(*(_QWORD *)v23);
          tagDomLock::LockExclusive((tagDomLock *)v39);
          v23 = gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v43;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  gptiCurrent = v4;
}
