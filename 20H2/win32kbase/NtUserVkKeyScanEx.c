/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C0089510
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     InternalVkKeyScanEx @ 0x1C0089730 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C0089F60 (HKLtoPKL.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v20; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v22; // ecx
  int v23; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int16 v30; // bx
  __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-29h] BYREF
  __int64 v34; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v35; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+58h] [rbp-1h] BYREF
  int *v38; // [rsp+78h] [rbp+1Fh]
  int v39; // [rsp+80h] [rbp+27h]
  int v40; // [rsp+84h] [rbp+2Bh]

  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v35 = 0;
    v32 = PsGetCurrentThreadWin32Thread(v6);
    v34 = v32;
    if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v34 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v40 = 0;
        v33 = v35;
        v39 = 4;
        v38 = &v33;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v37);
      }
    }
  }
  else
  {
    v34 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v34, v13, v15, v16);
  v18 = PsGetCurrentThreadWin32Thread(v17);
  if ( v18 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v20 = PerformanceCounter.QuadPart - *(_QWORD *)(v18 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v20, 1);
    *(LARGE_INTEGER *)(v18 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v22,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v23,
        v20,
        0,
        gullUserCritAcquireToken);
    }
    if ( v20 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v23,
          v20,
          1000000 * v20 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v18 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 )
    v29 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v29 = *(_QWORD *)(ThreadWin32Thread + 440);
  if ( v29 )
    v30 = InternalVkKeyScanEx(v5, *(_QWORD *)(*(_QWORD *)(v29 + 48) + 32LL));
  else
    v30 = -1;
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v30;
}
