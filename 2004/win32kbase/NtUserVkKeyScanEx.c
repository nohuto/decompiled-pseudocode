/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C0018D10
 * Callers:
 *     <none>
 * Callees:
 *     InternalVkKeyScanEx @ 0x1C0018F30 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C0019760 (HKLtoPKL.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v16; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v18; // ecx
  int v19; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int16 v23; // bx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+30h] [rbp-29h] BYREF
  __int64 v29; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v30; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+58h] [rbp-1h] BYREF
  int *v33; // [rsp+78h] [rbp+1Fh]
  int v34; // [rsp+80h] [rbp+27h]
  int v35; // [rsp+84h] [rbp+2Bh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v30 = 0;
    v25 = PsGetCurrentThreadWin32Thread();
    v29 = v25;
    if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v29 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v26, v27) )
        {
          v35 = 0;
          v28 = v30;
          v34 = 4;
          v33 = &v28;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&ActivityId, 0, 3u, &v32);
        }
      }
    }
  }
  else
  {
    v29 = 0LL;
  }
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
  v14 = PsGetCurrentThreadWin32Thread();
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v16, 1LL);
    *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v18,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v19,
        v16,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v16 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v19,
          v16,
          1000000 * v16 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a3 )
    v22 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v22 = *(_QWORD *)(ThreadWin32Thread + 432);
  if ( v22 )
    v23 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v22 + 48) + 32LL));
  else
    v23 = -1;
  UserSessionSwitchLeaveCrit(v21);
  return v23;
}
