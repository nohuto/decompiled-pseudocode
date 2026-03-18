/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00B2AA0
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00BB124 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01AC8E0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ProtectHandle @ 0x1C0036EB4 (ProtectHandle.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C00B2DDC (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C00B2E48 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(IOCPDispatcher *this, char a2)
{
  HANDLE *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE v8; // rcx
  int v9; // eax
  int v10; // edx
  _UNKNOWN **v11; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rsi
  HANDLE v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  PERESOURCE *v53; // rdi
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // [rsp+28h] [rbp-D8h]
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  int v58; // [rsp+34h] [rbp-CCh] BYREF
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  IOCPDispatcher *v62; // [rsp+48h] [rbp-B8h]
  _OWORD v63[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  unsigned __int8 v65; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+90h] [rbp-70h] BYREF
  int *v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+C0h] [rbp-40h] BYREF
  int *v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+F0h] [rbp-10h] BYREF
  int *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]

  v62 = this;
  v3 = (HANDLE *)this;
  if ( *((_QWORD *)this + 343) )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects(this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)v3);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
      v57 = 0;
      memset(v63, 0, sizeof(v63));
      while ( 1 )
      {
        v8 = v3[343];
        LOBYTE(v56) = 0;
        v61 = -200000LL;
        v9 = ((__int64 (__fastcall *)(HANDLE, _OWORD *, __int64, int *, __int64 *, int))ZwRemoveIoCompletionEx)(
               v8,
               v63,
               1LL,
               &v57,
               &v61,
               v56);
        if ( v9 < 0 )
          break;
        if ( v9 == 258 )
          goto LABEL_6;
      }
      v11 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v10,
          3,
          22,
          (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
          v9);
      }
LABEL_6:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v65 = 1;
        v48 = PsGetCurrentThreadWin32Thread(v12);
        v64 = v48;
        if ( v48 && (*(int *)(v48 + 24) > 0 || *(_DWORD *)(v64 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v58 = v65;
            v69 = 4LL;
            v68 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &ActivityId,
              0LL,
              3u,
              &v67);
          }
        }
      }
      else
      {
        v64 = 0LL;
      }
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v15 )
          v14 = *v15;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v14 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v64 && (*(_DWORD *)(v64 + 48) || *(int *)(v64 + 24) > 0) )
      {
        *(_DWORD *)(v64 + 44) = 1;
        *(GUID *)(v64 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v59 = v65;
            v72 = 4LL;
            v71 = &v59;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &ActivityId,
              0LL,
              3u,
              &v70);
            v49 = dword_1C0244A70;
          }
          if ( v49 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v60 = v65;
            v75 = 4LL;
            v74 = &v60;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &ActivityId,
              0LL,
              3u,
              &v73);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v14;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v23 = PsGetCurrentProcess(v22, v21),
            ProcessSessionId = PsGetProcessSessionIdEx(v23),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v27 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v27 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
        if ( v27
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v27 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v27 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v4, v31, v32);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36, v37);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v46 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v46[2];
              v50 = *v46;
              v46[2] = 0LL;
              if ( !*(_DWORD *)(v50 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
              v53 = (PERESOURCE *)GetDomainLockRef(12LL, v42, v44, v45);
              if ( v53 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v54, v55);
              ExReleaseResourceAndLeaveCriticalRegion(*v53);
              HMUnlockObject(*v46);
              tagDomLock::LockExclusive(v53);
              v46 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v3 = (HANDLE *)v62;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
    v47 = v3[344];
    if ( v47 )
    {
      ProtectHandle(v47, v4, 0LL, 0);
      ObCloseHandle(v3[344], 1);
      v3[344] = 0LL;
    }
    ZwClose(v3[343]);
    v3[343] = 0LL;
  }
}
