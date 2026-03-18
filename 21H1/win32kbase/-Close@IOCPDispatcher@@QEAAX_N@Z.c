/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0044D30
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C004D574 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01B49C0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C004506C (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C00450D8 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ProtectHandle @ 0x1C006FD98 (ProtectHandle.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(IOCPDispatcher *this, char a2)
{
  HANDLE *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  int v8; // edx
  _UNKNOWN **v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct tagKERNELHANDLETABLEENTRY *v34; // rsi
  HANDLE v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  int v44; // [rsp+28h] [rbp-D8h]
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  IOCPDispatcher *v50; // [rsp+48h] [rbp-B8h]
  _OWORD v51[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h]
  unsigned __int8 v53; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+90h] [rbp-70h] BYREF
  int *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C0h] [rbp-40h] BYREF
  int *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+F0h] [rbp-10h] BYREF
  int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]

  v50 = this;
  v3 = (HANDLE *)this;
  if ( *((_QWORD *)this + 343) )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects(this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)v3);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5);
      v45 = 0;
      memset(v51, 0, sizeof(v51));
      while ( 1 )
      {
        v6 = v3[343];
        LOBYTE(v44) = 0;
        v49 = -200000LL;
        v7 = ((__int64 (__fastcall *)(HANDLE, _OWORD *, __int64, int *, __int64 *, int))ZwRemoveIoCompletionEx)(
               v6,
               v51,
               1LL,
               &v45,
               &v49,
               v44);
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_6;
      }
      v9 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v8,
          3,
          22,
          (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
          v7);
      }
LABEL_6:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v53 = 1;
        v36 = PsGetCurrentThreadWin32Thread(v10);
        v52 = v36;
        if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v37, v38) )
            {
              v46 = v53;
              v57 = 4LL;
              v56 = &v46;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v55);
            }
          }
        }
      }
      else
      {
        v52 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v52 && (*(_DWORD *)(v52 + 48) || *(int *)(v52 + 24) > 0) )
      {
        *(_DWORD *)(v52 + 44) = 1;
        *(GUID *)(v52 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v19) )
          {
            v47 = v53;
            v60 = 4LL;
            v59 = &v47;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v58);
            v39 = (unsigned int)dword_1C024C960;
          }
          if ( (unsigned int)v39 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v39, v40) )
          {
            v48 = v53;
            v63 = 4LL;
            v62 = &v48;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v61);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v22 = PsGetCurrentProcess(v21, v20),
            ProcessSessionId = PsGetProcessSessionIdEx(v22),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v26 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v26 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
        if ( v26
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v26 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v26 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v34 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v34 + 2);
              v41 = *(_QWORD *)v34;
              *((_QWORD *)v34 + 2) = 0LL;
              if ( !*(_DWORD *)(v41 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
              v43 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v43 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v42);
              ExReleaseResourceAndLeaveCriticalRegion(*v43);
              HMUnlockObject(*(_QWORD *)v34);
              tagDomLock::LockExclusive((tagDomLock *)v43);
              v34 = gpducstulHead;
            }
            while ( gpducstulHead );
            v3 = (HANDLE *)v50;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
    v35 = v3[344];
    if ( v35 )
    {
      ProtectHandle(v35, v4, 0LL, 0LL);
      ObCloseHandle(v3[344], 1);
      v3[344] = 0LL;
    }
    ZwClose(v3[343]);
    v3[343] = 0LL;
  }
}
