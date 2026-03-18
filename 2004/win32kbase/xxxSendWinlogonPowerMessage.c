/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C00CA490
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00608E8 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     WmsgpSendPSPMessage @ 0x1C027AD1C (WmsgpSendPSPMessage.c)
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
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rsi
  __int64 v44; // rax
  int ProcessSessionId; // ebx
  __int64 v46; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  PERESOURCE *v53; // rdi
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v56; // [rsp+30h] [rbp-D0h] BYREF
  int v57; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h] BYREF
  int v59; // [rsp+3Ch] [rbp-C4h] BYREF
  int v60; // [rsp+40h] [rbp-C0h]
  __int128 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-90h]
  unsigned __int8 v64; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+90h] [rbp-70h] BYREF
  int *v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+C0h] [rbp-40h] BYREF
  int *v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+F0h] [rbp-10h] BYREF
  int *v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]

  v5 = a2;
  v56 = 0;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, (__int64)a3, a4);
    v61 = *a3;
    v6 = WmsgpSendPSPMessage(v8, v5, &v61, &v56);
    v60 = v6;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v64 = 1;
      v48 = PsGetCurrentThreadWin32Thread(v10);
      v63 = v48;
      if ( v48 && (*(int *)(v48 + 24) > 0 || *(_DWORD *)(v63 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v57 = v64;
          v68 = 4LL;
          v67 = &v57;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v66);
        }
      }
    }
    else
    {
      v63 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v63 )
      {
        v18 = *(unsigned int *)(v63 + 24);
        if ( *(_DWORD *)(v63 + 48) || (int)v18 > 0 )
        {
          *(_DWORD *)(v63 + 44) = 1;
          *(GUID *)(v63 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v58 = v64;
              v71 = 4LL;
              v70 = &v58;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &ActivityId,
                0LL,
                3u,
                &v69);
              v49 = dword_1C0246A70;
            }
            if ( v49 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v59 = v64;
              v74 = 4LL;
              v73 = &v59;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &ActivityId,
                0LL,
                3u,
                &v72);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v18);
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v19)
      || (v44 = PsGetCurrentProcess(v21, v20),
          ProcessSessionId = PsGetProcessSessionIdEx(v44),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v46),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v23 = 0LL;
      if ( !IsThreadCrossSessionAttached(v21) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v23 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
      if ( v23
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v23 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v23 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v29);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v43 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v43[2];
            v50 = *v43;
            v43[2] = 0LL;
            if ( !*(_DWORD *)(v50 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            v53 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
            if ( v53 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v54, v55);
            ExReleaseResourceAndLeaveCriticalRegion(*v53);
            HMUnlockObject(*v43);
            tagDomLock::LockExclusive(v53);
            v43 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v6 = v60;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v62 = *a3;
    v6 = WmsgpSendPSPMessage(a1, a2, &v62, &v56);
  }
  if ( v6 >= 0 )
    return v56;
  return (unsigned int)v6;
}
