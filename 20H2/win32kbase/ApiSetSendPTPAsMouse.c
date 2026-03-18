/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C01CA9D0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A1020 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01A9D60 (SynthesizeMouseInputForPTP.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall ApiSetSendPTPAsMouse(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _PTPMouseLatencyTracker *a6,
        __int64 a7)
{
  unsigned int v9; // edi
  LARGE_INTEGER v11; // rdx
  LARGE_INTEGER v12; // r8
  LARGE_INTEGER v13; // r9
  int v14; // eax
  __int16 v15; // ax
  int v16; // edi
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v21; // rax
  struct tagTHREADINFO *v22; // rbx
  struct tagTHREADINFO **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  PVOID CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  PERESOURCE *v58; // rdi
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 *v61; // rsi
  _UNKNOWN **result; // rax
  int v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v65; // [rsp+48h] [rbp-B8h] BYREF
  int v66[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  unsigned __int8 v69; // [rsp+70h] [rbp-90h]
  GUID ActivityId; // [rsp+74h] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+88h] [rbp-78h] BYREF
  int *v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+B8h] [rbp-48h] BYREF
  int *v75; // [rsp+D8h] [rbp-28h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]

  v9 = a2;
  v65 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      356,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  *((LARGE_INTEGER *)a6 + 4) = KeQueryPerformanceCounter(0LL);
  if ( qword_1C0251948 )
    v14 = qword_1C0251948();
  else
    v14 = -1073741637;
  if ( v14 >= 0 )
  {
    if ( qword_1C0251950 )
      qword_1C0251950(a7, a1, v9, a3, a4, a6);
    goto LABEL_74;
  }
  v67 = 0LL;
  *(_OWORD *)v66 = 0LL;
  HIWORD(v66[0]) = 128;
  v15 = 2;
  if ( (v9 & 2) == 0 )
  {
    if ( v9 != 4 )
    {
      v15 = 8;
      if ( v9 == 8 )
      {
        LOWORD(v66[1]) = 4;
        goto LABEL_17;
      }
      if ( v9 != 16 )
        goto LABEL_17;
    }
    LOWORD(v66[1]) = v15;
    goto LABEL_17;
  }
  LOWORD(v66[1]) = 1;
LABEL_17:
  v16 = v9 & 1;
  if ( v16 )
  {
    LODWORD(v67) = HIDWORD(v65);
    v66[3] = a1;
  }
  v17 = 8 * (v16 ^ 1) + 1888;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, 1LL, v12.QuadPart, v13.QuadPart);
  SynthesizeMouseInputForPTP(a7, (__int64)v66, a4, a3, a5, v17, a6);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v69 = 1;
    v21 = PsGetCurrentThreadWin32Thread(v19);
    v68 = v21;
    if ( v21 && (*(int *)(v21 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v63 = v69;
        v73 = 4LL;
        v72 = &v63;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v71);
      }
    }
  }
  else
  {
    v68 = 0LL;
  }
  v22 = 0LL;
  while ( 1 )
  {
    v23 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v23 )
      v22 = *v23;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v25, v24);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v28, v27) == gpepCSRSS && v22 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v22 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v68 && (*(_DWORD *)(v68 + 48) || *(int *)(v68 + 24) > 0) )
  {
    *(_DWORD *)(v68 + 44) = 1;
    *(GUID *)(v68 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v64 = v69;
        v76 = 4LL;
        v75 = &v64;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v74);
        v29 = dword_1C0244A70;
      }
      if ( v29 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        LODWORD(v65) = v69;
        v79 = 4LL;
        v78 = &v65;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v77);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v22;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v32 = PsGetCurrentProcess(v31, v30),
        ProcessSessionId = PsGetProcessSessionIdEx(v32),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v36 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v36 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37);
    if ( v36
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v36 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v36 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v11.QuadPart, v40, v41);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v61 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v55 = *v61;
        v61[2] = 0LL;
        if ( !*(_DWORD *)(v55 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53, v54);
        v58 = (PERESOURCE *)GetDomainLockRef(12LL, v51, v53, v54);
        if ( v58 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v59, v60);
        ExReleaseResourceAndLeaveCriticalRegion(*v58);
        HMUnlockObject(*v61);
        tagDomLock::LockExclusive(v58);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
LABEL_74:
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11.LowPart) = 5;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v11.LowPart,
                            10,
                            357,
                            (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}
