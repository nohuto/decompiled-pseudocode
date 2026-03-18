/*
 * XREFs of ChangeAcquireResourceType @ 0x1C00AD590
 * Callers:
 *     NtUserGetKeyState @ 0x1C00ACAB0 (NtUserGetKeyState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rsi
  __int64 v39; // rax
  int ProcessSessionId; // ebx
  __int64 v41; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // [rsp+38h] [rbp-D0h] BYREF
  int v55; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v56; // [rsp+40h] [rbp-C8h] BYREF
  PERESOURCE *v57; // [rsp+48h] [rbp-C0h]
  __int64 v58; // [rsp+50h] [rbp-B8h]
  unsigned __int8 ActivityId_4; // [rsp+58h] [rbp-B0h]
  GUID ActivityId_8; // [rsp+5Ch] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+70h] [rbp-98h] BYREF
  int *v62; // [rsp+90h] [rbp-78h]
  __int64 v63; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+A0h] [rbp-68h] BYREF
  int *v65; // [rsp+C0h] [rbp-48h]
  __int64 v66; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v68; // [rsp+F0h] [rbp-18h]
  __int64 v69; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+100h] [rbp-8h] BYREF

  if ( qword_1C0252B48 )
    qword_1C0252B48();
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
    v44 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v45 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v44 + 44) || *(_DWORD *)(v44 + 48) || v45 > 0)
        && (unsigned int)dword_1C0246A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E11,
          (const GUID *)(v44 + 28),
          0LL,
          2u,
          &v70);
      }
      *(_DWORD *)(v44 + 44) = 0;
      *(_OWORD *)(v44 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit(a1);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  v6 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( v6 )
    v6[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v46 = PsGetCurrentThreadWin32Thread(v5);
    v58 = v46;
    if ( v46 && (*(int *)(v46 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v54 = ActivityId_4;
        v63 = 4LL;
        v62 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId_8,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v58 )
    {
      v13 = *(unsigned int *)(v58 + 24);
      if ( *(_DWORD *)(v58 + 48) || (int)v13 > 0 )
      {
        *(_DWORD *)(v58 + 44) = 1;
        *(GUID *)(v58 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v55 = ActivityId_4;
            v66 = 4LL;
            v65 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId_8,
              0LL,
              3u,
              &v64);
            v47 = dword_1C0246A70;
          }
          if ( v47 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            LODWORD(v56) = ActivityId_4;
            v69 = 4LL;
            v68 = &v56;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId_8,
              0LL,
              3u,
              &v67);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v13);
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v39 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v39),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v41),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !IsThreadCrossSessionAttached(v16) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23, v24);
      v57 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28, v29);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v38 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v38[2];
          v48 = *v38;
          v38[2] = 0LL;
          if ( !*(_DWORD *)(v48 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
          v51 = (PERESOURCE *)GetDomainLockRef(12LL, v34, v36, v37);
          if ( v51 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
          ExReleaseResourceAndLeaveCriticalRegion(*v51);
          HMUnlockObject(*v38);
          tagDomLock::LockExclusive(v51);
          v38 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v57;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  gptiCurrent = v7;
}
