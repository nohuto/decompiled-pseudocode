/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0084168
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CleanupLogonProcess @ 0x1C00843F0 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C008564C (ApiSetEditionBaseDriverUnloadUninitialize.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 Win32kNtUserCleanup(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  PERESOURCE *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  HANDLE v27; // rcx
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // [rsp+38h] [rbp-89h] BYREF
  int v56; // [rsp+3Ch] [rbp-85h] BYREF
  int v57; // [rsp+40h] [rbp-81h] BYREF
  __int64 v58; // [rsp+48h] [rbp-79h]
  unsigned __int8 v59; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+68h] [rbp-59h] BYREF
  int *v62; // [rsp+88h] [rbp-39h]
  __int64 v63; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+98h] [rbp-29h] BYREF
  int *v65; // [rsp+B8h] [rbp-9h]
  __int64 v66; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C8h] [rbp+7h] BYREF
  int *v68; // [rsp+E8h] [rbp+27h]
  __int64 v69; // [rsp+F0h] [rbp+2Fh]

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
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v0);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v59 = 1;
      v29 = PsGetCurrentThreadWin32Thread(v1);
      v58 = v29;
      if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v55 = v59;
          v63 = 4LL;
          v62 = &v55;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId,
            0LL,
            3u,
            &v61);
        }
      }
    }
    else
    {
      v58 = 0LL;
    }
    v3 = 0LL;
    while ( 1 )
    {
      v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v4 )
        v3 = *v4;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v3 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v58 && (*(_DWORD *)(v58 + 48) || *(int *)(v58 + 24) > 0) )
    {
      *(_DWORD *)(v58 + 44) = 1;
      *(GUID *)(v58 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v56 = v59;
          v66 = 4LL;
          v65 = &v56;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId,
            0LL,
            3u,
            &v64);
          v30 = dword_1C0244A70;
        }
        if ( v30 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v57 = v59;
          v69 = 4LL;
          v68 = &v57;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId,
            0LL,
            3u,
            &v67);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v31 = PsGetCurrentProcess(v11, v10),
          ProcessSessionId = PsGetProcessSessionIdEx(v31),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v35 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v35 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36);
      if ( v35
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v35 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v35 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v39, v40, v41);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v16 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v17 = *v16;
          v16[2] = 0LL;
          if ( !*(_DWORD *)(v17 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
          v20 = (PERESOURCE *)GetDomainLockRef(12LL, v12, v14, v15);
          if ( v20 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21, v22);
          ExReleaseResourceAndLeaveCriticalRegion(*v20);
          HMUnlockObject(*v16);
          tagDomLock::LockExclusive(v20);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  v23 = -1073741637;
  if ( ext_ms_win_moderncore_win32k_base_ntuser_l1 )
    v24 = ext_ms_win_moderncore_win32k_base_ntuser_l1();
  else
    v24 = -1073741637;
  if ( v24 >= 0 && qword_1C024FA18 )
    qword_1C024FA18();
  v27 = ghWinstaDirectory;
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess(v27, v25, v26);
  if ( qword_1C024FA30 )
    v23 = qword_1C024FA30();
  if ( v23 >= 0 && qword_1C024FA38 )
    qword_1C024FA38();
  return 1LL;
}
