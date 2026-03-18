/*
 * XREFs of NtUserGetDC @ 0x1C004AA70
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003DA50 (GreCreateRectRgnIndirect.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ValidateHwndEx @ 0x1C004C330 (ValidateHwndEx.c)
 *     GreSelectVisRgn @ 0x1C004C6C0 (GreSelectVisRgn.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetDC(__int64 a1)
{
  int v2; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rbp
  LONGLONG v13; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // r9
  __int64 DCEx; // rdi
  __int64 v28; // r8
  __int64 *v30; // rcx
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rdi
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  int v49; // eax
  int v50; // [rsp+30h] [rbp-98h] BYREF
  __int64 v51; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 v52; // [rsp+40h] [rbp-88h]
  GUID ActivityId; // [rsp+44h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+58h] [rbp-70h] BYREF
  int *v55; // [rsp+78h] [rbp-50h]
  __int64 v56; // [rsp+80h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+88h] [rbp-40h] BYREF

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v52 = 0;
    v36 = PsGetCurrentThreadWin32Thread();
    v51 = v36;
    if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v37, v38) )
        {
          v50 = v52;
          v56 = 4LL;
          v55 = &v50;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&ActivityId, 0, 3u, &v54);
        }
      }
    }
  }
  else
  {
    v51 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v51);
  v11 = PsGetCurrentThreadWin32Thread();
  if ( v11 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v13, 1LL);
    *(LARGE_INTEGER *)(v11 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
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
  if ( a1 )
  {
    v19 = (_QWORD *)ValidateHwndEx(a1, 1LL, 0LL);
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
  v22 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v39 = PsGetCurrentProcess(v24, v23),
        ProcessSessionId = PsGetProcessSessionIdEx(v39),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v22 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v22 + 488) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 768LL) + 24LL) & 1) != 0 )
  {
    if ( !v19 )
    {
      v30 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 24LL);
      if ( v30 )
        v31 = *v30;
      else
        v31 = 0LL;
      if ( !ValidateHwndEx(v31, 1LL, 0LL) )
        v2 = 0;
      goto LABEL_38;
    }
LABEL_23:
    DCEx = GetDCEx(v19, 0LL, 0x10000LL, v26);
    goto LABEL_24;
  }
  if ( v19 )
    goto LABEL_23;
LABEL_38:
  v32 = KeGetCurrentThread();
  v33 = 0LL;
  if ( !IsThreadCrossSessionAttached() )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(v32);
    if ( v34 )
      v33 = *v34;
  }
  v35 = *(_QWORD *)(v33 + 456);
  if ( v35 )
    DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v35 + 8) + 24LL), 0LL, 3LL, v20);
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
  v28 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0250B48 )
    qword_1C0250B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v28, v20);
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
    v45 = PsGetCurrentThreadWin32Thread();
    v48 = v45;
    if ( v45 )
    {
      v49 = *(_DWORD *)(v45 + 24);
      if ( (*(_DWORD *)(v48 + 44) || *(_DWORD *)(v48 + 48) || v49 > 0)
        && (unsigned int)dword_1C0244A70 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v46, v47) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E11, v48 + 28, 0, 2u, &v57);
      }
      *(_DWORD *)(v48 + 44) = 0;
      *(_OWORD *)(v48 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
