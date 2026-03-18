/*
 * XREFs of NtUserGetKeyboardLayout @ 0x1C006EE80
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     _GetKeyboardLayout @ 0x1C006F290 (_GetKeyboardLayout.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v37; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct tagKERNELHANDLETABLEENTRY *v41; // r14
  __int64 v42; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  int v51; // [rsp+38h] [rbp-D0h] BYREF
  int v52; // [rsp+3Ch] [rbp-CCh] BYREF
  int v53; // [rsp+40h] [rbp-C8h] BYREF
  int v54; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v56; // [rsp+50h] [rbp-B8h]
  GUID v57; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v58; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 ActivityId_4; // [rsp+70h] [rbp-98h]
  GUID ActivityId_8; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+88h] [rbp-80h] BYREF
  int *v62; // [rsp+A8h] [rbp-60h]
  __int64 v63; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+B8h] [rbp-50h] BYREF
  int *v65; // [rsp+D8h] [rbp-30h]
  __int64 v66; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+E8h] [rbp-20h] BYREF
  int *v68; // [rsp+108h] [rbp+0h]
  int v69; // [rsp+110h] [rbp+8h]
  int v70; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+118h] [rbp+10h] BYREF
  int *v72; // [rsp+138h] [rbp+30h]
  int v73; // [rsp+140h] [rbp+38h]
  int v74; // [rsp+144h] [rbp+3Ch]

  v1 = 0LL;
  v2 = a1;
  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v57 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v56 = 1;
      v46 = PsGetCurrentThreadWin32Thread(v22);
      v55 = v46;
      if ( v46 && (*(int *)(v46 + 24) > 0 || *(_DWORD *)(v55 + 48)) )
      {
        EtwActivityIdControl(3u, &v57);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v52 = v56;
          v66 = 4LL;
          v65 = &v52;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &v57,
            0LL,
            3u,
            &v64);
        }
      }
    }
    else
    {
      v55 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v55 && (*(_DWORD *)(v55 + 48) || *(int *)(v55 + 24) > 0) )
    {
      *(_DWORD *)(v55 + 44) = 1;
      *(GUID *)(v55 + 28) = v57;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v70 = 0;
          v53 = v56;
          v69 = 4;
          v68 = &v53;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v57,
            0LL,
            3u,
            &v67);
          v47 = dword_1C024C960;
        }
        if ( v47 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v74 = 0;
          v54 = v56;
          v73 = 4;
          v72 = &v54;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v57,
            0LL,
            3u,
            &v71);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v1;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v42 = PsGetCurrentProcess(v31, v30),
          ProcessSessionId = PsGetProcessSessionIdEx(v42),
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
        && (*(_DWORD *)(v33 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v41 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v48 = *(_QWORD *)v41;
          *((_QWORD *)v41 + 2) = 0LL;
          if ( !*(_DWORD *)(v48 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
          v50 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v50 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v49);
          ExReleaseResourceAndLeaveCriticalRegion(*v50);
          HMUnlockObject(*(_QWORD *)v41);
          tagDomLock::LockExclusive(v50);
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
      v45 = PsGetCurrentThreadWin32Thread(v3);
      v58 = v45;
      if ( v45 && (*(int *)(v45 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v51 = ActivityId_4;
          v63 = 4LL;
          v62 = &v51;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
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
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v58);
    v13 = PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo(Instance, v15, 1LL);
      *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C024B738 - 1) > 2u
        && (qword_1C024B720 & 0x200000010000000LL) != 0
        && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
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
