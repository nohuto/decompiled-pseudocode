/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0020A78
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     CleanupLogonProcess @ 0x1C0020D00 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0020D6C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C0021F5C (ApiSetEditionBaseDriverUnloadUninitialize.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 Win32kNtUserCleanup(void)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  struct tagTHREADINFO **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagKERNELHANDLETABLEENTRY *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // [rsp+38h] [rbp-89h] BYREF
  int v52; // [rsp+3Ch] [rbp-85h] BYREF
  int v53; // [rsp+40h] [rbp-81h] BYREF
  __int64 v54; // [rsp+48h] [rbp-79h]
  unsigned __int8 v55; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+68h] [rbp-59h] BYREF
  int *v58; // [rsp+88h] [rbp-39h]
  __int64 v59; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+98h] [rbp-29h] BYREF
  int *v61; // [rsp+B8h] [rbp-9h]
  __int64 v62; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+C8h] [rbp+7h] BYREF
  int *v64; // [rsp+E8h] [rbp+27h]
  __int64 v65; // [rsp+F0h] [rbp+2Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      10,
      (__int64)&WPP_887fffb207bc3747f0ee19f0a3430899_Traceguids);
  ApiSetEditionBaseDriverUnloadUninitialize();
  if ( gpresUser )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v55 = 1;
      v25 = PsGetCurrentThreadWin32Thread();
      v54 = v25;
      if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v54 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v26, v27) )
          {
            v51 = v55;
            v59 = 4LL;
            v58 = &v51;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0246A70,
              (int)&dword_1C0213E87,
              (int)&ActivityId,
              0,
              3u,
              &v57);
          }
        }
      }
    }
    else
    {
      v54 = 0LL;
    }
    v1 = 0LL;
    while ( 1 )
    {
      v2 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v2 )
        v1 = *v2;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v1 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v54 && (*(_DWORD *)(v54 + 48) || *(int *)(v54 + 24) > 0) )
    {
      *(_DWORD *)(v54 + 44) = 1;
      *(GUID *)(v54 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v8) )
        {
          v52 = v55;
          v62 = 4LL;
          v61 = &v52;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&ActivityId, 0, 3u, &v60);
          v28 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v28 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v28, v29) )
        {
          v53 = v55;
          v65 = 4LL;
          v64 = &v53;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&ActivityId, 0, 3u, &v63);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v1;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v30 = PsGetCurrentProcess(v10, v9),
          ProcessSessionId = PsGetProcessSessionIdEx(v30),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v34 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v34 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36, v35, v37, v38);
      if ( v34
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v34 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v34 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44, v45);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48, v49);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v15 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v16 = *(_QWORD *)v15;
          *((_QWORD *)v15 + 2) = 0LL;
          if ( !*(_DWORD *)(v16 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
          v19 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v19 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20, v21);
          ExReleaseResourceAndLeaveCriticalRegion(*v19);
          HMUnlockObject(*(_QWORD *)v15);
          tagDomLock::LockExclusive((tagDomLock *)v19);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v50);
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  v22 = -1073741637;
  if ( ext_ms_win_moderncore_win32k_base_ntuser_l1 )
    v23 = ext_ms_win_moderncore_win32k_base_ntuser_l1();
  else
    v23 = -1073741637;
  if ( v23 >= 0 && qword_1C0251A18 )
    qword_1C0251A18();
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess();
  if ( qword_1C0251A30 )
    v22 = qword_1C0251A30();
  if ( v22 >= 0 && qword_1C0251A38 )
    qword_1C0251A38();
  return 1LL;
}
