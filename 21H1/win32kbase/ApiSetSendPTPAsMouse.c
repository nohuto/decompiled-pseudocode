/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C01D2CD0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A9100 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01B1E40 (SynthesizeMouseInputForPTP.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v11; // edx
  int v12; // eax
  __int16 v13; // ax
  int v14; // edi
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v19; // rax
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v40; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  PERESOURCE *v46; // rdi
  __int64 *v47; // rsi
  _UNKNOWN **result; // rax
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  int v52[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  unsigned __int8 v55; // [rsp+70h] [rbp-90h]
  GUID ActivityId; // [rsp+74h] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+88h] [rbp-78h] BYREF
  int *v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+B8h] [rbp-48h] BYREF
  int *v61; // [rsp+D8h] [rbp-28h]
  __int64 v62; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v64; // [rsp+108h] [rbp+8h]
  __int64 v65; // [rsp+110h] [rbp+10h]

  v9 = a2;
  v51 = a1;
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
  if ( qword_1C0259908 )
    v12 = qword_1C0259908();
  else
    v12 = -1073741637;
  if ( v12 >= 0 )
  {
    if ( qword_1C0259910 )
      qword_1C0259910(a7, a1, v9, a3, a4, a6);
    goto LABEL_74;
  }
  v53 = 0LL;
  *(_OWORD *)v52 = 0LL;
  HIWORD(v52[0]) = 128;
  v13 = 2;
  if ( (v9 & 2) == 0 )
  {
    if ( v9 != 4 )
    {
      v13 = 8;
      if ( v9 == 8 )
      {
        LOWORD(v52[1]) = 4;
        goto LABEL_17;
      }
      if ( v9 != 16 )
        goto LABEL_17;
    }
    LOWORD(v52[1]) = v13;
    goto LABEL_17;
  }
  LOWORD(v52[1]) = 1;
LABEL_17:
  v14 = v9 & 1;
  if ( v14 )
  {
    LODWORD(v53) = HIDWORD(v51);
    v52[3] = a1;
  }
  v15 = 8 * (v14 ^ 1) + 1888;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  SynthesizeMouseInputForPTP(a7, (__int64)v52, a4, a3, a5, v15, a6);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v55 = 1;
    v19 = PsGetCurrentThreadWin32Thread(v17);
    v54 = v19;
    if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v54 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v49 = v55;
        v59 = 4LL;
        v58 = &v49;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v57);
      }
    }
  }
  else
  {
    v54 = 0LL;
  }
  v20 = 0LL;
  while ( 1 )
  {
    v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v21 )
      v20 = *v21;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v23, v22);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v20 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v54 )
    {
      v26 = *(unsigned int *)(v54 + 24);
      if ( *(_DWORD *)(v54 + 48) || (int)v26 > 0 )
      {
        *(_DWORD *)(v54 + 44) = 1;
        *(GUID *)(v54 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v50 = v55;
            v62 = 4LL;
            v61 = &v50;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v60);
            v27 = dword_1C024C960;
          }
          if ( v27 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            LODWORD(v51) = v55;
            v65 = 4LL;
            v64 = &v51;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v63);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v26);
  gptiCurrent = v20;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v28)
    || (v31 = PsGetCurrentProcess(v30, v29),
        ProcessSessionId = PsGetProcessSessionIdEx(v31),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v36 = 0LL;
    if ( !IsThreadCrossSessionAttached(v30) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v36 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37);
    if ( v36
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v36 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v36 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v42);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v47 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v44 = *v47;
        v47[2] = 0LL;
        if ( !*(_DWORD *)(v44 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
        v46 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v46 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v45);
        ExReleaseResourceAndLeaveCriticalRegion(*v46);
        HMUnlockObject(*v47);
        tagDomLock::LockExclusive(v46);
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
      LOBYTE(v11) = 5;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v11,
                            10,
                            357,
                            (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}
