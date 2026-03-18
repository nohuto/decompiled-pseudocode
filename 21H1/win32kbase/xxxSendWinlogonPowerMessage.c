/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C00C9E10
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0054924 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8888 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     WmsgpSendPSPMessage @ 0x1C0280D1C (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  PERESOURCE *v39; // rdi
  unsigned int v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+40h] [rbp-C0h]
  __int128 v45; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h]
  unsigned __int8 v48; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+90h] [rbp-70h] BYREF
  int *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C0h] [rbp-40h] BYREF
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+F0h] [rbp-10h] BYREF
  int *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]

  v4 = a2;
  v40 = 0;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
    v45 = *a3;
    v5 = WmsgpSendPSPMessage(v7, v4, &v45, &v40);
    v44 = v5;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v48 = 1;
      v35 = PsGetCurrentThreadWin32Thread(v9);
      v47 = v35;
      if ( v35 && (*(int *)(v35 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v41 = v48;
          v52 = 4LL;
          v51 = &v41;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v50);
        }
      }
    }
    else
    {
      v47 = 0LL;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v11 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v47 )
      {
        v17 = *(unsigned int *)(v47 + 24);
        if ( *(_DWORD *)(v47 + 48) || (int)v17 > 0 )
        {
          *(_DWORD *)(v47 + 44) = 1;
          *(GUID *)(v47 + 28) = ActivityId;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v42 = v48;
              v55 = 4LL;
              v54 = &v42;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &ActivityId,
                0LL,
                3u,
                &v53);
              v36 = dword_1C024C960;
            }
            if ( v36 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v43 = v48;
              v58 = 4LL;
              v57 = &v43;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &ActivityId,
                0LL,
                3u,
                &v56);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v17);
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v18)
      || (v31 = PsGetCurrentProcess(v20, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(v31),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v22 = 0LL;
      if ( !IsThreadCrossSessionAttached(v20) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v22 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
      if ( v22
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v22 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v22 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v30 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
            v37 = *v30;
            v30[2] = 0LL;
            if ( !*(_DWORD *)(v37 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
            v39 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v39 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
            ExReleaseResourceAndLeaveCriticalRegion(*v39);
            HMUnlockObject(*v30);
            tagDomLock::LockExclusive(v39);
            v30 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v5 = v44;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v46 = *a3;
    v5 = WmsgpSendPSPMessage(a1, a2, &v46, &v40);
  }
  if ( v5 >= 0 )
    return v40;
  return (unsigned int)v5;
}
