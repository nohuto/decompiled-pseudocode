/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C0135430
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0132E00 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01579E4 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // rax
  _QWORD *v50; // rbx
  __int64 v51; // rcx
  char *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v60; // [rsp+38h] [rbp-D0h] BYREF
  int v61; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v62; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v64; // [rsp+50h] [rbp-B8h] BYREF
  char *v65; // [rsp+58h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+80h] [rbp-88h] BYREF
  int *v70; // [rsp+A0h] [rbp-68h]
  __int64 v71; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+B0h] [rbp-58h] BYREF
  int *v73; // [rsp+D0h] [rbp-38h]
  __int64 v74; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v76; // [rsp+100h] [rbp-8h]
  __int64 v77; // [rsp+108h] [rbp+0h]

  v1 = a1;
  v65 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v66 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = ActivityId_4;
        v71 = 4LL;
        v70 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId_8,
          0LL,
          3u,
          &v69);
      }
    }
  }
  else
  {
    v66 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v66 && (*(_DWORD *)(v66 + 48) || *(int *)(v66 + 24) > 0) )
  {
    *(_DWORD *)(v66 + 44) = 1;
    *(GUID *)(v66 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = ActivityId_4;
        v74 = 4LL;
        v73 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId_8,
          0LL,
          3u,
          &v72);
        v12 = dword_1C0244A70;
      }
      if ( v12 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        LODWORD(v62) = ActivityId_4;
        v77 = 4LL;
        v76 = &v62;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId_8,
          0LL,
          3u,
          &v75);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v15 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v15),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v19 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
    if ( v19
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v19 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v19 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v23, v24, v25);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29, v30);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v39 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v39[2];
          v40 = *v39;
          v39[2] = 0LL;
          if ( !*(_DWORD *)(v40 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
          v43 = (PERESOURCE *)GetDomainLockRef(12LL, v35, v37, v38);
          if ( v43 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44, v45);
          ExReleaseResourceAndLeaveCriticalRegion(*v43);
          HMUnlockObject(*v39);
          tagDomLock::LockExclusive(v43);
          v39 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = v65;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v64 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v1, 3u, 1, &v64) < 0 )
  {
    v48 = 0;
    UserSetLastError(6LL, v46);
  }
  else
  {
    v48 = 1;
    v49 = PsGetCurrentProcessWin32Process(v47);
    v50 = v64;
    v51 = *(_QWORD *)(v49 + 896);
    if ( !v51 )
      goto LABEL_60;
    v52 = *(char **)(v51 + 96);
    if ( !v52 )
      goto LABEL_60;
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v52, 3u, 1, &Object) < 0 )
      goto LABEL_60;
    if ( v50 == Object )
    {
      v48 = 0;
      UserSetLastError(6LL, v53);
    }
    ObfDereferenceObject(Object);
    if ( v48 == 1 )
    {
LABEL_60:
      v54 = v50[53];
      RIMLockExclusive(v54 + 104);
      if ( (v50[36] & 4) == 0 )
        RIMIDERemoveInjectionDevice(v50);
      *(_QWORD *)(v54 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v54 + 104, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(v50);
  }
  UserSessionSwitchLeaveCrit(v56, v55, v57, v58);
  return v48;
}
