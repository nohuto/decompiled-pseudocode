/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C012E190
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PtiFromThreadId @ 0x1C0094E10 (PtiFromThreadId.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00AB6A0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v18; // rbx
  struct UserCritTelemetry *Instance; // rax
  __int64 v20; // rcx
  int v21; // r8d
  CInputThread *v22; // rsi
  unsigned int CurrentThreadId; // eax
  int v24; // ebx
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct tagTHREADINFO *v32; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-39h]
  int v35; // [rsp+30h] [rbp-29h] BYREF
  __int64 v36; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v37; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+58h] [rbp-1h] BYREF
  int *v40; // [rsp+78h] [rbp+1Fh]
  __int64 v41; // [rsp+80h] [rbp+27h]

  v1 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v37 = 0;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v36 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v35 = v37;
        v41 = 4LL;
        v40 = &v35;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
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
    _InterlockedAdd(&gcDITHitTestWaiters, 1u);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v36, v11, v13, v14);
  v16 = PsGetCurrentThreadWin32Thread(v15);
  if ( v16 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = PerformanceCounter.QuadPart - *(_QWORD *)(v16 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v18, 1);
    *(LARGE_INTEGER *)(v16 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(Timeout) = 0;
      McTemplateK0xqx_EtwWriteTransfer(v20, &AcquiredSharedUserCritEvent, v21, v18, Timeout, gullUserCritAcquireToken);
    }
    if ( v18 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(Timeout) = 1000000 * v18 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          (__int64)gullUserCritAcquireToken,
          &AcquiredSharedUserCritTelemetryEvent,
          v21,
          v18,
          Timeout,
          gullUserCritAcquireToken);
      }
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v22 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v22, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v24 = *((_DWORD *)v22 + 10);
  v25 = CurrentThreadId;
  ExReleasePushLockSharedEx(v22, 0LL);
  KeLeaveCriticalRegion();
  if ( v25 == v24 )
  {
    v32 = (struct tagTHREADINFO *)PtiFromThreadId(v1);
    if ( v32 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v32, 0);
      v2 = 1LL;
      goto LABEL_40;
    }
    v27 = 87LL;
  }
  else
  {
    v27 = 5LL;
  }
  UserSetLastError(v27, v26);
LABEL_40:
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return v2;
}
