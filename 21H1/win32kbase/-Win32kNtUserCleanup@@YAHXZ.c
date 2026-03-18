/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C000BB40
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     CleanupLogonProcess @ 0x1C000BDC0 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C000BE2C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C000D01C (ApiSetEditionBaseDriverUnloadUninitialize.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagKERNELHANDLETABLEENTRY *v13; // rsi
  __int64 v14; // rax
  PERESOURCE *v15; // rdi
  int v16; // ebx
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // rcx
  int v34; // [rsp+38h] [rbp-89h] BYREF
  int v35; // [rsp+3Ch] [rbp-85h] BYREF
  int v36; // [rsp+40h] [rbp-81h] BYREF
  __int64 v37; // [rsp+48h] [rbp-79h]
  unsigned __int8 v38; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+68h] [rbp-59h] BYREF
  int *v41; // [rsp+88h] [rbp-39h]
  __int64 v42; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+98h] [rbp-29h] BYREF
  int *v44; // [rsp+B8h] [rbp-9h]
  __int64 v45; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C8h] [rbp+7h] BYREF
  int *v47; // [rsp+E8h] [rbp+27h]
  __int64 v48; // [rsp+F0h] [rbp+2Fh]

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
      v38 = 1;
      v19 = PsGetCurrentThreadWin32Thread(v1);
      v37 = v19;
      if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v37 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v20, v21) )
          {
            v34 = v38;
            v42 = 4LL;
            v41 = &v34;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024C960,
              (int)&dword_1C02199F7,
              (int)&ActivityId,
              0,
              3u,
              &v40);
          }
        }
      }
    }
    else
    {
      v37 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v37 && (*(_DWORD *)(v37 + 48) || *(int *)(v37 + 24) > 0) )
    {
      *(_DWORD *)(v37 + 44) = 1;
      *(GUID *)(v37 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v10) )
        {
          v35 = v38;
          v45 = 4LL;
          v44 = &v35;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199A0, (int)&ActivityId, 0, 3u, &v43);
          v22 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v22 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v22, v23) )
        {
          v36 = v38;
          v48 = 4LL;
          v47 = &v36;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199CD, (int)&ActivityId, 0, 3u, &v46);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v24 = PsGetCurrentProcess(v12, v11),
          ProcessSessionId = PsGetProcessSessionIdEx(v24),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v28 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v28 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
      if ( v28
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v28 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v28 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v13 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v14 = *(_QWORD *)v13;
          *((_QWORD *)v13 + 2) = 0LL;
          if ( !*(_DWORD *)(v14 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v15 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v15 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          ExReleaseResourceAndLeaveCriticalRegion(*v15);
          HMUnlockObject(*(_QWORD *)v13);
          tagDomLock::LockExclusive((tagDomLock *)v15);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v33);
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  v16 = -1073741637;
  if ( ext_ms_win_moderncore_win32k_base_ntuser_l1 )
    v17 = ext_ms_win_moderncore_win32k_base_ntuser_l1();
  else
    v17 = -1073741637;
  if ( v17 >= 0 && qword_1C02579D8 )
    qword_1C02579D8();
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess();
  if ( qword_1C02579F0 )
    v16 = qword_1C02579F0();
  if ( v16 >= 0 && qword_1C02579F8 )
    qword_1C02579F8();
  return 1LL;
}
