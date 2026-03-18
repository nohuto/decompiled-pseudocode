/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C004D490
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DxgkEngEnterUserCrit(int a1)
{
  LARGE_INTEGER *v1; // rbx
  struct tagTHREADINFO *v2; // rbx
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v11; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v13; // ecx
  int v14; // r8d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // r14
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct tagKERNELHANDLETABLEENTRY *v44; // r14
  __int64 v45; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // [rsp+38h] [rbp-D0h] BYREF
  int v63; // [rsp+3Ch] [rbp-CCh] BYREF
  int v64; // [rsp+40h] [rbp-C8h] BYREF
  int v65; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v66; // [rsp+48h] [rbp-C0h]
  unsigned __int8 ActivityId_4; // [rsp+50h] [rbp-B8h]
  GUID ActivityId_8; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v69; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v70; // [rsp+70h] [rbp-98h]
  GUID v71; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+88h] [rbp-80h] BYREF
  int *v73; // [rsp+A8h] [rbp-60h]
  __int64 v74; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+B8h] [rbp-50h] BYREF
  int *v76; // [rsp+D8h] [rbp-30h]
  __int64 v77; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+E8h] [rbp-20h] BYREF
  int *v79; // [rsp+108h] [rbp+0h]
  __int64 v80; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+118h] [rbp+10h] BYREF
  int *v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]

  if ( a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v48 = PsGetCurrentThreadWin32Thread();
      v66 = v48;
      if ( v48 && (*(int *)(v48 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v49, v50) )
          {
            v62 = ActivityId_4;
            v74 = 4LL;
            v73 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId_8,
              0LL,
              3u,
              &v72);
          }
        }
      }
    }
    else
    {
      v66 = 0LL;
    }
    v16 = 0LL;
    while ( 1 )
    {
      v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v17 )
        v16 = *v17;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v19, v18);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v22, v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v16 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v66 && (*(_DWORD *)(v66 + 48) || *(int *)(v66 + 24) > 0) )
    {
      *(_DWORD *)(v66 + 44) = 1;
      *(GUID *)(v66 + 28) = ActivityId_8;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v23) )
        {
          v63 = ActivityId_4;
          v77 = 4LL;
          v76 = &v63;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &ActivityId_8,
            0LL,
            3u,
            &v75);
          v51 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v51 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v51, v52) )
        {
          v64 = ActivityId_4;
          v80 = 4LL;
          v79 = &v64;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &ActivityId_8,
            0LL,
            3u,
            &v78);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v16;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v45 = PsGetCurrentProcess(v25, v24),
          ProcessSessionId = PsGetProcessSessionIdEx(v45),
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
        && (*(_DWORD *)(v27 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34, v35);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v44 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v53 = *(_QWORD *)v44;
          *((_QWORD *)v44 + 2) = 0LL;
          if ( !*(_DWORD *)(v53 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
          v56 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v56 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
          ExReleaseResourceAndLeaveCriticalRegion(*v56);
          HMUnlockObject(*(_QWORD *)v44);
          tagDomLock::LockExclusive((tagDomLock *)v56);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v1 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v1 )
      v1[1] = KeQueryPerformanceCounter(0LL);
    v71 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v70 = 0;
      v59 = PsGetCurrentThreadWin32Thread();
      v69 = v59;
      if ( v59 && (*(int *)(v59 + 24) > 0 || *(_DWORD *)(v69 + 48)) )
      {
        EtwActivityIdControl(3u, &v71);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v60, v61) )
          {
            v65 = v70;
            v83 = 4LL;
            v82 = &v65;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &v71,
              0LL,
              3u,
              &v81);
          }
        }
      }
    }
    else
    {
      v69 = 0LL;
    }
    v2 = 0LL;
    while ( 1 )
    {
      v3 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v3 )
        v2 = *v3;
      v6 = (PVOID)PsGetCurrentProcess(v5, v4);
      if ( v6 )
      {
        if ( v6 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v8, v7) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v69);
    v9 = PsGetCurrentThreadWin32Thread();
    if ( v9 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v11 = PerformanceCounter.QuadPart - *(_QWORD *)(v9 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo(Instance, v11, 1LL);
      *(LARGE_INTEGER *)(v9 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0245748 - 1) > 2u
        && (qword_1C0245730 & 0x200000010000000LL) != 0
        && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v13,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v14,
          v11,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v11 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v14,
            v11,
            1000000 * v11 / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v9 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
  }
}
