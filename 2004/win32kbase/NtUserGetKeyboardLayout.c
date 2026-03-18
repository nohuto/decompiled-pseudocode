/*
 * XREFs of NtUserGetKeyboardLayout @ 0x1C0076BE0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     _GetKeyboardLayout @ 0x1C0076FF0 (_GetKeyboardLayout.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rcx
  __int64 v13; // r14
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v15; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v17; // ecx
  int v18; // r8d
  __int64 KeyboardLayout; // rbx
  __int64 v20; // rcx
  __int64 v22; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  PVOID CurrentProcess; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  struct tagKERNELHANDLETABLEENTRY *v50; // r14
  __int64 v51; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // [rsp+38h] [rbp-D0h] BYREF
  int v64; // [rsp+3Ch] [rbp-CCh] BYREF
  int v65; // [rsp+40h] [rbp-C8h] BYREF
  int v66; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v67; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v68; // [rsp+50h] [rbp-B8h]
  GUID v69; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 ActivityId_4; // [rsp+70h] [rbp-98h]
  GUID ActivityId_8; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+88h] [rbp-80h] BYREF
  int *v74; // [rsp+A8h] [rbp-60h]
  __int64 v75; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+B8h] [rbp-50h] BYREF
  int *v77; // [rsp+D8h] [rbp-30h]
  __int64 v78; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+E8h] [rbp-20h] BYREF
  int *v80; // [rsp+108h] [rbp+0h]
  int v81; // [rsp+110h] [rbp+8h]
  int v82; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+118h] [rbp+10h] BYREF
  int *v84; // [rsp+138h] [rbp+30h]
  int v85; // [rsp+140h] [rbp+38h]
  int v86; // [rsp+144h] [rbp+3Ch]

  v1 = 0LL;
  v2 = a1;
  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v69 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v68 = 1;
      v55 = PsGetCurrentThreadWin32Thread(v22);
      v67 = v55;
      if ( v55 && (*(int *)(v55 + 24) > 0 || *(_DWORD *)(v67 + 48)) )
      {
        EtwActivityIdControl(3u, &v69);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v64 = v68;
          v78 = 4LL;
          v77 = &v64;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &v69,
            0LL,
            3u,
            &v76);
        }
      }
    }
    else
    {
      v67 = 0LL;
    }
    while ( 1 )
    {
      v24 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v24 )
        v1 = *v24;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v26, v25);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v29, v28) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v1 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v67 && (*(_DWORD *)(v67 + 48) || *(int *)(v67 + 24) > 0) )
    {
      *(_DWORD *)(v67 + 44) = 1;
      *(GUID *)(v67 + 28) = v69;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v82 = 0;
          v65 = v68;
          v81 = 4;
          v80 = &v65;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E30,
            &v69,
            0LL,
            3u,
            &v79);
          v56 = dword_1C0246A70;
        }
        if ( v56 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v86 = 0;
          v66 = v68;
          v85 = 4;
          v84 = &v66;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E5D,
            &v69,
            0LL,
            3u,
            &v83);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v1;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v51 = PsGetCurrentProcess(v31, v30),
          ProcessSessionId = PsGetProcessSessionIdEx(v51),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v33 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v33 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
      if ( v33
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v33 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v33 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v40, v41);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v50 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v57 = *(_QWORD *)v50;
          *((_QWORD *)v50 + 2) = 0LL;
          if ( !*(_DWORD *)(v57 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48, v49);
          v60 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v60 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
          ExReleaseResourceAndLeaveCriticalRegion(*v60);
          HMUnlockObject(*(_QWORD *)v50);
          tagDomLock::LockExclusive((tagDomLock *)v60);
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
      v54 = PsGetCurrentThreadWin32Thread(v3);
      v70 = v54;
      if ( v54 && (*(int *)(v54 + 24) > 0 || *(_DWORD *)(v70 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v63 = ActivityId_4;
          v75 = 4LL;
          v74 = &v63;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId_8,
            0LL,
            3u,
            &v73);
        }
      }
    }
    else
    {
      v70 = 0LL;
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v70);
    v13 = PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo(Instance, v15, 1LL);
      *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0245748 - 1) > 2u
        && (qword_1C0245730 & 0x200000010000000LL) != 0
        && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v17,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v18,
          v15,
          0,
          (char)gullUserCritAcquireToken);
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
            (char)gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
  }
  KeyboardLayout = GetKeyboardLayout(v2);
  UserSessionSwitchLeaveCrit(v20);
  return KeyboardLayout;
}
