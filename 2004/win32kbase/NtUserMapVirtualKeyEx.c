/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C0077150
 * Callers:
 *     <none>
 * Callees:
 *     HKLtoPKL @ 0x1C0019760 (HKLtoPKL.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     InternalMapVirtualKeyEx @ 0x1C0077600 (InternalMapVirtualKeyEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v11; // rdi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v21; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v23; // ecx
  int v24; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v29; // rax
  int v30; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-35h]
  __int64 v32; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int8 v33; // [rsp+40h] [rbp-29h]
  GUID ActivityId; // [rsp+44h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+58h] [rbp-11h] BYREF
  int *v36; // [rsp+78h] [rbp+Fh]
  __int64 v37; // [rsp+80h] [rbp+17h]

  v31 = a1;
  v7 = a1;
  v8 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v33 = 0;
    v29 = PsGetCurrentThreadWin32Thread(v9);
    v32 = v29;
    if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v32 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v30 = v33;
        v37 = 4LL;
        v36 = &v30;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v35);
      }
    }
  }
  else
  {
    v32 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v32);
  v19 = PsGetCurrentThreadWin32Thread(v18);
  if ( v19 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v21, 1LL);
    *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v23,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v24,
        v21,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v21 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v24,
          v21,
          1000000 * v21 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    v7 = v31;
    *(_QWORD *)(v19 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a4 )
    v27 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v27 = *(_QWORD *)(ThreadWin32Thread + 432);
  if ( v27 )
    v8 = InternalMapVirtualKeyEx(v7, a2, *(_QWORD *)(*(_QWORD *)(v27 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v26);
  return v8;
}
