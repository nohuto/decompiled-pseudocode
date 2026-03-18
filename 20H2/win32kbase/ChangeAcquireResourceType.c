/*
 * XREFs of ChangeAcquireResourceType @ 0x1C0076F50
 * Callers:
 *     NtUserGetKeyState @ 0x1C00764D0 (NtUserGetKeyState.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ChangeAcquireResourceType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  LARGE_INTEGER *v6; // rbx
  struct tagTHREADINFO *v7; // r14
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rsi
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rax
  unsigned int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // [rsp+38h] [rbp-D0h] BYREF
  int v53; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v54; // [rsp+40h] [rbp-C8h] BYREF
  PERESOURCE *v55; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+50h] [rbp-B8h]
  unsigned __int8 ActivityId_4; // [rsp+58h] [rbp-B0h]
  GUID ActivityId_8; // [rsp+5Ch] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+70h] [rbp-98h] BYREF
  int *v60; // [rsp+90h] [rbp-78h]
  __int64 v61; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+A0h] [rbp-68h] BYREF
  int *v63; // [rsp+C0h] [rbp-48h]
  __int64 v64; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v66; // [rsp+F0h] [rbp-18h]
  __int64 v67; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+100h] [rbp-8h] BYREF

  if ( qword_1C0250B48 )
    qword_1C0250B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
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
    v42 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v43 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v42 + 44) || *(_DWORD *)(v42 + 48) || v43 > 0)
        && (unsigned int)dword_1C0244A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E11,
          (const GUID *)(v42 + 28),
          0LL,
          2u,
          &v68);
      }
      *(_DWORD *)(v42 + 44) = 0;
      *(_OWORD *)(v42 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  v6 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( v6 )
    v6[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v44 = PsGetCurrentThreadWin32Thread(v5);
    v56 = v44;
    if ( v44 && (*(int *)(v44 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v52 = ActivityId_4;
        v61 = 4LL;
        v60 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId_8,
          0LL,
          3u,
          &v59);
      }
    }
  }
  else
  {
    v56 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
  {
    *(_DWORD *)(v56 + 44) = 1;
    *(GUID *)(v56 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v53 = ActivityId_4;
        v64 = 4LL;
        v63 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId_8,
          0LL,
          3u,
          &v62);
        v45 = dword_1C0244A70;
      }
      if ( v45 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        LODWORD(v54) = ActivityId_4;
        v67 = 4LL;
        v66 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId_8,
          0LL,
          3u,
          &v65);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v38 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v38),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v21, v22, v23);
      v55 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v27, v28);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v37 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v37[2];
          v46 = *v37;
          v37[2] = 0LL;
          if ( !*(_DWORD *)(v46 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
          v49 = (PERESOURCE *)GetDomainLockRef(12LL, v33, v35, v36);
          if ( v49 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v50, v51);
          ExReleaseResourceAndLeaveCriticalRegion(*v49);
          HMUnlockObject(*v37);
          tagDomLock::LockExclusive(v49);
          v37 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v55;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  gptiCurrent = v7;
}
