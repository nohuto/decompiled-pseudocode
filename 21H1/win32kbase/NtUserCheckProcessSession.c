/*
 * XREFs of NtUserCheckProcessSession @ 0x1C0038170
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _DwmCheckProcessSession @ 0x1C0038380 (_DwmCheckProcessSession.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserCheckProcessSession(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rbx
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // rdi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v17; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v19; // r8d
  PVOID v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+30h] [rbp-29h] BYREF
  __int64 v29; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v30; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+58h] [rbp-1h] BYREF
  int *v33; // [rsp+78h] [rbp+1Fh]
  __int64 v34; // [rsp+80h] [rbp+27h]

  v1 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v30 = 0;
    v25 = PsGetCurrentThreadWin32Thread(v3);
    v29 = v25;
    if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v29 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v26, v27) )
        {
          v28 = v30;
          v34 = 4LL;
          v33 = &v28;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v32);
        }
      }
    }
  }
  else
  {
    v29 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    _InterlockedAdd(&gcDITHitTestWaiters, 1u);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
  v15 = PsGetCurrentThreadWin32Thread(v12);
  if ( v15 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v17 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v17, 1LL);
    v13 = 0x200000010000000LL;
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
        (char)gullUserCritAcquireToken);
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
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v20 = (PVOID)PsGetCurrentProcess(v14, v13);
  if ( v20 && v20 == g_pepDwm )
  {
    v24 = DwmCheckProcessSession(v1);
    if ( v24 >= 0 )
    {
      v2 = 1LL;
      goto LABEL_20;
    }
    v21 = RtlNtStatusToDosError(v24);
  }
  else
  {
    v21 = 5LL;
  }
  UserSetLastError(v21);
LABEL_20:
  UserSessionSwitchLeaveCrit(v22);
  return v2;
}
