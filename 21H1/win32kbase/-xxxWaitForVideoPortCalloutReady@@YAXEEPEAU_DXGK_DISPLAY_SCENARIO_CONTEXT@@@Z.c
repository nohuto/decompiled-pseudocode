/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0126740
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     IsPowerOnGdiSupported @ 0x1C00CA13C (IsPowerOnGdiSupported.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C01323BC (McTemplateK0tt_EtwWriteTransfer.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01FDBB4 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v3; // r15
  char v5; // r14
  ULONG v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 v23; // rcx
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
  __int64 *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  char v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v44; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+80h] [rbp-80h] BYREF
  int *v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+B0h] [rbp-50h] BYREF
  int *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+E0h] [rbp-20h] BYREF
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]

  v3 = a2;
  v38 = a2;
  *(_OWORD *)Object = 0LL;
  v5 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt_EtwWriteTransfer(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( gfMonitorPowerInProgress )
      {
        v6 = 1;
        Object[0] = gpevtMonitorPowerWaiter;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v6++;
        Object[a1] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v6 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v44 = 1;
        v10 = PsGetCurrentThreadWin32Thread(v8);
        v43 = v10;
        if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v39 = v44;
            v48 = 4LL;
            v47 = &v39;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
              0LL,
              3u,
              &v46);
          }
        }
      }
      else
      {
        v43 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v43 )
        {
          v17 = *(unsigned int *)(v43 + 24);
          if ( *(_DWORD *)(v43 + 48) || (int)v17 > 0 )
          {
            *(_DWORD *)(v43 + 44) = 1;
            *(GUID *)(v43 + 28) = ActivityId;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v40 = v44;
                v51 = 4LL;
                v50 = &v40;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &ActivityId,
                  0LL,
                  3u,
                  &v49);
                v18 = dword_1C024C960;
              }
              if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v41 = v44;
                v54 = 4LL;
                v53 = &v41;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &ActivityId,
                  0LL,
                  3u,
                  &v52);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v17);
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess(v19) )
      {
        v21 = PsGetCurrentProcess(a1, v20);
        ProcessSessionId = PsGetProcessSessionIdEx(v21);
        CurrentThreadProcess = PsGetCurrentThreadProcess(v23);
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          continue;
      }
      CurrentThread = KeGetCurrentThread();
      v26 = 0LL;
      if ( !IsThreadCrossSessionAttached(a1) )
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
          if ( (*(_DWORD *)(v26 + 480) & 0x1000000) != 0 )
          {
            a1 = *(unsigned int *)(v26 + 1216);
            if ( (a1 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v34 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
                  v35 = *v34;
                  v34[2] = 0LL;
                  if ( !*(_DWORD *)(v35 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
                  v37 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v37 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
                  ExReleaseResourceAndLeaveCriticalRegion(*v37);
                  HMUnlockObject(*v34);
                  tagDomLock::LockExclusive(v37);
                  v34 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v3 = v38;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    if ( !v3 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    if ( qword_1C02583E8 )
      qword_1C02583E8(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
