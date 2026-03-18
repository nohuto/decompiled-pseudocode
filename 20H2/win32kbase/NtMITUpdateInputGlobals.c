/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C00B16A0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0065400 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UpconvertTime @ 0x1C00B19A0 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  unsigned int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // rsi
  CInputThread *v45; // rsi
  unsigned int CurrentThreadId; // eax
  int v47; // ebx
  unsigned int v48; // edi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v55; // rax
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // [rsp+30h] [rbp-B1h] BYREF
  int v64; // [rsp+34h] [rbp-ADh] BYREF
  int v65; // [rsp+38h] [rbp-A9h] BYREF
  unsigned int v66; // [rsp+3Ch] [rbp-A5h]
  unsigned int v67; // [rsp+40h] [rbp-A1h]
  __int64 v68; // [rsp+48h] [rbp-99h]
  unsigned __int8 v69; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+68h] [rbp-79h] BYREF
  int *v72; // [rsp+88h] [rbp-59h]
  __int64 v73; // [rsp+90h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+98h] [rbp-49h] BYREF
  int *v75; // [rsp+B8h] [rbp-29h]
  __int64 v76; // [rsp+C0h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+C8h] [rbp-19h] BYREF
  int *v78; // [rsp+E8h] [rbp+7h]
  __int64 v79; // [rsp+F0h] [rbp+Fh]

  v5 = a4;
  v66 = a4;
  v67 = a2;
  v7 = a1;
  v8 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v69 = 1;
    v55 = PsGetCurrentThreadWin32Thread(v9);
    v68 = v55;
    if ( v55 && (*(int *)(v55 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v63 = v69;
        v73 = 4LL;
        v72 = &v63;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v68 && (*(_DWORD *)(v68 + 48) || *(int *)(v68 + 24) > 0) )
  {
    *(_DWORD *)(v68 + 44) = 1;
    *(GUID *)(v68 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v64 = v69;
        v76 = 4LL;
        v75 = &v64;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v74);
        v56 = dword_1C0244A70;
      }
      if ( v56 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v65 = v69;
        v79 = 4LL;
        v78 = &v65;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v77);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v20 = PsGetCurrentProcess(v19, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(v20),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( v24
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v24 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v24 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v28, v29, v30);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34, v35);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v44 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v44[2];
          v57 = *v44;
          v44[2] = 0LL;
          if ( !*(_DWORD *)(v57 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
          v60 = (PERESOURCE *)GetDomainLockRef(12LL, v40, v42, v43);
          if ( v60 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
          ExReleaseResourceAndLeaveCriticalRegion(*v60);
          HMUnlockObject(*v44);
          tagDomLock::LockExclusive(v60);
          v44 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v5 = v66;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v45 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v45, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v47 = *((_DWORD *)v45 + 10);
  v48 = CurrentThreadId;
  ExReleasePushLockSharedEx(v45, 0LL);
  KeLeaveCriticalRegion();
  if ( v48 == v47 )
  {
    v53 = UpconvertTime(v7);
    CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v53, v67, a3, v5, a5);
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v50, v49, v51, v52);
  return v8;
}
