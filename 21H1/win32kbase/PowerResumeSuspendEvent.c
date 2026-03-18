/*
 * XREFs of PowerResumeSuspendEvent @ 0x1C00C95B0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
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
 */

__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, char a2, unsigned __int8 a3)
{
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rsi
  __int64 v29; // rax
  int ProcessSessionId; // ebx
  __int64 v31; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  int InputBuffer; // [rsp+30h] [rbp-99h] BYREF
  char InputBuffer_4; // [rsp+34h] [rbp-95h]
  char InputBuffer_5; // [rsp+35h] [rbp-94h]
  __int16 InputBuffer_6; // [rsp+36h] [rbp-93h]
  int v42; // [rsp+38h] [rbp-91h] BYREF
  int v43; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v44; // [rsp+40h] [rbp-89h] BYREF
  NTSTATUS v45; // [rsp+44h] [rbp-85h]
  __int64 v46; // [rsp+48h] [rbp-81h]
  unsigned __int8 v47; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+68h] [rbp-61h] BYREF
  int *v50; // [rsp+88h] [rbp-41h]
  __int64 v51; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-31h] BYREF
  int *v53; // [rsp+B8h] [rbp-11h]
  __int64 v54; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C8h] [rbp-1h] BYREF
  int *v56; // [rsp+E8h] [rbp+1Fh]
  __int64 v57; // [rsp+F0h] [rbp+27h]

  InputBuffer = gSessionId;
  InputBuffer_4 = a1;
  InputBuffer_5 = a2;
  InputBuffer_6 = a3;
  UserSessionSwitchLeaveCrit(a1);
  v3 = ZwPowerInformation(ProcessorStateHandler|0x40, &InputBuffer, 8u, 0LL, 0);
  v45 = v3;
  v5 = v3;
  if ( v3 && v3 != 259 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v33 = PsGetCurrentThreadWin32Thread(v6);
    v46 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v42 = v47;
        v51 = 4LL;
        v50 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v49);
      }
    }
  }
  else
  {
    v46 = 0LL;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v8 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v46 )
    {
      v14 = *(unsigned int *)(v46 + 24);
      if ( *(_DWORD *)(v46 + 48) || (int)v14 > 0 )
      {
        *(_DWORD *)(v46 + 44) = 1;
        *(GUID *)(v46 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v43 = v47;
            v54 = 4LL;
            v53 = &v43;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v52);
            v34 = dword_1C024C960;
          }
          if ( v34 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v44 = v47;
            v57 = 4LL;
            v56 = &v44;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v55);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v14);
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v15)
    || (v29 = PsGetCurrentProcess(v17, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(v29),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v31),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !IsThreadCrossSessionAttached(v17) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v19 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v19 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v27 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v27[2];
          v35 = *v27;
          v27[2] = 0LL;
          if ( !*(_DWORD *)(v35 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
          v37 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v37 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
          ExReleaseResourceAndLeaveCriticalRegion(*v37);
          HMUnlockObject(*v27);
          tagDomLock::LockExclusive(v37);
          v27 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v5 = v45;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v5;
}
