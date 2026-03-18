/*
 * XREFs of NtUserGetKeyboardLayout @ 0x1C004F220
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _GetKeyboardLayout @ 0x1C004F630 (_GetKeyboardLayout.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(__int64 a1)
{
  struct tagTHREADINFO *v1; // r14
  unsigned int v2; // r13d
  __int64 v3; // rcx
  LARGE_INTEGER *v4; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r14
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v17; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v19; // ecx
  int v20; // r8d
  __int64 KeyboardLayout; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PVOID CurrentProcess; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // r14
  __int64 v63; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  PERESOURCE *v77; // rdi
  __int64 v78; // r8
  __int64 v79; // r9
  int v80; // [rsp+38h] [rbp-D0h] BYREF
  int v81; // [rsp+3Ch] [rbp-CCh] BYREF
  int v82; // [rsp+40h] [rbp-C8h] BYREF
  int v83; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v84; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v85; // [rsp+50h] [rbp-B8h]
  GUID v86; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v87; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 ActivityId_4; // [rsp+70h] [rbp-98h]
  GUID ActivityId_8; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+88h] [rbp-80h] BYREF
  int *v91; // [rsp+A8h] [rbp-60h]
  __int64 v92; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+B8h] [rbp-50h] BYREF
  int *v94; // [rsp+D8h] [rbp-30h]
  __int64 v95; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+E8h] [rbp-20h] BYREF
  int *v97; // [rsp+108h] [rbp+0h]
  int v98; // [rsp+110h] [rbp+8h]
  int v99; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+118h] [rbp+10h] BYREF
  int *v101; // [rsp+138h] [rbp+30h]
  int v102; // [rsp+140h] [rbp+38h]
  int v103; // [rsp+144h] [rbp+3Ch]

  v1 = 0LL;
  v2 = a1;
  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v86 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v85 = 1;
      v69 = PsGetCurrentThreadWin32Thread(v27);
      v84 = v69;
      if ( v69 && (*(int *)(v69 + 24) > 0 || *(_DWORD *)(v84 + 48)) )
      {
        EtwActivityIdControl(3u, &v86);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v70, v71) )
          {
            v81 = v85;
            v95 = 4LL;
            v94 = &v81;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&v86, 0, 3u, &v93);
          }
        }
      }
    }
    else
    {
      v84 = 0LL;
    }
    while ( 1 )
    {
      v29 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v29 )
        v1 = *v29;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v31, v30);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v34, v33) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v1 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v84 && (*(_DWORD *)(v84 + 48) || *(int *)(v84 + 24) > 0) )
    {
      *(_DWORD *)(v84 + 44) = 1;
      *(GUID *)(v84 + 28) = v86;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v35) )
        {
          v99 = 0;
          v82 = v85;
          v98 = 4;
          v97 = &v82;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&v86, 0, 3u, &v96);
          v72 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v72 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v72, v73) )
        {
          v103 = 0;
          v83 = v85;
          v102 = 4;
          v101 = &v83;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&v86, 0, 3u, &v100);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v1;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v63 = PsGetCurrentProcess(v37, v36),
          ProcessSessionId = PsGetProcessSessionIdEx(v63),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v39 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v39 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v41, v40, v42, v43);
      if ( v39
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v39 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v39 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v46, v47, v48);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v56, v57);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v62 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v74 = *v62;
          v62[2] = 0LL;
          if ( !*(_DWORD *)(v74 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v60, v61);
          v77 = (PERESOURCE *)GetDomainLockRef(12LL, v58, v60, v61);
          if ( v77 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v76, v75, v78, v79);
          ExReleaseResourceAndLeaveCriticalRegion(*v77);
          HMUnlockObject(*v62);
          tagDomLock::LockExclusive(v77);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v4 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v4 )
      v4[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 0;
      v66 = PsGetCurrentThreadWin32Thread(v3);
      v87 = v66;
      if ( v66 && (*(int *)(v66 + 24) > 0 || *(_DWORD *)(v87 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v67, v68) )
          {
            v80 = ActivityId_4;
            v92 = 4LL;
            v91 = &v80;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E87,
              (int)&ActivityId_8,
              0,
              3u,
              &v90);
          }
        }
      }
    }
    else
    {
      v87 = 0LL;
    }
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v6 )
        v5 = *v6;
      v9 = (PVOID)PsGetCurrentProcess(v8, v7);
      if ( v9 )
      {
        if ( v9 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v5 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v87, v10, v12, v13);
    v15 = PsGetCurrentThreadWin32Thread(v14);
    if ( v15 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v17 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v17, 1);
      *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0243738 - 1) > 2u
        && (qword_1C0243720 & 0x200000010000000LL) != 0
        && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v19,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v20,
          v17,
          0,
          gullUserCritAcquireToken);
      }
      if ( v17 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v20,
            v17,
            1000000 * v17 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
  }
  KeyboardLayout = GetKeyboardLayout(v2);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return KeyboardLayout;
}
