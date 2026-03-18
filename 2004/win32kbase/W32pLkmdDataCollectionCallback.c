/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C013F6F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C013F3A0 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ebx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-81h]
  int v32; // [rsp+30h] [rbp-71h] BYREF
  __int128 v33; // [rsp+38h] [rbp-69h] BYREF
  __int128 v34; // [rsp+48h] [rbp-59h]
  __int128 v35; // [rsp+58h] [rbp-49h]
  __int64 v36; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int8 v37; // [rsp+70h] [rbp-31h]
  GUID ActivityId; // [rsp+74h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+88h] [rbp-19h] BYREF
  int *v40; // [rsp+A8h] [rbp+7h]
  __int64 v41; // [rsp+B0h] [rbp+Fh]

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v37 = 0;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v36 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v32 = v37;
        v41 = 4LL;
        v40 = &v32;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v39);
      }
    }
  }
  else
  {
    v36 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v36);
  v19 = PsGetCurrentThreadWin32Thread(v18);
  if ( v19 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v21, 1);
    *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
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
  *(_QWORD *)&v33 = PsGetProcessWin32Process(a5);
  if ( (_QWORD)v33 )
  {
    *((_QWORD *)&v33 + 1) = 0LL;
    LODWORD(v34) = 0;
    *((_QWORD *)&v34 + 1) = a1;
    *(_QWORD *)&v35 = a2;
    *((_QWORD *)&v35 + 1) = a3;
    v29 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v33);
  }
  else
  {
    v29 = -1073741811;
  }
  if ( v29 >= 0 )
    v29 = 0;
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return (unsigned int)v29;
}
