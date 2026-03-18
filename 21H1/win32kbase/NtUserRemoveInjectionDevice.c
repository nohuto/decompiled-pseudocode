/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C013D420
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C013ADF0 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0160294 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1)
{
  char *v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int ProcessSessionId; // ebx
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  PERESOURCE *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  char *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rcx
  int v44; // [rsp+38h] [rbp-D0h] BYREF
  int v45; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v48; // [rsp+50h] [rbp-B8h] BYREF
  char *v49; // [rsp+58h] [rbp-B0h]
  __int64 v50; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+80h] [rbp-88h] BYREF
  int *v54; // [rsp+A0h] [rbp-68h]
  __int64 v55; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+B0h] [rbp-58h] BYREF
  int *v57; // [rsp+D0h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v60; // [rsp+100h] [rbp-8h]
  __int64 v61; // [rsp+108h] [rbp+0h]

  v1 = a1;
  v49 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v50 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v50 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v44 = ActivityId_4;
        v55 = 4LL;
        v54 = &v44;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId_8,
          0LL,
          3u,
          &v53);
      }
    }
  }
  else
  {
    v50 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v50 )
    {
      v11 = *(unsigned int *)(v50 + 24);
      if ( *(_DWORD *)(v50 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v50 + 44) = 1;
        *(GUID *)(v50 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v45 = ActivityId_4;
            v58 = 4LL;
            v57 = &v45;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId_8,
              0LL,
              3u,
              &v56);
            v12 = dword_1C024C960;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            LODWORD(v46) = ActivityId_4;
            v61 = 4LL;
            v60 = &v46;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId_8,
              0LL,
              3u,
              &v59);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v11);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v16 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v16),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached(v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v21 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v21 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v29 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v29[2];
          v30 = *v29;
          v29[2] = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
          v32 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v32 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
          ExReleaseResourceAndLeaveCriticalRegion(*v32);
          HMUnlockObject(*v29);
          tagDomLock::LockExclusive(v32);
          v29 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v49;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v48 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v1, 3u, 1, &v48) < 0 )
  {
    v35 = 0;
    UserSetLastError(6LL, v33);
  }
  else
  {
    v35 = 1;
    v36 = PsGetCurrentProcessWin32Process(v34);
    v37 = v48;
    v38 = *(_QWORD *)(v36 + 896);
    if ( !v38 )
      goto LABEL_60;
    v39 = *(char **)(v38 + 96);
    if ( !v39 )
      goto LABEL_60;
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v39, 3u, 1, &Object) < 0 )
      goto LABEL_60;
    if ( v37 == Object )
    {
      v35 = 0;
      UserSetLastError(6LL, v40);
    }
    ObfDereferenceObject(Object);
    if ( v35 == 1 )
    {
LABEL_60:
      v41 = v37[53];
      RIMLockExclusive(v41 + 104);
      if ( (v37[36] & 4) == 0 )
        RIMIDERemoveInjectionDevice(v37);
      *(_QWORD *)(v41 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v41 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(v37);
  }
  UserSessionSwitchLeaveCrit(v42);
  return v35;
}
