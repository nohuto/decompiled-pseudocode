/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C004F790
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C004F9B0 (InternalMapVirtualKeyEx.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     HKLtoPKL @ 0x1C0089F60 (HKLtoPKL.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v23; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v25; // ecx
  int v26; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-35h]
  __int64 v39; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int8 v40; // [rsp+40h] [rbp-29h]
  GUID ActivityId; // [rsp+44h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+58h] [rbp-11h] BYREF
  int *v43; // [rsp+78h] [rbp+Fh]
  __int64 v44; // [rsp+80h] [rbp+17h]

  v38 = a1;
  v7 = a1;
  v8 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v40 = 0;
    v34 = PsGetCurrentThreadWin32Thread(v9);
    v39 = v34;
    if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v39 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v35, v36) )
        {
          v37 = v40;
          v44 = 4LL;
          v43 = &v37;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&ActivityId, 0, 3u, &v42);
        }
      }
    }
  }
  else
  {
    v39 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v39, v16, v18, v19);
  v21 = PsGetCurrentThreadWin32Thread(v20);
  if ( v21 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v23 = PerformanceCounter.QuadPart - *(_QWORD *)(v21 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v23, 1);
    *(LARGE_INTEGER *)(v21 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v25,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v26,
        v23,
        0,
        gullUserCritAcquireToken);
    }
    if ( v23 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v26,
          v23,
          1000000 * v23 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    v7 = v38;
    *(_QWORD *)(v21 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a4 )
    v32 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v32 = *(_QWORD *)(ThreadWin32Thread + 440);
  if ( v32 )
    v8 = InternalMapVirtualKeyEx(v7, a2, *(_QWORD *)(*(_QWORD *)(v32 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return v8;
}
