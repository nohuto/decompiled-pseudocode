/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C0058990
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     InternalVkKeyScanEx @ 0x1C0058BB0 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C00593E0 (HKLtoPKL.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v5; // r15
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v18; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v20; // ecx
  int v21; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // bx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // [rsp+30h] [rbp-29h] BYREF
  __int64 v31; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v32; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+58h] [rbp-1h] BYREF
  int *v35; // [rsp+78h] [rbp+1Fh]
  int v36; // [rsp+80h] [rbp+27h]
  int v37; // [rsp+84h] [rbp+2Bh]

  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v32 = 0;
    v27 = PsGetCurrentThreadWin32Thread(v6);
    v31 = v27;
    if ( v27 && (*(int *)(v27 + 24) > 0 || *(_DWORD *)(v31 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v28, v29) )
        {
          v37 = 0;
          v30 = v32;
          v36 = 4;
          v35 = &v30;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v34);
        }
      }
    }
  }
  else
  {
    v31 = 0LL;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v8 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v31);
  v16 = PsGetCurrentThreadWin32Thread(v15);
  if ( v16 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = PerformanceCounter.QuadPart - *(_QWORD *)(v16 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v18, 1LL);
    *(LARGE_INTEGER *)(v16 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v20,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v21,
        v18,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v18 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v21,
          v18,
          1000000 * v18 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a3 )
    v24 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v24 = *(_QWORD *)(ThreadWin32Thread + 432);
  if ( v24 )
    v25 = InternalVkKeyScanEx(v5, *(_QWORD *)(*(_QWORD *)(v24 + 48) + 32LL));
  else
    v25 = -1;
  UserSessionSwitchLeaveCrit(v23);
  return v25;
}
