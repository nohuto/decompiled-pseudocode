/*
 * XREFs of NtUserCheckProcessSession @ 0x1C0007170
 * Callers:
 *     <none>
 * Callees:
 *     _DwmCheckProcessSession @ 0x1C0007380 (_DwmCheckProcessSession.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserCheckProcessSession(unsigned int a1)
{
  __int64 v2; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // rdi
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v15; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v17; // r8d
  PVOID v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+30h] [rbp-29h] BYREF
  __int64 v27; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v28; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+58h] [rbp-1h] BYREF
  int *v31; // [rsp+78h] [rbp+1Fh]
  __int64 v32; // [rsp+80h] [rbp+27h]

  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v28 = 0;
    v23 = PsGetCurrentThreadWin32Thread();
    v27 = v23;
    if ( v23 && (*(int *)(v23 + 24) > 0 || *(_DWORD *)(v27 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v24, v25) )
        {
          v26 = v28;
          v32 = 4LL;
          v31 = &v26;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&ActivityId, 0, 3u, &v30);
        }
      }
    }
  }
  else
  {
    v27 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    _InterlockedAdd(&gcDITHitTestWaiters, 1u);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
  v13 = PsGetCurrentThreadWin32Thread();
  if ( v13 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v15, 1LL);
    v11 = 0x200000010000000LL;
    *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v12,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v17,
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
          v17,
          v15,
          1000000 * v15 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v18 = (PVOID)PsGetCurrentProcess(v12, v11);
  if ( v18 && v18 == g_pepDwm )
  {
    v22 = DwmCheckProcessSession(a1);
    if ( v22 >= 0 )
    {
      v2 = 1LL;
      goto LABEL_20;
    }
    v19 = RtlNtStatusToDosError(v22);
  }
  else
  {
    v19 = 5LL;
  }
  UserSetLastError(v19);
LABEL_20:
  UserSessionSwitchLeaveCrit(v20);
  return v2;
}
