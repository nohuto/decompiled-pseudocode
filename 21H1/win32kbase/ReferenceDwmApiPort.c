/*
 * XREFs of ReferenceDwmApiPort @ 0x1C00ADB00
 * Callers:
 *     SetConnectCompletedState @ 0x1C0057490 (SetConnectCompletedState.c)
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C00ADA60 (UserNotifyDisplayChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

PVOID ReferenceDwmApiPort()
{
  PVOID v0; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v17; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v19; // r8d
  int v20; // [rsp+38h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp-1h] BYREF
  unsigned __int8 v22; // [rsp+48h] [rbp+7h]
  GUID ActivityId; // [rsp+4Ch] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp+1Fh] BYREF
  int *v25; // [rsp+80h] [rbp+3Fh]
  int v26; // [rsp+88h] [rbp+47h]
  int v27; // [rsp+8Ch] [rbp+4Bh]

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 || ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v22 = 0;
      v5 = PsGetCurrentThreadWin32Thread(v3);
      v21 = v5;
      if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v21 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v27 = 0;
          v20 = v22;
          v26 = 4;
          v25 = &v20;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v24);
        }
      }
    }
    else
    {
      v21 = 0LL;
    }
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v7 )
        v6 = *v7;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v6 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v21);
    v15 = PsGetCurrentThreadWin32Thread(v13);
    if ( v15 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v17 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v17, 1);
      *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C024B738 - 1) > 2u
        && (qword_1C024B720 & 0x200000010000000LL) != 0
        && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v14,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v19,
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
            v19,
            v17,
            1000000 * v17 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
    UserSessionSwitchLeaveCrit(v14);
  }
  return v0;
}
