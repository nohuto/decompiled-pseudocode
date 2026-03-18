/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B26B0
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1C00B2540 (NtCompositionSetDropTarget.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00B2948 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C00B5B60 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C00B85E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(PVOID Object, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  const struct COMPOSITION_INPUT_QUEUE *v2; // r15
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rsi
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v29; // rax
  int ProcessSessionId; // ebx
  __int64 v31; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  CInputSink *v41; // [rsp+40h] [rbp-C0h] BYREF
  const struct COMPOSITION_INPUT_QUEUE *v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v44; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+70h] [rbp-90h] BYREF
  int *v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-60h] BYREF
  int *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+D0h] [rbp-30h] BYREF
  int *v55; // [rsp+F0h] [rbp-10h]
  int v56; // [rsp+F8h] [rbp-8h]
  int v57; // [rsp+FCh] [rbp-4h]

  v41 = 0LL;
  v2 = a2;
  v42 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Object);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    v33 = PsGetCurrentThreadWin32Thread(v4);
    v43 = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v49 = 0;
        v38 = v44;
        v48 = 4;
        v47 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v46);
      }
    }
  }
  else
  {
    v43 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v43 )
    {
      v12 = *(unsigned int *)(v43 + 24);
      if ( *(_DWORD *)(v43 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v43 + 44) = 1;
        *(GUID *)(v43 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v53 = 0;
            v39 = v44;
            v52 = 4;
            v51 = &v39;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v50);
            v34 = dword_1C024C960;
          }
          if ( v34 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v57 = 0;
            v40 = v44;
            v56 = 4;
            v55 = &v40;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v54);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v12);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v29 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v29),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v31),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !IsThreadCrossSessionAttached(v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v25 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v25[2];
          v35 = *v25;
          v25[2] = 0LL;
          if ( !*(_DWORD *)(v35 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
          v37 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v37 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
          ExReleaseResourceAndLeaveCriticalRegion(*v37);
          HMUnlockObject(*v25);
          tagDomLock::LockExclusive(v37);
          v25 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v42;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v27 = CompositionInputObject::LockForWrite(Object, &v41);
  if ( v27 >= 0 )
  {
    v27 = CInputSink::SetDropTarget(v41, v2);
    CInputSink::UnlockAndRelease(v41);
  }
  UserSessionSwitchLeaveCrit(v26);
  return (unsigned int)v27;
}
