/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C0145A40
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C01456F0 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
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
  __int64 v18; // rcx
  __int64 v19; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v21; // rbx
  struct UserCritTelemetry *Instance; // rax
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // rcx
  int v26; // ebx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-81h]
  int v29; // [rsp+30h] [rbp-71h] BYREF
  __int128 v30; // [rsp+38h] [rbp-69h] BYREF
  __int128 v31; // [rsp+48h] [rbp-59h]
  __int128 v32; // [rsp+58h] [rbp-49h]
  __int64 v33; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int8 v34; // [rsp+70h] [rbp-31h]
  GUID ActivityId; // [rsp+74h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+88h] [rbp-19h] BYREF
  int *v37; // [rsp+A8h] [rbp+7h]
  __int64 v38; // [rsp+B0h] [rbp+Fh]

  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v34 = 0;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v33 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v33 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v29 = v34;
        v38 = 4LL;
        v37 = &v29;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v36);
      }
    }
  }
  else
  {
    v33 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v33);
  v19 = PsGetCurrentThreadWin32Thread(v18);
  if ( v19 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v21, 1);
    *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(Timeout) = 0;
      McTemplateK0xqx_EtwWriteTransfer(v23, &AcquiredSharedUserCritEvent, v24, v21, Timeout, gullUserCritAcquireToken);
    }
    if ( v21 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(Timeout) = 1000000 * v21 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          (__int64)gullUserCritAcquireToken,
          &AcquiredSharedUserCritTelemetryEvent,
          v24,
          v21,
          Timeout,
          gullUserCritAcquireToken);
      }
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v19 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  *(_QWORD *)&v30 = PsGetProcessWin32Process(a5);
  if ( (_QWORD)v30 )
  {
    *((_QWORD *)&v30 + 1) = 0LL;
    LODWORD(v31) = 0;
    *((_QWORD *)&v31 + 1) = a1;
    *(_QWORD *)&v32 = a2;
    *((_QWORD *)&v32 + 1) = a3;
    v26 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v30);
  }
  else
  {
    v26 = -1073741811;
  }
  if ( v26 >= 0 )
    v26 = 0;
  UserSessionSwitchLeaveCrit(v25);
  return (unsigned int)v26;
}
