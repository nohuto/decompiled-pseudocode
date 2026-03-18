/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C01CCD50
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A33A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01AC0E0 (SynthesizeMouseInputForPTP.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 *v63; // rsi
  _UNKNOWN **result; // rax
  int v65; // [rsp+40h] [rbp-C0h] BYREF
  int v66; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v67; // [rsp+48h] [rbp-B8h] BYREF
  int v68[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  unsigned __int8 v71; // [rsp+70h] [rbp-90h]
  GUID ActivityId; // [rsp+74h] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+88h] [rbp-78h] BYREF
  int *v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+B8h] [rbp-48h] BYREF
  int *v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v80; // [rsp+108h] [rbp+8h]
  __int64 v81; // [rsp+110h] [rbp+10h]

  v9 = a2;
  v67 = a1;
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
  if ( qword_1C0253948 )
    v14 = qword_1C0253948();
  else
    v14 = -1073741637;
  if ( v14 >= 0 )
  {
    if ( qword_1C0253950 )
      qword_1C0253950(a7, a1, v9, a3, a4, a6);
    goto LABEL_74;
  }
  v69 = 0LL;
  *(_OWORD *)v68 = 0LL;
  HIWORD(v68[0]) = 128;
  v15 = 2;
  if ( (v9 & 2) == 0 )
  {
    if ( v9 != 4 )
    {
      v15 = 8;
      if ( v9 == 8 )
      {
        LOWORD(v68[1]) = 4;
        goto LABEL_17;
      }
      if ( v9 != 16 )
        goto LABEL_17;
    }
    LOWORD(v68[1]) = v15;
    goto LABEL_17;
  }
  LOWORD(v68[1]) = 1;
LABEL_17:
  v16 = v9 & 1;
  if ( v16 )
  {
    LODWORD(v69) = HIDWORD(v67);
    v68[3] = a1;
  }
  v17 = 8 * (v16 ^ 1) + 1888;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, 1LL, v12.QuadPart, v13.QuadPart);
  SynthesizeMouseInputForPTP(a7, (__int64)v68, a4, a3, a5, v17, a6);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v71 = 1;
    v21 = PsGetCurrentThreadWin32Thread(v19);
    v70 = v21;
    if ( v21 && (*(int *)(v21 + 24) > 0 || *(_DWORD *)(v70 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v65 = v71;
        v75 = 4LL;
        v74 = &v65;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v73);
      }
    }
  }
  else
  {
    v70 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v70 )
    {
      v28 = *(unsigned int *)(v70 + 24);
      if ( *(_DWORD *)(v70 + 48) || (int)v28 > 0 )
      {
        *(_DWORD *)(v70 + 44) = 1;
        *(GUID *)(v70 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v66 = v71;
            v78 = 4LL;
            v77 = &v66;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v76);
            v29 = dword_1C0246A70;
          }
          if ( v29 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            LODWORD(v67) = v71;
            v81 = 4LL;
            v80 = &v67;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v79);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v28);
  gptiCurrent = v22;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v30)
    || (v33 = PsGetCurrentProcess(v32, v31),
        ProcessSessionId = PsGetProcessSessionIdEx(v33),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v38 = 0LL;
    if ( !IsThreadCrossSessionAttached(v32) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v38 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v39);
    if ( v38
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v38 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v38 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v11.QuadPart, v42, v43);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47, v48);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v63 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v57 = *v63;
        v63[2] = 0LL;
        if ( !*(_DWORD *)(v57 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55, v56);
        v60 = (PERESOURCE *)GetDomainLockRef(12LL, v53, v55, v56);
        if ( v60 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
        ExReleaseResourceAndLeaveCriticalRegion(*v60);
        HMUnlockObject(*v63);
        tagDomLock::LockExclusive(v60);
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
