/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1C00369E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GetCursorUpdateHandle @ 0x1C0036C54 (GetCursorUpdateHandle.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtMITGetCursorUpdateHandle(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v13; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v15; // ecx
  int v16; // r8d
  CInputThread *v17; // rsi
  unsigned int CurrentThreadId; // eax
  int v19; // ebx
  unsigned int v20; // edi
  CInputThread *v21; // rdi
  int v22; // ebx
  __int64 v23; // rcx
  __int64 CursorUpdateHandle; // rbx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+38h] [rbp-9h] BYREF
  __int64 v30; // [rsp+40h] [rbp-1h] BYREF
  unsigned __int8 v31; // [rsp+48h] [rbp+7h]
  GUID ActivityId; // [rsp+4Ch] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+60h] [rbp+1Fh] BYREF
  int *v34; // [rsp+80h] [rbp+3Fh]
  int v35; // [rsp+88h] [rbp+47h]
  int v36; // [rsp+8Ch] [rbp+4Bh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v31 = 0;
    v26 = PsGetCurrentThreadWin32Thread(v1);
    v30 = v26;
    if ( v26 && (*(int *)(v26 + 24) > 0 || *(_DWORD *)(v30 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v27, v28) )
        {
          v36 = 0;
          v29 = v31;
          v35 = 4;
          v34 = &v29;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v30);
  v11 = PsGetCurrentThreadWin32Thread(v10);
  if ( v11 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v13, 1LL);
    *(LARGE_INTEGER *)(v11 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v15,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v16,
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
          v16,
          v13,
          1000000 * v13 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v17 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v17, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v19 = *((_DWORD *)v17 + 10);
  v20 = CurrentThreadId;
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 != v19
    || (v21 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v21, 0LL),
        v22 = *((_DWORD *)v21 + 4),
        ExReleasePushLockSharedEx(v21, 0LL),
        KeLeaveCriticalRegion(),
        v22 == 2) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5LL);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCrit(v23);
  return CursorUpdateHandle;
}
