/*
 * XREFs of UserReleaseDC @ 0x1C0078DA0
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1)
{
  unsigned int v2; // ebx
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
  __int64 v13; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v15; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v21; // rax
  int v22; // [rsp+38h] [rbp-19h] BYREF
  __int64 v23; // [rsp+40h] [rbp-11h] BYREF
  unsigned __int8 v24; // [rsp+48h] [rbp-9h]
  GUID ActivityId; // [rsp+4Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+60h] [rbp+Fh] BYREF
  int *v27; // [rsp+80h] [rbp+2Fh]
  __int64 v28; // [rsp+88h] [rbp+37h]

  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v24 = 0;
    v21 = PsGetCurrentThreadWin32Thread(v3);
    v23 = v21;
    if ( v21 && (*(int *)(v21 + 24) > 0 || *(_DWORD *)(v23 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v22 = v24;
        v28 = 4LL;
        v27 = &v22;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v26);
      }
    }
  }
  else
  {
    v23 = 0LL;
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
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v23);
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
  LOBYTE(v2) = (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
  UserSessionSwitchLeaveCrit(v19);
  return v2;
}
