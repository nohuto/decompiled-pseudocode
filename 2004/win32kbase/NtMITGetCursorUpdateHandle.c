/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1C00059E0
 * Callers:
 *     <none>
 * Callees:
 *     GetCursorUpdateHandle @ 0x1C0005C54 (GetCursorUpdateHandle.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 NtMITGetCursorUpdateHandle()
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  struct tagTHREADINFO **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v10; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v12; // ecx
  int v13; // r8d
  CInputThread *v14; // rsi
  unsigned int CurrentThreadId; // eax
  int v16; // ebx
  unsigned int v17; // edi
  CInputThread *v18; // rdi
  int v19; // ebx
  __int64 v20; // rcx
  __int64 CursorUpdateHandle; // rbx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+38h] [rbp-9h] BYREF
  __int64 v27; // [rsp+40h] [rbp-1h] BYREF
  unsigned __int8 v28; // [rsp+48h] [rbp+7h]
  GUID ActivityId; // [rsp+4Ch] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+60h] [rbp+1Fh] BYREF
  int *v31; // [rsp+80h] [rbp+3Fh]
  int v32; // [rsp+88h] [rbp+47h]
  int v33; // [rsp+8Ch] [rbp+4Bh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v28 = 0;
    v23 = PsGetCurrentThreadWin32Thread();
    v27 = v23;
    if ( v23 && (*(int *)(v23 + 24) > 0 || *(_DWORD *)(v27 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v24, v25) )
        {
          v33 = 0;
          v26 = v28;
          v32 = 4;
          v31 = &v26;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&ActivityId, 0, 3u, &v30);
        }
      }
    }
  }
  else
  {
    v27 = 0LL;
  }
  v1 = 0LL;
  while ( 1 )
  {
    v2 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v2 )
      v1 = *v2;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v1 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
  v8 = PsGetCurrentThreadWin32Thread();
  if ( v8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = PerformanceCounter.QuadPart - *(_QWORD *)(v8 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v10, 1LL);
    *(LARGE_INTEGER *)(v8 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v12,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v13,
        v10,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v10 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v13,
          v10,
          1000000 * v10 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v14 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v14, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v16 = *((_DWORD *)v14 + 10);
  v17 = CurrentThreadId;
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( v17 != v16
    || (v18 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v18, 0LL),
        v19 = *((_DWORD *)v18 + 4),
        ExReleasePushLockSharedEx(v18, 0LL),
        KeLeaveCriticalRegion(),
        v19 == 2) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5LL);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCrit(v20);
  return CursorUpdateHandle;
}
