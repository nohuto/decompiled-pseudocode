/*
 * XREFs of DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010CB0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0011AC0 (GreLockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0011BC0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkEngAcquireWin32kAndPDEVLocks(__int64 a1, unsigned int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v14; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v16; // ecx
  int v17; // r8d
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+38h] [rbp-29h] BYREF
  __int64 v27; // [rsp+40h] [rbp-21h] BYREF
  __int64 v28; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int8 v29; // [rsp+50h] [rbp-11h]
  GUID ActivityId; // [rsp+54h] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+68h] [rbp+7h] BYREF
  int *v32; // [rsp+88h] [rbp+27h]
  int v33; // [rsp+90h] [rbp+2Fh]
  int v34; // [rsp+94h] [rbp+33h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v29 = 0;
    v23 = PsGetCurrentThreadWin32Thread();
    v28 = v23;
    if ( v23 && (*(int *)(v23 + 24) > 0 || *(_DWORD *)(v28 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v24, v25) )
        {
          v34 = 0;
          v26 = v29;
          v33 = 4;
          v32 = &v26;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&ActivityId, 0, 3u, &v31);
        }
      }
    }
  }
  else
  {
    v28 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v28);
  v12 = PsGetCurrentThreadWin32Thread();
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v14, 1LL);
    *(LARGE_INTEGER *)(v12 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v16,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v17,
        v14,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v14 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v17,
          v14,
          1000000 * v14 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  for ( i = 0LL; ; i = v20 )
  {
    result = hdevEnumerate(i);
    v20 = result;
    if ( !result )
      break;
    v27 = result;
    v21 = *(_QWORD *)(result + 2576);
    if ( v21 )
    {
      v22 = *(_DWORD *)(v20 + 40);
      if ( (v22 & 0x400) == 0 && (v22 & 0x20000) == 0 && *(_QWORD *)(v21 + 240) == a1 && *(_DWORD *)(v21 + 256) < a2 )
      {
        GreLockDisplayDevice(v20);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v27,
          (struct _SURFOBJ *)((*(_QWORD *)(v20 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v20 + 2552) >> 64)),
          0LL,
          0xEu);
      }
    }
  }
  return result;
}
