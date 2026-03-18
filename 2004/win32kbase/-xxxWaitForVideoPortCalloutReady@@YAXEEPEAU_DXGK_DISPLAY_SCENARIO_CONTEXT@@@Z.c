/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01207B0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     IsPowerOnGdiSupported @ 0x1C00C8EE0 (IsPowerOnGdiSupported.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C012C3CC (McTemplateK0tt_EtwWriteTransfer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01F8184 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
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
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  char v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh] BYREF
  int v53; // [rsp+48h] [rbp-B8h] BYREF
  int v54; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v57; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+80h] [rbp-80h] BYREF
  int *v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+B0h] [rbp-50h] BYREF
  int *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+E0h] [rbp-20h] BYREF
  int *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]

  v4 = a2;
  v51 = a2;
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
        v57 = 1;
        v11 = PsGetCurrentThreadWin32Thread(v9);
        v56 = v11;
        if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v52 = v57;
            v61 = 4LL;
            v60 = &v52;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId,
              0LL,
              3u,
              &v59);
          }
        }
      }
      else
      {
        v56 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v56 )
        {
          v18 = *(unsigned int *)(v56 + 24);
          if ( *(_DWORD *)(v56 + 48) || (int)v18 > 0 )
          {
            *(_DWORD *)(v56 + 44) = 1;
            *(GUID *)(v56 + 28) = ActivityId;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v53 = v57;
                v64 = 4LL;
                v63 = &v53;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &ActivityId,
                  0LL,
                  3u,
                  &v62);
                v19 = dword_1C0246A70;
              }
              if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v54 = v57;
                v67 = 4LL;
                v66 = &v54;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &ActivityId,
                  0LL,
                  3u,
                  &v65);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v18);
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v20) )
      {
        v22 = PsGetCurrentProcess(a1, v21);
        ProcessSessionId = PsGetProcessSessionIdEx(v22);
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24);
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v27 = 0LL;
      if ( !IsThreadCrossSessionAttached(a1) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v27 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
      if ( v27 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v27 + 480) & 0x1000000) != 0 )
          {
            a1 = *(unsigned int *)(v27 + 1224);
            if ( (a1 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, a2, (__int64)a3, a4);
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
                  v45 = *v44;
                  v44[2] = 0LL;
                  if ( !*(_DWORD *)(v45 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
                  v48 = (PERESOURCE *)GetDomainLockRef(12LL, v40, v42, v43);
                  if ( v48 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v49, v50);
                  ExReleaseResourceAndLeaveCriticalRegion(*v48);
                  HMUnlockObject(*v44);
                  tagDomLock::LockExclusive(v48);
                  v44 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v4 = v51;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    if ( !v4 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    if ( qword_1C0252428 )
      qword_1C0252428(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
