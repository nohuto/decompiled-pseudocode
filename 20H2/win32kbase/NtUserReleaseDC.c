/*
 * XREFs of NtUserReleaseDC @ 0x1C004AE20
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // r8d
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v13; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _BOOL8 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  int v29; // eax
  int v30; // [rsp+38h] [rbp-39h] BYREF
  __int64 v31; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int8 v32; // [rsp+48h] [rbp-29h]
  GUID ActivityId; // [rsp+4Ch] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp-11h] BYREF
  int *v35; // [rsp+80h] [rbp+Fh]
  __int64 v36; // [rsp+88h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+90h] [rbp+1Fh] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v32 = 0;
    v22 = PsGetCurrentThreadWin32Thread();
    v31 = v22;
    if ( v22 && (*(int *)(v22 + 24) > 0 || *(_DWORD *)(v31 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v23, v24) )
        {
          v30 = v32;
          v36 = 4LL;
          v35 = &v30;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&ActivityId, 0, 3u, &v34);
        }
      }
    }
  }
  else
  {
    v31 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v31);
  v10 = PsGetCurrentThreadWin32Thread();
  if ( v10 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v10 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v13, 1LL);
    *(LARGE_INTEGER *)(v10 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v15,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v11,
        v13,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v13 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v11,
          v13,
          1000000 * v13 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v18 = (unsigned int)ReleaseCacheDC(a1, 0LL, v11) != 2;
  v20 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0250B48 )
    qword_1C0250B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v20, v19);
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v25 = PsGetCurrentThreadWin32Thread();
    v28 = v25;
    if ( v25 )
    {
      v29 = *(_DWORD *)(v25 + 24);
      if ( (*(_DWORD *)(v28 + 44) || *(_DWORD *)(v28 + 48) || v29 > 0)
        && (unsigned int)dword_1C0244A70 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v26, v27) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E11, v28 + 28, 0, 2u, &v37);
      }
      *(_DWORD *)(v28 + 44) = 0;
      *(_OWORD *)(v28 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v18;
}
