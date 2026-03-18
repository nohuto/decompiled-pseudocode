/*
 * XREFs of NtUserGetDC @ 0x1C0090AC0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 *     GreSelectVisRgn @ 0x1C0092430 (GreSelectVisRgn.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetDC(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rbp
  LONGLONG v16; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v18; // r8d
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  __int64 v21; // r9
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v27; // rcx
  __int64 DCEx; // rdi
  __int64 v29; // r8
  __int64 *v31; // rcx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rdi
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 v40; // rcx
  __int64 CurrentThreadProcess; // rax
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rbx
  int v47; // eax
  int v48; // [rsp+30h] [rbp-98h] BYREF
  __int64 v49; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 v50; // [rsp+40h] [rbp-88h]
  GUID ActivityId; // [rsp+44h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+58h] [rbp-70h] BYREF
  int *v53; // [rsp+78h] [rbp-50h]
  __int64 v54; // [rsp+80h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+88h] [rbp-40h] BYREF

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v50 = 0;
    v37 = PsGetCurrentThreadWin32Thread(v3);
    v49 = v37;
    if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v49 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v48 = v50;
        v54 = 4LL;
        v53 = &v48;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v52);
      }
    }
  }
  else
  {
    v49 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v49);
  v14 = PsGetCurrentThreadWin32Thread(v12);
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v16, 1LL);
    *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0245748 - 1) > 2u
      && (qword_1C0245730 & 0x200000010000000LL) != 0
      && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v13,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v18,
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
          v18,
          v16,
          1000000 * v16 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  if ( a1 )
  {
    v20 = (_QWORD *)ValidateHwndEx(a1, 1LL);
    if ( !v20 )
    {
      DCEx = 0LL;
      goto LABEL_24;
    }
  }
  else
  {
    v20 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v38 = PsGetCurrentProcess(v25, v24),
        ProcessSessionId = PsGetProcessSessionIdEx(v38),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v40),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v23 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v23 + 480) & 0x20000000) != 0 )
  {
    v27 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 768LL)
                          + 24LL);
    if ( (v27 & 1) != 0 )
    {
      if ( !v20 )
      {
        v31 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                          + 24LL);
        if ( v31 )
          v32 = *v31;
        else
          v32 = 0LL;
        if ( !ValidateHwndEx(v32, 1LL) )
          v2 = 0;
        goto LABEL_38;
      }
LABEL_23:
      DCEx = GetDCEx(v20, 0LL, 0x10000u);
      goto LABEL_24;
    }
  }
  if ( v20 )
    goto LABEL_23;
LABEL_38:
  v33 = KeGetCurrentThread();
  v34 = 0LL;
  if ( !IsThreadCrossSessionAttached(v27) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v33);
    if ( v35 )
      v34 = *v35;
  }
  v36 = *(_QWORD *)(v34 + 448);
  if ( v36 )
    DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v36 + 8) + 24LL), 0LL, 3u);
  else
    DCEx = 0LL;
  if ( !v2 )
  {
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    GreSelectVisRgn(DCEx, RectRgnIndirect, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v43, v44);
  }
LABEL_24:
  v29 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0252B48 )
    qword_1C0252B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v19, v29, v21);
    v13 = (unsigned int)gdwInAtomicOperation;
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
    v45 = PsGetCurrentThreadWin32Thread(v13);
    v46 = v45;
    if ( v45 )
    {
      v47 = *(_DWORD *)(v45 + 24);
      if ( (*(_DWORD *)(v46 + 44) || *(_DWORD *)(v46 + 48) || v47 > 0)
        && (unsigned int)dword_1C0246A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E11,
          (const GUID *)(v46 + 28),
          0LL,
          2u,
          &v55);
      }
      *(_DWORD *)(v46 + 44) = 0;
      *(_OWORD *)(v46 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
