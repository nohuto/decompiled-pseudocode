/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C0040920
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
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *v2; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v13; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v19; // r14
  struct tagTHREADINFO **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  struct tagKERNELHANDLETABLEENTRY *v38; // r14
  __int64 v39; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // [rsp+38h] [rbp-D0h] BYREF
  int v54; // [rsp+3Ch] [rbp-CCh] BYREF
  int v55; // [rsp+40h] [rbp-C8h] BYREF
  int v56; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v57; // [rsp+48h] [rbp-C0h]
  unsigned __int8 ActivityId_4; // [rsp+50h] [rbp-B8h]
  GUID ActivityId_8; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v60; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v61; // [rsp+70h] [rbp-98h]
  GUID v62; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+88h] [rbp-80h] BYREF
  int *v64; // [rsp+A8h] [rbp-60h]
  __int64 v65; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+B8h] [rbp-50h] BYREF
  int *v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+E8h] [rbp-20h] BYREF
  int *v70; // [rsp+108h] [rbp+0h]
  __int64 v71; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+118h] [rbp+10h] BYREF
  int *v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+38h]

  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v42 = PsGetCurrentThreadWin32Thread(v17);
      v57 = v42;
      if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v43, v44) )
          {
            v53 = ActivityId_4;
            v65 = 4LL;
            v64 = &v53;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId_8,
              0LL,
              3u,
              &v63);
          }
        }
      }
    }
    else
    {
      v57 = 0LL;
    }
    v19 = 0LL;
    while ( 1 )
    {
      v20 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v20 )
        v19 = *v20;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v22, v21);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v25, v24) == gpepCSRSS && v19 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v19 == gptiRit )
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
      *(GUID *)(v57 + 28) = ActivityId_8;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v26) )
        {
          v54 = ActivityId_4;
          v68 = 4LL;
          v67 = &v54;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &ActivityId_8,
            0LL,
            3u,
            &v66);
          v45 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v45 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v45, v46) )
        {
          v55 = ActivityId_4;
          v71 = 4LL;
          v70 = &v55;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &ActivityId_8,
            0LL,
            3u,
            &v69);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v19;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v39 = PsGetCurrentProcess(v28, v27),
          ProcessSessionId = PsGetProcessSessionIdEx(v39),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v30 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v30 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
      if ( v30
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v30 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v30 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v38 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v47 = *(_QWORD *)v38;
          *((_QWORD *)v38 + 2) = 0LL;
          if ( !*(_DWORD *)(v47 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
          v49 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v49 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48);
          ExReleaseResourceAndLeaveCriticalRegion(*v49);
          HMUnlockObject(*(_QWORD *)v38);
          tagDomLock::LockExclusive((tagDomLock *)v49);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v2 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v2 )
      v2[1] = KeQueryPerformanceCounter(0LL);
    v62 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v61 = 0;
      v50 = PsGetCurrentThreadWin32Thread(v1);
      v60 = v50;
      if ( v50 && (*(int *)(v50 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
      {
        EtwActivityIdControl(3u, &v62);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v51, v52) )
          {
            v56 = v61;
            v74 = 4LL;
            v73 = &v56;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v62,
              0LL,
              3u,
              &v72);
          }
        }
      }
    }
    else
    {
      v60 = 0LL;
    }
    v3 = 0LL;
    while ( 1 )
    {
      v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v4 )
        v3 = *v4;
      v7 = (PVOID)PsGetCurrentProcess(v6, v5);
      if ( v7 )
      {
        if ( v7 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v3 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v60);
    v11 = PsGetCurrentThreadWin32Thread(v10);
    if ( v11 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo(Instance, v13, 1LL);
      *(LARGE_INTEGER *)(v11 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C024B738 - 1) > 2u
        && (qword_1C024B720 & 0x200000010000000LL) != 0
        && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v15,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v16,
          v13,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v13 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v16,
            v13,
            1000000 * v13 / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
  }
}
