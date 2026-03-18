/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E460
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsPowerOnGdiSupported @ 0x1C00C916C (IsPowerOnGdiSupported.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C012A07C (McTemplateK0tt_EtwWriteTransfer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01F6854 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(
        __int64 a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  char v4; // r15
  char v6; // r14
  ULONG v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
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
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  char v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  int v52; // [rsp+48h] [rbp-B8h] BYREF
  int v53; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v56; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+80h] [rbp-80h] BYREF
  int *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+B0h] [rbp-50h] BYREF
  int *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+E0h] [rbp-20h] BYREF
  int *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]

  v4 = a2;
  v50 = a2;
  *(_OWORD *)Object = 0LL;
  v6 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt_EtwWriteTransfer(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = 0;
      if ( gfMonitorPowerInProgress )
      {
        v7 = 1;
        Object[0] = gpevtMonitorPowerWaiter;
      }
      if ( v6 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v7++;
        Object[a1] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v7 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, (__int64)a3, a4);
      KeWaitForMultipleObjects(v7, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v6 = 0;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v56 = 1;
        v11 = PsGetCurrentThreadWin32Thread(v9);
        v55 = v11;
        if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v55 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v51 = v56;
            v60 = 4LL;
            v59 = &v51;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &ActivityId,
              0LL,
              3u,
              &v58);
          }
        }
      }
      else
      {
        v55 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v55 && (*(_DWORD *)(v55 + 48) || *(int *)(v55 + 24) > 0) )
      {
        *(_DWORD *)(v55 + 44) = 1;
        *(GUID *)(v55 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v52 = v56;
            v63 = 4LL;
            v62 = &v52;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &ActivityId,
              0LL,
              3u,
              &v61);
            v19 = dword_1C0244A70;
          }
          if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v53 = v56;
            v66 = 4LL;
            v65 = &v53;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &ActivityId,
              0LL,
              3u,
              &v64);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v22 = PsGetCurrentProcess(v21, v20);
        ProcessSessionId = PsGetProcessSessionIdEx(v22);
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v26 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v26 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
      if ( v26 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v26 + 488) & 0x1000000) != 0 )
          {
            a1 = *(unsigned int *)(v26 + 1232);
            if ( (a1 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, a2, (__int64)a3, a4);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v43 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v43[2];
                  v44 = *v43;
                  v43[2] = 0LL;
                  if ( !*(_DWORD *)(v44 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
                  v47 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
                  if ( v47 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48, v49);
                  ExReleaseResourceAndLeaveCriticalRegion(*v47);
                  HMUnlockObject(*v43);
                  tagDomLock::LockExclusive(v47);
                  v43 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v4 = v50;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    if ( !v4 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    if ( qword_1C0250428 )
      qword_1C0250428(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
