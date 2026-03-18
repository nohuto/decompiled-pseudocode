/*
 * XREFs of ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01AD348
 * Callers:
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB260 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0043E5C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
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

char __fastcall CHidInput::ProcessPTPInertiaActions(CHidInput *this, void *a2, __int64 a3)
{
  CBaseInput *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  PERESOURCE *v34; // rdi
  __int64 *v35; // rsi
  int v37; // [rsp+38h] [rbp-79h] BYREF
  int v38; // [rsp+3Ch] [rbp-75h] BYREF
  int v39; // [rsp+40h] [rbp-71h] BYREF
  __int64 v40; // [rsp+48h] [rbp-69h]
  unsigned __int8 v41; // [rsp+50h] [rbp-61h]
  GUID ActivityId; // [rsp+54h] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+68h] [rbp-49h] BYREF
  int *v44; // [rsp+88h] [rbp-29h]
  int v45; // [rsp+90h] [rbp-21h]
  int v46; // [rsp+94h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-19h] BYREF
  int *v48; // [rsp+B8h] [rbp+7h]
  int v49; // [rsp+C0h] [rbp+Fh]
  int v50; // [rsp+C4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+C8h] [rbp+17h] BYREF
  int *v52; // [rsp+E8h] [rbp+37h]
  int v53; // [rsp+F0h] [rbp+3Fh]
  int v54; // [rsp+F4h] [rbp+43h]

  v3 = gpHidInput;
  *((_QWORD *)gpHidInput + 170) = a2;
  *((_QWORD *)v3 + 171) = a3;
  UserSessionSwitchLeaveCrit((__int64)this);
  CRIMBase::SensorDoWorkAndWait((__int64)v3, 0x10u);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v41 = 1;
    v7 = PsGetCurrentThreadWin32Thread(v5);
    v40 = v7;
    if ( v7 && (*(int *)(v7 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v46 = 0;
        v37 = v41;
        v45 = 4;
        v44 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v43);
      }
    }
  }
  else
  {
    v40 = 0LL;
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
    if ( v40 )
    {
      v14 = *(unsigned int *)(v40 + 24);
      if ( *(_DWORD *)(v40 + 48) || (int)v14 > 0 )
      {
        *(_DWORD *)(v40 + 44) = 1;
        *(GUID *)(v40 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v50 = 0;
            v38 = v41;
            v49 = 4;
            v48 = &v38;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v47);
            v15 = dword_1C024C960;
          }
          if ( v15 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v54 = 0;
            v39 = v41;
            v53 = 4;
            v52 = &v39;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v51);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v14);
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v16)
    || (v19 = PsGetCurrentProcess(v18, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(v19),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = 0LL;
    if ( !IsThreadCrossSessionAttached(v18) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( v24
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v24 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v24 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v35 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v32 = *v35;
        v35[2] = 0LL;
        if ( !*(_DWORD *)(v32 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
        v34 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v34 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
        ExReleaseResourceAndLeaveCriticalRegion(*v34);
        HMUnlockObject(*v35);
        tagDomLock::LockExclusive(v34);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return 1;
}
