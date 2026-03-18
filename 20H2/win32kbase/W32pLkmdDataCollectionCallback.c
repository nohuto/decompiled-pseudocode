/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C013D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C013D050 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v23; // rbx
  struct UserCritTelemetry *Instance; // rax
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ebx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-81h]
  int v34; // [rsp+30h] [rbp-71h] BYREF
  __int128 v35; // [rsp+38h] [rbp-69h] BYREF
  __int128 v36; // [rsp+48h] [rbp-59h]
  __int128 v37; // [rsp+58h] [rbp-49h]
  __int64 v38; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int8 v39; // [rsp+70h] [rbp-31h]
  GUID ActivityId; // [rsp+74h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+88h] [rbp-19h] BYREF
  int *v42; // [rsp+A8h] [rbp+7h]
  __int64 v43; // [rsp+B0h] [rbp+Fh]

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v39 = 0;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v38 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v38 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v34 = v39;
        v43 = 4LL;
        v42 = &v34;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v41);
      }
    }
  }
  else
  {
    v38 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v38, v16, v18, v19);
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
      LODWORD(Timeout) = 0;
      McTemplateK0xqx_EtwWriteTransfer(v25, &AcquiredSharedUserCritEvent, v26, v23, Timeout, gullUserCritAcquireToken);
    }
    if ( v23 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(Timeout) = 1000000 * v23 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          (__int64)gullUserCritAcquireToken,
          &AcquiredSharedUserCritTelemetryEvent,
          v26,
          v23,
          Timeout,
          gullUserCritAcquireToken);
      }
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v21 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  *(_QWORD *)&v35 = PsGetProcessWin32Process(a5);
  if ( (_QWORD)v35 )
  {
    *((_QWORD *)&v35 + 1) = 0LL;
    LODWORD(v36) = 0;
    *((_QWORD *)&v36 + 1) = a1;
    *(_QWORD *)&v37 = a2;
    *((_QWORD *)&v37 + 1) = a3;
    v31 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v35);
  }
  else
  {
    v31 = -1073741811;
  }
  if ( v31 >= 0 )
    v31 = 0;
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  return (unsigned int)v31;
}
