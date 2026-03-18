/*
 * XREFs of PowerResumeSuspendEvent @ 0x1C00C9C30
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
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
 */

__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r14d
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
  __int64 v45; // rax
  int ProcessSessionId; // ebx
  __int64 v47; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v49; // rax
  unsigned int v50; // r8d
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  int InputBuffer; // [rsp+30h] [rbp-99h] BYREF
  char InputBuffer_4; // [rsp+34h] [rbp-95h]
  char InputBuffer_5; // [rsp+35h] [rbp-94h]
  __int16 InputBuffer_6; // [rsp+36h] [rbp-93h]
  int v61; // [rsp+38h] [rbp-91h] BYREF
  int v62; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v63; // [rsp+40h] [rbp-89h] BYREF
  NTSTATUS v64; // [rsp+44h] [rbp-85h]
  __int64 v65; // [rsp+48h] [rbp-81h]
  unsigned __int8 v66; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+68h] [rbp-61h] BYREF
  int *v69; // [rsp+88h] [rbp-41h]
  __int64 v70; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+98h] [rbp-31h] BYREF
  int *v72; // [rsp+B8h] [rbp-11h]
  __int64 v73; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+C8h] [rbp-1h] BYREF
  int *v75; // [rsp+E8h] [rbp+1Fh]
  __int64 v76; // [rsp+F0h] [rbp+27h]

  InputBuffer = gSessionId;
  InputBuffer_4 = a1;
  InputBuffer_5 = a2;
  InputBuffer_6 = (unsigned __int8)a3;
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  v4 = ZwPowerInformation(ProcessorStateHandler|0x40, &InputBuffer, 8u, 0LL, 0);
  v64 = v4;
  v9 = v4;
  if ( v4 && v4 != 259 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v66 = 1;
    v49 = PsGetCurrentThreadWin32Thread(v10);
    v65 = v49;
    if ( v49 && (*(int *)(v49 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v61 = v66;
        v70 = 4LL;
        v69 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v68);
      }
    }
  }
  else
  {
    v65 = 0LL;
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
    if ( v65 )
    {
      v18 = *(unsigned int *)(v65 + 24);
      if ( *(_DWORD *)(v65 + 48) || (int)v18 > 0 )
      {
        *(_DWORD *)(v65 + 44) = 1;
        *(GUID *)(v65 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v62 = v66;
            v73 = 4LL;
            v72 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v71);
            v50 = dword_1C0246A70;
          }
          if ( v50 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v63 = v66;
            v76 = 4LL;
            v75 = &v63;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v74);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v18);
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v45 = PsGetCurrentProcess(v21, v20),
        ProcessSessionId = PsGetProcessSessionIdEx(v45),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v47),
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
          v51 = *v43;
          v43[2] = 0LL;
          if ( !*(_DWORD *)(v51 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
          v54 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
          if ( v54 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
          ExReleaseResourceAndLeaveCriticalRegion(*v54);
          HMUnlockObject(*v43);
          tagDomLock::LockExclusive(v54);
          v43 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v9 = v64;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v9;
}
