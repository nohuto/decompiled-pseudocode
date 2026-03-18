/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x1C0050790
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // rdi
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  LONGLONG v14; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v16; // r8d
  PVOID v17; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  NTSTATUS v27; // eax
  int v28; // [rsp+38h] [rbp-29h] BYREF
  PVOID Object; // [rsp+40h] [rbp-21h] BYREF
  __int64 v30; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int8 v31; // [rsp+50h] [rbp-11h]
  GUID ActivityId; // [rsp+54h] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+68h] [rbp+7h] BYREF
  int *v34; // [rsp+88h] [rbp+27h]
  int v35; // [rsp+90h] [rbp+2Fh]
  int v36; // [rsp+94h] [rbp+33h]

  CurrentThreadDpiAwarenessContext = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v31 = 0;
    v24 = PsGetCurrentThreadWin32Thread();
    v30 = v24;
    if ( v24 && (*(int *)(v24 + 24) > 0 || *(_DWORD *)(v30 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v25, v26) )
        {
          v36 = 0;
          v28 = v31;
          v35 = 4;
          v34 = &v28;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
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
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v30);
  v12 = PsGetCurrentThreadWin32Thread();
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v14, 1LL);
    *(LARGE_INTEGER *)(v12 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v11,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v16,
        v14,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v14 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          1000000 * v14 / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v16,
          v14,
          1000000 * v14 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v17 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    goto LABEL_18;
  }
  Object = 0LL;
  v27 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v17 = Object;
  if ( v27 < 0 )
  {
    UserSetLastError(87LL);
    goto LABEL_22;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v17);
LABEL_18:
    v20 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == PsGetCurrentProcessWin32Process(v19) )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v22, v21);
    }
    else if ( v20 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v20 + 280);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 24592;
    }
    goto LABEL_20;
  }
  UserSetLastError(87LL);
LABEL_20:
  if ( v17 )
    ObfDereferenceObject(v17);
LABEL_22:
  UserSessionSwitchLeaveCrit(v22);
  return CurrentThreadDpiAwarenessContext;
}
