/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C01364D0
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C001B650 (PtiFromThreadId.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C003D220 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
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
  __int64 v13; // rcx
  __int64 v14; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v16; // rbx
  struct UserCritTelemetry *Instance; // rax
  __int64 v18; // rcx
  int v19; // r8d
  CInputThread *v20; // rsi
  unsigned int CurrentThreadId; // eax
  int v22; // ebx
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-39h]
  int v30; // [rsp+30h] [rbp-29h] BYREF
  __int64 v31; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int8 v32; // [rsp+40h] [rbp-19h]
  GUID ActivityId; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+58h] [rbp-1h] BYREF
  int *v35; // [rsp+78h] [rbp+1Fh]
  __int64 v36; // [rsp+80h] [rbp+27h]

  v1 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v32 = 0;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v31 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v31 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v30 = v32;
        v36 = 4LL;
        v35 = &v30;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v34);
      }
    }
  }
  else
  {
    v31 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v31);
  v14 = PsGetCurrentThreadWin32Thread(v13);
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v16, 1);
    *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(Timeout) = 0;
      McTemplateK0xqx_EtwWriteTransfer(v18, &AcquiredSharedUserCritEvent, v19, v16, Timeout, gullUserCritAcquireToken);
    }
    if ( v16 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(Timeout) = 1000000 * v16 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          (__int64)gullUserCritAcquireToken,
          &AcquiredSharedUserCritTelemetryEvent,
          v19,
          v16,
          Timeout,
          gullUserCritAcquireToken);
      }
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v20 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v20, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v22 = *((_DWORD *)v20 + 10);
  v23 = CurrentThreadId;
  ExReleasePushLockSharedEx(v20, 0LL);
  KeLeaveCriticalRegion();
  if ( v23 == v22 )
  {
    v27 = (struct tagTHREADINFO *)PtiFromThreadId(v1);
    if ( v27 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v27, 0);
      v2 = 1LL;
      goto LABEL_40;
    }
    v25 = 87LL;
  }
  else
  {
    v25 = 5LL;
  }
  UserSetLastError(v25, v24);
LABEL_40:
  UserSessionSwitchLeaveCrit(v26);
  return v2;
}
