/*
 * XREFs of DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0046DB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00B1200 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00B5170 (GreLockDisplayDevice.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkEngAcquireWin32kAndPDEVLocks(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v16; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v18; // ecx
  int v19; // r8d
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+38h] [rbp-29h] BYREF
  __int64 v29; // [rsp+40h] [rbp-21h] BYREF
  __int64 v30; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int8 v31; // [rsp+50h] [rbp-11h]
  GUID ActivityId; // [rsp+54h] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+68h] [rbp+7h] BYREF
  int *v34; // [rsp+88h] [rbp+27h]
  int v35; // [rsp+90h] [rbp+2Fh]
  int v36; // [rsp+94h] [rbp+33h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v31 = 0;
    v25 = PsGetCurrentThreadWin32Thread(v4);
    v30 = v25;
    if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v30 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v26, v27) )
        {
          v36 = 0;
          v28 = v31;
          v35 = 4;
          v34 = &v28;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v33);
        }
      }
    }
  }
  else
  {
    v30 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v30);
  v14 = PsGetCurrentThreadWin32Thread(v13);
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v16, 1LL);
    *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
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
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  for ( i = 0LL; ; i = v22 )
  {
    result = hdevEnumerate(i);
    v22 = result;
    if ( !result )
      break;
    v29 = result;
    v23 = *(_QWORD *)(result + 2576);
    if ( v23 )
    {
      v24 = *(_DWORD *)(v22 + 40);
      if ( (v24 & 0x400) == 0 && (v24 & 0x20000) == 0 && *(_QWORD *)(v23 + 240) == a1 && *(_DWORD *)(v23 + 256) < a2 )
      {
        GreLockDisplayDevice(v22);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v29,
          (struct _SURFOBJ *)((*(_QWORD *)(v22 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v22 + 2552) >> 64)),
          0LL,
          0xEu);
      }
    }
  }
  return result;
}
