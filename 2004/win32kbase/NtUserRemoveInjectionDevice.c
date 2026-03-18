/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C0137780
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0135150 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00AB3A0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0159F44 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // edi
  __int64 v51; // rax
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  char *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v62; // [rsp+38h] [rbp-D0h] BYREF
  int v63; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v64; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v66; // [rsp+50h] [rbp-B8h] BYREF
  char *v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+80h] [rbp-88h] BYREF
  int *v72; // [rsp+A0h] [rbp-68h]
  __int64 v73; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+B0h] [rbp-58h] BYREF
  int *v75; // [rsp+D0h] [rbp-38h]
  __int64 v76; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v78; // [rsp+100h] [rbp-8h]
  __int64 v79; // [rsp+108h] [rbp+0h]

  v1 = a1;
  v67 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v68 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v62 = ActivityId_4;
        v73 = 4LL;
        v72 = &v62;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId_8,
          0LL,
          3u,
          &v71);
      }
    }
  }
  else
  {
    v68 = 0LL;
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
    if ( v68 )
    {
      v11 = *(unsigned int *)(v68 + 24);
      if ( *(_DWORD *)(v68 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v68 + 44) = 1;
        *(GUID *)(v68 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v63 = ActivityId_4;
            v76 = 4LL;
            v75 = &v63;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId_8,
              0LL,
              3u,
              &v74);
            v12 = dword_1C0246A70;
          }
          if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            LODWORD(v64) = ActivityId_4;
            v79 = 4LL;
            v78 = &v64;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId_8,
              0LL,
              3u,
              &v77);
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
      && (*(_DWORD *)(v21 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v26, v27);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v41 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v41[2];
          v42 = *v41;
          v41[2] = 0LL;
          if ( !*(_DWORD *)(v42 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
          v45 = (PERESOURCE *)GetDomainLockRef(12LL, v37, v39, v40);
          if ( v45 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
          ExReleaseResourceAndLeaveCriticalRegion(*v45);
          HMUnlockObject(*v41);
          tagDomLock::LockExclusive(v45);
          v41 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v67;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v66 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v1, 3u, 1, &v66) < 0 )
  {
    v50 = 0;
    UserSetLastError(6LL, v48);
  }
  else
  {
    v50 = 1;
    v51 = PsGetCurrentProcessWin32Process(v49);
    v52 = v66;
    v53 = *(_QWORD *)(v51 + 896);
    if ( !v53 )
      goto LABEL_60;
    v54 = *(char **)(v53 + 96);
    if ( !v54 )
      goto LABEL_60;
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v54, 3u, 1, &Object) < 0 )
      goto LABEL_60;
    if ( v52 == Object )
    {
      v50 = 0;
      UserSetLastError(6LL, v55);
    }
    ObfDereferenceObject(Object);
    if ( v50 == 1 )
    {
LABEL_60:
      v56 = v52[53];
      RIMLockExclusive(v56 + 104);
      if ( (v52[36] & 4) == 0 )
        RIMIDERemoveInjectionDevice(v52);
      *(_QWORD *)(v56 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v56 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(v52);
  }
  UserSessionSwitchLeaveCrit(v58, v57, v59, v60);
  return v50;
}
