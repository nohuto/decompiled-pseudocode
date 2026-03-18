/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C0045EF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  unsigned int v0; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v2; // rdi
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v12; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+38h] [rbp-9h] BYREF
  __int64 v22; // [rsp+40h] [rbp-1h] BYREF
  unsigned __int8 v23; // [rsp+48h] [rbp+7h]
  GUID ActivityId; // [rsp+4Ch] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp+1Fh] BYREF
  int *v26; // [rsp+80h] [rbp+3Fh]
  __int64 v27; // [rsp+88h] [rbp+47h]

  v0 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v23 = 0;
    v18 = PsGetCurrentThreadWin32Thread();
    v22 = v18;
    if ( v18 && (*(int *)(v18 + 24) > 0 || *(_DWORD *)(v22 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v19, v20) )
        {
          v21 = v23;
          v27 = 4LL;
          v26 = &v21;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v25);
        }
      }
    }
  }
  else
  {
    v22 = 0LL;
  }
  v2 = 0LL;
  while ( 1 )
  {
    v3 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v3 )
      v2 = *v3;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v22);
  v10 = PsGetCurrentThreadWin32Thread();
  if ( v10 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = PerformanceCounter.QuadPart - *(_QWORD *)(v10 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v12, 1LL);
    *(LARGE_INTEGER *)(v10 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v9,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v14,
        v12,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v12 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v14,
          v12,
          1000000 * v12 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  if ( *(PVOID *)PsGetCurrentProcessWin32Process(v9) == gpepCSRSS
    || (!qword_1C02529B0 ? (v16 = 0) : (v16 = qword_1C02529B0(2LL)), v16) )
  {
    v0 = gdtDblClk;
  }
  UserSessionSwitchLeaveCrit(v15);
  return v0;
}
