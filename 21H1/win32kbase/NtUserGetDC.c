/*
 * XREFs of NtUserGetDC @ 0x1C0089A70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ValidateHwndEx @ 0x1C008BD80 (ValidateHwndEx.c)
 *     GreSelectVisRgn @ 0x1C008CC10 (GreSelectVisRgn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  _QWORD *v19; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v25; // rcx
  __int64 DCEx; // rdi
  __int64 *v28; // rcx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // rdi
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int ProcessSessionId; // ebx
  __int64 v37; // rcx
  __int64 CurrentThreadProcess; // rax
  struct HOBJ__ *RectRgnIndirect; // rbx
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // rbx
  int v46; // eax
  int v47; // [rsp+30h] [rbp-98h] BYREF
  __int64 v48; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 v49; // [rsp+40h] [rbp-88h]
  GUID ActivityId; // [rsp+44h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+58h] [rbp-70h] BYREF
  int *v52; // [rsp+78h] [rbp-50h]
  __int64 v53; // [rsp+80h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+88h] [rbp-40h] BYREF

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v49 = 0;
    v34 = PsGetCurrentThreadWin32Thread(v3);
    v48 = v34;
    if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v47 = v49;
        v53 = 4LL;
        v52 = &v47;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v51);
      }
    }
  }
  else
  {
    v48 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v48);
  v14 = PsGetCurrentThreadWin32Thread(v12);
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v16, 1LL);
    *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
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
    v19 = (_QWORD *)ValidateHwndEx(a1, 1LL);
    if ( !v19 )
    {
      DCEx = 0LL;
      goto LABEL_24;
    }
  }
  else
  {
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v35 = PsGetCurrentProcess(v23, v22),
        ProcessSessionId = PsGetProcessSessionIdEx(v35),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v37),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v21 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v21 + 480) & 0x20000000) != 0 )
  {
    v25 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 768LL)
                          + 24LL);
    if ( (v25 & 1) != 0 )
    {
      if ( !v19 )
      {
        v28 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                          + 24LL);
        if ( v28 )
          v29 = *v28;
        else
          v29 = 0LL;
        if ( !ValidateHwndEx(v29, 1LL) )
          v2 = 0;
        goto LABEL_38;
      }
LABEL_23:
      DCEx = GetDCEx(v19, 0LL, 0x10000u);
      goto LABEL_24;
    }
  }
  if ( v19 )
    goto LABEL_23;
LABEL_38:
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !IsThreadCrossSessionAttached(v25) )
  {
    v32 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v32 )
      v31 = *v32;
  }
  v33 = *(_QWORD *)(v31 + 448);
  if ( v33 )
    DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v33 + 8) + 24LL), 0LL, 3u);
  else
    DCEx = 0LL;
  if ( !v2 )
  {
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v40, v41);
    GreSelectVisRgn(DCEx, RectRgnIndirect, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v42, v43);
  }
LABEL_24:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0258B08 )
    qword_1C0258B08();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
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
    v44 = PsGetCurrentThreadWin32Thread(v13);
    v45 = v44;
    if ( v44 )
    {
      v46 = *(_DWORD *)(v44 + 24);
      if ( (*(_DWORD *)(v45 + 44) || *(_DWORD *)(v45 + 48) || v46 > 0)
        && (unsigned int)dword_1C024C960 > 6
        && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C0219981,
          (const GUID *)(v45 + 28),
          0LL,
          2u,
          &v54);
      }
      *(_DWORD *)(v45 + 44) = 0;
      *(_OWORD *)(v45 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
