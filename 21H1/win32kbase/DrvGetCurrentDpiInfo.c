/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1C002F614
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x1C002F580 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C002F7F0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserGetHDevFromMonitor @ 0x1C002F854 (UserGetHDevFromMonitor.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2)
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
  __int64 HDevFromMonitor; // rax
  __int64 v21; // rcx
  unsigned int CurrentDpiInfoFromHDev; // ebx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+30h] [rbp-29h] BYREF
  __int64 v28; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v29; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+58h] [rbp-1h] BYREF
  int *v32; // [rsp+78h] [rbp+1Fh]
  int v33; // [rsp+80h] [rbp+27h]
  int v34; // [rsp+84h] [rbp+2Bh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v29 = 0;
    v24 = PsGetCurrentThreadWin32Thread(v4);
    v28 = v24;
    if ( v24 && (*(int *)(v24 + 24) > 0 || *(_DWORD *)(v28 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v25, v26) )
        {
          v34 = 0;
          v27 = v29;
          v33 = 4;
          v32 = &v27;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v31);
        }
      }
    }
  }
  else
  {
    v28 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v28);
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
  HDevFromMonitor = UserGetHDevFromMonitor(a1);
  if ( HDevFromMonitor )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(HDevFromMonitor, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCrit(v21);
  return CurrentDpiInfoFromHDev;
}
