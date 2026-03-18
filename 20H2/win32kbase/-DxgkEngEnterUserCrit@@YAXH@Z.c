/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00AE330
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r14
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v15; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v21; // r14
  struct tagTHREADINFO **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r14
  __int64 v52; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v55; // rax
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  int v64; // [rsp+38h] [rbp-D0h] BYREF
  int v65; // [rsp+3Ch] [rbp-CCh] BYREF
  int v66; // [rsp+40h] [rbp-C8h] BYREF
  int v67; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v68; // [rsp+48h] [rbp-C0h]
  unsigned __int8 ActivityId_4; // [rsp+50h] [rbp-B8h]
  GUID ActivityId_8; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v72; // [rsp+70h] [rbp-98h]
  GUID v73; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+88h] [rbp-80h] BYREF
  int *v75; // [rsp+A8h] [rbp-60h]
  __int64 v76; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+B8h] [rbp-50h] BYREF
  int *v78; // [rsp+D8h] [rbp-30h]
  __int64 v79; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+E8h] [rbp-20h] BYREF
  int *v81; // [rsp+108h] [rbp+0h]
  __int64 v82; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+118h] [rbp+10h] BYREF
  int *v84; // [rsp+138h] [rbp+30h]
  __int64 v85; // [rsp+140h] [rbp+38h]

  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v55 = PsGetCurrentThreadWin32Thread(v19);
      v68 = v55;
      if ( v55 && (*(int *)(v55 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v64 = ActivityId_4;
          v76 = 4LL;
          v75 = &v64;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId_8,
            0LL,
            3u,
            &v74);
        }
      }
    }
    else
    {
      v68 = 0LL;
    }
    v21 = 0LL;
    while ( 1 )
    {
      v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v22 )
        v21 = *v22;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v24, v23);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v27, v26) == gpepCSRSS && v21 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v21 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v68 && (*(_DWORD *)(v68 + 48) || *(int *)(v68 + 24) > 0) )
    {
      *(_DWORD *)(v68 + 44) = 1;
      *(GUID *)(v68 + 28) = ActivityId_8;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v65 = ActivityId_4;
          v79 = 4LL;
          v78 = &v65;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId_8,
            0LL,
            3u,
            &v77);
          v56 = dword_1C0244A70;
        }
        if ( v56 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v66 = ActivityId_4;
          v82 = 4LL;
          v81 = &v66;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId_8,
            0LL,
            3u,
            &v80);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v21;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v52 = PsGetCurrentProcess(v29, v28),
          ProcessSessionId = PsGetProcessSessionIdEx(v52),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v31 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v31 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
      if ( v31
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v31 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v31 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v35, v36, v37);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v41, v42);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v51 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v57 = *v51;
          v51[2] = 0LL;
          if ( !*(_DWORD *)(v57 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
          v60 = (PERESOURCE *)GetDomainLockRef(12LL, v47, v49, v50);
          if ( v60 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
          ExReleaseResourceAndLeaveCriticalRegion(*v60);
          HMUnlockObject(*v51);
          tagDomLock::LockExclusive(v60);
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
    v73 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v72 = 0;
      v63 = PsGetCurrentThreadWin32Thread(v1);
      v71 = v63;
      if ( v63 && (*(int *)(v63 + 24) > 0 || *(_DWORD *)(v71 + 48)) )
      {
        EtwActivityIdControl(3u, &v73);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v67 = v72;
          v85 = 4LL;
          v84 = &v67;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &v73,
            0LL,
            3u,
            &v83);
        }
      }
    }
    else
    {
      v71 = 0LL;
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v71, v8, v10, v11);
    v13 = PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v15, 1);
      *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0243738 - 1) > 2u
        && (qword_1C0243720 & 0x200000010000000LL) != 0
        && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v17,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v18,
          v15,
          0,
          gullUserCritAcquireToken);
      }
      if ( v15 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v18,
            v15,
            1000000 * v15 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
  }
}
