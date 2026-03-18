/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C00C8E40
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0074424 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     WmsgpSendPSPMessage @ 0x1C0278DDC (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rsi
  __int64 v43; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  int v56; // [rsp+38h] [rbp-C8h] BYREF
  int v57; // [rsp+3Ch] [rbp-C4h] BYREF
  int v58; // [rsp+40h] [rbp-C0h]
  __int128 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h]
  unsigned __int8 v62; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+90h] [rbp-70h] BYREF
  int *v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C0h] [rbp-40h] BYREF
  int *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+F0h] [rbp-10h] BYREF
  int *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]

  v5 = a2;
  v54 = 0;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, (__int64)a3, a4);
    v59 = *a3;
    v6 = WmsgpSendPSPMessage(v8, v5, &v59, &v54);
    v58 = v6;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v62 = 1;
      v46 = PsGetCurrentThreadWin32Thread(v10);
      v61 = v46;
      if ( v46 && (*(int *)(v46 + 24) > 0 || *(_DWORD *)(v61 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v55 = v62;
          v66 = 4LL;
          v65 = &v55;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId,
            0LL,
            3u,
            &v64);
        }
      }
    }
    else
    {
      v61 = 0LL;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v61 && (*(_DWORD *)(v61 + 48) || *(int *)(v61 + 24) > 0) )
    {
      *(_DWORD *)(v61 + 44) = 1;
      *(GUID *)(v61 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v56 = v62;
          v69 = 4LL;
          v68 = &v56;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId,
            0LL,
            3u,
            &v67);
          v47 = dword_1C0244A70;
        }
        if ( v47 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v57 = v62;
          v72 = 4LL;
          v71 = &v57;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId,
            0LL,
            3u,
            &v70);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v43 = PsGetCurrentProcess(v20, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(v43),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v22 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v22 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
      if ( v22
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v22 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v22 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v26, v27, v28);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32, v33);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v42 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v42[2];
            v48 = *v42;
            v42[2] = 0LL;
            if ( !*(_DWORD *)(v48 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
            v51 = (PERESOURCE *)GetDomainLockRef(12LL, v38, v40, v41);
            if ( v51 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
            ExReleaseResourceAndLeaveCriticalRegion(*v51);
            HMUnlockObject(*v42);
            tagDomLock::LockExclusive(v51);
            v42 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v6 = v58;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v60 = *a3;
    v6 = WmsgpSendPSPMessage(a1, a2, &v60, &v54);
  }
  if ( v6 >= 0 )
    return v54;
  return (unsigned int)v6;
}
