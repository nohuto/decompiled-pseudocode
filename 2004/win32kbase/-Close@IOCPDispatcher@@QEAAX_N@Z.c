/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00528A0
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C005AFE4 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01AEC60 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C0052BDC (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C0052C48 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ProtectHandle @ 0x1C0076AA0 (ProtectHandle.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(IOCPDispatcher *this, char a2)
{
  HANDLE *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  int v8; // edx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
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
  struct tagKERNELHANDLETABLEENTRY *v41; // rsi
  HANDLE v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+30h] [rbp-D0h] BYREF
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  int v57; // [rsp+38h] [rbp-C8h] BYREF
  int v58; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  IOCPDispatcher *v60; // [rsp+48h] [rbp-B8h]
  _OWORD v61[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h]
  unsigned __int8 v63; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+90h] [rbp-70h] BYREF
  int *v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+C0h] [rbp-40h] BYREF
  int *v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+F0h] [rbp-10h] BYREF
  int *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]

  v60 = this;
  v3 = (HANDLE *)this;
  if ( *((_QWORD *)this + 343) )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects(this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)v3);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5);
      v55 = 0;
      memset(v61, 0, sizeof(v61));
      while ( 1 )
      {
        v6 = v3[343];
        LOBYTE(v54) = 0;
        v59 = -200000LL;
        v7 = ((__int64 (__fastcall *)(HANDLE, _OWORD *, __int64, int *, __int64 *, int))ZwRemoveIoCompletionEx)(
               v6,
               v61,
               1LL,
               &v55,
               &v59,
               v54);
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_6;
      }
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
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v63 = 1;
        v43 = PsGetCurrentThreadWin32Thread();
        v62 = v43;
        if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v62 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v44, v45) )
            {
              v56 = v63;
              v67 = 4LL;
              v66 = &v56;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E87,
                &ActivityId,
                0LL,
                3u,
                &v65);
            }
          }
        }
      }
      else
      {
        v62 = 0LL;
      }
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v11 )
          v10 = *v11;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v10 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v62 && (*(_DWORD *)(v62 + 48) || *(int *)(v62 + 24) > 0) )
      {
        *(_DWORD *)(v62 + 44) = 1;
        *(GUID *)(v62 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v17) )
          {
            v57 = v63;
            v70 = 4LL;
            v69 = &v57;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v68);
            v46 = (unsigned int)dword_1C0246A70;
          }
          if ( (unsigned int)v46 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v46, v47) )
          {
            v58 = v63;
            v73 = 4LL;
            v72 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v71);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v10;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v20 = PsGetCurrentProcess(v19, v18),
            ProcessSessionId = PsGetProcessSessionIdEx(v20),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v24 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v24 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
        if ( v24
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v24 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v24 + 1224) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v41 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v41 + 2);
              v48 = *(_QWORD *)v41;
              *((_QWORD *)v41 + 2) = 0LL;
              if ( !*(_DWORD *)(v48 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
              v51 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v51 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
              ExReleaseResourceAndLeaveCriticalRegion(*v51);
              HMUnlockObject(*(_QWORD *)v41);
              tagDomLock::LockExclusive((tagDomLock *)v51);
              v41 = gpducstulHead;
            }
            while ( gpducstulHead );
            v3 = (HANDLE *)v60;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
    v42 = v3[344];
    if ( v42 )
    {
      ProtectHandle(v42, v4, 0LL, 0LL);
      ObCloseHandle(v3[344], 1);
      v3[344] = 0LL;
    }
    ZwClose(v3[343]);
    v3[343] = 0LL;
  }
}
